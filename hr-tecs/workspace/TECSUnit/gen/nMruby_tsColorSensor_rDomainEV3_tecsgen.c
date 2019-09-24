/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nMruby_tsColorSensor_tecsgen.h"
#include "nMruby_tsColorSensor_factory.h"


/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */
extern struct tag_sColorSensor_VDES rDomainEV3_ColorSensor1_eColorSensor_des;

extern struct tag_sColorSensor_VDES rDomainEV3_ColorSensor2_eColorSensor_des;

extern struct tag_sColorSensor_VDES rDomainEV3_ColorSensor3_eColorSensor_des;

extern struct tag_sColorSensor_VDES rDomainEV3_ColorSensor4_eColorSensor_des;

/* �ƤӸ����� #_CPA_# */




/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
/* cell: rDomainEV3_BridgeColorSensor1_CB:  BridgeColorSensor1 id=1 */
const nMruby_tsColorSensor_INIB rDomainEV3_BridgeColorSensor1_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tColorSensor_CB_tab[0],                 /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeColorSensor2_CB:  BridgeColorSensor2 id=2 */
const nMruby_tsColorSensor_INIB rDomainEV3_BridgeColorSensor2_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tColorSensor_CB_tab[1],                 /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeColorSensor3_CB:  BridgeColorSensor3 id=3 */
const nMruby_tsColorSensor_INIB rDomainEV3_BridgeColorSensor3_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tColorSensor_CB_tab[2],                 /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeColorSensor4_CB:  BridgeColorSensor4 id=4 */
const nMruby_tsColorSensor_INIB rDomainEV3_BridgeColorSensor4_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tColorSensor_CB_tab[3],                 /* cTECS #_CCP2_# */
};

/* �������ǥ�������ץ� #_EPD_# */
/* ID to INIB table #_INTAB_# */
    extern nMruby_tsColorSensor_INIB  rDomainEV3_BridgeColorSensor1_INIB;
    extern nMruby_tsColorSensor_INIB  rDomainEV3_BridgeColorSensor2_INIB;
    extern nMruby_tsColorSensor_INIB  rDomainEV3_BridgeColorSensor3_INIB;
    extern nMruby_tsColorSensor_INIB  rDomainEV3_BridgeColorSensor4_INIB;
nMruby_tsColorSensor_INIB *nMruby_tsColorSensor_INIB_tab[] ={
    &rDomainEV3_BridgeColorSensor1_INIB,
    &rDomainEV3_BridgeColorSensor2_INIB,
    &rDomainEV3_BridgeColorSensor3_INIB,
    &rDomainEV3_BridgeColorSensor4_INIB,
};
/* CB ����������� #_CIC_# */
void
nMruby_tsColorSensor_CB_initialize()
{
    nMruby_tsColorSensor_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
