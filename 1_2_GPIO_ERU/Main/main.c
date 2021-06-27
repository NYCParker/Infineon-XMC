
/*************
Author:Yunchuan Ni 
Description:GPIO ���� ERU�¼�����ʵ���ж� GPIO.C��
�ò���PWM�Ĺܽ�����ERU���ĸ����� ����ERU�ж�
�����ڿ��ٱ�������IPM�Ĺ����ź����ţ����û��Ӳ��������·��
//ʵ�ⷢ�� Ӣ�����ERU ����Ϊ�� ����Ϊ�� ����Ϊ�� ����Ϊ�� 
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
	ERU0_Init();
	IRQ_Enable();
	
	while(1)
	{
		Rising_Edge_Count = (CCU40_CC41->TIMER)&0x0000FFFF;    //ָʾ������������
	}
}


