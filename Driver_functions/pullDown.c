#include <stdint.h>
#include "C:/Keil/EE319Kware/PROJECT I/PORT_Driver.h"
#include "C:/Keil/EE319Kware/PROJECT I/tm4c123gh6pm.h"

void SystemInit() {}
void Port_SetPinPullDown (uint8_t port_index,uint8_t pins_mask,uint8_t enable){

	if (enable) {
		switch (port_index){
			case PORTA: GPIO_PORTA_PDR_R |= pins_mask ;
			case PORTB: GPIO_PORTB_PDR_R |= pins_mask ;
			case PORTC: GPIO_PORTC_PDR_R |= pins_mask ;
			case PORTD: GPIO_PORTD_PDR_R |= pins_mask ;
			case PORTE: GPIO_PORTE_PDR_R |= pins_mask ;
			case PORTF: GPIO_PORTF_PDR_R |= pins_mask ;
			default: return ;
		}
	}else{
		switch (port_index){
			case PORTA: GPIO_PORTA_PDR_R &= !pins_mask ;
			case PORTB: GPIO_PORTB_PDR_R &= !pins_mask ;
			case PORTC: GPIO_PORTC_PDR_R &= !pins_mask ;
			case PORTD: GPIO_PORTD_PDR_R &= !pins_mask ;
			case PORTE: GPIO_PORTE_PDR_R &= !pins_mask ;
			case PORTF: GPIO_PORTF_PDR_R &= !pins_mask ;
			default: return ;
		}
	}
}
