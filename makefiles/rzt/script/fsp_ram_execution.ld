/*
                  Linker File for Renesas RZ/T2 FSP
*/

INCLUDE memory_regions.ld

/* The memory information for each device is done in memory regions file.
 * The starting address and length of memory not defined in memory regions file are defined as 0. */

ATCM_PRV_START = DEFINED(ATCM_START) ? ATCM_START : 0;
ATCM_PRV_LENGTH = DEFINED(ATCM_LENGTH) ? ATCM_LENGTH : 0;
BTCM_PRV_START = DEFINED(BTCM_START) ? BTCM_START : 0;
BTCM_PRV_LENGTH = DEFINED(BTCM_LENGTH) ? BTCM_LENGTH : 0;
SYSTEM_RAM_PRV_START = DEFINED(SYSTEM_RAM_START) ? SYSTEM_RAM_START : 0;
SYSTEM_RAM_PRV_LENGTH = DEFINED(SYSTEM_RAM_LENGTH) ? SYSTEM_RAM_LENGTH : 0;
SYSTEM_RAM_MIRROR_PRV_START = DEFINED(SYSTEM_RAM_MIRROR_START) ? SYSTEM_RAM_MIRROR_START : 0;
SYSTEM_RAM_MIRROR_PRV_LENGTH = DEFINED(SYSTEM_RAM_MIRROR_LENGTH) ? SYSTEM_RAM_MIRROR_LENGTH : 0;
xSPI0_CS0_SPACE_MIRROR_PRV_START = DEFINED(xSPI0_CS0_SPACE_MIRROR_START) ? xSPI0_CS0_SPACE_MIRROR_START : 0;
xSPI0_CS0_SPACE_MIRROR_PRV_LENGTH = DEFINED(xSPI0_CS0_SPACE_MIRROR_LENGTH) ? xSPI0_CS0_SPACE_MIRROR_LENGTH : 0;
xSPI0_CS1_SPACE_MIRROR_PRV_START = DEFINED(xSPI0_CS1_SPACE_MIRROR_START) ? xSPI0_CS1_SPACE_MIRROR_START : 0;
xSPI0_CS1_SPACE_MIRROR_PRV_LENGTH = DEFINED(xSPI0_CS1_SPACE_MIRROR_LENGTH) ? xSPI0_CS1_SPACE_MIRROR_LENGTH : 0;
xSPI1_CS0_SPACE_MIRROR_PRV_START = DEFINED(xSPI1_CS0_SPACE_MIRROR_START) ? xSPI1_CS0_SPACE_MIRROR_START : 0;
xSPI1_CS0_SPACE_MIRROR_PRV_LENGTH = DEFINED(xSPI1_CS0_SPACE_MIRROR_LENGTH) ? xSPI1_CS0_SPACE_MIRROR_LENGTH : 0;
xSPI1_CS1_SPACE_MIRROR_PRV_START = DEFINED(xSPI1_CS1_SPACE_MIRROR_START) ? xSPI1_CS1_SPACE_MIRROR_START : 0;
xSPI1_CS1_SPACE_MIRROR_PRV_LENGTH = DEFINED(xSPI1_CS1_SPACE_MIRROR_LENGTH) ? xSPI1_CS1_SPACE_MIRROR_LENGTH : 0;
CS0_SPACE_MIRROR_PRV_START = DEFINED(CS0_SPACE_MIRROR_START) ? CS0_SPACE_MIRROR_START : 0;
CS0_SPACE_MIRROR_PRV_LENGTH = DEFINED(CS0_SPACE_MIRROR_LENGTH) ? CS0_SPACE_MIRROR_LENGTH : 0;
CS2_SPACE_MIRROR_PRV_START = DEFINED(CS2_SPACE_MIRROR_START) ? CS2_SPACE_MIRROR_START : 0;
CS2_SPACE_MIRROR_PRV_LENGTH = DEFINED(CS2_SPACE_MIRROR_LENGTH) ? CS2_SPACE_MIRROR_LENGTH : 0;
CS3_SPACE_MIRROR_PRV_START = DEFINED(CS3_SPACE_MIRROR_START) ? CS3_SPACE_MIRROR_START : 0;
CS3_SPACE_MIRROR_PRV_LENGTH = DEFINED(CS3_SPACE_MIRROR_LENGTH) ? CS3_SPACE_MIRROR_LENGTH : 0;
CS5_SPACE_MIRROR_PRV_START = DEFINED(CS5_SPACE_MIRROR_START) ? CS5_SPACE_MIRROR_START : 0;
CS5_SPACE_MIRROR_PRV_LENGTH = DEFINED(CS5_SPACE_MIRROR_LENGTH) ? CS5_SPACE_MIRROR_LENGTH : 0;
xSPI0_CS0_SPACE_PRV_START = DEFINED(xSPI0_CS0_SPACE_START) ? xSPI0_CS0_SPACE_START : 0;
xSPI0_CS0_SPACE_PRV_LENGTH = DEFINED(xSPI0_CS0_SPACE_LENGTH) ? xSPI0_CS0_SPACE_LENGTH : 0;
xSPI0_CS1_SPACE_PRV_START = DEFINED(xSPI0_CS1_SPACE_START) ? xSPI0_CS1_SPACE_START : 0;
xSPI0_CS1_SPACE_PRV_LENGTH = DEFINED(xSPI0_CS1_SPACE_LENGTH) ? xSPI0_CS1_SPACE_LENGTH : 0;
xSPI1_CS0_SPACE_PRV_START = DEFINED(xSPI1_CS0_SPACE_START) ? xSPI1_CS0_SPACE_START : 0;
xSPI1_CS0_SPACE_PRV_LENGTH = DEFINED(xSPI1_CS0_SPACE_LENGTH) ? xSPI1_CS0_SPACE_LENGTH : 0;
xSPI1_CS1_SPACE_PRV_START = DEFINED(xSPI1_CS1_SPACE_START) ? xSPI1_CS1_SPACE_START : 0;
xSPI1_CS1_SPACE_PRV_LENGTH = DEFINED(xSPI1_CS1_SPACE_LENGTH) ? xSPI1_CS1_SPACE_LENGTH : 0;
CS0_SPACE_PRV_START = DEFINED(CS0_SPACE_START) ? CS0_SPACE_START : 0;
CS0_SPACE_PRV_LENGTH = DEFINED(CS0_SPACE_LENGTH) ? CS0_SPACE_LENGTH : 0;
CS2_SPACE_PRV_START = DEFINED(CS2_SPACE_START) ? CS2_SPACE_START : 0;
CS2_SPACE_PRV_LENGTH = DEFINED(CS2_SPACE_LENGTH) ? CS2_SPACE_LENGTH : 0;
CS3_SPACE_PRV_START = DEFINED(CS3_SPACE_START) ? CS3_SPACE_START : 0;
CS3_SPACE_PRV_LENGTH = DEFINED(CS3_SPACE_LENGTH) ? CS3_SPACE_LENGTH : 0;
CS5_SPACE_PRV_START = DEFINED(CS5_SPACE_START) ? CS5_SPACE_START : 0;
CS5_SPACE_PRV_LENGTH = DEFINED(CS5_SPACE_LENGTH) ? CS5_SPACE_LENGTH : 0;

