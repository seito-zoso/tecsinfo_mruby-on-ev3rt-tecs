/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tColorSensor_tecsgen.h"
#include "tColorSensor_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eColorSensor : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eColorSensor : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eColorSensor : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */




/* �ƤӸ����� #_CPA_# */




/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tColorSensor_INIB tColorSensor_INIB_tab[] = {
    /* cell: tColorSensor_CB_tab[0]:  ColorSensor1 id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_1,                              /* port */
    },
    /* cell: tColorSensor_CB_tab[1]:  ColorSensor2 id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_2,                              /* port */
    },
    /* cell: tColorSensor_CB_tab[2]:  ColorSensor3 id=3 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_3,                              /* port */
    },
    /* cell: tColorSensor_CB_tab[3]:  ColorSensor4 id=4 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_4,                              /* port */
    },
};

/* �������ǥ�������ץ� #_EPD_# */
/* eColorSensor : omitted by entry port optimize */
/* eColorSensor : omitted by entry port optimize */
/* eColorSensor : omitted by entry port optimize */
/* eColorSensor : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tColorSensor_CB_initialize()
{
    tColorSensor_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
