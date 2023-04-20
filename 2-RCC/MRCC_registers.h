

#ifndef REG_H
#define REG_H

#include "STD_TYPES.h"
#define MRCC_START_ADDRESS 0x40021000

typedef struct {
	
	volatile u32 CR;
	volatile u32 CFGR;
	volatile u32 CIR;
	volatile u32 APB2RSTR;
	volatile u32 APB1RSTR;
	volatile u32 AHBENR;
	volatile u32 APB2ENR;
	volatile u32 APB1ENR;
	volatile u32 BDCR;
	volatile u32 CSR;
	
}RCC_registers;

#define MRCC ((volatile RCC_registers*)MRCC_START_ADDRESS)


#endif
