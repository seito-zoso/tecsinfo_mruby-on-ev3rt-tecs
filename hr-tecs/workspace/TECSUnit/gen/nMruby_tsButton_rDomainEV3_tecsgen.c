/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nMruby_tsButton_tecsgen.h"
#include "nMruby_tsButton_factory.h"


/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
/* cell: rDomainEV3_BridgeButton_CB:  BridgeButton id=1 */
const nMruby_tsButton_INIB rDomainEV3_BridgeButton_INIB = {
};

/* �������ǥ�������ץ� #_EPD_# */
/* ID to INIB table #_INTAB_# */
    extern nMruby_tsButton_INIB  rDomainEV3_BridgeButton_INIB;
nMruby_tsButton_INIB *nMruby_tsButton_INIB_tab[] ={
    &rDomainEV3_BridgeButton_INIB,
};
/* CB ����������� #_CIC_# */
void
nMruby_tsButton_CB_initialize()
{
    nMruby_tsButton_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