LOADER_TEXT_ADDRESS        = DEFINED(CR52_0) ? 0x00102000 : 0x10010000;
INTVEC_ADDRESS             = DEFINED(CR52_0) ? 0x00000000 : 0x10000000;
TEXT_ADDRESS               = DEFINED(CR52_0) ? 0x00000100 : 0x10020000;
NONCACHE_BUFFER_OFFSET     = DEFINED(CR52_0) ? 0x00040000 : 0x00020000;
DMAC_LINK_MODE_OFFSET      = DEFINED(CR52_0) ? 0x00068000 : 0x00064000;
DATA_NONCACHE_OFFSET       = DEFINED(CR52_0) ? 0x00070000 : 0x0006C000;
RAM_START                  = DEFINED(CR52_0) ? ATCM_PRV_START : SYSTEM_RAM_PRV_START;
RAM_LENGTH                 = DEFINED(CR52_0) ? ATCM_PRV_LENGTH : SYSTEM_RAM_PRV_LENGTH;
LOADER_START               = DEFINED(CR52_0) ? BTCM_PRV_START : SYSTEM_RAM_PRV_START;
LOADER_LENGTH              = DEFINED(CR52_0) ? BTCM_PRV_LENGTH : SYSTEM_RAM_PRV_LENGTH;

