
/*************
Author:Yunchuan Ni 
Description:GPIO�ڵ�DEMO�����������ΪFREERTOSϵͳ��ֲ�Ļ����ļ�
*************/

/*
main����
*/

#include <XMC4400.h>
#include "Irq_Handle.h"
#include "GPIO.h"
#include "Var_Init.h"

int main(void)
{
	SysTick_Config(SystemCoreClock/1000);
	GPIO_Init();
	IRQ_Enable();
	
	while(1)
	{
	}
}


