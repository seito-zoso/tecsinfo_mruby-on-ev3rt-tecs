/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tBattery_tecsgen.h"
#include "tBattery_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eBattery : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eBattery : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eBattery : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tBattery_INIB tBattery_INIB_tab[] = {
    /* cell: tBattery_CB_tab[0]:  Battery id=1 */
    {
        /* entry port #_EP_# */ 
    },
};

/* �������ǥ�������ץ� #_EPD_# */
/* eBattery : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tBattery_CB_initialize()
{
    tBattery_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