/* Define starting addresses and length for data_noncache, DMAC link mode data, CPU-shared non-cache, and CPU-specific non-cache areas. */
DATA_NONCACHE_START = DEFINED(SYSTEM_RAM_MIRROR_START) ? SYSTEM_RAM_MIRROR_START + SYSTEM_RAM_MIRROR_LENGTH - DATA_NONCACHE_OFFSET : 0;
DATA_NONCACHE_LENGTH = DEFINED(SYSTEM_RAM_MIRROR_LENGTH) ? 0x00004000 : 0;
DMAC_LINK_MODE_START = DEFINED(SYSTEM_RAM_MIRROR_START) ? SYSTEM_RAM_MIRROR_START + SYSTEM_RAM_MIRROR_LENGTH - DMAC_LINK_MODE_OFFSET : 0;
DMAC_LINK_MODE_LENGTH = DEFINED(SYSTEM_RAM_MIRROR_LENGTH) ? 0x00004000 : 0;
SHARED_NONCACHE_BUFFER_START = DEFINED(SYSTEM_RAM_MIRROR_START) ? SYSTEM_RAM_MIRROR_START + SYSTEM_RAM_MIRROR_LENGTH - 0x00060000 : 0;
SHARED_NONCACHE_BUFFER_LENGTH = DEFINED(SYSTEM_RAM_MIRROR_LENGTH) ? 0x00020000 : 0;
NONCACHE_BUFFER_START = DEFINED(SYSTEM_RAM_MIRROR_START) ? SYSTEM_RAM_MIRROR_START + SYSTEM_RAM_MIRROR_LENGTH - NONCACHE_BUFFER_OFFSET : 0;
NONCACHE_BUFFER_LENGTH = DEFINED(SYSTEM_RAM_MIRROR_LENGTH) ? 0x00020000 : 0;

