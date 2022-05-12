#ifndef __GPIO_H
#define __GPIO_H

#include "main.h"

#define GPIO_PullUp		0		//准双向口
#define GPIO_HighZ		1		//高阻输入
#define GPIO_OUT_OD		2		//开漏输出
#define GPIO_OUT_PP		3		//推挽输出

#define GPIO_Pin_0		0x01	//IO引脚 Px.0
#define GPIO_Pin_1		0x02	//IO引脚 Px.1
#define GPIO_Pin_2		0x04	//IO引脚 Px.2
#define GPIO_Pin_3		0x08	//IO引脚 Px.3
#define GPIO_Pin_4		0x10	//IO引脚 Px.4
#define GPIO_Pin_5		0x20	//IO引脚 Px.5
#define GPIO_Pin_6		0x40	//IO引脚 Px.6
#define GPIO_Pin_7		0x80	//IO引脚 Px.7
#define	GPIO_Pin_All	0xFF	//IO引脚 ALL

#define GPIO_P0			0
#define GPIO_P1			1
#define GPIO_P2			2
#define GPIO_P3			3
#define GPIO_P4			4
#define GPIO_P5			5
#define GPIO_P6			6
#define GPIO_P7			7

typedef struct
{
	unsigned char Mode;			//IO口模式
	unsigned char Pin;			//配置端口
} GPIO_InitTypeDef;

unsigned char GPIO_Config(unsigned char GPIO, GPIO_InitTypeDef *GPIOx);			//IO口配置
void GPIO_Pwm_Pin_Config(void);													//特殊IO口配置

#endif