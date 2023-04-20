#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "MNVIC_interface.h"
#include "MNVIC_register.h"
#include "MNVIC_private.h"
#include "MNVIC_config.h"

void MNVIC_voidEnablePeripheral (u8 copy_u8InterruptID)
{
   if(copy_u8InterruptID >=0)
   {
	   SET_BIT(NVIC_ISER0,copy_u8InterruptID);
   }	
   else if(copy_u8InterruptID >= 32 && copy_u8InterruptID < 64)
   {
	   SET_BIT(NVIC_ISER1,copy_u8InterruptID);
   }
   else if(copy_u8InterruptID >= 64 && copy_u8InterruptID < 96)
   {
	   SET_BIT(NVIC_ISER2,copy_u8InterruptID);
   }	   
}
void MNVIC_voidDisablePeripheral(u8 copy_u8InterruptID)
{
	if(copy_u8InterruptID >=0)
   {
	   SET_BIT(NVIC_ICER0,copy_u8InterruptID);
   }	
   else if(copy_u8InterruptID >= 32 && copy_u8InterruptID < 64)
   {
	   SET_BIT(NVIC_ICER1,copy_u8InterruptID);
   }
   else if(copy_u8InterruptID >= 64 && copy_u8InterruptID < 96)
   {
	   SET_BIT(NVIC_ICER2,copy_u8InterruptID);
   }	   
}
void MNVIC_voidSetPendingFlag   (u8 copy_u8InterruptID)
{
	if(copy_u8InterruptID >=0)
   {
	   SET_BIT(NVIC_ISPR0,copy_u8InterruptID);
   }	
   else if(copy_u8InterruptID >= 32 && copy_u8InterruptID < 64)
   {
	   SET_BIT(NVIC_ISPR1,copy_u8InterruptID);
   }
   else if(copy_u8InterruptID >= 64 && copy_u8InterruptID < 96)
   {
	   SET_BIT(NVIC_ISPR2,copy_u8InterruptID);
   }	   
}
void MNVIC_voidClrPendingFlag   (u8 copy_u8InterruptID)
{
	if(copy_u8InterruptID >=0)
   {
	   SET_BIT(NVIC_ICPR0,copy_u8InterruptID);
   }	
   else if(copy_u8InterruptID >= 32 && copy_u8InterruptID < 64)
   {
	   SET_BIT(NVIC_ICPR1,copy_u8InterruptID);
   }
   else if(copy_u8InterruptID >= 64 && copy_u8InterruptID < 96)
   {
	   SET_BIT(NVIC_ICPR2,copy_u8InterruptID);
   }	   
}
u8   MNVIC_u8GetActiveFlag      (u8 copy_u8InterruptID)
{
	u8 Local_result=0;
	if(copy_u8InterruptID >=0)
   {
	   Local_result=GET_BIT(NVIC_IABR0,copy_u8InterruptID);
   }	
   else if(copy_u8InterruptID >= 32 && copy_u8InterruptID < 64)
   {
	   Local_result=GET_BIT(NVIC_IABR1,copy_u8InterruptID);
   }
   else if(copy_u8InterruptID >= 64 && copy_u8InterruptID < 96)
   {
	   Local_result=GET_BIT(NVIC_IABR2,copy_u8InterruptID);
   }	
	return Local_result;
}