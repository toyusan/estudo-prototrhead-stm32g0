################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Core/Startup/startup_stm32g070kbtx.s 

OBJS += \
./Core/Startup/startup_stm32g070kbtx.o 

S_DEPS += \
./Core/Startup/startup_stm32g070kbtx.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Startup/%.o: ../Core/Startup/%.s Core/Startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m0plus -g3 -DDEBUG -c -I"D:/Workspace/00. Repositorios/estudo/estudo-prototrhead-stm32g0/Core/Inc/App" -I"D:/Workspace/00. Repositorios/estudo/estudo-prototrhead-stm32g0/Core/Inc/Config" -I"D:/Workspace/00. Repositorios/estudo/estudo-prototrhead-stm32g0/Core/Inc/Drivers" -I"D:/Workspace/00. Repositorios/estudo/estudo-prototrhead-stm32g0/Core/Inc/Misc" -I"D:/Workspace/00. Repositorios/estudo/estudo-prototrhead-stm32g0/Core/Inc/System" -I"D:/Workspace/00. Repositorios/estudo/estudo-prototrhead-stm32g0/Core/Inc/Misc/Protothread" -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@" "$<"

clean: clean-Core-2f-Startup

clean-Core-2f-Startup:
	-$(RM) ./Core/Startup/startup_stm32g070kbtx.d ./Core/Startup/startup_stm32g070kbtx.o

.PHONY: clean-Core-2f-Startup

