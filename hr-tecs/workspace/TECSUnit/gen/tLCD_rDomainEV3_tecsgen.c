/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tLCD_tecsgen.h"
#include "tLCD_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eLCD : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eLCD : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eLCD : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tLCD_INIB tLCD_INIB_tab[] = {
    /* cell: tLCD_CB_tab[0]:  LCD id=1 */
    {
        /* entry port #_EP_# */ 
    },
};

/* ���� CB #_CB_# */
struct tag_tLCD_CB tLCD_CB_tab[1];
/* �������ǥ�������ץ� #_EPD_# */
/* eLCD : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tLCD_CB_initialize()
{
    tLCD_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
