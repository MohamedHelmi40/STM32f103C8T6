#ifndef EXTI_REGISTER_H
#define EXTI_REGISTER_H




#define EXTI_BASE_ADDRESS 0x40010400

typedef struct{
	
	volatile u32 IMR;
	volatile u32 EMR;
	volatile u32 RTSR;
	volatile u32 FTSR;
	volatile u32 SWIER;
	volatile u32 PR;
}EXTI_reg

#define EXTI  ((volatile EXTI_reg*)EXTI_BASE_ADDRESS)







#endif