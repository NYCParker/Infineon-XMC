
/*************
Author:Yunchuan Ni 
Description:CCU4ģ���һ�������Ķ�ʱ�����ܣ���ʱʱ����CCU4����ʱ�ӣ�120M/��Ƶϵ����������ֵ����
*************/

/*
main����
*/

#include <XMC4400.h>
#include "CCU4.h"
#include "Irq_Handle.h"

int main(void)
{
	CCU4_Init();
	CCU40_CC40_Start();
	IRQ_Enable();
	
	while(1)
	{
	}
}


