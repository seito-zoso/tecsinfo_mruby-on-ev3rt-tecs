/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nMruby_tsLED_tecsgen.h"
#include "nMruby_tsLED_factory.h"


/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
/* cell: rDomainEV3_BridgeLED_CB:  BridgeLED id=1 */
const nMruby_tsLED_INIB rDomainEV3_BridgeLED_INIB = {
};

/* �������ǥ�������ץ� #_EPD_# */
/* ID to INIB table #_INTAB_# */
    extern nMruby_tsLED_INIB  rDomainEV3_BridgeLED_INIB;
nMruby_tsLED_INIB *nMruby_tsLED_INIB_tab[] ={
    &rDomainEV3_BridgeLED_INIB,
};
/* CB ����������� #_CIC_# */
void
nMruby_tsLED_CB_initialize()
{
    nMruby_tsLED_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
