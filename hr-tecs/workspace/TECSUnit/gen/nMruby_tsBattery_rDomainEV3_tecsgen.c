/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nMruby_tsBattery_tecsgen.h"
#include "nMruby_tsBattery_factory.h"


/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
/* cell: rDomainEV3_BridgeBattery_CB:  BridgeBattery id=1 */
const nMruby_tsBattery_INIB rDomainEV3_BridgeBattery_INIB = {
};

/* �������ǥ�������ץ� #_EPD_# */
/* ID to INIB table #_INTAB_# */
    extern nMruby_tsBattery_INIB  rDomainEV3_BridgeBattery_INIB;
nMruby_tsBattery_INIB *nMruby_tsBattery_INIB_tab[] ={
    &rDomainEV3_BridgeBattery_INIB,
};
/* CB ����������� #_CIC_# */
void
nMruby_tsBattery_CB_initialize()
{
    nMruby_tsBattery_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
