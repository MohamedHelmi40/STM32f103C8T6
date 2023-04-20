#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "MRCC_interface.h"
#include "MRCC_private.h"
#include "MRCC_config.h"
#include "MRCC_registers.h"

void MRCC_voidInit(void)
{
	MRCC->CFGR=0;
	MRCC->CR=0;
	#if CLOCKTYPE == HSE
	   CLR_BIT(MRCC->CFGR,1);
	   SET_BIT(MRCC->CFGR,0);
	   SET_BIT(MRCC->CR,16);
	   #if CLOCKBYBASS == CRYSTAL
	       CLR_BIT(MRCC->CR,18); 
	   #else
		   SET_BIT(MRCC->CR,18);
	   #endif 
	#elif CLOCKTYPE == HSI
	   CLR_BIT(MRCC->CFGR,1);
	   CLR_BIT(MRCC->CFGR,0);
	   SET_BIT(MRCC->CR,0);
	#elif CLOCKTYPE == PLL
	   CLR_BIT(MRCC->CFGR,0);
	   SET_BIT(MRCC->CFGR,1);
	   SET_BIT(MRCC->CR,24);
	   MRCC->CFGR |= (MULTIPLICATION_FACTOR << 18);
	   #if PLL_ENTRY_CLOCK_SOURCE == PLL_HSI_2
	       CLR_BIT(MRCC->CFGR,16);
	   #elif PLL_ENTRY_CLOCK_SOURCE == PLL_HSE
	       SET_BIT(MRCC->CFGR,16);
		   #if PLL_HSE_DIVIDER == PLL_HSE_NOT_DIVIDED
		       CLR_BIT(MRCC->CFGR,17);
		   #elif PLL_HSE_DIVIDER == PLL_HSE_2
		       SET_BIT(MRCC->CFGR,17);
		   #endif
	   #endif 
	   
	       
	   
	#endif
}
void MRCC_voidEnablePeripheralClock(u8 Copy_u8PeripheralBus,u8 Copy_u8Peripheral)
{
	switch(Copy_u8PeripheralBus)
	{
		case AHB : SET_BIT(MRCC->AHBENR,Copy_u8Peripheral);  break;
		case APB2: SET_BIT(MRCC->APB2ENR,Copy_u8Peripheral); break;
		case APB1: SET_BIT(MRCC->APB1ENR,Copy_u8Peripheral); break;
	}
}

void MRCC_voidDisablePeripheralClock(u8 Copy_u8PeripheralBus,u8 Copy_u8Peripheral)
{
	switch(Copy_u8PeripheralBus)
	{
		case AHB : CLR_BIT(MRCC->AHBENR,Copy_u8Peripheral);  break;
		case APB2: CLR_BIT(MRCC->APB2ENR,Copy_u8Peripheral); break;
		case APB1: CLR_BIT(MRCC->APB1ENR,Copy_u8Peripheral); break;
	}
}
void MRCC_voidControllerClockOutput(void)
{
	MRCC->CFGR |= (MICROCONTROLLER_CLOCK_OUTPUT << 24);
}
