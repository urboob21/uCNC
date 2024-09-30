################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../rzt/aws/amazon-freertos/freertos_kernel/event_groups.c \
../rzt/aws/amazon-freertos/freertos_kernel/list.c \
../rzt/aws/amazon-freertos/freertos_kernel/queue.c \
../rzt/aws/amazon-freertos/freertos_kernel/stream_buffer.c \
../rzt/aws/amazon-freertos/freertos_kernel/tasks.c \
../rzt/aws/amazon-freertos/freertos_kernel/timers.c 

LST += \
event_groups.lst \
list.lst \
queue.lst \
stream_buffer.lst \
tasks.lst \
timers.lst 

C_DEPS += \
./rzt/aws/amazon-freertos/freertos_kernel/event_groups.d \
./rzt/aws/amazon-freertos/freertos_kernel/list.d \
./rzt/aws/amazon-freertos/freertos_kernel/queue.d \
./rzt/aws/amazon-freertos/freertos_kernel/stream_buffer.d \
./rzt/aws/amazon-freertos/freertos_kernel/tasks.d \
./rzt/aws/amazon-freertos/freertos_kernel/timers.d 

OBJS += \
./rzt/aws/amazon-freertos/freertos_kernel/event_groups.o \
./rzt/aws/amazon-freertos/freertos_kernel/list.o \
./rzt/aws/amazon-freertos/freertos_kernel/queue.o \
./rzt/aws/amazon-freertos/freertos_kernel/stream_buffer.o \
./rzt/aws/amazon-freertos/freertos_kernel/tasks.o \
./rzt/aws/amazon-freertos/freertos_kernel/timers.o 

MAP += \
uC_2024.map 


# Each subdirectory must supply rules for building sources it contributes
rzt/aws/amazon-freertos/freertos_kernel/%.o: ../rzt/aws/amazon-freertos/freertos_kernel/%.c
	@echo 'Building file: $<'
	$(file > $@.in,-mcpu=cortex-r52 -mthumb -mfloat-abi=hard -mfpu=neon-fp-armv8 -fdiagnostics-parseable-fixits -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -Wnull-dereference -g -gdwarf-4 -D_RENESAS_RZT_ -D_RZT_CORE=CR52_0 -D_RZT_ORDINAL=1 -I"../src" -I"." -I"../rzt/fsp/inc" -I"../rzt/fsp/inc/api" -I"../rzt/fsp/inc/instances" -I"../rzt/fsp/src/bsp/mcu/all/cr" -I"../rzt/fsp/src/rm_freertos_port/cr" -I"../rzt/aws/amazon-freertos/freertos_kernel/include" -I"../rzt/arm/CMSIS_5/CMSIS/Core_R/Include" -I"../rzt_gen" -I"../rzt_cfg/fsp_cfg/bsp" -I"../rzt_cfg/fsp_cfg" -I"../rzt_cfg/aws" -I"../rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include" -I"../rzt/fsp/src/rm_freertos_plus_tcp" -std=c99 -Wno-format-truncation -Wno-stringop-overflow --param=min-pagesize=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<")
	@arm-none-eabi-gcc @"$@.in"

