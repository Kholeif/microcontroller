#include "C:/Users/Andrew/Desktop/gittt/PORT_Driver.h"
uint8_t DIO_Read_Port(port_index,pins_mask)
{
	uint8_t pins_level;
	if (port_index == PORTA)
	{
		pins_level = GPIO_PORTA_DATA_R & pins_mask;
	}
	
	else if (port_index == PORTB)
	{
		pins_level = GPIO_PORTB_DATA_R & pins_mask;
	}
	
	else if (port_index == PORTC)
	{
		pins_level = GPIO_PORTC_DATA_R & pins_mask;
	}
	
	else if (port_index == PORTD)
	{
		pins_level = GPIO_PORTD_DATA_R & pins_mask;
	}
	
	else if (port_index == PORTE)
	{
		pins_level = GPIO_PORTE_DATA_R & pins_mask;
	}
	
	else if (port_index == PORTF)
	{
		pins_level = GPIO_PORTF_DATA_R & pins_mask;
	}
	
	return pins_level;
}

