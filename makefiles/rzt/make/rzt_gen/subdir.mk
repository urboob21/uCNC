################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../rzt_gen/common_data.c \
../rzt_gen/comms_thread.c \
../rzt_gen/elc_data.c \
../rzt_gen/hal_data.c \
../rzt_gen/main.c \
../rzt_gen/pin_data.c \
../rzt_gen/vector_data.c 

LST += \
common_data.lst \
comms_thread.lst \
elc_data.lst \
hal_data.lst \
main.lst \
pin_data.lst \
vector_data.lst 

C_DEPS += \
./rzt_gen/common_data.d \
./rzt_gen/comms_thread.d \
./rzt_gen/elc_data.d \
./rzt_gen/hal_data.d \
./rzt_gen/main.d \
./rzt_gen/pin_data.d \
./rzt_gen/vector_data.d 

OBJS += \
./rzt_gen/common_data.o \
./rzt_gen/comms_thread.o \
./rzt_gen/elc_data.o \
./rzt_gen/hal_data.o \
./rzt_gen/main.o \
./rzt_gen/pin_data.o \
./rzt_gen/vector_data.o 

MAP += \
uC_2024.map 


# Each subdirectory must supply rules for building sources it contributes
rzt_gen/%.o: ../rzt_gen/%.c
	@echo 'Building file: $<'
	$(file > $@.in,-mcpu=cortex-r52 -mthumb -mfloat-abi=hard -mfpu=neon-fp-armv8 -fdiagnostics-parseable-fixits -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -Wnull-dereference -g -gdwarf-4 -D_RENESAS_RZT_ -D_RZT_CORE=CR52_0 -D_RZT_ORDINAL=1 -I"../src" -I"." -I"../rzt/fsp/inc" -I"../rzt/fsp/inc/api" -I"../rzt/fsp/inc/instances" -I"../rzt/fsp/src/bsp/mcu/all/cr" -I"../rzt/fsp/src/rm_freertos_port/cr" -I"../rzt/aws/amazon-freertos/freertos_kernel/include" -I"../rzt/arm/CMSIS_5/CMSIS/Core_R/Include" -I"../rzt_gen" -I"../rzt_cfg/fsp_cfg/bsp" -I"../rzt_cfg/fsp_cfg" -I"../rzt_cfg/aws" -I"../rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include" -I"../rzt/fsp/src/rm_freertos_plus_tcp" -std=c99 -Wno-format-truncation -Wno-stringop-overflow --param=min-pagesize=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<")
	@arm-none-eabi-gcc @"$@.in"

