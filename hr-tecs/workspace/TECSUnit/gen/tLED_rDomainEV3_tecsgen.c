/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tLED_tecsgen.h"
#include "tLED_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eLED : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eLED : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eLED : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tLED_INIB tLED_INIB_tab[] = {
    /* cell: tLED_CB_tab[0]:  LED id=1 */
    {
        /* entry port #_EP_# */ 
    },
};

/* �������ǥ�������ץ� #_EPD_# */
/* eLED : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tLED_CB_initialize()
{
    tLED_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
