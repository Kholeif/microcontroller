#ifndef PORT_DRIVER_H_
#define PORT_DRIVER_H_
#include "stdint.h"
#include "C:/Keil/EE319KwareSpring2019/inc/tm4c123gh6pm.h"
#include "STD_TYPES.h"
#include "COMMON_MACROS.h"
enum Port_PinDirectionType{
	PORT_PIN_IN,PORT_PIN_OUT
};
void Port_Init(uint8 port_index);
void Port_SetPinDirection(uint8 port_index,uint8 pins_mask,enum Port_PinDirectionType pins_direction);
void Port_SetPinPullUp(uint8 port_index,uint8 pins_mas,uint8 enable);
void Port_SetPinPullDown(uint8 port_index,uint8 pins_mas,uint8 enable);
#endif