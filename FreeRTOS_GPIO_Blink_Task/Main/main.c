
/*************
Author:Yunchuan Ni 
0-1 FreeRTOS�ں� taskʵ��
������һ�������ĺ�����������������ѭ���Ҳ��ܷ���
*************/

/*
main����
*/

#include <XMC4400.h>
#include "Irq_Handle.h"
#include "GPIO.h"
#include <xmc_gpio.h>
#include "Var_Init.h"
#include "List.h"
#include "Sys_Task.h"

int main(void)
{
	SysTick_Config(SystemCoreClock/1000);
	GPIO_Init();
	IRQ_Enable();
		
	while(1)
	{
		
	}
}


