
/*
CCU40
*/

#include <XMC1300.h>
#include "CCU4.h"

#define CCU40_CC40_DIV_VAL	11         //64M/2^11 = 31250 Ƶ��  31250 = 1s��һ��
#define CCU40_CC40_PRS_VAL	31249      
#define CCU40_CC40_CRS_VAL	(int)(CCU40_CC40_PRS_VAL/2)     

void CCU4_Init(void)
{
	WR_REG(CCU40->GIDLC, CCU4_GIDLC_SPRB_Msk, CCU4_GIDLC_SPRB_Pos, 1);
	WR_REG(CCU40_CC40->PSC, CCU4_CC4_PSC_PSIV_Msk, CCU4_CC4_PSC_PSIV_Pos, CCU40_CC40_DIV_VAL); //��Ƶ
	
	WR_REG(CCU40_CC40->PRS, CCU4_CC4_PRS_PRS_Msk, CCU4_CC4_PRS_PRS_Pos, CCU40_CC40_PRS_VAL);   //����ֵ
	WR_REG(CCU40_CC40->PRS, CCU4_CC4_CRS_CRS_Msk, CCU4_CC4_CRS_CRS_Pos, CCU40_CC40_CRS_VAL);   //�Ƚ�ֵ
	
	WR_REG(CCU40->GCSS, CCU4_GCSS_S0SE_Msk, CCU4_GCSS_S0SE_Pos, 1);                            //�������ڱȽ�ֵ
	WR_REG(CCU40->GIDLC, CCU4_GIDLC_CS0I_Msk, CCU4_GIDLC_CS0I_Pos, 1);	                       //���ö�ʱ��Ƭ
	
	WR_REG(CCU40_CC40->INTE, CCU4_CC4_INTE_CMUE_Msk, CCU4_CC4_INTE_CMUE_Pos, 1);
	WR_REG(CCU40_CC40->SRS, CCU4_CC4_SRS_CMSR_Msk, CCU4_CC4_SRS_CMSR_Pos, 0);                  //�Ƚ�ƥ���ж���SR0	
	
	WR_REG(CCU40_CC40->INTE, CCU4_CC4_INTE_PME_Msk, CCU4_CC4_INTE_PME_Pos, 1);
	WR_REG(CCU40_CC40->SRS, CCU4_CC4_SRS_POSR_Msk, CCU4_CC4_SRS_POSR_Pos, 2);                  //����ƥ���ж���SR2����ʹ�ܣ�����ADC��
}

void CCU40_CC40_Start()
{
	WR_REG(CCU40_CC40->TCSET, CCU4_CC4_TCSET_TRBS_Msk, CCU4_CC4_TCSET_TRBS_Pos, 1);            //����CCU40_CC40
}
