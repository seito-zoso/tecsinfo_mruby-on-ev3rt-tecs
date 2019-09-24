/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nMruby_tsUltrasonicSensor_tecsgen.h"
#include "nMruby_tsUltrasonicSensor_factory.h"


/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */
extern struct tag_sUltrasonicSensor_VDES rDomainEV3_UltrasonicSensor1_eUltrasonicSensor_des;

extern struct tag_sUltrasonicSensor_VDES rDomainEV3_UltrasonicSensor2_eUltrasonicSensor_des;

extern struct tag_sUltrasonicSensor_VDES rDomainEV3_UltrasonicSensor3_eUltrasonicSensor_des;

extern struct tag_sUltrasonicSensor_VDES rDomainEV3_UltrasonicSensor4_eUltrasonicSensor_des;

/* �ƤӸ����� #_CPA_# */




/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
/* cell: rDomainEV3_BridgeUltrasonicSensor1_CB:  BridgeUltrasonicSensor1 id=1 */
const nMruby_tsUltrasonicSensor_INIB rDomainEV3_BridgeUltrasonicSensor1_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tUltrasonicSensor_CB_tab[0],            /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeUltrasonicSensor2_CB:  BridgeUltrasonicSensor2 id=2 */
const nMruby_tsUltrasonicSensor_INIB rDomainEV3_BridgeUltrasonicSensor2_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tUltrasonicSensor_CB_tab[1],            /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeUltrasonicSensor3_CB:  BridgeUltrasonicSensor3 id=3 */
const nMruby_tsUltrasonicSensor_INIB rDomainEV3_BridgeUltrasonicSensor3_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tUltrasonicSensor_CB_tab[2],            /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeUltrasonicSensor4_CB:  BridgeUltrasonicSensor4 id=4 */
const nMruby_tsUltrasonicSensor_INIB rDomainEV3_BridgeUltrasonicSensor4_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tUltrasonicSensor_CB_tab[3],            /* cTECS #_CCP2_# */
};

/* �������ǥ�������ץ� #_EPD_# */
/* ID to INIB table #_INTAB_# */
    extern nMruby_tsUltrasonicSensor_INIB  rDomainEV3_BridgeUltrasonicSensor1_INIB;
    extern nMruby_tsUltrasonicSensor_INIB  rDomainEV3_BridgeUltrasonicSensor2_INIB;
    extern nMruby_tsUltrasonicSensor_INIB  rDomainEV3_BridgeUltrasonicSensor3_INIB;
    extern nMruby_tsUltrasonicSensor_INIB  rDomainEV3_BridgeUltrasonicSensor4_INIB;
nMruby_tsUltrasonicSensor_INIB *nMruby_tsUltrasonicSensor_INIB_tab[] ={
    &rDomainEV3_BridgeUltrasonicSensor1_INIB,
    &rDomainEV3_BridgeUltrasonicSensor2_INIB,
    &rDomainEV3_BridgeUltrasonicSensor3_INIB,
    &rDomainEV3_BridgeUltrasonicSensor4_INIB,
};
/* CB ����������� #_CIC_# */
void
nMruby_tsUltrasonicSensor_CB_initialize()
{
    nMruby_tsUltrasonicSensor_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
