#include "gpio.h"

void PWM_GPIO_Init(void)			//ÌØÊâ¶Ë¿ÚÅäÖÃ
{
	GPIO_InitTypeDef GPIO_InitTypeStrcture;
	
	GPIO_InitTypeStrcture.Mode = GPIO_OUT_PP;
	GPIO_InitTypeStrcture.Pin  = GPIO_Pin_6 | GPIO_Pin_7;
	GPIO_Config(GPIO_P0,&GPIO_InitTypeStrcture);
	
	GPIO_InitTypeStrcture.Mode = GPIO_OUT_PP;
	GPIO_InitTypeStrcture.Pin = 0;
	GPIO_InitTypeStrcture.Pin = GPIO_Pin_6 | GPIO_Pin_7;
	GPIO_Config(GPIO_P1,&GPIO_InitTypeStrcture);
	
	GPIO_InitTypeStrcture.Mode = GPIO_OUT_PP;
	GPIO_InitTypeStrcture.Pin = 0;
	GPIO_InitTypeStrcture.Pin = GPIO_Pin_1 | GPIO_Pin_2 | GPIO_Pin_3 | GPIO_Pin_7;
	GPIO_Config(GPIO_P2,&GPIO_InitTypeStrcture);
	
	GPIO_InitTypeStrcture.Mode = GPIO_OUT_PP;
	GPIO_InitTypeStrcture.Pin = 0;
	GPIO_InitTypeStrcture.Pin = GPIO_Pin_7;
	GPIO_Config(GPIO_P3,&GPIO_InitTypeStrcture);
	
	GPIO_InitTypeStrcture.Mode = GPIO_OUT_PP;
	GPIO_InitTypeStrcture.Pin = 0;
	GPIO_InitTypeStrcture.Pin = GPIO_Pin_5 | GPIO_Pin_4 | GPIO_Pin_2;
	GPIO_Config(GPIO_P4,&GPIO_InitTypeStrcture);
}

