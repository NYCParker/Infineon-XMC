
/*************
Author:Yunchuan Ni 
Description:USIC��UART_MODE ���Ϸ��͹���+�����λ������ʾ��������,��ѡTarget->Use MicroLIB,����Printf�ض���
*************/

/*
main����
*/

#include <XMC4400.h>
#include "Irq_Handle.h"
#include "GPIO.h"
#include "USIC.h"
#include "stdio.h"
#include "Var_Init.h"

void delay_Xms(uint16_t ticx)        //120Mhz��Ƶ
{
	uint16_t tici;
    unsigned char tica,ticb,ticc;
	
	for(tici=0; tici<ticx; tici++)
    {
	   for(ticc=1;ticc>0;ticc--)
         for(ticb=98;ticb>0;ticb--)
           for(tica=230;tica>0;tica--);
	}
}

int fputc(int ch,FILE *f)
{
	UART_SendData(ch);
	return ch;
}

int main(void)
{
	GPIO_Init();
	UART_Init();
	IRQ_Enable();
	
	while(1)
	{
		delay_Xms(500);
		printf("����Ҫ��ӡ����Ϣ\n");
	}
}


