#ifndef __MAIN_H
#define __MAIN_H


#include "STC15.H"
#include "GPIO.h"
#include "bsp_led.h"
#include "delay.h"
#include "intrins.h"

sbit KEY1 = P6^0;
sbit KEY2 = P6^1;
sbit KEY3 = P6^2;
sbit LED0 = P6^3;
sbit LED1 = P6^4;

#endif