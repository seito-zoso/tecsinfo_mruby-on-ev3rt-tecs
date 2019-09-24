/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nMruby_tTECSInitializer_TECSGEN_H
#define nMruby_tTECSInitializer_TECSGEN_H

/*
 * celltype          :  tTECSInitializer
 * global name       :  nMruby_tTECSInitializer
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  true
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "nMruby_sInitializeBridge_tecsgen.h"
#include "nMruby_sInitializeTECSBridge_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nMruby_tTECSInitializer_INIB {
    /* call port #_TCP_# */
    struct tag_nMruby_sInitializeTECSBridge_VDES *const*cInitialize;
    int_t n_cInitialize;
    /* call port #_NEP_# */ 
}  nMruby_tTECSInitializer_INIB;
/* ���� CB ����� #_CCTPA_# */
typedef struct tag_nMruby_tTECSInitializer_CB {
    nMruby_tTECSInitializer_INIB  *_inib;
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    struct RClass* TECS;
}  nMruby_tTECSInitializer_CB;
extern nMruby_tTECSInitializer_CB  nMruby_tTECSInitializer_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef struct tag_nMruby_tTECSInitializer_CB *nMruby_tTECSInitializer_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* nMruby_sInitializeBridge */
void         nMruby_tTECSInitializer_eInitialize_initializeBridge(nMruby_tTECSInitializer_IDX idx, const mrb_state* mrb);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tTECSInitializer_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nMruby_tTECSInitializer_N_CELL        (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nMruby_tTECSInitializer_VALID_IDX(IDX) (1)

/* �ƤӸ�������礭��������ޥ��� #_NCPA_# */
#define N_CP_cInitialize(p_that)  ((p_that)->_inib->n_cInitialize)
#define NCP_cInitialize           (N_CP_cInitialize(p_cellcb))

/* ����CB������ޥ��� #_GCB_# */
#define nMruby_tTECSInitializer_GET_CELLCB(idx) (idx)



/* var ���������ޥ��� #_VAM_# */
#define nMruby_tTECSInitializer_VAR_TECS(p_that)	((p_that)->TECS)

#define nMruby_tTECSInitializer_GET_TECS(p_that)	((p_that)->TECS)
#define nMruby_tTECSInitializer_SET_TECS(p_that,val)	((p_that)->TECS=(val))

 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nMruby_tTECSInitializer_cInitialize_initializeBridge( p_that, subscript, mrb, TECS ) \
	  (p_that)->_inib->cInitialize[subscript]->VMT->initializeBridge__T( \
	   (p_that)->_inib->cInitialize[subscript], (mrb), (TECS) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  nMruby_tTECSInitializer_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tTECSInitializer_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nMruby_tTECSInitializer_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nMruby_tTECSInitializer_IDX

#define tTECSInitializer_IDX  nMruby_tTECSInitializer_IDX


/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_TECS             nMruby_tTECSInitializer_VAR_TECS( p_cellcb )

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cInitialize_initializeBridge( subscript, mrb, TECS ) \
          nMruby_tTECSInitializer_cInitialize_initializeBridge( p_cellcb, subscript, mrb, TECS )




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eInitialize_initializeBridge nMruby_tTECSInitializer_eInitialize_initializeBridge

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nMruby_tTECSInitializer_N_CELL; (i)++ ){ \
       (p_cb) = &nMruby_tTECSInitializer_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)\
	(p_that)->TECS = 0;
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &nMruby_tTECSInitializer_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tTECSInitializer_TECSGENH */
