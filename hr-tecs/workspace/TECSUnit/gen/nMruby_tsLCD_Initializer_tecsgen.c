/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nMruby_tsLCD_Initializer_tecsgen.h"
#include "nMruby_tsLCD_Initializer_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eInitialize */
struct tag_nMruby_tsLCD_Initializer_eInitialize_DES {
    const struct tag_nMruby_sInitializeTECSBridge_VMT *vmt;
    tsLCD_Initializer_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eInitialize */
void           nMruby_tsLCD_Initializer_eInitialize_initializeBridge_skel( const struct tag_nMruby_sInitializeTECSBridge_VDES *epd, mrb_state* mrb, struct RClass* TECS)
{
    struct tag_nMruby_tsLCD_Initializer_eInitialize_DES *lepd
        = (struct tag_nMruby_tsLCD_Initializer_eInitialize_DES *)epd;
    nMruby_tsLCD_Initializer_eInitialize_initializeBridge( lepd->idx, mrb, TECS );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eInitialize */
const struct tag_nMruby_sInitializeTECSBridge_VMT nMruby_tsLCD_Initializer_eInitialize_MT_ = {
    nMruby_tsLCD_Initializer_eInitialize_initializeBridge_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
nMruby_tsLCD_Initializer_INIB nMruby_tsLCD_Initializer_INIB_tab[] = {
    /* cell: nMruby_tsLCD_Initializer_CB_tab[0]:  VM_tsLCD_Initializer id=1 */
    {
        /* entry port #_EP_# */ 
    },
};

/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_nMruby_tsLCD_Initializer_eInitialize_DES VM_tsLCD_Initializer_eInitialize_des;
const struct tag_nMruby_tsLCD_Initializer_eInitialize_DES VM_tsLCD_Initializer_eInitialize_des = {
    &nMruby_tsLCD_Initializer_eInitialize_MT_,
    &nMruby_tsLCD_Initializer_INIB_tab[0],   /* INIB */
};
/* CB ����������� #_CIC_# */
void
nMruby_tsLCD_Initializer_CB_initialize()
{
    nMruby_tsLCD_Initializer_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
