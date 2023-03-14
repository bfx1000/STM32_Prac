#include "./LED/bsp_led.h"

void LED_GPIO_Init(void){
	
	// 引入 GPIO_InitTypeDef 类变量
	GPIO_InitTypeDef  LED_GPIO_Init;
	
	// 初始化时钟
	__HAL_RCC_GPIOB_CLK_ENABLE();
	
	LED_GPIO_Init.Mode=GPIO_MODE_OUTPUT_PP;
	LED_GPIO_Init.Pin=GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_5;
	LED_GPIO_Init.Pull=GPIO_NOPULL;
	LED_GPIO_Init.Speed=GPIO_SPEED_FREQ_LOW;
	
	HAL_GPIO_Init(GPIOB,&LED_GPIO_Init);
}