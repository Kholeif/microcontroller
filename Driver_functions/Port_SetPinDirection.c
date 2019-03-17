#include "PORT_Driver.h"
void Port_SetPinDirection(uint8_t port_index,uint8_t pins_mask,Port_PinDirectionType pins_direction)
{
	switch(port_index)
	{
		case'0':
			if(pins_direction)
				GPIO_PORTA_DIR_R |= pins_mask;
			else
				GPIO_PORTA_DIR_R &= ~pins_mask;
			break;
	
		case'1':
			if(pins_direction)
				GPIO_PORTB_DIR_R |= pins_mask;
			else
				GPIO_PORTB_DIR_R &= ~pins_mask;
			break;
			
		case'2':
			if(pins_direction)
				GPIO_PORTC_DIR_R |= pins_mask;
			else
				GPIO_PORTC_DIR_R &= ~pins_mask;
			break;
			
		case'3':
			if(pins_direction)
				GPIO_PORTD_DIR_R |= pins_mask;
			else
				GPIO_PORTD_DIR_R &= ~pins_mask;
			break;
			
		case'4':
			if(pins_direction)
				GPIO_PORTE_DIR_R |= pins_mask;
			else
				GPIO_PORTE_DIR_R &= ~pins_mask;
			break;
			
		case'5':
			if(pins_direction)
				GPIO_PORTF_DIR_R |= pins_mask;
			else
				GPIO_PORTF_DIR_R &= ~pins_mask;
			break;
	}
}