/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nMruby_tIntPointer_tecsgen.h"
#include "nMruby_tIntPointer_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eInitialize */
struct tag_nMruby_tIntPointer_eInitialize_DES {
    const struct tag_nMruby_sInitializeTECSBridge_VMT *vmt;
    tIntPointer_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eInitialize */
void           nMruby_tIntPointer_eInitialize_initializeBridge_skel( const struct tag_nMruby_sInitializeTECSBridge_VDES *epd, mrb_state* mrb, struct RClass* TECS)
{
    nMruby_tIntPointer_eInitialize_initializeBridge( mrb, TECS );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eInitialize */
const struct tag_nMruby_sInitializeTECSBridge_VMT nMruby_tIntPointer_eInitialize_MT_ = {
    nMruby_tIntPointer_eInitialize_initializeBridge_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
nMruby_tIntPointer_INIB nMruby_tIntPointer_SINGLE_CELL_INIB = 
{
    /* entry port #_EP_# */ 
};

/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_nMruby_tIntPointer_eInitialize_DES CtIntPointer_eInitialize_des;
const struct tag_nMruby_tIntPointer_eInitialize_DES CtIntPointer_eInitialize_des = {
    &nMruby_tIntPointer_eInitialize_MT_,
    &nMruby_tIntPointer_SINGLE_CELL_INIB,     /* INIB */
};
/* CB ����������� #_CIC_# */
void
nMruby_tIntPointer_CB_initialize()
{
    SET_CB_INIB_POINTER(i,p_cb)
    INITIALIZE_CB()
}
