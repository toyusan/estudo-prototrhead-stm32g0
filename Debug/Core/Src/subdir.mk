################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/main.c 

OBJS += \
./Core/Src/main.o 

C_DEPS += \
./Core/Src/main.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/%.o Core/Src/%.su Core/Src/%.cyclo: ../Core/Src/%.c Core/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32G070xx -DSTM32G070 -c -I../Core/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc -I../Drivers/STM32G0xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32G0xx/Include -I../Drivers/CMSIS/Include -I"D:/Workspace/00. Repositorios/estudo/estudo-prototrhead-stm32g0/Core/Inc/App" -I"D:/Workspace/00. Repositorios/estudo/estudo-prototrhead-stm32g0/Core/Inc/Config" -I"D:/Workspace/00. Repositorios/estudo/estudo-prototrhead-stm32g0/Core/Inc/Drivers" -I"D:/Workspace/00. Repositorios/estudo/estudo-prototrhead-stm32g0/Core/Inc/Misc" -I"D:/Workspace/00. Repositorios/estudo/estudo-prototrhead-stm32g0/Core/Inc/System" -I"D:/Workspace/00. Repositorios/estudo/estudo-prototrhead-stm32g0/Core/Inc/Misc/Protothread" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-Src

clean-Core-2f-Src:
	-$(RM) ./Core/Src/main.cyclo ./Core/Src/main.d ./Core/Src/main.o ./Core/Src/main.su

.PHONY: clean-Core-2f-Src