MEMORY
{
    ATCM : ORIGIN = ATCM_PRV_START, LENGTH = ATCM_PRV_LENGTH
    BTCM : ORIGIN = BTCM_PRV_START, LENGTH = BTCM_PRV_LENGTH
    SYSTEM_RAM : ORIGIN = SYSTEM_RAM_PRV_START, LENGTH = SYSTEM_RAM_PRV_LENGTH
    SYSTEM_RAM_MIRROR : ORIGIN = SYSTEM_RAM_MIRROR_PRV_START, LENGTH = SYSTEM_RAM_MIRROR_PRV_LENGTH
    xSPI0_CS0_SPACE_MIRROR : ORIGIN = xSPI0_CS0_SPACE_MIRROR_PRV_START, LENGTH = xSPI0_CS0_SPACE_MIRROR_PRV_LENGTH
    xSPI0_CS1_SPACE_MIRROR : ORIGIN = xSPI0_CS1_SPACE_MIRROR_PRV_START, LENGTH = xSPI0_CS1_SPACE_MIRROR_PRV_LENGTH
    xSPI1_CS0_SPACE_MIRROR : ORIGIN = xSPI1_CS0_SPACE_MIRROR_PRV_START, LENGTH = xSPI1_CS0_SPACE_MIRROR_PRV_LENGTH
    xSPI1_CS1_SPACE_MIRROR : ORIGIN = xSPI1_CS1_SPACE_MIRROR_PRV_START, LENGTH = xSPI1_CS1_SPACE_MIRROR_PRV_LENGTH
    CS0_SPACE_MIRROR : ORIGIN = CS0_SPACE_MIRROR_PRV_START, LENGTH = CS0_SPACE_MIRROR_PRV_LENGTH
    CS2_SPACE_MIRROR : ORIGIN = CS2_SPACE_MIRROR_PRV_START, LENGTH = CS2_SPACE_MIRROR_PRV_LENGTH
    CS3_SPACE_MIRROR : ORIGIN = CS3_SPACE_MIRROR_PRV_START, LENGTH = CS3_SPACE_MIRROR_PRV_LENGTH
    CS5_SPACE_MIRROR : ORIGIN = CS5_SPACE_MIRROR_PRV_START, LENGTH = CS5_SPACE_MIRROR_PRV_LENGTH
    xSPI0_CS0_SPACE : ORIGIN = xSPI0_CS0_SPACE_PRV_START, LENGTH = xSPI0_CS0_SPACE_PRV_LENGTH
    xSPI0_CS1_SPACE : ORIGIN = xSPI0_CS1_SPACE_PRV_START, LENGTH = xSPI0_CS1_SPACE_PRV_LENGTH
    xSPI1_CS0_SPACE : ORIGIN = xSPI1_CS0_SPACE_PRV_START, LENGTH = xSPI1_CS0_SPACE_PRV_LENGTH
    xSPI1_CS1_SPACE : ORIGIN = xSPI1_CS1_SPACE_PRV_START, LENGTH = xSPI1_CS1_SPACE_PRV_LENGTH
    CS0_SPACE : ORIGIN = CS0_SPACE_PRV_START, LENGTH = CS0_SPACE_PRV_LENGTH
    CS2_SPACE : ORIGIN = CS2_SPACE_PRV_START, LENGTH = CS2_SPACE_PRV_LENGTH
    CS3_SPACE : ORIGIN = CS3_SPACE_PRV_START, LENGTH = CS3_SPACE_PRV_LENGTH
    CS5_SPACE : ORIGIN = CS5_SPACE_PRV_START, LENGTH = CS5_SPACE_PRV_LENGTH
    RAM_TEXT : ORIGIN = RAM_START, LENGTH = RAM_LENGTH
    RAM_DATA : ORIGIN = RAM_START, LENGTH = RAM_LENGTH
    LOADER_TEXT_STACK : ORIGIN = LOADER_START, LENGTH = LOADER_LENGTH
    LOADER_DATA_STACK : ORIGIN = LOADER_START, LENGTH = LOADER_LENGTH
    DATA_NONCACHE : ORIGIN = DATA_NONCACHE_START, LENGTH = DATA_NONCACHE_LENGTH
    DMAC_LINK_MODE : ORIGIN = DMAC_LINK_MODE_START, LENGTH = DMAC_LINK_MODE_LENGTH
    SHARED_NONCACHE_BUFFER : ORIGIN = SHARED_NONCACHE_BUFFER_START, LENGTH = SHARED_NONCACHE_BUFFER_LENGTH
    NONCACHE_BUFFER : ORIGIN = NONCACHE_BUFFER_START, LENGTH = NONCACHE_BUFFER_LENGTH
}

