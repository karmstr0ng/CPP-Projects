################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Allocating\ Memory.cpp 

OBJS += \
./src/Allocating\ Memory.o 

CPP_DEPS += \
./src/Allocating\ Memory.d 


# Each subdirectory must supply rules for building sources it contributes
src/Allocating\ Memory.o: ../src/Allocating\ Memory.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Allocating Memory.d" -MT"src/Allocating\ Memory.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


