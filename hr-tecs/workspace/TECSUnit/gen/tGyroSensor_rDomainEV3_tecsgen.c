/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tGyroSensor_tecsgen.h"
#include "tGyroSensor_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eGyroSensor : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eGyroSensor : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eGyroSensor : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */




/* �ƤӸ����� #_CPA_# */




/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tGyroSensor_INIB tGyroSensor_INIB_tab[] = {
    /* cell: tGyroSensor_CB_tab[0]:  GyroSensor1 id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_1,                              /* port */
    },
    /* cell: tGyroSensor_CB_tab[1]:  GyroSensor2 id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_2,                              /* port */
    },
    /* cell: tGyroSensor_CB_tab[2]:  GyroSensor3 id=3 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_3,                              /* port */
    },
    /* cell: tGyroSensor_CB_tab[3]:  GyroSensor4 id=4 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_4,                              /* port */
    },
};

/* �������ǥ�������ץ� #_EPD_# */
/* eGyroSensor : omitted by entry port optimize */
/* eGyroSensor : omitted by entry port optimize */
/* eGyroSensor : omitted by entry port optimize */
/* eGyroSensor : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tGyroSensor_CB_initialize()
{
    tGyroSensor_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
