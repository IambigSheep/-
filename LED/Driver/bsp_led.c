#include "bsp_led.h"


void LED_GPIO_Config(void)			//LED初始化
{
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.Mode = GPIO_PullUp;
	GPIO_InitStructure.Pin = GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_2;
	GPIO_Config(GPIO_P1,&GPIO_InitStructure);
}

void KEY_GPIO_Config(void)			//按键初始化
{
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.Mode = GPIO_PullUp;
	GPIO_InitStructure.Pin = GPIO_Pin_3 | GPIO_Pin_4;
	GPIO_Config(GPIO_P1,&GPIO_InitStructure);
}