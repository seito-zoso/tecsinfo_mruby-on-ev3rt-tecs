/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nMruby_tsBalancer_TECSGEN_H
#define nMruby_tsBalancer_TECSGEN_H

/*
 * celltype          :  tsBalancer
 * global name       :  nMruby_tsBalancer
 * idx_is_id(actual) :  yes(yes)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  0
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sBalancer_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nMruby_tsBalancer_INIB {
    /* call port #_TCP_# */
}  nMruby_tsBalancer_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nMruby_tsBalancer_CB_tab           nMruby_tsBalancer_INIB_tab
#define nMruby_tsBalancer_SINGLE_CELL_CB   nMruby_tsBalancer_SINGLE_CELL_INIB
#define nMruby_tsBalancer_CB               nMruby_tsBalancer_INIB
#define tag_nMruby_tsBalancer_CB           tag_nMruby_tsBalancer_INIB

extern nMruby_tsBalancer_CB  *nMruby_tsBalancer_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef ID nMruby_tsBalancer_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nMruby_tsBalancer_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tBalancer_tecsgen.h"
#ifdef  nMruby_tsBalancer_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nMruby_tsBalancer_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tsBalancer_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nMruby_tsBalancer_N_CELL        (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nMruby_tsBalancer_VALID_IDX(IDX) (nMruby_tsBalancer_ID_BASE <= (IDX) && (IDX) < nMruby_tsBalancer_ID_BASE+nMruby_tsBalancer_N_CELL)


/* ����CB������ޥ��� #_GCB_# */
#define nMruby_tsBalancer_GET_CELLCB(idx) (nMruby_tsBalancer_CB_tab[(idx) - nMruby_tsBalancer_ID_BASE])
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nMruby_tsBalancer_cTECS_control( p_that, forward, turn, gyro, gyroOffset, leftRevolution, rightRevolution, battery, pwm_l, pwm_r, backlashhalf ) \
	  tBalancer_eBalancer_control( \
	    (forward), (turn), (gyro), (gyroOffset), (leftRevolution), (rightRevolution), (battery), (pwm_l), (pwm_r), (backlashhalf) )
#define nMruby_tsBalancer_cTECS_init( p_that ) \
	  tBalancer_eBalancer_init( \
	    )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  nMruby_tsBalancer_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tsBalancer_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nMruby_tsBalancer_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nMruby_tsBalancer_IDX

#define tsBalancer_IDX  nMruby_tsBalancer_IDX
/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cTECS_control( forward, turn, gyro, gyroOffset, leftRevolution, rightRevolution, battery, pwm_l, pwm_r, backlashhalf ) \
          ((void)p_cellcb, nMruby_tsBalancer_cTECS_control( p_cellcb, forward, turn, gyro, gyroOffset, leftRevolution, rightRevolution, battery, pwm_l, pwm_r, backlashhalf ))
#define cTECS_init( ) \
          ((void)p_cellcb, nMruby_tsBalancer_cTECS_init( p_cellcb ))



/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nMruby_tsBalancer_N_CELL; (i)++ ){ \
       (p_cb) = nMruby_tsBalancer_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tsBalancer_TECSGENH */
