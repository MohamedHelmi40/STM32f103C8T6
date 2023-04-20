
#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H

#define HSI 0
#define HSE 1
#define PLL 2
//multiplacation factor
#define PLL_INPUT_CLOCK_2    0
#define PLL_INPUT_CLOCK_3    1
#define PLL_INPUT_CLOCK_4    2
#define PLL_INPUT_CLOCK_5    3
#define PLL_INPUT_CLOCK_6    4
#define PLL_INPUT_CLOCK_7    5
#define PLL_INPUT_CLOCK_8    6
#define PLL_INPUT_CLOCK_9    7
#define PLL_INPUT_CLOCK_10   8
#define PLL_INPUT_CLOCK_11   9
#define PLL_INPUT_CLOCK_12   10
#define PLL_INPUT_CLOCK_13   11
#define PLL_INPUT_CLOCK_14   12
#define PLL_INPUT_CLOCK_15   13
#define PLL_INPUT_CLOCK_16   14


//PLL entry clock source
#define PLL_HSI_2   0
#define PLL_HSE     1

//HSE divider for PLL entry
#define PLL_HSE_NOT_DIVIDED 0
#define PLL_HSE_2           1

//Microcontroller clock output
#define SYSTEM_CLOCK   4
#define HSI_CLOCK      5
#define HSE_CLOCK      6
#define PLL_2_CLOCK    7






#endif
