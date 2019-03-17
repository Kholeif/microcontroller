#include "PORT_Driver.h"
void Port_SetPinPullUp(uint8_t port_index, uint8_t pins_mask, uint8_t enable)
{
	if (enable == 1)
	{
		switch (port_index)
		{
		case '0':
			GPIO_PORTA_PUR_R |= pins_mask;
			break;
		case '1':
			GPIO_PORTB_PUR_R |= pins_mask;
			break;

		case '2':
			GPIO_PORTC_PUR_R |= pins_mask;
			break;
		case '3':
			GPIO_PORTD_PUR_R |= pins_mask;
			break;
		case '4':
			GPIO_PORTE_PUR_R |= pins_mask;
			break;
		case '5':
			GPIO_PORTF_PUR_R |= pins_mask;
			break;


		}
	}
	if (enable == 0)
	{
		switch (port_index)
		{
		case '0':
			GPIO_PORTA_PUR_R &= ~pins_mask;
			break;
		case '1':
			GPIO_PORTB_PUR_R &= ~pins_mask;
			break;

		case '2':
			GPIO_PORTC_PUR_R &= ~pins_mask;
			break;
		case '3':
			GPIO_PORTD_PUR_R &= ~pins_mask;
			break;
		case '4':
			GPIO_PORTE_PUR_R &= ~pins_mask;
			break;
		case '5':
			GPIO_PORTF_PUR_R &= ~pins_mask;
			break;
		}
	}
}