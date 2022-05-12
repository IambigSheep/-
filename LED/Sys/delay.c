#include "delay.h"



void Delay1ms(unsigned int val)		//@11.0592MHz
{
	unsigned char i, j;
	for(;val>0;val--)
	{
		_nop_();
		_nop_();
		_nop_();
		i = 11;
		j = 190;
		do
		{
			while (--j);
		} while (--i);
	}
}
