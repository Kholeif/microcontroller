#ifndef LCD_H_
#define LCD_H_

#include "PORT_Driver.h"

#define CLEAR_COMMAND 0x01
#define TWO_LINE_LCD_Eight_BIT_MODE 0x38
#define CURSOR_OFF 0x0C
#define CURSOR_ON 0x0E
#define SET_CURSOR_LOCATION 0x80


void LCD_sendCommand(uint8 command);
void LCD_displayCharacter(uint8 data);
void LCD_init(void);
void LCD_clearScreen(void);

#endif