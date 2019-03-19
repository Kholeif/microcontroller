#include "C:/Users/Andrew/Desktop/gittt/LCD/lcd.h"
 uint8_t units ;
 uint8_t tens ; 
 uint8_t hundreds ; 
void SystemInit(){}
	
int main()
{
	
	LCD_init();
	Port_Init(PORTD);
	Port_SetPinDirection(PORTD,0x07,PORT_PIN_IN);
	Port_SetPinPullUp(PORTD,0x07,1);
	
	while(1)
	{
		if(BIT_IS_CLEAR(GPIO_PORTD_DATA_R,0))
		{
			delayMs(20);
			while(BIT_IS_CLEAR(GPIO_PORTD_DATA_R,0))
			{
				Increment();
				delayMs(200);
			}
		}
		
		
		
		if(BIT_IS_CLEAR(GPIO_PORTD_DATA_R,1))
		{
			delayMs(20);
				if(BIT_IS_CLEAR(GPIO_PORTD_DATA_R,1))
				{
					Decrement();
				}
				while(BIT_IS_CLEAR(GPIO_PORTD_DATA_R,1))
				{}
				
		}
		
		if(BIT_IS_CLEAR(GPIO_PORTD_DATA_R,2))
		{
			delayMs(20);
			if(BIT_IS_CLEAR(GPIO_PORTD_DATA_R,2))
			{
				while(BIT_IS_CLEAR(GPIO_PORTD_DATA_R,2))
				{}
				reset();
			}
			
		}
		
		
	}
	
}