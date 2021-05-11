
/*************
Author:Yunchuan Ni 
Description:USIC��UART_MODE ���Ϸ��͹���
*************/

/*
main����
*/

#include <XMC4400.h>
#include "Irq_Handle.h"
#include "GPIO.h"
#include "USIC.h"
#include "Var_Init.h"

int main(void)
{
	GPIO_Init();
	UART_Init();
	IRQ_Enable();
	
	while(1)
	{
		//
	}
}


