#include "main.h"




void main()
{
	LED_GPIO_Config();			//LED��ʼ��
	KEY_GPIO_Config();			//������ʼ��
	GPIO_Pwm_Pin_Config();		//����IO������
	
	LED0 = 0;
	LED1 = 0;
	
	while(1)
	{
		if(KEY1)				//����LED0��������˸
		{
			LED0 = 1;
			LED1 = 0;
			Delay1ms(2000);
			LED0 = 0;
			LED1 = 0;
			Delay1ms(2000);
		}
		if(KEY2)				//����LED1��������˸
		{
			LED0 = 0;
			LED1 = 1;
			Delay1ms(2000);
			LED0 = 0;
			LED1 = 0;
			Delay1ms(2000);
		}
		if(KEY3)				//����LED0��LED1��������˸
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