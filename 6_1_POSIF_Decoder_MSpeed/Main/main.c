
/*************
Author:Yunchuan Ni 
Description:POSIF CCU4 �����ϣ����m�����٣� �ѱ�����������������õ�λ�ô�����
*************/

/*
main����
*/

#include <XMC4400.h>
#include "CCU4.h"
#include "Irq_Handle.h"
#include "GPIO.h"
#include "Var_Init.h"
#include "POSIF.h"

int main(void)
{
	GPIO_Init();
	CCU4_Init();
	POSIF0_Init();
	CCU40_CC40_Start();
	CCU40_CC41_Start();
	CCU40_CC42_Start();
	IRQ_Enable();
	
	while(1)
	{
		Decoder_Count = (CCU40_CC40->TIMER)&0x0000FFFF;  
	}
}


