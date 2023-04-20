#ifndef MGPIO_REGISTER_H
#define MGPIO_REGISTER_H

#include "STD_TYPES.h"

#define GPIOA_START_ADDRESS 0x40010800
#define GPIOB_START_ADDRESS 0x40010C00
#define GPIOC_START_ADDRESS 0x40011000
#define GPIOD_START_ADDRESS 0x40011400
#define GPIOE_START_ADDRESS 0x40011800
#define GPIOF_START_ADDRESS 0x40011C00
#define GPIOG_START_ADDRESS 0x40012000

typedef struct
{
	volatile u32  CRL   ;
	volatile u32  CRH   ;
	volatile u32  IDR   ;
	volatile u32  ODR   ;
	volatile u32  BSRR  ;
	volatile u32  BRR   ;
	volatile u32  LCKR  ;
}GPIO_REG;

#define MGPIOA ((volatile GPIO_REG*)GPIOA_START_ADDRESS)
#define MGPIOB ((volatile GPIO_REG*)GPIOB_START_ADDRESS)
#define MGPIOC ((volatile GPIO_REG*)GPIOC_START_ADDRESS)
#define MGPIOD ((volatile GPIO_REG*)GPIOD_START_ADDRESS)
#define MGPIOE ((volatile GPIO_REG*)GPIOE_START_ADDRESS)
#define MGPIOF ((volatile GPIO_REG*)GPIOF_START_ADDRESS)
#define MGPIOG ((volatile GPIO_REG*)GPIOG_START_ADDRESS)



#endif
