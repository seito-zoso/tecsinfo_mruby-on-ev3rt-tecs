/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tButton_tecsgen.h"
#include "tButton_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eButton : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eButton : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eButton : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tButton_INIB tButton_INIB_tab[] = {
    /* cell: tButton_CB_tab[0]:  Button id=1 */
    {
        /* entry port #_EP_# */ 
    },
};

/* �������ǥ�������ץ� #_EPD_# */
/* eButton : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tButton_CB_initialize()
{
    tButton_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
