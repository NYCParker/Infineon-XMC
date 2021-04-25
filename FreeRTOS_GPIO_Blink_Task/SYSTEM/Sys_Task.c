#include "Sys_Task.h"
#include "GPIO.h"
#include <xmc_gpio.h>
#include "Var_Init.h"
#include "portmacro.h"
#include "FreeRTOS.h"

//��������ջ
#define TASK1_STACK_SIZE 128    
StackType_t Task1Stack[TASK1_STACK_SIZE];   //512���ֽ� FreeRTOS�Ƽ�����С������ջ Ϊ�����ջ���ٵ��ڴ� ��λ��ַ�������һ��Ԫ�� ջ��ʱ ջ�������һ��Ԫ�ص�λ��

#define TASK2_STACK_SIZE 128
StackType_t Task1Stack[TASK2_STACK_SIZE];

//����������ƿ�
TCB_t Task1TCB;
TCB_t Task2TCB;

//software delay
void delay_Xms(uint16_t ticx)        //��� 0us
{
	uint16_t tici;
    unsigned char tica,ticb,ticc;
	
	for(tici=0; tici<ticx; tici++)
    {
	   for(ticc=1;ticc>0;ticc--)
         for(ticb=98;ticb>0;ticb--)
           for(tica=230;tica>0;tica--);
	}
}

//Task1
void Task1_Entry(void *p_arg)
{	
	for( ;; )
	{
		delay_Xms(500);
		XMC_GPIO_ToggleOutput(GPIO_LED1);
	}
}

//Task2
void Task2_Entry(void *p_arg)
{	
	for( ;; )
	{
		delay_Xms(500);
		XMC_GPIO_ToggleOutput(GPIO_LED2);
	}
}
