#ifndef __GPIO_H
#define __GPIO_H

#include "main.h"


#define GPIO_PullUp 		0
#define GPIO_HighZ 			1	
#define GPIO_OUT_OD			2
#define GPIO_OUT_PP  		3

#define GPIO_Pin_0			0x01
#define GPIO_Pin_1			0x02
#define GPIO_Pin_2    		0x04
#define GPIO_Pin_3 			0x08
#define GPIO_Pin_4			0x10
#define GPIO_Pin_5			0x20
#define GPIO_Pin_6			0x40
#define GPIO_Pin_7			0x80
#define GPIO_Pin_ALL		0xff

#define GPIO_P0				0
#define GPIO_P1				1
#define GPIO_P2				2
#define GPIO_P3				3
#define GPIO_P4				4
#define GPIO_P5				5
#define GPIO_P6				6
#define GPIO_P7				7

typedef struct
{
	unsigned char Mode;
	unsigned char Pin;
}GPIO_InitDef;

unsigned char GPIO_Config(unsigned char GPIO,GPIO_InitDef *GPIOx);
void PWM_GPIO_Config(void);

#endif