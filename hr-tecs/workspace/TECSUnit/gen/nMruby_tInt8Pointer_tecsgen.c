/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nMruby_tInt8Pointer_tecsgen.h"
#include "nMruby_tInt8Pointer_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eInitialize */
struct tag_nMruby_tInt8Pointer_eInitialize_DES {
    const struct tag_nMruby_sInitializeTECSBridge_VMT *vmt;
    tInt8Pointer_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eInitialize */
void           nMruby_tInt8Pointer_eInitialize_initializeBridge_skel( const struct tag_nMruby_sInitializeTECSBridge_VDES *epd, mrb_state* mrb, struct RClass* TECS)
{
    nMruby_tInt8Pointer_eInitialize_initializeBridge( mrb, TECS );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eInitialize */
const struct tag_nMruby_sInitializeTECSBridge_VMT nMruby_tInt8Pointer_eInitialize_MT_ = {
    nMruby_tInt8Pointer_eInitialize_initializeBridge_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
nMruby_tInt8Pointer_INIB nMruby_tInt8Pointer_SINGLE_CELL_INIB = 
{
    /* entry port #_EP_# */ 
};

/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_nMruby_tInt8Pointer_eInitialize_DES CtInt8Pointer_eInitialize_des;
const struct tag_nMruby_tInt8Pointer_eInitialize_DES CtInt8Pointer_eInitialize_des = {
    &nMruby_tInt8Pointer_eInitialize_MT_,
    &nMruby_tInt8Pointer_SINGLE_CELL_INIB,     /* INIB */
};
/* CB ����������� #_CIC_# */
void
nMruby_tInt8Pointer_CB_initialize()
{
    SET_CB_INIB_POINTER(i,p_cb)
    INITIALIZE_CB()
}
