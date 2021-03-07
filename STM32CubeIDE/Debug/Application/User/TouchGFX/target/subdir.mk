################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/target/CortexMMCUInstrumentation.cpp \
C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/target/STM32TouchController.cpp \
C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/target/TouchGFXGPIO.cpp \
C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/target/TouchGFXHAL.cpp 

OBJS += \
./Application/User/TouchGFX/target/CortexMMCUInstrumentation.o \
./Application/User/TouchGFX/target/STM32TouchController.o \
./Application/User/TouchGFX/target/TouchGFXGPIO.o \
./Application/User/TouchGFX/target/TouchGFXHAL.o 

CPP_DEPS += \
./Application/User/TouchGFX/target/CortexMMCUInstrumentation.d \
./Application/User/TouchGFX/target/STM32TouchController.d \
./Application/User/TouchGFX/target/TouchGFXGPIO.d \
./Application/User/TouchGFX/target/TouchGFXHAL.d 


# Each subdirectory must supply rules for building sources it contributes
Application/User/TouchGFX/target/CortexMMCUInstrumentation.o: C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/target/CortexMMCUInstrumentation.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DSTM32L4R9xx -DUSE_HAL_DRIVER -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Drivers/BSP/Components/Common -I../../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../../Drivers/BSP/STM32L4R9I-DISCOVERY -I../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/BSP/Components/ft3x67 -I../../Drivers/BSP/Components -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"Application/User/TouchGFX/target/CortexMMCUInstrumentation.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Application/User/TouchGFX/target/STM32TouchController.o: C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/target/STM32TouchController.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DSTM32L4R9xx -DUSE_HAL_DRIVER -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Drivers/BSP/Components/Common -I../../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../../Drivers/BSP/STM32L4R9I-DISCOVERY -I../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/BSP/Components/ft3x67 -I../../Drivers/BSP/Components -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"Application/User/TouchGFX/target/STM32TouchController.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Application/User/TouchGFX/target/TouchGFXGPIO.o: C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/target/TouchGFXGPIO.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DSTM32L4R9xx -DUSE_HAL_DRIVER -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Drivers/BSP/Components/Common -I../../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../../Drivers/BSP/STM32L4R9I-DISCOVERY -I../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/BSP/Components/ft3x67 -I../../Drivers/BSP/Components -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"Application/User/TouchGFX/target/TouchGFXGPIO.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Application/User/TouchGFX/target/TouchGFXHAL.o: C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/target/TouchGFXHAL.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DSTM32L4R9xx -DUSE_HAL_DRIVER -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Drivers/BSP/Components/Common -I../../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../../Drivers/BSP/STM32L4R9I-DISCOVERY -I../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/BSP/Components/ft3x67 -I../../Drivers/BSP/Components -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"Application/User/TouchGFX/target/TouchGFXHAL.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

