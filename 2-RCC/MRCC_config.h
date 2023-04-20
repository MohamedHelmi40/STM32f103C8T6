
#ifndef RCC_CONFIG_H
#define RCC_CONFIG_H



#define CLOCKTYPE   PLL
//you can choose  HSE , HSI ,PLL
#define CLOCKBYBASS RC
//you can choose CRYSTAL , RC 
#define MULTIPLICATION_FACTOR  PLL_INPUT_CLOCK_3
//you can choose PLL_INPUT_CLOCK_  2:16
#define PLL_ENTRY_CLOCK_SOURCE  PLL_HSI_2
//you can choose PLL_HSI_2 , PLL_HSE
#define PLL_HSE_DIVIDER  PLL_HSE_NOT_DIVIDED
//you can choose PLL_HSE_NOT_DIVIDED , PLL_HSE_2
#define MICROCONTROLLER_CLOCK_OUTPUT  SYSTEM_CLOCK
//you can choose SYSTEM_CLOCK,HSI_CLOCK,HSE_CLOCK,PLL_2_CLOCK




#endif
