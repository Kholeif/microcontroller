#include "lcd.h"
volatile uint32_t dummy;
void wait(volatile uint32_t cnt)
	{
    while(cnt--)
        dummy++;
	}
	
void LCD_init(void)
{
		/* Configure the data port as output port */
		Port_Init(1);
		Port_SetPinDirection(1,0xFF,PORT_PIN_OUT);
	 /* Configure the control pins(E,RS,RW) as output pins */
		Port_Init(1);
		Port_SetPinDirection(3,0xE0,PORT_PIN_OUT);
		LCD_sendCommand(TWO_LINE_LCD_Eight_BIT_MODE); /* use 2-line lcd + 8-bit Data Mode + 5*7 dot display Mode */
	
		LCD_sendCommand(CURSOR_OFF); /* cursor off */
	
		LCD_sendCommand(CLEAR_COMMAND); /* clear LCD at the beginning */
}

void LCD_clearScreen(void)
{
	LCD_sendCommand(CLEAR_COMMAND); //clear display 
}


void LCD_sendCommand(uint8_t command)
{
	CLEAR_BIT(LCD_CTRL_PORT,5); /* Instruction Mode RS=0 */
	CLEAR_BIT(LCD_CTRL_PORT,6); /* write data to LCD so RW=0 */
	wait(40000); /* delay for processing Tas = 50ns */
	SET_BIT(LCD_CTRL_PORT,7); /* Enable LCD E=1 */
	wait(40000); /* delay for processing Tpw - Tdws = 190ns */
	LCD_DATA_PORT = command; /* out the required command to the data bus D0 --> D7 */
	wait(40000); /* delay for processing Tdsw = 100ns */
	CLEAR_BIT(LCD_CTRL_PORT,7); /* disable LCD E=0 */
	wait(40000); /* delay for processing Th = 13ns */
}


