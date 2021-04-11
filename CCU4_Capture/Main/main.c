
/*************
Author:Yunchuan Ni 
Description:CCU4ģ��ʵ�ֶ��ⲿ�¼����������������������������ģ���ⲿ���룬����CCU40 CC41��������������֮����в���
*************/

/*
main����
*/

#include <XMC4400.h>
#include "CCU4.h"
#include "Irq_Handle.h"
#include "GPIO.h"
#include "Var_Init.h"

int main(void)
{
	GPIO_Init();
	CCU4_Init();
	CCU40_CC40_Start();
	CCU40_CC41_Start();
	IRQ_Enable();
	
	while(1)
	{
		//��ȡ�����ֵһ���ڲ����ж��н��д���
	}
}


