/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nMruby_tsBalancer_tecsgen.h"
#include "nMruby_tsBalancer_factory.h"


/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
/* cell: rDomainEV3_BridgeBalancer_CB:  BridgeBalancer id=1 */
const nMruby_tsBalancer_INIB rDomainEV3_BridgeBalancer_INIB = {
};

/* �������ǥ�������ץ� #_EPD_# */
/* ID to INIB table #_INTAB_# */
    extern nMruby_tsBalancer_INIB  rDomainEV3_BridgeBalancer_INIB;
nMruby_tsBalancer_INIB *nMruby_tsBalancer_INIB_tab[] ={
    &rDomainEV3_BridgeBalancer_INIB,
};
/* CB ����������� #_CIC_# */
void
nMruby_tsBalancer_CB_initialize()
{
    nMruby_tsBalancer_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
