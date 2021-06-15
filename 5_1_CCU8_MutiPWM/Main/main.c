
/*************
Author:Yunchuan Ni 
Description: ADCͬ������
*************/

/*
main����
*/

#include <XMC4400.h>
#include "GPIO.h"
#include "CCU8.h"
#include "Var_Init.h"
#include "Irq_Handle.h"

int main(void)
{
	GPIO_Init();
	CCU80_Init();
	CCU80_Start();
	IRQ_Enable();

	
	while(1)
	{
	}
}


