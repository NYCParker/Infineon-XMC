
/*************
Author:Yunchuan Ni 
Description: DAC ��� ������DEBUG�����˷ŵ�·��ʧ����ѹ���
//DAC������Ҫ����һ���㶨�ĵ�ѹ���ɣ�ֱ����XMC�Ŀ⺯������
*************/

/*
main����
*/

#include <XMC4400.h>
#include "DAC.h"
#include "Irq_Handle.h"

int main(void)
{
	DAC_Init();
	
	DAC_Output0(4095);
	DAC_Output1(2000);
	
	while(1)
	{
	}
}


