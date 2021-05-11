
/*************
Author:Yunchuan Ni 
Description:��Capture������ʵ�ּ���Capture ���θߵ�ƽʱ�䲶��ĸ��Ӿ�׼����һ����ĳЩӦ�ã����������ٲ��٣��Ϻ���Ҫ��
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
		//��ȡ�����ֵһ���ڲ����ж��н��д���
	}
}


