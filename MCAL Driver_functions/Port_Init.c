#include "C:/Users/Andrew/Desktop/gittt/PORT_Driver.h"

void Port_Init(uint8_t port_index){
		uint32_t delay;
	switch(port_index)
		{
		case 0:SYSCTL_RCGCGPIO_R|=(1<<0);
		delay=1;
		GPIO_PORTA_LOCK_R=0x4C4F434B;
		GPIO_PORTA_CR_R=0xFF;
		GPIO_PORTA_AFSEL_R=0x00;
		GPIO_PORTA_DEN_R=0xFF;
		break;			
		case 1:SYSCTL_RCGCGPIO_R|=(1<<1);
		delay=1;
		GPIO_PORTB_LOCK_R=0x4C4F434B;
		GPIO_PORTB_CR_R=0xFF;
		GPIO_PORTB_AFSEL_R=0x00;
		GPIO_PORTB_DEN_R=0xFF;			
		break;
		case 2:SYSCTL_RCGCGPIO_R|=(1<<2);
		delay=delay+1;
		GPIO_PORTC_LOCK_R=0x4C4F434B;
		GPIO_PORTC_CR_R=0xFF;
		GPIO_PORTC_AFSEL_R=0x00;
		GPIO_PORTC_DEN_R=0xFF;
		break;
		case 3:SYSCTL_RCGCGPIO_R|=(1<<3);
		delay=1;
		GPIO_PORTD_LOCK_R=0x4C4F434B;
		GPIO_PORTD_CR_R=0xFF;
		GPIO_PORTD_AFSEL_R=0x00;
		GPIO_PORTD_DEN_R=0xFF;			
		break;
		case 4:SYSCTL_RCGCGPIO_R|=(1<<4);
		delay=1;
		GPIO_PORTE_LOCK_R=0x4C4F434B;
		GPIO_PORTE_CR_R=0xFF;
		GPIO_PORTE_AFSEL_R=0x00;
		GPIO_PORTE_DEN_R=0xFF;		
		break;
		case 5:SYSCTL_RCGCGPIO_R|=(1<<5);
		delay=1;
		GPIO_PORTF_LOCK_R=0x4C4F434B;
		GPIO_PORTF_CR_R=0xFF; 
		GPIO_PORTF_AFSEL_R=0x00;
		GPIO_PORTF_DEN_R=0xFF;
		break;
		}
}
