/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* 文件名     : led
* 作者       : zhengwei
* 版本       : v0.0.1
* 时间       : 2020/10/20
* 描述       : led驱动头文件
****************************************************************************
* 副本
*
*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

#ifndef_LED_H
#define_LED_H
\*头文件---------------------------------------------------*/
#include<ioCC2530.h>
/*宏定义---------------------------------------------------*/
/*结构体或枚举---------------------------------------------------*/
typedef enum enLedNum
{
  LED_ALL_E,
  LED_LED1_E,
  LED_LED2_E,
  LED_LED3_E,
  LED_MAX
}LED_NUM_E;
/*函数声明---------------------------------------------------*/
void LedInit (void);
void LedOn (unsigned char ucLedNum);
void LedOff (unsigned char ucLedNum);
void LedToggle (unsigned char ucLedNum);
/*外部变量引用---------------------------------------------------*/


