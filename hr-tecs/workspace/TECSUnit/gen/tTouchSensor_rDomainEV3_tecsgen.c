/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tTouchSensor_tecsgen.h"
#include "tTouchSensor_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eTouchSensor : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eTouchSensor : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eTouchSensor : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */




/* �ƤӸ����� #_CPA_# */




/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tTouchSensor_INIB tTouchSensor_INIB_tab[] = {
    /* cell: tTouchSensor_CB_tab[0]:  TouchSensor1 id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_1,                              /* port */
    },
    /* cell: tTouchSensor_CB_tab[1]:  TouchSensor2 id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_2,                              /* port */
    },
    /* cell: tTouchSensor_CB_tab[2]:  TouchSensor3 id=3 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_3,                              /* port */
    },
    /* cell: tTouchSensor_CB_tab[3]:  TouchSensor4 id=4 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_4,                              /* port */
    },
};

/* �������ǥ�������ץ� #_EPD_# */
/* eTouchSensor : omitted by entry port optimize */
/* eTouchSensor : omitted by entry port optimize */
/* eTouchSensor : omitted by entry port optimize */
/* eTouchSensor : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tTouchSensor_CB_initialize()
{
    tTouchSensor_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
