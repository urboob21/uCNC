
// Description: Implements the µCNC HAL for RZT2M.

#include "../../../cnc.h"

volatile bool rzt2m_global_isr_enabled;

/**
 *
 * Initializes the mcu:
 *   1. Configures all IO
 *   2. Configures UART/USB
 *   3. Starts internal clock (RTC)
 **/
static void mcu_rtc_init(void);
static void mcu_usart_init(void);

/**
 * initializes the mcu
 * this function needs to:
 *   - configure all IO pins (digital IO, PWM, Analog, etc...)
 *   - configure all interrupts
 *   - configure uart or usb
 *   - start the internal RTC
 * */
void mcu_init(void)
{
    // Configure
    mcu_io_init();    // The FSP generation almostly done this.
    mcu_usart_init(); // UART init
    mcu_rtc_init();   // RTC init

    mcu_enable_global_isr();
}

void mcu_usart_init(void)
{
#ifdef MCU_HAS_UART
    R_SCI_UART_Open(&g_uart0_ctrl, &g_uart0_cfg);
#endif
}

#ifdef MCU_HAS_UART
#ifndef UART_TX_BUFFER_SIZE
#define UART_TX_BUFFER_SIZE 64
#endif
DECL_BUFFER(uint8_t, uart_rx, RX_BUFFER_SIZE);
DECL_BUFFER(uint8_t, uart_tx, UART_TX_BUFFER_SIZE);

uint8_t mcu_uart_getc(void)
{
    uint8_t c = 0;
    BUFFER_DEQUEUE(uart_rx, &c);
    return c;
}

uint8_t mcu_uart_available(void)
{
    return BUFFER_READ_AVAILABLE(uart_rx);
}

void mcu_uart_clear(void)
{
    BUFFER_CLEAR(uart_rx);
}

void mcu_uart_putc(uint8_t c)
{
    while (BUFFER_FULL(uart_tx))
    {
        mcu_uart_flush();
    }
    BUFFER_ENQUEUE(uart_tx, &c);
}

// TODO: Need to update
void mcu_uart_flush(void)
{
    while (!BUFFER_EMPTY(uart_tx))
    {
        uint8_t tmp[UART_TX_BUFFER_SIZE + 1];
        memset(tmp, 0, sizeof(tmp));
        uint8_t r;
        uint8_t max = UART_TX_BUFFER_SIZE;

        BUFFER_READ(uart_tx, tmp, max, r);
        R_SCI_UART_Write(&g_uart0_ctrl, uart_tx, max);
    }
}

volatile uint32_t g_transfer_complete = 0;
volatile uint32_t g_receive_complete  = 0;

// TODO: Need to update
void user_uart_callback (uart_callback_args_t * p_args)
{
    /* Handle the UART event */
    switch (p_args->event)
    {
        /* Received a character */
        case UART_EVENT_RX_CHAR:
        {
            break;
        }
        /* Receive complete */
        case UART_EVENT_RX_COMPLETE:
        {
            g_receive_complete = 1;
            break;
        }
        /* Transmit complete */
        case UART_EVENT_TX_COMPLETE:
        {
            g_transfer_complete = 1;
            break;
        }
        default:
        {
        }
    }
}

// TODO: Need to update
void uart_write_line(char* send_text)
{
	fsp_err_t err;
	uint32_t text_length = strlen(send_text);
	err = R_SCI_UART_Write(&g_uart0_ctrl, (uint8_t *)send_text, text_length);
	while(!g_transfer_complete);
	g_transfer_complete = 0;
}

// TODO: Need to update
void uart_read_line(char* receive_text)
{
	fsp_err_t err;
	char* p_receive_buffer = receive_text;
	while(1)
	{
		err = R_SCI_UART_Read(&g_uart0_ctrl, (uint8_t*)receive_text, 1);
		while(!g_receive_complete);
		g_receive_complete = 0;
		if(*receive_text == '\r')
		{
			receive_text++;
			*receive_text = '\n';
			break;
		}
		receive_text++;
	}
	receive_text = p_receive_buffer;
}

#endif

void mcu_rtc_init()
{
    // TODO: implement RTC FSP config here
}

void rzt_delay_us(uint16_t delay)
{
    // the units to be used with the software delay function
    const bsp_delay_units_t bsp_delay_units = BSP_DELAY_UNITS_MICROSECONDS;
    R_BSP_SoftwareDelay(delay, bsp_delay_units);
}