SECTIONS
{
    .loader_text LOADER_TEXT_ADDRESS : AT (LOADER_TEXT_ADDRESS)
    {
        _loader_text_start = .;
        *(.loader_text)
        */fsp/src/bsp/cmsis/Device/RENESAS/Source/*.o(.text*)
        */fsp/src/bsp/mcu/all/*/bsp_irq_core.o(.text*)
        */fsp/src/bsp/mcu/all/bsp_clocks.o(.text*)
        */fsp/src/bsp/mcu/all/bsp_irq.o(.text*)
        */fsp/src/bsp/mcu/all/bsp_semaphore.o(.text*)
        */fsp/src/bsp/mcu/all/bsp_register_protection.o(.text*)
        */fsp/src/bsp/mcu/all/bsp_cache.o(.text*)
        */fsp/src/r_ioport/r_ioport.o(.text*)
        KEEP(*(.warm_start))
        _loader_text_end = .;
    } > LOADER_TEXT_STACK
    .loader_data _loader_text_end :
    {
        */fsp/src/bsp/cmsis/Device/RENESAS/Source/*.o(.data*)
        */fsp/src/bsp/cmsis/Device/RENESAS/Source/*/system_core.o(.rodata*)
        */fsp/src/bsp/mcu/all/*/bsp_irq_core.o(.data*)
        */fsp/src/bsp/mcu/all/bsp_clocks.o(.data*)
        */fsp/src/bsp/mcu/all/bsp_irq.o(.data*)
        */fsp/src/bsp/mcu/all/bsp_semaphore.o(.data*)
        */fsp/src/bsp/mcu/all/bsp_register_protection.o(.data*)
        */fsp/src/bsp/mcu/all/bsp_cache.o(.data*)
        */fsp/src/r_ioport/r_ioport.o(.data*)
        . = ALIGN(4);
        __loader_bss_start = .;
        */fsp/src/bsp/cmsis/Device/RENESAS/Source/*.o(.bss*)
        */fsp/src/bsp/mcu/all/*/bsp_irq_core.o(.bss*)
        */fsp/src/bsp/mcu/all/bsp_clocks.o(.bss*)
        */fsp/src/bsp/mcu/all/bsp_irq.o(.bss*)
        */fsp/src/bsp/mcu/all/bsp_semaphore.o(.bss*)
        */fsp/src/bsp/mcu/all/bsp_register_protection.o(.bss*)
        */fsp/src/bsp/mcu/all/bsp_cache.o(.bss*)
        */fsp/src/r_ioport/r_ioport.o(.bss*)
        */fsp/src/bsp/cmsis/Device/RENESAS/Source/*.o(COMMON)
        */fsp/src/bsp/mcu/all/*/bsp_irq_core.o(COMMON)
        */fsp/src/bsp/mcu/all/bsp_clocks.o(COMMON)
        */fsp/src/bsp/mcu/all/bsp_irq.o(COMMON)
        */fsp/src/bsp/mcu/all/bsp_semaphore.o(COMMON)
        */fsp/src/bsp/mcu/all/bsp_register_protection.o(.COMMON)
        */fsp/src/bsp/mcu/all/bsp_cache.o(COMMON)
        */fsp/src/r_ioport/r_ioport.o(.COMMON)
        . = ALIGN(4);
        __loader_bss_end = . ;
    } > LOADER_DATA_STACK
    .intvec INTVEC_ADDRESS : AT (INTVEC_ADDRESS)
    {
        _fvector_start = .;
        KEEP(*(.intvec))
        _fvector_end = .;
    } > RAM_TEXT
    .text TEXT_ADDRESS : AT (TEXT_ADDRESS)
    {
        _text_start = .;
        *(.text*)

        KEEP(*(.reset_handler))

        KEEP(*(.init))
        KEEP(*(.fini))

        /* .ctors */
        *crtbegin.o(.ctors)
        *crtbegin?.o(.ctors)
        *(EXCLUDE_FILE(*crtend?.o *crtend.o) .ctors)
        *(SORT(.ctors.*))
        *(.ctors)
        _ctor_end = .;

        /* .dtors */
        *crtbegin.o(.dtors)
        *crtbegin?.o(.dtors)
        *(EXCLUDE_FILE(*crtend?.o *crtend.o) .dtors)
        *(SORT(.dtors.*))
        *(.dtors)
        _dtor_end = .;

        KEEP(*(.eh_frame*))
    } > RAM_TEXT
    .rvectors :
    {
        _rvectors_start = .;
        KEEP(*(.rvectors))
        _rvectors_end = .;
    } > RAM_TEXT
    .ARM.extab :
    {
        *(.ARM.extab* .gnu.linkonce.armextab.*)
    } > RAM_TEXT
    .ARM.exidx :
    {
        __exidx_start = .;
        *(.ARM.exidx* .gnu.linkonce.armexidx.*)
        __exidx_end = .;
        _text_end = .;
    } > RAM_TEXT
    .data _text_end :
    {
        _data_start = .;

        *(vtable)
        *(.data.*)
        *(.data)

        *(.rodata*)
        _erodata = .;

        . = ALIGN(4);
        /* preinit data */
        PROVIDE_HIDDEN (__preinit_array_start = .);
        KEEP(*(.preinit_array))
        PROVIDE_HIDDEN (__preinit_array_end = .);

        . = ALIGN(4);
        /* init data */
        PROVIDE_HIDDEN (__init_array_start = .);
        KEEP(*(SORT(.init_array.*)))
        KEEP(*(.init_array))
        PROVIDE_HIDDEN (__init_array_end = .);

        . = ALIGN(4);
        /* finit data */
        PROVIDE_HIDDEN (__fini_array_start = .);
        KEEP(*(SORT(.fini_array.*)))
        KEEP(*(.fini_array))
        PROVIDE_HIDDEN (__fini_array_end = .);

        KEEP(*(.jcr*))

        . = ALIGN(4);

    } > RAM_DATA
    .got :
    {
        *(.got)
        *(.got.plt)

        /* All data end */
        _data_end = .;
    } > RAM_DATA
    .bss :
    {
        . = ALIGN(4);
        __bss_start__ = .;
        _bss = .;
        *(.bss*)
        *(COMMON)
        . = ALIGN(4);
        __bss_end__ = .;
        _ebss = .;
        _end = .;
    } > RAM_DATA
    .heap (NOLOAD) :
    {
        . = ALIGN(8);
        __HeapBase = .;
        /* Place the STD heap here. */
        KEEP(*(.heap))
        __HeapLimit = .;
    } > RAM_DATA
    .thread_stack (NOLOAD):
    {
        . = ALIGN(8);
        __ThreadStackBase = .;
        /* Place the Thread stacks here. */
        KEEP(*(.stack*))
        __ThreadStackLimit = .;
    } > RAM_DATA
    .sys_stack (NOLOAD) :
    {
        . = ALIGN(8);
        __SysStackBase = .;
        /* Place the sys_stack here. */
        KEEP(*(.sys_stack))
        __SysStackLimit = .;
    } > LOADER_DATA_STACK
    .svc_stack (NOLOAD) :
    {
        . = ALIGN(8);
        __SvcStackBase = .;
        /* Place the svc_stack here. */
        KEEP(*(.svc_stack))
        __SvcStackLimit = .;
    } > LOADER_DATA_STACK
    .irq_stack (NOLOAD) :
    {
        . = ALIGN(8);
        __IrqStackBase = .;
        /* Place the irq_stack here. */
        KEEP(*(.irq_stack))
        __IrqStackLimit = .;
    } > LOADER_DATA_STACK
    .fiq_stack (NOLOAD) :
    {
        . = ALIGN(8);
        __FiqStackBase = .;
        /* Place the fiq_stack here. */
        KEEP(*(.fiq_stack))
        __FiqStackLimit = .;
    } > LOADER_DATA_STACK
    .und_stack (NOLOAD) :
    {
        . = ALIGN(8);
        __UndStackBase = .;
        /* Place the und_stack here. */
        KEEP(*(.und_stack))
        __UndStackLimit = .;
    } > LOADER_DATA_STACK
    .abt_stack (NOLOAD) :
    {
        . = ALIGN(8);
        __AbtStackBase = .;
        /* Place the abt_stack here. */
        KEEP(*(.abt_stack))
        __AbtStackLimit = .;
    } > LOADER_DATA_STACK
    .data_noncache DATA_NONCACHE_START : AT (DATA_NONCACHE_START)
    {
        . = ALIGN(4);
        _data_noncache_start = .;
        KEEP(*(.data_noncache*))
        _data_noncache_end = .;
    } > DATA_NONCACHE
    .dmac_link_mode DMAC_LINK_MODE_START : AT (DMAC_LINK_MODE_START)
    {
        . = ALIGN(4);
        _dmac_link_mode_start = .;
        KEEP(*(.dmac_link_mode*))
        _dmac_link_mode_end = .;
    } > DMAC_LINK_MODE
    .shared_noncache_buffer SHARED_NONCACHE_BUFFER_START : AT (SHARED_NONCACHE_BUFFER_START)
    {
        . = ALIGN(32);
        _sncbuffer_start = .;
        KEEP(*(.shared_noncache_buffer*))
        _sncbuffer_end = .;
    } > SHARED_NONCACHE_BUFFER
    .noncache_buffer NONCACHE_BUFFER_START : AT (NONCACHE_BUFFER_START)
    {
        . = ALIGN(32);
        _ncbuffer_start = .;
        KEEP(*(.noncache_buffer*))
        _ncbuffer_end = .;
    } > NONCACHE_BUFFER
}

__ddsc_SYSTEM_RAM_START = SYSTEM_RAM_PRV_START;
__ddsc_SYSTEM_RAM_END = DEFINED(CR52_0) ? SYSTEM_RAM_PRV_START : __ThreadStackLimit;