unsigned char GPIO_Config(unsigned char GPIO,GPIO_InitTypeDef *GPIOx)		//GPIO¶Ë¿ÚÅäÖÃ
{
	if(GPIO >GPIO_P7) return 1;
	if(GPIOx->Mode >GPIO_OUT_PP) return 2;
	if(GPIO == GPIO_P0)
	{
		if(GPIOx->Mode == GPIO_PullUp)	P0M1 &= ~(GPIOx->Pin) ,  P0M0 &= ~(GPIOx->Pin);
		if(GPIOx->Mode == GPIO_HighZ)	P0M1 |= GPIOx->Pin	  ,  P0M0 &= ~(GPIOx->Pin);
		if(GPIOx->Mode == GPIO_OUT_OD)	P0M1 |= GPIOx->Pin	  ,  P0M0 |= GPIOx->Pin;
		if(GPIOx->Mode == GPIO_OUT_PP)	P0M1 &= ~(GPIOx->Pin) ,  P0M0 |= GPIOx->Pin;
	}
	if(GPIO == GPIO_P1)
	{
		if(GPIOx->Mode == GPIO_PullUp)	P1M1 &= ~(GPIOx->Pin) ,  P1M0 &= ~(GPIOx->Pin);
		if(GPIOx->Mode == GPIO_HighZ)	P1M1 |= GPIOx->Pin	  ,  P1M0 &= ~(GPIOx->Pin);
		if(GPIOx->Mode == GPIO_OUT_OD)	P1M1 |= GPIOx->Pin	  ,  P1M0 |= GPIOx->Pin;
		if(GPIOx->Mode == GPIO_OUT_PP)	P1M1 &= ~(GPIOx->Pin) ,  P1M0 |= GPIOx->Pin;
	}
	if(GPIO == GPIO_P2)
	{
		if(GPIOx->Mode == GPIO_PullUp)	P2M1 &= ~(GPIOx->Pin) ,  P2M0 &= ~(GPIOx->Pin);
		if(GPIOx->Mode == GPIO_HighZ)	P2M1 |= GPIOx->Pin	  ,  P2M0 &= ~(GPIOx->Pin);
		if(GPIOx->Mode == GPIO_OUT_OD)	P2M1 |= GPIOx->Pin	  ,  P2M0 |= GPIOx->Pin;
		if(GPIOx->Mode == GPIO_OUT_PP)	P2M1 &= ~(GPIOx->Pin) ,  P2M0 |= GPIOx->Pin;
	}
	if(GPIO == GPIO_P3)
	{
		if(GPIOx->Mode == GPIO_PullUp)	P3M1 &= ~(GPIOx->Pin) ,  P3M0 &= ~(GPIOx->Pin);
		if(GPIOx->Mode == GPIO_HighZ)	P3M1 |= GPIOx->Pin	  ,  P3M0 &= ~(GPIOx->Pin);
		if(GPIOx->Mode == GPIO_OUT_OD)	P3M1 |= GPIOx->Pin	  ,  P3M0 |= GPIOx->Pin;
		if(GPIOx->Mode == GPIO_OUT_PP)	P3M1 &= ~(GPIOx->Pin) ,  P3M0 |= GPIOx->Pin;
	}
	if(GPIO == GPIO_P4)
	{
		if(GPIOx->Mode == GPIO_PullUp)	P4M1 &= ~(GPIOx->Pin) ,  P4M0 &= ~(GPIOx->Pin);
		if(GPIOx->Mode == GPIO_HighZ)	P4M1 |= GPIOx->Pin	  ,  P4M0 &= ~(GPIOx->Pin);
		if(GPIOx->Mode == GPIO_OUT_OD)	P4M1 |= GPIOx->Pin	  ,  P4M0 |= GPIOx->Pin;
		if(GPIOx->Mode == GPIO_OUT_PP)	P4M1 &= ~(GPIOx->Pin) ,  P4M0 |= GPIOx->Pin;
	}
	if(GPIO == GPIO_P5)
	{
		if(GPIOx->Mode == GPIO_PullUp)	P5M1 &= ~(GPIOx->Pin) ,  P5M0 &= ~(GPIOx->Pin);
		if(GPIOx->Mode == GPIO_HighZ)	P5M1 |= GPIOx->Pin	  ,  P5M0 &= ~(GPIOx->Pin);
		if(GPIOx->Mode == GPIO_OUT_OD)	P5M1 |= GPIOx->Pin	  ,  P5M0 |= GPIOx->Pin;
		if(GPIOx->Mode == GPIO_OUT_PP)	P5M1 &= ~(GPIOx->Pin) ,  P5M0 |= GPIOx->Pin;
	}
	if(GPIO == GPIO_P6)
	{
		if(GPIOx->Mode == GPIO_PullUp)	P6M1 &= ~(GPIOx->Pin) ,  P6M0 &= ~(GPIOx->Pin);
		if(GPIOx->Mode == GPIO_HighZ)	P6M1 |= GPIOx->Pin	  ,  P6M0 &= ~(GPIOx->Pin);
		if(GPIOx->Mode == GPIO_OUT_OD)	P6M1 |= GPIOx->Pin	  ,  P6M0 |= GPIOx->Pin;
		if(GPIOx->Mode == GPIO_OUT_PP)	P6M1 &= ~(GPIOx->Pin) ,  P6M0 |= GPIOx->Pin;
	}
	if(GPIO == GPIO_P7)
	{
		if(GPIOx->Mode == GPIO_PullUp)	P7M1 &= ~(GPIOx->Pin) ,  P7M0 &= ~(GPIOx->Pin);
		if(GPIOx->Mode == GPIO_HighZ)	P7M1 |= GPIOx->Pin	  ,  P7M0 &= ~(GPIOx->Pin);
		if(GPIOx->Mode == GPIO_OUT_OD)	P7M1 |= GPIOx->Pin	  ,  P7M0 |= GPIOx->Pin;
		if(GPIOx->Mode == GPIO_OUT_PP)	P7M1 &= ~(GPIOx->Pin) ,  P7M0 |= GPIOx->Pin;
	}
	return 0;
}