#include "C:/Users/Andrew/Desktop/gittt/PORT_Driver.h"

void DIO_FlipPort(uint8_t port_index,uint8_t pins_mask)
{
	switch(port_index)
	{
		case 0:
			GPIO_PORTA_DATA_R ^= pins_mask;
			break;
		
		case 1:
			GPIO_PORTB_DATA_R ^= pins_mask;
			break;
		
		case 2:
			GPIO_PORTC_DATA_R ^= pins_mask;
			break;
		
		case 3:
			GPIO_PORTD_DATA_R ^= pins_mask;
			break;
		
		case 4:
			GPIO_PORTE_DATA_R ^= pins_mask;
			break;
		
		case 5:
			GPIO_PORTF_DATA_R ^= pins_mask;
			break;
		
	}
}