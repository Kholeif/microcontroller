#include <stdint.h>
#include "C:/Keil/EE319Kware/PROJECT I/PORT_Driver.h"
#include "C:/Keil/EE319Kware/PROJECT I/tm4c123gh6pm.h"
#include "C:/Keil/EE319Kware/PROJECT I/lcd.h"

void Increment (uint8_t port_index,uint8_t pins_mask){
		
	int input = units + 10 * tens + 100 * hundreds ; 
	while ( DIO_Read_Port( port_index,pins_mask) == 1 ) {
			input ++ ;
			int spare = input ;
				units =  spare  %10;
			spare = spare / 10 ; 
			tens = spare % 10 ;
			spare = spare / 10 ;
			hundreds = spare % 10 ; 
	}	
} 