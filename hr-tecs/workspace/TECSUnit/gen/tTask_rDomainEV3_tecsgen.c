/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tTask_tecsgen.h"
#include "tTask_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eTask : omitted by entry port optimize */

/* eiTask : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */
extern struct tag_sTaskBody_VDES rDomainEV3_EV3Platform_eTaskBody_des;

extern struct tag_sTaskBody_VDES rDomainEV3_TaskMain_eBody_des;

/* �ƤӸ����� #_CPA_# */


/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tTask_INIB tTask_INIB_tab[] = {
    /* cell: tTask_CB_tab[0]:  EV3Task id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_EV3Platform_eTaskBody_des,   /* cBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TSKID_tTask_EV3Task,                     /* id */
    },
    /* cell: tTask_CB_tab[1]:  Task id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_TaskMain_eBody_des,          /* cBody #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        TSKID_tTask_Task,                        /* id */
    },
};

/* �������ǥ�������ץ� #_EPD_# */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */
/* eTask : omitted by entry port optimize */
/* eiTask : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tTask_CB_initialize()
{
    tTask_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
