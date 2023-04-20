
#include "BIT_MATH.h"
#include "STD_TYPES.h"

#include "MGPIO_interface.h"
#include "MGPIO_private.h"
#include "MGPIO_config.h"
#include "MGPIO_register.h"


void MGPIO_voidSetPinMode(u8 copy_u8Port , u8 copy_u8Pin , u8 copy_u8Mode)
{
	
		if (copy_u8Pin < 8 && copy_u8Pin >= 0)
		{
			switch(copy_u8Port)
	         {
		        case PORTA:
		        	MGPIOA->CRL &=   ~((0b1111) << copy_u8Pin * 4);
		        	MGPIOA->CRL |= (copy_u8Mode << copy_u8Pin * 4);  break;
		        case PORTB:
		        	MGPIOB->CRL &=   ~((0b1111) << copy_u8Pin * 4);
		        	MGPIOB->CRL |= (copy_u8Mode << copy_u8Pin * 4);  break;
		        case PORTC:
		        	MGPIOC->CRL &=   ~((0b1111) << copy_u8Pin * 4);
		        	MGPIOC->CRL |= (copy_u8Mode << copy_u8Pin * 4);  break;
		        case PORTD:
		        	MGPIOD->CRL &=   ~((0b1111) << copy_u8Pin * 4);
		        	MGPIOD->CRL |= (copy_u8Mode << copy_u8Pin * 4);  break;
		        case PORTE:
		        	MGPIOE->CRL &=   ~((0b1111) << copy_u8Pin * 4);
		        	MGPIOE->CRL |= (copy_u8Mode << copy_u8Pin * 4);  break;
		        case PORTF:
		        	MGPIOF->CRL &=   ~((0b1111) << copy_u8Pin * 4);
		        	MGPIOF->CRL |= (copy_u8Mode << copy_u8Pin * 4);  break;
		        case PORTG:
		        	MGPIOG->CRL &=   ~((0b1111) << copy_u8Pin * 4);
		        	MGPIOG->CRL |= (copy_u8Mode << copy_u8Pin * 4);  break;
	         }
		}
		else if(copy_u8Pin >= 8 && copy_u8Pin < 16)
		{
			copy_u8Pin-=8;
			switch(copy_u8Port)
	         {
		        case PORTA:
		        	MGPIOA->CRL &=   ~((0b1111) << copy_u8Pin * 4);
		        	MGPIOA->CRH |= (copy_u8Mode << copy_u8Pin * 4);  break;
		        case PORTB:
		        	MGPIOB->CRL &=   ~((0b1111) << copy_u8Pin * 4);
		        	MGPIOB->CRH |= (copy_u8Mode << copy_u8Pin * 4);  break;
		        case PORTC:
		        	MGPIOC->CRL &=   ~((0b1111) << copy_u8Pin * 4);
		        	MGPIOC->CRH |= (copy_u8Mode << copy_u8Pin * 4);  break;
		        case PORTD:
		        	MGPIOD->CRL &=   ~((0b1111) << copy_u8Pin * 4);
		        	MGPIOD->CRH |= (copy_u8Mode << copy_u8Pin * 4);  break;
		        case PORTE:
		        	MGPIOE->CRL &=   ~((0b1111) << copy_u8Pin * 4);
		        	MGPIOE->CRH |= (copy_u8Mode << copy_u8Pin * 4);  break;
		        case PORTF:
		        	MGPIOF->CRL &=   ~((0b1111) << copy_u8Pin * 4);
		        	MGPIOF->CRH |= (copy_u8Mode << copy_u8Pin * 4);  break;
		        case PORTG:
		        	MGPIOG->CRL &=   ~((0b1111) << copy_u8Pin * 4);
		        	MGPIOG->CRH |= (copy_u8Mode << copy_u8Pin * 4);  break;
	         }
		}
}
void MGPIO_voidSetPinValue(u8 copy_u8Port ,u8 copy_u8Pin ,u8 copy_u8Value)
{
	
	switch(copy_u8Port){
		case PORTA:

			if( copy_u8Value == GPIO_HIGH ){

				SET_BIT( MGPIOA->ODR , copy_u8Pin );

			}else if( copy_u8Value == GPIO_LOW ){
				CLR_BIT( MGPIOA->ODR , copy_u8Pin );
			}

			break;
		case PORTB:

			if( copy_u8Value == GPIO_HIGH ){

				SET_BIT( MGPIOB->ODR , copy_u8Pin );

			}else if( copy_u8Value == GPIO_LOW ){
				CLR_BIT( MGPIOB->ODR , copy_u8Pin );
			}

			break;
		case PORTC:

			if( copy_u8Value == GPIO_HIGH ){

				SET_BIT( MGPIOC->ODR , copy_u8Pin );

			}else if( copy_u8Value == GPIO_LOW ){
				CLR_BIT( MGPIOC->ODR , copy_u8Pin );
			}

			break;
	}
}

