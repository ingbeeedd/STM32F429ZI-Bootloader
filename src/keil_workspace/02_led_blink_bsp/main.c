#include "Board_LED.h"

int main(void)
{
	LED_Initialize();
	
	/*
	LED GPIO Pins
	static const GPIO_PIN LED_PIN[] = {
		{ GPIOG, GPIO_PIN_13, 0U },
		{ GPIOG, GPIO_PIN_14, 0U }
	};
	
	int32_t LED_On (uint32_t num) {
		int32_t retCode = 0;

		if (num < LED_COUNT) {
			HAL_GPIO_WritePin(LED_PIN[num].port, LED_PIN[num].pin, GPIO_PIN_SET);
		}
		else {
			retCode = -1;
		}

		return retCode;
	}
	*/
	
	LED_On(0);
	LED_On(1);
	
	while(1);
}
