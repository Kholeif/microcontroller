#ifndef LCD_H_
#define LCD_H_

#include "PORT_Driver.h"

/* LCD HardWare Pins */
#define LCD_CTRL_PORT        GPIO_PORTA_DATA_R
#define LCD_CTRL_PORT_DIR    GPIO_PORTA_DIR_R

#define LCD_DATA_PORT        GPIO_PORTB_DATA_R
#define LCD_DATA_PORT_DIR    GPIO_PORTB_DIR_R

/* LCD Commands */
#define CLEAR_COMMAND 0x01
#define TWO_LINE_LCD_Eight_BIT_MODE 0x38
#define CURSOR_OFF 0x0C
#define CURSOR_ON 0x0E
#define SET_CURSOR_LOCATION 0x80

/* LCD Functions Prototypes */
void LCD_sendCommand(uint8_t command);
void LCD_displayCharacter(uint8_t data);
void LCD_displayString(const char *Str);
void LCD_init(void);
void LCD_clearScreen(void);
void LCD_goToRowColumn(uint8_t row,uint8_t col);


#endif
