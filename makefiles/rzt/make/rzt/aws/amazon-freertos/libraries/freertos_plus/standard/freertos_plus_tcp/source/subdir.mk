################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_ARP.c \
../rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_DHCP.c \
../rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_DNS.c \
../rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_IP.c \
../rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_Sockets.c \
../rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_Stream_Buffer.c \
../rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_TCP_IP.c \
../rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_TCP_WIN.c \
../rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_UDP_IP.c 

LST += \
FreeRTOS_ARP.lst \
FreeRTOS_DHCP.lst \
FreeRTOS_DNS.lst \
FreeRTOS_IP.lst \
FreeRTOS_Sockets.lst \
FreeRTOS_Stream_Buffer.lst \
FreeRTOS_TCP_IP.lst \
FreeRTOS_TCP_WIN.lst \
FreeRTOS_UDP_IP.lst 

C_DEPS += \
./rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_ARP.d \
./rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_DHCP.d \
./rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_DNS.d \
./rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_IP.d \
./rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_Sockets.d \
./rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_Stream_Buffer.d \
./rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_TCP_IP.d \
./rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_TCP_WIN.d \
./rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_UDP_IP.d 

OBJS += \
./rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_ARP.o \
./rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_DHCP.o \
./rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_DNS.o \
./rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_IP.o \
./rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_Sockets.o \
./rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_Stream_Buffer.o \
./rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_TCP_IP.o \
./rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_TCP_WIN.o \
./rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/FreeRTOS_UDP_IP.o 

MAP += \
uC_2024.map 


# Each subdirectory must supply rules for building sources it contributes
rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/%.o: ../rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/source/%.c
	@echo 'Building file: $<'
	$(file > $@.in,-mcpu=cortex-r52 -mthumb -mfloat-abi=hard -mfpu=neon-fp-armv8 -fdiagnostics-parseable-fixits -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-strict-aliasing -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Wlogical-op -Waggregate-return -Wfloat-equal -Wnull-dereference -g -gdwarf-4 -D_RENESAS_RZT_ -D_RZT_CORE=CR52_0 -D_RZT_ORDINAL=1 -I"../src" -I"." -I"../rzt/fsp/inc" -I"../rzt/fsp/inc/api" -I"../rzt/fsp/inc/instances" -I"../rzt/fsp/src/bsp/mcu/all/cr" -I"../rzt/fsp/src/rm_freertos_port/cr" -I"../rzt/aws/amazon-freertos/freertos_kernel/include" -I"../rzt/arm/CMSIS_5/CMSIS/Core_R/Include" -I"../rzt_gen" -I"../rzt_cfg/fsp_cfg/bsp" -I"../rzt_cfg/fsp_cfg" -I"../rzt_cfg/aws" -I"../rzt/aws/amazon-freertos/libraries/freertos_plus/standard/freertos_plus_tcp/include" -I"../rzt/fsp/src/rm_freertos_plus_tcp" -std=c99 -Wno-format-truncation -Wno-stringop-overflow --param=min-pagesize=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<")
	@arm-none-eabi-gcc @"$@.in"

