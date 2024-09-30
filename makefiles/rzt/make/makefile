################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

-include makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include rzt_gen/subdir.mk
-include rzt/fsp/src/rm_freertos_port/cr/subdir.mk
-include rzt/fsp/src/rm_freertos_plus_tcp/subdir.mk
-include rzt/fsp/src/r_tsu/subdir.mk
-include rzt/fsp/src/r_spi/subdir.mk
-include rzt/fsp/src/r_shared_memory/subdir.mk
-include rzt/fsp/src/r_sci_uart/subdir.mk
-include rzt/fsp/src/r_poe3/subdir.mk
-include rzt/fsp/src/r_mtu3_three_phase/subdir.mk
-include rzt/fsp/src/r_mtu3/subdir.mk
-include rzt/fsp/src/r_ioport/subdir.mk
-include rzt/fsp/src/r_iic_master/subdir.mk
-include rzt/fsp/src/r_icu_inter_cpu_irq/subdir.mk
-include rzt/fsp/src/r_icu_error/subdir.mk
-include rzt/fsp/src/r_icu/subdir.mk
-include rzt/fsp/src/r_gpt/subdir.mk
-include rzt/fsp/src/r_gmac/subdir.mk
-include rzt/fsp/src/r_ethsw/subdir.mk
-include rzt/fsp/src/r_ether_selector/subdir.mk
-include rzt/fsp/src/r_ether_phy/subdir.mk
-include rzt/fsp/src/r_elc/subdir.mk
-include rzt/fsp/src/r_dsmif/subdir.mk
-include rzt/fsp/src/r_dmac/subdir.mk
-include rzt/fsp/src/r_cgc/subdir.mk
-include rzt/fsp/src/r_canfd/subdir.mk
-include rzt/fsp/src/r_adc/subdir.mk
-include rzt/fsp/src/bsp/mcu/rzt2m/subdir.mk
-include rzt/fsp/src/bsp/mcu/all/cr/subdir.mk
-include rzt/fsp/src/bsp/mcu/all/subdir.mk
-include rzt/fsp/src/bsp/cmsis/Device/RENESAS/Source/cr/subdir.mk
-include rzt/fsp/src/bsp/cmsis/Device/RENESAS/Source/subdir.mk
-include rzt/board/rzt2m_rsk/subdir.mk
-include rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/portable/BufferManagement/subdir.mk
-include rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/subdir.mk
-include rzt/aws/amazon-freertos/freertos_kernel/portable/MemMang/subdir.mk
-include rzt/aws/amazon-freertos/freertos_kernel/subdir.mk
-include rzt/aws/amazon-freertos/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(JMP_DEPS)),)
-include $(JMP_DEPS)
endif
ifneq ($(strip $(FSY_DEPS)),)
-include $(FSY_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(SRC_UPPER_DEPS)),)
-include $(SRC_UPPER_DEPS)
endif
ifneq ($(strip $(P_UPPER_DEPS)),)
-include $(P_UPPER_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(PP_UPPER_DEPS)),)
-include $(PP_UPPER_DEPS)
endif
ifneq ($(strip $(P_DEPS)),)
-include $(P_DEPS)
endif
ifneq ($(strip $(FSY_UPPER_DEPS)),)
-include $(FSY_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(SRC_DEPS)),)
-include $(SRC_DEPS)
endif
ifneq ($(strip $(JMP_UPPER_DEPS)),)
-include $(JMP_UPPER_DEPS)
endif
ifneq ($(strip $(PP_DEPS)),)
-include $(PP_DEPS)
endif
ifneq ($(strip $(SX_DEPS)),)
-include $(SX_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(SX_UPPER_DEPS)),)
-include $(SX_UPPER_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_FLASH += \
uC_2024.srec \

SECONDARY_SIZE += \
uC_2024.siz \


# All Target
all: uC_2024.elf secondary-outputs

# Tool invocations
uC_2024.elf: $(OBJS) $(USER_OBJS) $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS) $(LINKER_SCRIPT)
	$(file > uC_2024.elf.in,-mcpu=cortex-r52 -mthumb -mfloat-abi=hard -mfpu=neon-fp-armv8 -fdiagnostics-parseable-fixits -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -Wnull-dereference -g -gdwarf-4 -o "uC_2024.elf" -Wl,--start-group $(OBJS) $(USER_OBJS) -Wl,--end-group -T "fsp_ram_execution.ld" -L"../script" -Wl,--start-group  -Wl,--end-group -nostartfiles -Xlinker --gc-sections -Wl,-Map,"uC_2024.map" -Wl,-esystem_init --specs=rdimon.specs)
	@echo Building target: $@ && arm-none-eabi-gcc @"uC_2024.elf.in"
uC_2024.srec: uC_2024.elf
	arm-none-eabi-objcopy -O srec "uC_2024.elf"  "uC_2024.srec"
uC_2024.siz: uC_2024.elf
	arm-none-eabi-size --format=berkeley "uC_2024.elf"
# Other Targets
clean:
	-$(file > clean_file.tmp,  $(JMP_DEPS)  $(FSY_DEPS)  $(C_UPPER_DEPS)  $(SECONDARY_SIZE)  $(SRC_UPPER_DEPS)  $(P_UPPER_DEPS)  $(S_DEPS)  $(LST)  $(PP_UPPER_DEPS)  $(P_DEPS)  $(FSY_UPPER_DEPS)  $(C_DEPS)  $(SRC_DEPS)  $(JMP_UPPER_DEPS)  $(PP_DEPS)  $(SX_DEPS)  $(ASM_UPPER_DEPS)  $(SX_UPPER_DEPS)  $(OBJS)  $(SECONDARY_FLASH)  $(ASM_DEPS)  $(S_UPPER_DEPS)  $(MAP) )
	-@ xargs -P 2 -s 32000 -t -a clean_file.tmp $(RM)
	-@$(RM) clean_file.tmp
	-$(RM)  uC_2024.elf
	-@echo ' '

secondary-outputs: $(SECONDARY_FLASH) $(SECONDARY_SIZE)

.PHONY: all clean dependents 

-include ../makefile.targets
