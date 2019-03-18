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
	delayMs(1); 
	SET_BIT(LCD_CTRL_PORT,7); 
	delayMs(1); 
	LCD_DATA_PORT = command; 
	delayMs(1); 
	CLEAR_BIT(LCD_CTRL_PORT,7); 
	delayMs(1); 
}


void LCD_displayCharacter(uint8_t data)
{
	
	SET_BIT(LCD_CTRL_PORT,5);             //RS = 1 'SELECT DATA REGISTER'
	CLEAR_BIT(LCD_CTRL_PORT,6);           //RW = 0 'FOR WRITE ON LCD'
	delayMs(1);	                        
	
	SET_BIT(LCD_CTRL_PORT,7);             //E = 1  'ENABLE LCD'
	delayMs(1);                          
	
	LCD_DATA_PORT = data;                 //OUTPUT DATA ON LCD
	delayMs(1);                          

	
	CLEAR_BIT(LCD_CTRL_PORT,7);           //E = 0  'DISABLE LCD'
	delayMs(1);	
}

void LCD_goToRowColumn(uint8_t row,uint8_t col)
{
	uint8_t Address;
	
	//first of all calculate the required address
	switch(row)
	{
		case 0:
				Address=col;
				break;
		case 1:
				Address=col+0x40;
				break;
	}
	
	 //to write to a specific address in the LCD 
	 // we need to apply the corresponding command 0x80 + Address
	
	LCD_sendCommand(Address | SET_CURSOR_LOCATION); 
}


void LCD_displayString(const char *Str)
{
	uint8_t i = 0;
	while(Str[i] != '\0')
	{
		LCD_displayCharacter(Str[i]);
		i++;
	}
}