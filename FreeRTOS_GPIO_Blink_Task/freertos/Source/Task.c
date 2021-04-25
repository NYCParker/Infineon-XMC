#include "Task.h"
#include "projdefs.h"
#include "FreeRTOS.h"
#include "portmacro.h"

//��̬���񴴽���������Ҫ�Լ�ָ������ջ��
#if( configSUPPORT_STATIC_ALLOCATION == 1 )

TaskHandle_t xTaskCreateStatic(	TaskFunction_t pxTaskCode,           //������ڵ�ַ���������� ���Ͷ�����һ��ָ����������ָ��
					            const char * const pcName,           //ָ�� �������Ƶ�ַ
					            const uint32_t ulStackDepth,         //����ջ��С����λΪ��
					            void * const pvParameters,           //ָ����������� ��������������ĵ�ַ��������⣩
					            StackType_t * const puxStackBuffer,  //����ջ����ʼ��ַ
					            TCB_t * const pxTaskBuffer )         //������ƿ�ָ��
{
	TCB_t *pxNewTCB;
	TaskHandle_t xReturen;
	
	if((pxTaskBuffer != NULL)&&(puxStackBuffer != NULL))
	{
		pxNewTCB = (TCB_t*) pxTaskBuffer;  //��ַ��pxNewTCB
		pxNewTCB->pxStack = (StackType_t *)puxStackBuffer; //����ջ����ʼ��ַ
	}
	
	return xReturen;
}


static void prvInitialiseNewTask( 	TaskFunction_t pxTaskCode,              //�������
									const char * const pcName,              //������
									const uint32_t ulStackDepth,            //����ջ��С
									void * const pvParameters,              //���ݸ�����Ĳ���
									TaskHandle_t * const pxCreatedTask,     //*****������
									TCB_t *pxNewTCB )                       //������ƿ�ָ��
{
	StackType_t *pxTopOfStack;
	UBaseType_t x;
	
	pxTopOfStack = pxNewTCB->pxStack + (ulStackDepth - (uint32_t)1);    //ջ����ַ��ջ��������������ջ�գ�ջ��ָ����������һ��Ԫ�أ������ڴ����ߵ�ַ��
	pxTopOfStack = (StackType_t *) \
	               ( ( ( uint32_t ) pxTopOfStack ) & ( ~( ( uint32_t ) 0x0007 ) ) ); //������8�ֽڶ��루��Ը��㲻�ã���֤M4��ַ���ʲ������⣩
	
	
	
	
}
#endif /* configSUPPORT_STATIC_ALLOCATION */

