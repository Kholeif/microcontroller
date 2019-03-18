#include "lcd.h"

extern uint8_t units;
extern uint8_t tens;
extern uint8_t hundreds;

void reset(void)
{
	units=0;
	tens=0;
	hundreds=0;
	Display();
}