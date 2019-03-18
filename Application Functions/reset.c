#include "lcd.h"

void reset(void)
{
	LCD_goToRowColumn(0,0);
	LCD_displayCharacter(0);
	
	LCD_goToRowColumn(0,1);
	LCD_displayCharacter(0);
	
	LCD_goToRowColumn(0,2);
	LCD_displayCharacter(0);
	
}