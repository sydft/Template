/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
* 文件名     : main
* 作者       : zhengwei
* 版本       : v0.0.1
* 时间       : 2020/10/20
* 描述       : 主函数文件
****************************************************************************
* 副本
*
*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>*/

/*头文件---------------------------------------------------*/
#include"led.h"
#include"key.h"
/*宏定义---------------------------------------------------*/
/*结构体或枚举---------------------------------------------------*/
/*内部函数声明---------------------------------------------------*/
/*函数---------------------------------------------------*/
/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

*函数名     : DelayMs
*参数       : unsigned int time
*返回       : void
*作者       : zhengwei
*时间       : 2020/10/27
*描述       : 毫秒级延时
---------------------------------------------------*/
void DelayMs (unsigned int time)
{
  unsigned int i=0;
  unsigned int j;
  for(i=0;i<time;i++)
  {
    for(j=0;j<475;j++)
    {
      asm("NOP");
      asm("NOP");
      asm("NOP");
    }
  }
}

/*>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

*函数名     : main
*参数       : void
*返回       : void
*作者       : zhengwei
*时间       : 2020/10/20
*描述       : 主函数入口
---------------------------------------------------*/
void main (void)
{
  //初始化
  LedInit();
  KeyInit();
  //关闭所有灯
  LedOff(LED_ALL_E); 
  while(1)
  {
    if(KEY_PRESS==KeyStateGet(KEY_KEY1_E))
    {
      DelayMs(100);
      if(KEY_PRESS==KeyStateGet(KEY_KEY1_E))
      {
        LedToggle(LED_LED1_E);
        //等到按键松开
        while(KEY_PRESS==KeyStateGet(KEY_KEY1_E));
      }
    }
  }
}