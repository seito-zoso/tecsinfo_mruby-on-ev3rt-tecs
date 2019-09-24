/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nMruby_tsTouchSensor_tecsgen.h"
#include "nMruby_tsTouchSensor_factory.h"


/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */
extern struct tag_sTouchSensor_VDES rDomainEV3_TouchSensor1_eTouchSensor_des;

extern struct tag_sTouchSensor_VDES rDomainEV3_TouchSensor2_eTouchSensor_des;

extern struct tag_sTouchSensor_VDES rDomainEV3_TouchSensor3_eTouchSensor_des;

extern struct tag_sTouchSensor_VDES rDomainEV3_TouchSensor4_eTouchSensor_des;

/* �ƤӸ����� #_CPA_# */




/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
/* cell: rDomainEV3_BridgeTouchSensor1_CB:  BridgeTouchSensor1 id=1 */
const nMruby_tsTouchSensor_INIB rDomainEV3_BridgeTouchSensor1_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tTouchSensor_CB_tab[0],                 /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeTouchSensor2_CB:  BridgeTouchSensor2 id=2 */
const nMruby_tsTouchSensor_INIB rDomainEV3_BridgeTouchSensor2_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tTouchSensor_CB_tab[1],                 /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeTouchSensor3_CB:  BridgeTouchSensor3 id=3 */
const nMruby_tsTouchSensor_INIB rDomainEV3_BridgeTouchSensor3_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tTouchSensor_CB_tab[2],                 /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeTouchSensor4_CB:  BridgeTouchSensor4 id=4 */
const nMruby_tsTouchSensor_INIB rDomainEV3_BridgeTouchSensor4_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tTouchSensor_CB_tab[3],                 /* cTECS #_CCP2_# */
};

/* �������ǥ�������ץ� #_EPD_# */
/* ID to INIB table #_INTAB_# */
    extern nMruby_tsTouchSensor_INIB  rDomainEV3_BridgeTouchSensor1_INIB;
    extern nMruby_tsTouchSensor_INIB  rDomainEV3_BridgeTouchSensor2_INIB;
    extern nMruby_tsTouchSensor_INIB  rDomainEV3_BridgeTouchSensor3_INIB;
    extern nMruby_tsTouchSensor_INIB  rDomainEV3_BridgeTouchSensor4_INIB;
nMruby_tsTouchSensor_INIB *nMruby_tsTouchSensor_INIB_tab[] ={
    &rDomainEV3_BridgeTouchSensor1_INIB,
    &rDomainEV3_BridgeTouchSensor2_INIB,
    &rDomainEV3_BridgeTouchSensor3_INIB,
    &rDomainEV3_BridgeTouchSensor4_INIB,
};
/* CB ����������� #_CIC_# */
void
nMruby_tsTouchSensor_CB_initialize()
{
    nMruby_tsTouchSensor_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
