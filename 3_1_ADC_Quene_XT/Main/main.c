
/*
main����
MCLK=32MHz��PCLK=64MHz ����һ��XMC1300 ��ʱ������AD���� ���ڷ�����ͨ��Э��δ����
*/

#include <XMC1300.h>
#include "SCU.h"
#include "GPIO.h"
#include "CCU4.h"
#include "VADC.h"
#include "USIC.h"
#include "Irq_Handle.h"
#include "stdio.h"

int main(void)
{	
    SCU_Init();
	GPIO_Init();
	CCU4_Init();
	VADC_Init();
	UART_Init();
	IRQ_Enable();
	CCU40_CC40_Start();
    
	printf("��ʼ���У�\n");
	
	while(1)
	{
		
    }
}

int fputc(int ch,FILE *f)
{
	UART_SendData(ch);
	return ch;
}