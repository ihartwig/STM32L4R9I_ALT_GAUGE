################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/gui/src/common/FrontendApplication.cpp \
C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/gui/src/model/Model.cpp \
C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/gui/src/screen1_screen/Screen1Presenter.cpp \
C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/gui/src/screen1_screen/Screen1View.cpp \
C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/gui/src/containers/altDrumContainer.cpp \
C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/gui/src/containers/altKollsmanContainer.cpp 

OBJS += \
./Application/User/gui/FrontendApplication.o \
./Application/User/gui/Model.o \
./Application/User/gui/Screen1Presenter.o \
./Application/User/gui/Screen1View.o \
./Application/User/gui/altDrumContainer.o \
./Application/User/gui/altKollsmanContainer.o 

CPP_DEPS += \
./Application/User/gui/FrontendApplication.d \
./Application/User/gui/Model.d \
./Application/User/gui/Screen1Presenter.d \
./Application/User/gui/Screen1View.d \
./Application/User/gui/altDrumContainer.d \
./Application/User/gui/altKollsmanContainer.d 


# Each subdirectory must supply rules for building sources it contributes
Application/User/gui/FrontendApplication.o: C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/gui/src/common/FrontendApplication.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DSTM32L4R9xx -DUSE_HAL_DRIVER -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Drivers/BSP/Components/Common -I../../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../../Drivers/BSP/STM32L4R9I-DISCOVERY -I../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/BSP/Components/ft3x67 -I../../Drivers/BSP/Components -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"Application/User/gui/FrontendApplication.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Application/User/gui/Model.o: C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/gui/src/model/Model.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DSTM32L4R9xx -DUSE_HAL_DRIVER -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Drivers/BSP/Components/Common -I../../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../../Drivers/BSP/STM32L4R9I-DISCOVERY -I../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/BSP/Components/ft3x67 -I../../Drivers/BSP/Components -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"Application/User/gui/Model.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Application/User/gui/Screen1Presenter.o: C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/gui/src/screen1_screen/Screen1Presenter.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DSTM32L4R9xx -DUSE_HAL_DRIVER -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Drivers/BSP/Components/Common -I../../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../../Drivers/BSP/STM32L4R9I-DISCOVERY -I../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/BSP/Components/ft3x67 -I../../Drivers/BSP/Components -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"Application/User/gui/Screen1Presenter.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Application/User/gui/Screen1View.o: C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/gui/src/screen1_screen/Screen1View.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DSTM32L4R9xx -DUSE_HAL_DRIVER -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Drivers/BSP/Components/Common -I../../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../../Drivers/BSP/STM32L4R9I-DISCOVERY -I../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/BSP/Components/ft3x67 -I../../Drivers/BSP/Components -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"Application/User/gui/Screen1View.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Application/User/gui/altDrumContainer.o: C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/gui/src/containers/altDrumContainer.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DSTM32L4R9xx -DUSE_HAL_DRIVER -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Drivers/BSP/Components/Common -I../../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../../Drivers/BSP/STM32L4R9I-DISCOVERY -I../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/BSP/Components/ft3x67 -I../../Drivers/BSP/Components -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"Application/User/gui/altDrumContainer.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
Application/User/gui/altKollsmanContainer.o: C:/TouchGFXProjects/STM32L4R9I_ALT_GAUGE/TouchGFX/gui/src/containers/altKollsmanContainer.cpp
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DSTM32L4R9xx -DUSE_HAL_DRIVER -DDEBUG -c -I../../Core/Inc -I../../Drivers/CMSIS/Include -I../../TouchGFX/target -I../../TouchGFX/App -I../../Drivers/STM32L4xx_HAL_Driver/Inc -I../../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS_V2 -I../../TouchGFX/target/generated -I../../Drivers/BSP/Components/Common -I../../Drivers/STM32L4xx_HAL_Driver/Inc/Legacy -I../../Drivers/BSP/STM32L4R9I-DISCOVERY -I../../Drivers/CMSIS/Device/ST/STM32L4xx/Include -I../../Middlewares/Third_Party/FreeRTOS/Source/include -I../../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM4F -I../../Drivers/BSP/Components/ft3x67 -I../../Drivers/BSP/Components -I../../Middlewares/ST/touchgfx/framework/include -I../../TouchGFX/generated/fonts/include -I../../TouchGFX/generated/gui_generated/include -I../../TouchGFX/generated/images/include -I../../TouchGFX/generated/texts/include -I../../TouchGFX/gui/include -Os -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -femit-class-debug-always -fstack-usage -MMD -MP -MF"Application/User/gui/altKollsmanContainer.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
