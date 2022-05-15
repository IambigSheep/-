#include "seg.h"

void Seg_GPIO_Config(void)
{
	GPIO_InitDef GPIO_InitStructure;
	GPIO_InitStructure.Mode = GPIO_OUT_PP;
	GPIO_InitStructure.Pin = GPIO_Pin_ALL;
	GPIO_Config(GPIO_P7,&GPIO_InitStructure);
}