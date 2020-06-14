################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Date\ and\ Time.cpp 

OBJS += \
./src/Date\ and\ Time.o 

CPP_DEPS += \
./src/Date\ and\ Time.d 


# Each subdirectory must supply rules for building sources it contributes
src/Date\ and\ Time.o: ../src/Date\ and\ Time.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Date and Time.d" -MT"src/Date\ and\ Time.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


