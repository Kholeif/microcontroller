#include "C:/Users/Andrew/Desktop/gittt/PORT_Driver.h"
void Port_SetPinPullDown(uint8_t port_index, uint8_t pins_mask, uint8_t enable)
{
	if (enable == 1)
	{
		switch (port_index)
		{
		case 0:
			GPIO_PORTA_PDR_R |= pins_mask;
			break;
		case 1:
			GPIO_PORTB_PDR_R |= pins_mask;
			break;

		case 2:
			GPIO_PORTC_PDR_R |= pins_mask;
			break;
		case 3:
			GPIO_PORTD_PDR_R |= pins_mask;
			break;
		case 4:
			GPIO_PORTE_PDR_R |= pins_mask;
			break;
		case 5:
			GPIO_PORTF_PDR_R |= pins_mask;
			break;


		}
	}
	if (enable == 0)
	{
		switch (port_index)
		{
		case 0:
			GPIO_PORTA_PDR_R &= ~pins_mask;
			break;
		case 1:
			GPIO_PORTB_PDR_R &= ~pins_mask;
			break;

		case 2:
			GPIO_PORTC_PDR_R &= ~pins_mask;
			break;
		case 3:
			GPIO_PORTD_PDR_R &= ~pins_mask;
			break;
		case 4:
			GPIO_PORTE_PDR_R &= ~pins_mask;
			break;
		case 5:
			GPIO_PORTF_PUR_R &= ~pins_mask;
			break;
		}
	}
}



