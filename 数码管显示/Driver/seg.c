#include "seg.h"

void SEG_GPIO_Config(void)
{
	GPIO_InitTypeDef GPIO_InitTypeStrcture;
	GPIO_InitTypeStrcture.Mode = GPIO_OUT_PP;
	GPIO_InitTypeStrcture.Pin = GPIO_Pin_ALL;
	GPIO_Config(GPIO_P7,&GPIO_InitTypeStrcture);
}

