
/*************
Author:Yunchuan Ni 
Description:�˳�����Counter�Ļ����� ʵ�ֶ�ʱ���������� 40 41������ʱ�� �ж��ڷ�תP1.1  42��P1.1�����ؼ���
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
	CCU40_CC42_Start();
	CCU40_CC41_Start();
	CCU40_CC40_Start();
	IRQ_Enable();
	
	while(1)
	{
		Rising_Edge_Count = (CCU40_CC42->TIMER)&0x0000FFFF;    //�����ؼ����ĸ���
	}
}


