/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tMotor_tecsgen.h"
#include "tMotor_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eMotor : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eMotor : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eMotor : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */




/* �ƤӸ����� #_CPA_# */




/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tMotor_INIB tMotor_INIB_tab[] = {
    /* cell: tMotor_CB_tab[0]:  MotorA id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_A,                              /* port */
    },
    /* cell: tMotor_CB_tab[1]:  MotorB id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_B,                              /* port */
    },
    /* cell: tMotor_CB_tab[2]:  MotorC id=3 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_C,                              /* port */
    },
    /* cell: tMotor_CB_tab[3]:  MotorD id=4 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        EV3_PORT_D,                              /* port */
    },
};

/* �������ǥ�������ץ� #_EPD_# */
/* eMotor : omitted by entry port optimize */
/* eMotor : omitted by entry port optimize */
/* eMotor : omitted by entry port optimize */
/* eMotor : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tMotor_CB_initialize()
{
    tMotor_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
