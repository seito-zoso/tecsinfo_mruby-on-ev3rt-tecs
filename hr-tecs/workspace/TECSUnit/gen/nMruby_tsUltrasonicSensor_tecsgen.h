/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nMruby_tsUltrasonicSensor_TECSGEN_H
#define nMruby_tsUltrasonicSensor_TECSGEN_H

/*
 * celltype          :  tsUltrasonicSensor
 * global name       :  nMruby_tsUltrasonicSensor
 * idx_is_id(actual) :  yes(yes)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sUltrasonicSensor_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nMruby_tsUltrasonicSensor_INIB {
    /* call port #_TCP_# */
    const struct tag_tUltrasonicSensor_INIB * cTECS;
}  nMruby_tsUltrasonicSensor_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nMruby_tsUltrasonicSensor_CB_tab           nMruby_tsUltrasonicSensor_INIB_tab
#define nMruby_tsUltrasonicSensor_SINGLE_CELL_CB   nMruby_tsUltrasonicSensor_SINGLE_CELL_INIB
#define nMruby_tsUltrasonicSensor_CB               nMruby_tsUltrasonicSensor_INIB
#define tag_nMruby_tsUltrasonicSensor_CB           tag_nMruby_tsUltrasonicSensor_INIB

extern nMruby_tsUltrasonicSensor_CB  *nMruby_tsUltrasonicSensor_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef ID nMruby_tsUltrasonicSensor_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nMruby_tsUltrasonicSensor_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tUltrasonicSensor_tecsgen.h"
#ifdef  nMruby_tsUltrasonicSensor_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nMruby_tsUltrasonicSensor_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tsUltrasonicSensor_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nMruby_tsUltrasonicSensor_N_CELL        (4)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nMruby_tsUltrasonicSensor_VALID_IDX(IDX) (nMruby_tsUltrasonicSensor_ID_BASE <= (IDX) && (IDX) < nMruby_tsUltrasonicSensor_ID_BASE+nMruby_tsUltrasonicSensor_N_CELL)


/* ����CB������ޥ��� #_GCB_# */
#define nMruby_tsUltrasonicSensor_GET_CELLCB(idx) (nMruby_tsUltrasonicSensor_CB_tab[(idx) - nMruby_tsUltrasonicSensor_ID_BASE])
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nMruby_tsUltrasonicSensor_cTECS_getDistance( p_that ) \
	  tUltrasonicSensor_eUltrasonicSensor_getDistance( \
	   (p_that)->cTECS )
#define nMruby_tsUltrasonicSensor_cTECS_listen( p_that ) \
	  tUltrasonicSensor_eUltrasonicSensor_listen( \
	   (p_that)->cTECS )
#define nMruby_tsUltrasonicSensor_cTECS_initializePort( p_that ) \
	  tUltrasonicSensor_eUltrasonicSensor_initializePort( \
	   (p_that)->cTECS )

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
#define VALID_IDX(IDX)  nMruby_tsUltrasonicSensor_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tsUltrasonicSensor_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nMruby_tsUltrasonicSensor_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nMruby_tsUltrasonicSensor_IDX

#define tsUltrasonicSensor_IDX  nMruby_tsUltrasonicSensor_IDX
/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cTECS_getDistance( ) \
          ((void)p_cellcb, nMruby_tsUltrasonicSensor_cTECS_getDistance( p_cellcb ))
#define cTECS_listen( ) \
          ((void)p_cellcb, nMruby_tsUltrasonicSensor_cTECS_listen( p_cellcb ))
#define cTECS_initializePort( ) \
          ((void)p_cellcb, nMruby_tsUltrasonicSensor_cTECS_initializePort( p_cellcb ))



/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nMruby_tsUltrasonicSensor_N_CELL; (i)++ ){ \
       (p_cb) = nMruby_tsUltrasonicSensor_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tsUltrasonicSensor_TECSGENH */
