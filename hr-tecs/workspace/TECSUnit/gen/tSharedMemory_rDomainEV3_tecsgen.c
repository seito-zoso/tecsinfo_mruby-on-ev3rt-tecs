/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tSharedMemory_tecsgen.h"
#include "tSharedMemory_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eSharedMemory : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eSharedMemory : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eSharedMemory : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
int32_t tSharedMemory_SharedMemory_CB_data_INIT[32];
/* ���� INIB #_INIB_# */
tSharedMemory_INIB tSharedMemory_INIB_tab[] = {
    /* cell: tSharedMemory_CB_tab[0]:  SharedMemory id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        32,                                      /* size */
        tSharedMemory_SharedMemory_CB_data_INIT, /* data */
    },
};

/* �������ǥ�������ץ� #_EPD_# */
/* eSharedMemory : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
tSharedMemory_CB_initialize()
{
    tSharedMemory_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
