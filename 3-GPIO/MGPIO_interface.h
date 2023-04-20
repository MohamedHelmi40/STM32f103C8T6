#ifndef MGPIO_INTERFACE_H
#define MGPIO_INTERFACE_H

#include "STD_TYPES.h"

void MGPIO_voidSetPinMode (u8 copy_u8Port ,u8 copy_u8Pin ,u8 copy_u8Mode );
void MGPIO_voidSetPinValue(u8 copy_u8Port ,u8 copy_u8Pin ,u8 copy_u8Value);
u8 MGPIO_voidGetPinValue(u8 copy_u8Port ,u8 copy_u8Pin );
void MGPIO_voidSetPinValueBSRR(u8 copy_u8Port ,u8 copy_u8Pin ,u8 copy_u8Value);
void MGPIO_voidClrPinValueBRR(u8 copy_u8Port ,u8 copy_u8Pin );
void MGPIO_voidLockBits(u8 copy_u8Port,u8 copy_u8Pin);
#define GPIO_HIGH 1
#define GPIO_LOW  0

#define PIN0  0
#define PIN1  1
#define PIN2  2
#define PIN3  3
#define PIN4  4
#define PIN5  5
#define PIN6  6
#define PIN7  7
#define PIN8  8
#define PIN9  9
#define PIN10 10
#define PIN11 11
#define PIN12 12
#define PIN13 13
#define PIN14 14
#define PIN15 15

#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3
#define PORTE 4
#define PORTF 5
#define PORTG 6

// input mode
#define INPUT_ANALOG       0b0000
#define INPUT_FLOATING     0b0100
#define INPUT_PULL_UP_DOWN 0b1000
// output mode speed 10 MHZ
#define OUTPUT_10_MHZ_PUSH_PULL       0b0001
#define OUTPUT_10_MHZ_OPEN_DRAIN      0b0101
#define OUTPUT_10_MHZ_ALT_PUSH_PULL   0b1001
#define OUTPUT_10_MHZ_ALT_OPEN_DRAIN  0b1101
// output mode speed 2 MHZ
#define OUTPUT_2_MHZ_PUSH_PULL       0b0010
#define OUTPUT_2_MHZ_OPEN_DRAIN      0b0110
#define OUTPUT_2_MHZ_ALT_PUSH_PULL   0b1010
#define OUTPUT_2_MHZ_ALT_OPEN_DRAIN  0b1110
// output mode speed 50 MHZ
#define OUTPUT_50_MHZ_PUSH_PULL       0b0011
#define OUTPUT_50_MHZ_OPEN_DRAIN      0b0111
#define OUTPUT_50_MHZ_ALT_PUSH_PULL   0b1011
#define OUTPUT_50_MHZ_ALT_OPEN_DRAIN  0b1111
#endif
