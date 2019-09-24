/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nMruby_tUInt16Pointer_TECSGEN_H
#define nMruby_tUInt16Pointer_TECSGEN_H

/*
 * celltype          :  tUInt16Pointer
 * global name       :  nMruby_tUInt16Pointer
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
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
typedef const struct tag_nMruby_tUInt16Pointer_INIB {
    /* call port #_NEP_# */ 
}  nMruby_tUInt16Pointer_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nMruby_tUInt16Pointer_CB_tab           nMruby_tUInt16Pointer_INIB_tab
#define nMruby_tUInt16Pointer_SINGLE_CELL_CB   nMruby_tUInt16Pointer_SINGLE_CELL_INIB
#define nMruby_tUInt16Pointer_CB               nMruby_tUInt16Pointer_INIB
#define tag_nMruby_tUInt16Pointer_CB           tag_nMruby_tUInt16Pointer_INIB

/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */
extern  nMruby_tUInt16Pointer_INIB  nMruby_tUInt16Pointer_SINGLE_CELL_INIB;


/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_nMruby_tUInt16Pointer_INIB *nMruby_tUInt16Pointer_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* nMruby_sInitializeTECSBridge */
void         nMruby_tUInt16Pointer_eInitialize_initializeBridge( mrb_state* mrb, struct RClass* TECS);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ��� #_GCB_# */
#define nMruby_tUInt16Pointer_GET_CELLCB(idx) ((void *)0)
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eInitialize */
void           nMruby_tUInt16Pointer_eInitialize_initializeBridge_skel( const struct tag_nMruby_sInitializeTECSBridge_VDES *epd, mrb_state* mrb, struct RClass* TECS);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tUInt16Pointer_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nMruby_tUInt16Pointer_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nMruby_tUInt16Pointer_IDX

#define tUInt16Pointer_IDX  nMruby_tUInt16Pointer_IDX



/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eInitialize_initializeBridge nMruby_tUInt16Pointer_eInitialize_initializeBridge

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tUInt16Pointer_TECSGENH */
