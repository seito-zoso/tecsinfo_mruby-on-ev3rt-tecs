/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nMruby_tsSpeaker_tecsgen.h"
#include "nMruby_tsSpeaker_factory.h"


/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
/* cell: rDomainEV3_BridgeSpeaker_CB:  BridgeSpeaker id=1 */
const nMruby_tsSpeaker_INIB rDomainEV3_BridgeSpeaker_INIB = {
};

/* �������ǥ�������ץ� #_EPD_# */
/* ID to INIB table #_INTAB_# */
    extern nMruby_tsSpeaker_INIB  rDomainEV3_BridgeSpeaker_INIB;
nMruby_tsSpeaker_INIB *nMruby_tsSpeaker_INIB_tab[] ={
    &rDomainEV3_BridgeSpeaker_INIB,
};
/* CB ����������� #_CIC_# */
void
nMruby_tsSpeaker_CB_initialize()
{
    nMruby_tsSpeaker_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
