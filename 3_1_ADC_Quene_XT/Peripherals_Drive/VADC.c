
#include <XMC1300.h>
#include "VADC.h"

void VADC_Init(void)
{
	WR_REG(VADC->CLC, VADC_CLC_DISR_Msk, VADC_CLC_DISR_Pos, 0);
	while((RD_REG(VADC->CLC, VADC_CLC_DISS_Msk, VADC_CLC_DISS_Pos))!= 0);
	
	WR_REG(VADC->GLOBCFG, VADC_GLOBCFG_DIVA_Msk, VADC_GLOBCFG_DIVA_Pos, 1);    //fADC=16Mhz
	
	/*************************************��������****************************************/
	VADC_G0->QINR0 =
				((0x1 << VADC_G_QINR0_RF_Pos) & VADC_G_QINR0_RF_Msk) |
		        ((0x0 << VADC_G_QINR0_REQCHNR_Pos) & VADC_G_QINR0_REQCHNR_Msk)|
		        ((0x1 << VADC_G_QINR0_EXTR_Pos) & VADC_G_QINR0_EXTR_Msk);		  //��0ͨ��0 �Զ����� �ⲿ���� 
	
    VADC_G0->QINR0 =
				((0x1 << VADC_G_QINR0_RF_Pos) & VADC_G_QINR0_RF_Msk) |
				((0x1 << VADC_G_QINR0_REQCHNR_Pos) & VADC_G_QINR0_REQCHNR_Msk);   //��0ͨ��1 �Զ����� 
	
    VADC_G0->QINR0 =
				((0x1 << VADC_G_QINR0_RF_Pos) & VADC_G_QINR0_RF_Msk) |
				((0x2 << VADC_G_QINR0_REQCHNR_Pos) & VADC_G_QINR0_REQCHNR_Msk);   //��0ͨ��2 �Զ����� 
	
    VADC_G0->QINR0 =
				((0x1 << VADC_G_QINR0_RF_Pos) & VADC_G_QINR0_RF_Msk) |
				((0x3 << VADC_G_QINR0_REQCHNR_Pos) & VADC_G_QINR0_REQCHNR_Msk);   //��0ͨ��3 �Զ����� 
				
    VADC_G0->QINR0 =
				((0x1 << VADC_G_QINR0_RF_Pos) & VADC_G_QINR0_RF_Msk) |
				((0x4 << VADC_G_QINR0_REQCHNR_Pos) & VADC_G_QINR0_REQCHNR_Msk);   //��0ͨ��4 �Զ����� 
				
    VADC_G0->QINR0 =
				((0x1 << VADC_G_QINR0_RF_Pos) & VADC_G_QINR0_RF_Msk) |
				((0x5 << VADC_G_QINR0_REQCHNR_Pos) & VADC_G_QINR0_REQCHNR_Msk);   //��0ͨ��5 �Զ����� 
				
    VADC_G0->QINR0 =
				((0x1 << VADC_G_QINR0_RF_Pos) & VADC_G_QINR0_RF_Msk) |
				((0x6 << VADC_G_QINR0_REQCHNR_Pos) & VADC_G_QINR0_REQCHNR_Msk);   //��0ͨ��6 �Զ����� 
				
    VADC_G0->QINR0 =
				((0x1 << VADC_G_QINR0_RF_Pos) & VADC_G_QINR0_RF_Msk) |
				((0x7 << VADC_G_QINR0_REQCHNR_Pos) & VADC_G_QINR0_REQCHNR_Msk);   //��0ͨ��7 �Զ����� 
				
	WR_REG(VADC_G0->CHCTR[0], VADC_G_CHCTR_RESREG_Msk, VADC_G_CHCTR_RESREG_Pos, 0);
	WR_REG(VADC_G0->CHCTR[1], VADC_G_CHCTR_RESREG_Msk, VADC_G_CHCTR_RESREG_Pos, 1);
	WR_REG(VADC_G0->CHCTR[2], VADC_G_CHCTR_RESREG_Msk, VADC_G_CHCTR_RESREG_Pos, 2);
	WR_REG(VADC_G0->CHCTR[3], VADC_G_CHCTR_RESREG_Msk, VADC_G_CHCTR_RESREG_Pos, 3);
	WR_REG(VADC_G0->CHCTR[4], VADC_G_CHCTR_RESREG_Msk, VADC_G_CHCTR_RESREG_Pos, 4);
	WR_REG(VADC_G0->CHCTR[5], VADC_G_CHCTR_RESREG_Msk, VADC_G_CHCTR_RESREG_Pos, 5);
	WR_REG(VADC_G0->CHCTR[6], VADC_G_CHCTR_RESREG_Msk, VADC_G_CHCTR_RESREG_Pos, 6);
	WR_REG(VADC_G0->CHCTR[7], VADC_G_CHCTR_RESREG_Msk, VADC_G_CHCTR_RESREG_Pos, 7);
	
	/*************************************��������****************************************/
	
	VADC_G0->QCTRL0 =
				((0x1 << VADC_G_QCTRL0_XTWC_Pos) & VADC_G_QCTRL0_XTWC_Msk) |        //����дXTSEL��XTMODE
				((0x0 << VADC_G_QCTRL0_XTSEL_Pos) & VADC_G_QCTRL0_XTSEL_Msk) |      //�ⲿ����Դ��CCU40_SR2
				((0x2 << VADC_G_QCTRL0_XTMODE_Pos) & VADC_G_QCTRL0_XTMODE_Msk); 	//��������Ч	
    WR_REG(VADC_G0->QMR0, VADC_G_QMR0_ENGT_Msk, VADC_G_QMR0_ENGT_Pos, 1);           //ʹ���ſ�
	WR_REG(VADC_G0->QMR0, VADC_G_QMR0_ENTR_Msk, VADC_G_QMR0_ENTR_Pos, 1);           //ʹ���ⲿ����
	
	WR_REG(VADC_G0->ARBCFG, VADC_G_ARBCFG_ANONC_Msk, VADC_G_ARBCFG_ANONC_Pos, 3);   //��������
	WR_REG(VADC_G0->ARBPR, VADC_G_ARBPR_ASEN0_Msk, VADC_G_ARBPR_ASEN0_Pos, 1);      //�����ٲ�ʱ϶0
	
	WR_REG(VADC->GLOBCFG, VADC_GLOBCFG_SUCAL_Msk, VADC_GLOBCFG_SUCAL_Pos, 1);       //������ʼУ׼�׶�	
	while((RD_REG(VADC_G0->ARBCFG, VADC_G_ARBCFG_CAL_Msk, VADC_G_ARBCFG_CAL_Pos))!= 0){};
		
	WR_REG(VADC_G0->RCR[7], VADC_G_RCR_SRGEN_Msk, VADC_G_RCR_SRGEN_Pos, 1);          //������0����¼�7�󷢳���������
	WR_REG(VADC_G0->REVNP0, VADC_G_REVNP0_REV7NP_Msk, VADC_G_REVNP0_REV7NP_Pos, 0);  //ѡ����0��7ͨ������¼��ķ���������0	
}

