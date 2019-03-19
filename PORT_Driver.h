#ifndef PORT_DRIVER_H_
#define PORT_DRIVER_H_


#include <stdint.h>
#include "C:/Users/Andrew/Desktop/gittt/tm4c123gh6pm.h"
/*MARCORs*/

#define SET_BIT(REG,BIT) (REG|=(1<<BIT))
#define CLEAR_BIT(REG,BIT) (REG&=(~(1<<BIT)))
#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )
#define BIT_IS_CLEAR(REG,BIT) ( !(REG & (1<<BIT)) )


/*Port Index */
#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3
#define PORTE 4
#define PORTF 5
/***************************************/
/* delay function */
void delayMs(int n);

/*Enums*/
typedef enum {
	PORT_PIN_IN,PORT_PIN_OUT
}Port_PinDirectionType;
typedef enum {
    STD_LOW,STD_HIGH
}Dio_LevelType;
/****************************************/

/*PORT Functions Prototypes*/
void Port_Init(uint8_t port_index);

void Port_SetPinDirection(uint8_t port_index,uint8_t pins_mask,Port_PinDirectionType pins_direction);

void Port_SetPinPullUp(uint8_t port_index,uint8_t pins_mask,uint8_t enable);

void Port_SetPinPullDown(uint8_t port_index,uint8_t pins_mask,uint8_t enable);

uint8_t DIO_ReadPort(uint8_t port_index,uint8_t pins_mask);

void DIO_WritePort(uint8_t port_index,uint8_t pins_mask,Dio_LevelType pins_level);

void DIO_FlipPort(uint8_t port_index,uint8_t pins_mask);

void Increment (void);

void Decrement (void);

void reset(void);
/****************************************/

#endif
