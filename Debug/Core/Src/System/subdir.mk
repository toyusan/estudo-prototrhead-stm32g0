################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/System/stm32g0xx_hal_msp.c \
../Core/Src/System/stm32g0xx_it.c \
../Core/Src/System/syscalls.c \
../Core/Src/System/sysmem.c \
../Core/Src/System/system_stm32g0xx.c 

OBJS += \
./Core/Src/System/stm32g0xx_hal_msp.o \
./Core/Src/System/stm32g0xx_it.o \
./Core/Src/System/syscalls.o \
./Core/Src/System/sysmem.o \
./Core/Src/System/system_stm32g0xx.o 

C_DEPS += \
./Core/Src/System/stm32g0xx_hal_msp.d \
./Core/Src/System/stm32g0xx_it.d \
./Core/Src/System/syscalls.d \
./Core/Src/System/sysmem.d \
./Core/Src/System/system_stm32g0xx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/System/%.o Core/Src/System/%.su Core/Src/System/%.cyclo: ../Core/Src/System/%.c Core/Src/System/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G070xx -DSTM32G070 -c -I../Core/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G0xx/Include -I../Drivers/CMSIS/Include -I"D:/Workspace/00. Repositorios/estudo/estudo-prototrhead-stm32g0/Core/Inc/App" -I"D:/Workspace/00. Repositorios/estudo/estudo-prototrhead-stm32g0/Core/Inc/Config" -I"D:/Workspace/00. Repositorios/estudo/estudo-prototrhead-stm32g0/Core/Inc/Drivers" -I"D:/Workspace/00. Repositorios/estudo/estudo-prototrhead-stm32g0/Core/Inc/Misc" -I"D:/Workspace/00. Repositorios/estudo/estudo-prototrhead-stm32g0/Core/Inc/System" -I"D:/Workspace/00. Repositorios/estudo/estudo-prototrhead-stm32g0/Core/Inc/Misc/Protothread" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-System

clean-Core-2f-Src-2f-System:
	-$(RM) ./Core/Src/System/stm32g0xx_hal_msp.cyclo ./Core/Src/System/stm32g0xx_hal_msp.d ./Core/Src/System/stm32g0xx_hal_msp.o ./Core/Src/System/stm32g0xx_hal_msp.su ./Core/Src/System/stm32g0xx_it.cyclo ./Core/Src/System/stm32g0xx_it.d ./Core/Src/System/stm32g0xx_it.o ./Core/Src/System/stm32g0xx_it.su ./Core/Src/System/syscalls.cyclo ./Core/Src/System/syscalls.d ./Core/Src/System/syscalls.o ./Core/Src/System/syscalls.su ./Core/Src/System/sysmem.cyclo ./Core/Src/System/sysmem.d ./Core/Src/System/sysmem.o ./Core/Src/System/sysmem.su ./Core/Src/System/system_stm32g0xx.cyclo ./Core/Src/System/system_stm32g0xx.d ./Core/Src/System/system_stm32g0xx.o ./Core/Src/System/system_stm32g0xx.su

.PHONY: clean-Core-2f-Src-2f-System

