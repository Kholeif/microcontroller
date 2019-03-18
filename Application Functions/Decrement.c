#include <stdint.h>
#include "C:/Keil/EE319Kware/PROJECT I/PORT_Driver.h"
#include "C:/Keil/EE319Kware/PROJECT I/tm4c123gh6pm.h"
#include "C:/Keil/EE319Kware/PROJECT I/lcd.h"

extern uint8_t units;
extern uint8_t tens;
extern uint8_t hundreds;

void Decrement (void)
{
		
    int input = units + 10 * tens + 100 * hundreds ; 
    input -- ;
    int spare = input ;
    units =  spare  %10;
    spare = spare / 10 ; 
    tens = spare % 10 ;
    spare = spare / 10 ;
    hundreds = spare % 10 ; 
} 