u8 MGPIO_voidGetPinValue(u8 copy_u8Port ,u8 copy_u8Pin )
{
	u8 LocalResult = 0;
	switch (copy_u8Port)
	{
		case PORTA:  LocalResult= GET_BIT(MGPIOA->IDR,copy_u8Pin);       break;
		case PORTB:  LocalResult= GET_BIT(MGPIOB->IDR,copy_u8Pin);       break;
		case PORTC:  LocalResult= GET_BIT(MGPIOC->IDR,copy_u8Pin);       break;
	}
	return LocalResult;
}
void MGPIO_voidSetPinValueBSRR(u8 copy_u8Port ,u8 copy_u8Pin ,u8 copy_u8Value)
{
	switch(copy_u8Port)
	{
		case PORTA: 
			if(copy_u8Value == GPIO_HIGH)
			{
				SET_BIT(MGPIOA->BSRR,copy_u8Pin);
			}
			else if (copy_u8Value == GPIO_LOW )
			{
				copy_u8Pin-=16;
				SET_BIT(MGPIOA->BSRR,copy_u8Pin);
			}
		break;
		case PORTB: 
			if(copy_u8Value == GPIO_HIGH)
			{
				SET_BIT(MGPIOB->BSRR,copy_u8Pin);
			}
			else if (copy_u8Value == GPIO_LOW )
			{
				copy_u8Pin-=16;
				SET_BIT(MGPIOB->BSRR,copy_u8Pin);
			}
		break;
		case PORTC: 
			if(copy_u8Value == GPIO_HIGH)
			{
				SET_BIT(MGPIOC->BSRR,copy_u8Pin);
			}
			else if (copy_u8Value == GPIO_LOW )
			{
				copy_u8Pin-=16;
				SET_BIT(MGPIOC->BSRR,copy_u8Pin);
			}
		break;
	}
}
void MGPIO_voidClrPinValueBRR(u8 copy_u8Port ,u8 copy_u8Pin )
{
	switch(copy_u8Port)
	{
		case PORTA: SET_BIT(MGPIOA->BRR,copy_u8Pin); break;
		case PORTB: SET_BIT(MGPIOB->BRR,copy_u8Pin); break;
		case PORTC: SET_BIT(MGPIOC->BRR,copy_u8Pin); break;
	}
}
void MGPIO_voidLockBits(u8 copy_u8Port,u8 copy_u8Pin)
{
	
	switch(copy_u8PORT)
	{
		case PORTA:
		CLR_BIT(MGPIOA->LCKR,16);
        SET_BIT(MGPIOA->LCKR,copy_u8Pin);
		SET_BIT(MGPIOA->LCKR,16);
		break;
		case PORTB:
        CLR_BIT(MGPIOB->LCKR,16);
        SET_BIT(MGPIOB->LCKR,copy_u8Pin);
		SET_BIT(MGPIOB->LCKR,16);
		break;
		case PORTC:
		CLR_BIT(MGPIOC->LCKR,16);
        SET_BIT(MGPIOC->LCKR,copy_u8Pin);
		SET_BIT(MGPIOC->LCKR,16);
		break;
	}
}