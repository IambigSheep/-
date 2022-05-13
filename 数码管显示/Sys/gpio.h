#ifndef __GPIO_H
#define __GPIO_H

#include "main.h"

#define GPIO_PullUp 		0		//输出模式配置		GPIO_PullUp	通用输入输出
#define GPIO_HighZ			1		//					GPIO_HighZ	高阻输入
#define GPIO_OUT_OD			2		// 					GPIO_OUT_OD	开漏输出
#define GPIO_OUT_PP			3		//					GPIO_OUT_PP	推挽输出


#define GPIO_Pin_0			0x01		//引脚选择
#define GPIO_Pin_1			0x02
#define GPIO_Pin_2			0x04
#define GPIO_Pin_3			0x08
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
}GPIO_InitTypeDef;

unsigned char GPIO_Config(unsigned char GPIO,GPIO_InitTypeDef *GPIOx);		//GPIO端口配置
void PWM_GPIO_Init(void);			//特殊端口配置

#endif