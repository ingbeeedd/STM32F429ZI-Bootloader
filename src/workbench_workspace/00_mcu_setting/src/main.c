/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f4xx.h"
#include "stm32f429i_discovery.h"
			

int main(void)
{
	BSP_LED_Init(0);
	BSP_LED_Init(1);

	BSP_LED_On(0);
	BSP_LED_On(1);

	for(;;);
}