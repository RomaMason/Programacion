################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Complejo.cpp \
../Main.cpp \
../Menu.cpp \
../Poligono.cpp 

CPP_DEPS += \
./Complejo.d \
./Main.d \
./Menu.d \
./Poligono.d 

OBJS += \
./Complejo.o \
./Main.o \
./Menu.o \
./Poligono.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean--2e-

clean--2e-:
	-$(RM) ./Complejo.d ./Complejo.o ./Main.d ./Main.o ./Menu.d ./Menu.o ./Poligono.d ./Poligono.o

.PHONY: clean--2e-

