
#ifndef RCC_INTERFACE_H
#define RCC_INTERFACE_H

#include "STD_TYPES.h"

void MRCC_voidInit(void);
void MRCC_voidEnablePeripheralClock(u8 Copy_u8PeripheralBus,u8 Copy_u8Peripheral);
void MRCC_voidDisablePeripheralClock(u8 Copy_u8PeripheralBus,u8 Copy_u8Peripheral);
void MRCC_voidControllerClockOutput(void);



#define AHB  0
#define APB1 1
#define APB2 2






#endif
