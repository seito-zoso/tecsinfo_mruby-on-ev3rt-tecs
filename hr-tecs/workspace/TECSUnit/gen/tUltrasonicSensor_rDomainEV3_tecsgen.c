/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tUltrasonicSensor_tecsgen.h"
#include "tUltrasonicSensor_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eUltrasonicSensor : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eUltrasonicSensor : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eUltrasonicSensor : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */




/* �ƤӸ����� #_CPA_# */




/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tUltrasonicSensor_INIB tUltrasonicSensor_INIB_tab[] = {
    /* cell: tUltrasonicSensor_CB_tab[0]:  UltrasonicSensor1 id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_1,                              /* port */
    },
    /* cell: tUltrasonicSensor_CB_tab[1]:  UltrasonicSensor2 id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_2,                              /* port */
    },
    /* cell: tUltrasonicSensor_CB_tab[2]:  UltrasonicSensor3 id=3 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_3,                              /* port */
    },
    /* cell: tUltrasonicSensor_CB_tab[3]:  UltrasonicSensor4 id=4 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_4,                              /* port */
    },
};

/* �������ǥ�������ץ� #_EPD_# */
/* eUltrasonicSensor : omitted by entry port optimize */
/* eUltrasonicSensor : omitted by entry port optimize */
/* eUltrasonicSensor : omitted by entry port optimize */
/* eUltrasonicSensor : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tUltrasonicSensor_CB_initialize()
{
    tUltrasonicSensor_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
