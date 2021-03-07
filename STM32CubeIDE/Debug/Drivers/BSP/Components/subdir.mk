################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/Drivers/BSP/Components/ft3x67/ft3x67.c \
C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/Drivers/BSP/Components/mfxstm32l152/mfxstm32l152.c 

C_DEPS += \
./Drivers/BSP/Components/ft3x67.d \
./Drivers/BSP/Components/mfxstm32l152.d 

OBJS += \
./Drivers/BSP/Components/ft3x67.o \
./Drivers/BSP/Components/mfxstm32l152.o 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Components/ft3x67.o: C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/Drivers/BSP/Components/ft3x67/ft3x67.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32L4R9xx -DUSE_HAL_DRIVER -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Drivers/BSP/Components/Common -I../../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../../Drivers/BSP/STM32L4R9I-DISCOVERY -I../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/BSP/Components/ft3x67 -I../../Drivers/BSP/Components -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/Components/ft3x67.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Drivers/BSP/Components/mfxstm32l152.o: C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/Drivers/BSP/Components/mfxstm32l152/mfxstm32l152.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32L4R9xx -DUSE_HAL_DRIVER -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Drivers/BSP/Components/Common -I../../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../../Drivers/BSP/STM32L4R9I-DISCOVERY -I../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/BSP/Components/ft3x67 -I../../Drivers/BSP/Components -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"Drivers/BSP/Components/mfxstm32l152.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

