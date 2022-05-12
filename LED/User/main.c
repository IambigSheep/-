#include "main.h"




void main()
{
	LED_GPIO_Config();			//LED初始化
	KEY_GPIO_Config();			//按键初始化
	GPIO_Pwm_Pin_Config();		//特殊IO口配置
	
	LED0 = 0;
	LED1 = 0;
	
	while(1)
	{
		if(KEY1)				//按下LED0两秒间隔闪烁
		{
			LED0 = 1;
			LED1 = 0;
			Delay1ms(2000);
			LED0 = 0;
			LED1 = 0;
			Delay1ms(2000);
		}
		if(KEY2)				//按下LED1两秒间隔闪烁
		{
			LED0 = 0;
			LED1 = 1;
			Delay1ms(2000);
			LED0 = 0;
			LED1 = 0;
			Delay1ms(2000);
		}
		if(KEY3)				//按下LED0、LED1两秒间隔闪烁
		{
			LED0 = 1;
			LED1 = 1;
			Delay1ms(2000);
			LED0 = 0;
			LED1 = 0;
			Delay1ms(2000);
		}
	}
}