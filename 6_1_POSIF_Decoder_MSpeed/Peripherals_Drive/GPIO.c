/*
GPIO 
��·�������
*/

#include <XMC4400.h>
#include "GPIO.h"
#include <xmc_gpio.h>

void GPIO_Init(void)
{
	XMC_GPIO_CONFIG_t config;
	
    config.mode = XMC_GPIO_MODE_INPUT_PULL_UP;           //��·����ź�
    XMC_GPIO_Init(QEI_A, &config);
    XMC_GPIO_Init(QEI_B, &config);
	XMC_GPIO_Init(QEI_Z, &config);
	
	config.mode = XMC_GPIO_MODE_OUTPUT_PUSH_PULL;        //ʹ��
	XMC_GPIO_Init(QEI_Enable, &config);	
}
