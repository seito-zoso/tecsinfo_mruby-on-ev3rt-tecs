/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nMruby_tsLCD_tecsgen.h"
#include "nMruby_tsLCD_factory.h"


/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
/* cell: rDomainEV3_BridgeLCD_CB:  BridgeLCD id=1 */
const nMruby_tsLCD_INIB rDomainEV3_BridgeLCD_INIB = {
};

/* �������ǥ�������ץ� #_EPD_# */
/* ID to INIB table #_INTAB_# */
    extern nMruby_tsLCD_INIB  rDomainEV3_BridgeLCD_INIB;
nMruby_tsLCD_INIB *nMruby_tsLCD_INIB_tab[] ={
    &rDomainEV3_BridgeLCD_INIB,
};
/* CB ����������� #_CIC_# */
void
nMruby_tsLCD_CB_initialize()
{
    nMruby_tsLCD_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
