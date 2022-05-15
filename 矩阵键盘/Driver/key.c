#include "key.h"

void Key_GPIO_Config(void)
{
	GPIO_InitDef GPIO_InitStructure;
	GPIO_InitStructure.Mode = GPIO_HighZ;
	GPIO_InitStructure.Pin = GPIO_Pin_ALL;
	GPIO_Config(GPIO_P6,&GPIO_InitStructure);
}
unsigned char  Mkey_Read(void)
{
	unsigned char val=16;
		switch(P6)
		{
			case 0x11:  val = 0;
			break;
			case 0x21:  val = 1;
			break;			
			case 0x41:  val = 2;
			break;			
			case 0x81:  val = 3;
			break;
			
			case 0x12:  val = 4;
			break;			
			case 0x22:  val = 5;
			break;			
			case 0x42:  val = 6;
			break;			
			case 0x82:  val = 7;
			break;				
			
			case 0x14:  val = 8;
			break;			
			case 0x24:  val = 9;
			break;			
			case 0x44:  val = 10;
			break;			
			case 0x84:  val = 11;
			break;			
			
			case 0x18:  val = 12;
			break;			
			case 0x28:  val = 13;
			break;			
			case 0x48:  val = 14;
			break;			
			case 0x88:  val = 15;
			break;	
			default:val=16;
				break;
		}

return val;

}