################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../rzt/fsp/src/bsp/mcu/all/bsp_cache.c \
../rzt/fsp/src/bsp/mcu/all/bsp_clocks.c \
../rzt/fsp/src/bsp/mcu/all/bsp_common.c \
../rzt/fsp/src/bsp/mcu/all/bsp_delay.c \
../rzt/fsp/src/bsp/mcu/all/bsp_io.c \
../rzt/fsp/src/bsp/mcu/all/bsp_irq.c \
../rzt/fsp/src/bsp/mcu/all/bsp_register_protection.c \
../rzt/fsp/src/bsp/mcu/all/bsp_reset.c \
../rzt/fsp/src/bsp/mcu/all/bsp_sbrk.c \
../rzt/fsp/src/bsp/mcu/all/bsp_semaphore.c 

LST += \
bsp_cache.lst \
bsp_clocks.lst \
bsp_common.lst \
bsp_delay.lst \
bsp_io.lst \
bsp_irq.lst \
bsp_register_protection.lst \
bsp_reset.lst \
bsp_sbrk.lst \
bsp_semaphore.lst 

C_DEPS += \
./rzt/fsp/src/bsp/mcu/all/bsp_cache.d \
./rzt/fsp/src/bsp/mcu/all/bsp_clocks.d \
./rzt/fsp/src/bsp/mcu/all/bsp_common.d \
./rzt/fsp/src/bsp/mcu/all/bsp_delay.d \
./rzt/fsp/src/bsp/mcu/all/bsp_io.d \
./rzt/fsp/src/bsp/mcu/all/bsp_irq.d \
./rzt/fsp/src/bsp/mcu/all/bsp_register_protection.d \
./rzt/fsp/src/bsp/mcu/all/bsp_reset.d \
./rzt/fsp/src/bsp/mcu/all/bsp_sbrk.d \
./rzt/fsp/src/bsp/mcu/all/bsp_semaphore.d 

OBJS += \
./rzt/fsp/src/bsp/mcu/all/bsp_cache.o \
./rzt/fsp/src/bsp/mcu/all/bsp_clocks.o \
./rzt/fsp/src/bsp/mcu/all/bsp_common.o \
./rzt/fsp/src/bsp/mcu/all/bsp_delay.o \
./rzt/fsp/src/bsp/mcu/all/bsp_io.o \
./rzt/fsp/src/bsp/mcu/all/bsp_irq.o \
./rzt/fsp/src/bsp/mcu/all/bsp_register_protection.o \
./rzt/fsp/src/bsp/mcu/all/bsp_reset.o \
./rzt/fsp/src/bsp/mcu/all/bsp_sbrk.o \
./rzt/fsp/src/bsp/mcu/all/bsp_semaphore.o 

MAP += \
uC_2024.map 


# Each subdirectory must supply rules for building sources it contributes
rzt/fsp/src/bsp/mcu/all/%.o: ../rzt/fsp/src/bsp/mcu/all/%.c
	@echo 'Building file: $<'
	$(file > $@.in,-mcpu=cortex-r52 -mthumb -mfloat-abi=hard -mfpu=neon-fp-armv8 -fdiagnostics-parseable-fixits -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -Wnull-dereference -g -gdwarf-4 -D_RENESAS_RZT_ -D_RZT_CORE=CR52_0 -D_RZT_ORDINAL=1 -I"../src" -I"." -I"../rzt/fsp/inc" -I"../rzt/fsp/inc/api" -I"../rzt/fsp/inc/instances" -I"../rzt/fsp/src/bsp/mcu/all/cr" -I"../rzt/fsp/src/rm_freertos_port/cr" -I"../rzt/aws/amazon-freertos/freertos_kernel/include" -I"../rzt/arm/CMSIS_5/CMSIS/Core_R/Include" -I"../rzt_gen" -I"../rzt_cfg/fsp_cfg/bsp" -I"../rzt_cfg/fsp_cfg" -I"../rzt_cfg/aws" -I"../rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include" -I"../rzt/fsp/src/rm_freertos_plus_tcp" -std=c99 -Wno-format-truncation -Wno-stringop-overflow --param=min-pagesize=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<")
	@arm-none-eabi-gcc @"$@.in"

