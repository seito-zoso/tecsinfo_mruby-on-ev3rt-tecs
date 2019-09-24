/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nMruby_tsGyroSensor_TECSGEN_H
#define nMruby_tsGyroSensor_TECSGEN_H

/*
 * celltype          :  tsGyroSensor
 * global name       :  nMruby_tsGyroSensor
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
#include "sGyroSensor_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nMruby_tsGyroSensor_INIB {
    /* call port #_TCP_# */
    const struct tag_tGyroSensor_INIB * cTECS;
}  nMruby_tsGyroSensor_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nMruby_tsGyroSensor_CB_tab           nMruby_tsGyroSensor_INIB_tab
#define nMruby_tsGyroSensor_SINGLE_CELL_CB   nMruby_tsGyroSensor_SINGLE_CELL_INIB
#define nMruby_tsGyroSensor_CB               nMruby_tsGyroSensor_INIB
#define tag_nMruby_tsGyroSensor_CB           tag_nMruby_tsGyroSensor_INIB

extern nMruby_tsGyroSensor_CB  *nMruby_tsGyroSensor_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef ID nMruby_tsGyroSensor_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nMruby_tsGyroSensor_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tGyroSensor_tecsgen.h"
#ifdef  nMruby_tsGyroSensor_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nMruby_tsGyroSensor_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tsGyroSensor_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nMruby_tsGyroSensor_N_CELL        (4)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nMruby_tsGyroSensor_VALID_IDX(IDX) (nMruby_tsGyroSensor_ID_BASE <= (IDX) && (IDX) < nMruby_tsGyroSensor_ID_BASE+nMruby_tsGyroSensor_N_CELL)


/* ����CB������ޥ��� #_GCB_# */
#define nMruby_tsGyroSensor_GET_CELLCB(idx) (nMruby_tsGyroSensor_CB_tab[(idx) - nMruby_tsGyroSensor_ID_BASE])
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nMruby_tsGyroSensor_cTECS_getAngle( p_that ) \
	  tGyroSensor_eGyroSensor_getAngle( \
	   (p_that)->cTECS )
#define nMruby_tsGyroSensor_cTECS_getRate( p_that ) \
	  tGyroSensor_eGyroSensor_getRate( \
	   (p_that)->cTECS )
#define nMruby_tsGyroSensor_cTECS_reset( p_that ) \
	  tGyroSensor_eGyroSensor_reset( \
	   (p_that)->cTECS )
#define nMruby_tsGyroSensor_cTECS_calibrate( p_that, times ) \
	  tGyroSensor_eGyroSensor_calibrate( \
	   (p_that)->cTECS, (times) )
#define nMruby_tsGyroSensor_cTECS_initializePort( p_that ) \
	  tGyroSensor_eGyroSensor_initializePort( \
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
#define VALID_IDX(IDX)  nMruby_tsGyroSensor_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tsGyroSensor_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nMruby_tsGyroSensor_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nMruby_tsGyroSensor_IDX

#define tsGyroSensor_IDX  nMruby_tsGyroSensor_IDX
/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cTECS_getAngle( ) \
          ((void)p_cellcb, nMruby_tsGyroSensor_cTECS_getAngle( p_cellcb ))
#define cTECS_getRate( ) \
          ((void)p_cellcb, nMruby_tsGyroSensor_cTECS_getRate( p_cellcb ))
#define cTECS_reset( ) \
          ((void)p_cellcb, nMruby_tsGyroSensor_cTECS_reset( p_cellcb ))
#define cTECS_calibrate( times ) \
          ((void)p_cellcb, nMruby_tsGyroSensor_cTECS_calibrate( p_cellcb, times ))
#define cTECS_initializePort( ) \
          ((void)p_cellcb, nMruby_tsGyroSensor_cTECS_initializePort( p_cellcb ))



/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nMruby_tsGyroSensor_N_CELL; (i)++ ){ \
       (p_cb) = nMruby_tsGyroSensor_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tsGyroSensor_TECSGENH */
