#include "lcd.h"

void LCD_init(void)
{
		/* Configure the data port as output port */
		Port_Init(1);
		Port_SetPinDirection(1,0xFF,PORT_PIN_OUT);
	 /* Configure the control pins(E,RS,RW) as output pins */
		Port_Init(3);
		Port_SetPinDirection(3,0xE0,PORT_PIN_OUT);
		LCD_sendCommand(TWO_LINE_LCD_Eight_BIT_MODE); 
	
		LCD_sendCommand(CURSOR_OFF);  
	
		LCD_sendCommand(CLEAR_COMMAND); 
}

void LCD_clearScreen(void)
{
	LCD_sendCommand(CLEAR_COMMAND);  
}


void LCD_sendCommand(uint8_t command)
{
	CLEAR_BIT(LCD_CTRL_PORT,5);
	CLEAR_BIT(LCD_CTRL_PORT,6); 
	delayMs(2000); 
	SET_BIT(LCD_CTRL_PORT,7); 
	delayMs(2000); 
	LCD_DATA_PORT = command; 
	delayMs(2000); 
	CLEAR_BIT(LCD_CTRL_PORT,7); 
	delayMs(2000); 
}


