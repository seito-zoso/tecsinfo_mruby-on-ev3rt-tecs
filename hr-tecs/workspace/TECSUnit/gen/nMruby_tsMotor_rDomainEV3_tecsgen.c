/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nMruby_tsMotor_tecsgen.h"
#include "nMruby_tsMotor_factory.h"


/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */
extern struct tag_sMotor_VDES rDomainEV3_MotorA_eMotor_des;

extern struct tag_sMotor_VDES rDomainEV3_MotorB_eMotor_des;

extern struct tag_sMotor_VDES rDomainEV3_MotorC_eMotor_des;

extern struct tag_sMotor_VDES rDomainEV3_MotorD_eMotor_des;

/* �ƤӸ����� #_CPA_# */




/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
/* cell: rDomainEV3_BridgeMotorA_CB:  BridgeMotorA id=1 */
const nMruby_tsMotor_INIB rDomainEV3_BridgeMotorA_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tMotor_CB_tab[0],                       /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeMotorB_CB:  BridgeMotorB id=2 */
const nMruby_tsMotor_INIB rDomainEV3_BridgeMotorB_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tMotor_CB_tab[1],                       /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeMotorC_CB:  BridgeMotorC id=3 */
const nMruby_tsMotor_INIB rDomainEV3_BridgeMotorC_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tMotor_CB_tab[2],                       /* cTECS #_CCP2_# */
};

/* cell: rDomainEV3_BridgeMotorD_CB:  BridgeMotorD id=4 */
const nMruby_tsMotor_INIB rDomainEV3_BridgeMotorD_INIB = {
    /* call port (INIB) #_CP_# */ 
    &tMotor_CB_tab[3],                       /* cTECS #_CCP2_# */
};

/* �������ǥ�������ץ� #_EPD_# */
/* ID to INIB table #_INTAB_# */
    extern nMruby_tsMotor_INIB  rDomainEV3_BridgeMotorA_INIB;
    extern nMruby_tsMotor_INIB  rDomainEV3_BridgeMotorB_INIB;
    extern nMruby_tsMotor_INIB  rDomainEV3_BridgeMotorC_INIB;
    extern nMruby_tsMotor_INIB  rDomainEV3_BridgeMotorD_INIB;
nMruby_tsMotor_INIB *nMruby_tsMotor_INIB_tab[] ={
    &rDomainEV3_BridgeMotorA_INIB,
    &rDomainEV3_BridgeMotorB_INIB,
    &rDomainEV3_BridgeMotorC_INIB,
    &rDomainEV3_BridgeMotorD_INIB,
};
/* CB ����������� #_CIC_# */
void
nMruby_tsMotor_CB_initialize()
{
    nMruby_tsMotor_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
