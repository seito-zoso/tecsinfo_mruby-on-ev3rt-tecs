/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nMruby_tsKernel_Initializer_TECSGEN_H
#define nMruby_tsKernel_Initializer_TECSGEN_H

/*
 * celltype          :  tsKernel_Initializer
 * global name       :  nMruby_tsKernel_Initializer
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  0
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "nMruby_sInitializeTECSBridge_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nMruby_tsKernel_Initializer_INIB {
    /* call port #_NEP_# */ 
}  nMruby_tsKernel_Initializer_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nMruby_tsKernel_Initializer_CB_tab           nMruby_tsKernel_Initializer_INIB_tab
#define nMruby_tsKernel_Initializer_SINGLE_CELL_CB   nMruby_tsKernel_Initializer_SINGLE_CELL_INIB
#define nMruby_tsKernel_Initializer_CB               nMruby_tsKernel_Initializer_INIB
#define tag_nMruby_tsKernel_Initializer_CB           tag_nMruby_tsKernel_Initializer_INIB

extern nMruby_tsKernel_Initializer_CB  nMruby_tsKernel_Initializer_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_nMruby_tsKernel_Initializer_INIB *nMruby_tsKernel_Initializer_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* nMruby_sInitializeTECSBridge */
void         nMruby_tsKernel_Initializer_eInitialize_initializeBridge(nMruby_tsKernel_Initializer_IDX idx, mrb_state* mrb, struct RClass* TECS);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tsKernel_Initializer_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nMruby_tsKernel_Initializer_N_CELL        (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nMruby_tsKernel_Initializer_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define nMruby_tsKernel_Initializer_GET_CELLCB(idx) (idx)
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eInitialize */
void           nMruby_tsKernel_Initializer_eInitialize_initializeBridge_skel( const struct tag_nMruby_sInitializeTECSBridge_VDES *epd, mrb_state* mrb, struct RClass* TECS);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  nMruby_tsKernel_Initializer_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tsKernel_Initializer_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nMruby_tsKernel_Initializer_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nMruby_tsKernel_Initializer_IDX

#define tsKernel_Initializer_IDX  nMruby_tsKernel_Initializer_IDX



/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eInitialize_initializeBridge nMruby_tsKernel_Initializer_eInitialize_initializeBridge

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nMruby_tsKernel_Initializer_N_CELL; (i)++ ){ \
       (p_cb) = &nMruby_tsKernel_Initializer_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tsKernel_Initializer_TECSGENH */
