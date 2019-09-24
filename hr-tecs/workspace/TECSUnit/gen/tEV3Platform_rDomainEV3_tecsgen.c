/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "tEV3Platform_tecsgen.h"
#include "tEV3Platform_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eTaskBody */
struct tag_tEV3Platform_eTaskBody_DES {
    const struct tag_sTaskBody_VMT *vmt;
    tEV3Platform_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eTaskBody */
void           tEV3Platform_eTaskBody_main_skel( const struct tag_sTaskBody_VDES *epd)
{
    struct tag_tEV3Platform_eTaskBody_DES *lepd
        = (struct tag_tEV3Platform_eTaskBody_DES *)epd;
    tEV3Platform_eTaskBody_main( lepd->idx );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eTaskBody */
const struct tag_sTaskBody_VMT tEV3Platform_eTaskBody_MT_ = {
    tEV3Platform_eTaskBody_main_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
tEV3Platform_INIB tEV3Platform_INIB_tab[] = {
    /* cell: tEV3Platform_CB_tab[0]:  EV3Platform id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRiteVM (n_cRiteVM) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cTask (n_cTask) #_CCP6_# */
        /* entry port #_EP_# */ 
    },
};

extern const struct tag_sTaskBody_VMT tEV3Platform_eTaskBody_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_tEV3Platform_eTaskBody_DES rDomainEV3_EV3Platform_eTaskBody_des;
const struct tag_tEV3Platform_eTaskBody_DES rDomainEV3_EV3Platform_eTaskBody_des = {
    &tEV3Platform_eTaskBody_MT_,
    &tEV3Platform_INIB_tab[0],   /* INIB */
};
/* CB ����������� #_CIC_# */
void
tEV3Platform_CB_initialize()
{
    tEV3Platform_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
