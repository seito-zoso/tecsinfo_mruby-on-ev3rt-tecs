/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nMruby_tsColorSensor_TECSGEN_H
#define nMruby_tsColorSensor_TECSGEN_H

/*
 * celltype          :  tsColorSensor
 * global name       :  nMruby_tsColorSensor
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
#include "sColorSensor_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nMruby_tsColorSensor_INIB {
    /* call port #_TCP_# */
    const struct tag_tColorSensor_INIB * cTECS;
}  nMruby_tsColorSensor_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nMruby_tsColorSensor_CB_tab           nMruby_tsColorSensor_INIB_tab
#define nMruby_tsColorSensor_SINGLE_CELL_CB   nMruby_tsColorSensor_SINGLE_CELL_INIB
#define nMruby_tsColorSensor_CB               nMruby_tsColorSensor_INIB
#define tag_nMruby_tsColorSensor_CB           tag_nMruby_tsColorSensor_INIB

extern nMruby_tsColorSensor_CB  *nMruby_tsColorSensor_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef ID nMruby_tsColorSensor_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nMruby_tsColorSensor_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tColorSensor_tecsgen.h"
#ifdef  nMruby_tsColorSensor_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nMruby_tsColorSensor_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tsColorSensor_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nMruby_tsColorSensor_N_CELL        (4)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nMruby_tsColorSensor_VALID_IDX(IDX) (nMruby_tsColorSensor_ID_BASE <= (IDX) && (IDX) < nMruby_tsColorSensor_ID_BASE+nMruby_tsColorSensor_N_CELL)


/* ����CB������ޥ��� #_GCB_# */
#define nMruby_tsColorSensor_GET_CELLCB(idx) (nMruby_tsColorSensor_CB_tab[(idx) - nMruby_tsColorSensor_ID_BASE])
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nMruby_tsColorSensor_cTECS_getColor( p_that ) \
	  tColorSensor_eColorSensor_getColor( \
	   (p_that)->cTECS )
#define nMruby_tsColorSensor_cTECS_getReflect( p_that ) \
	  tColorSensor_eColorSensor_getReflect( \
	   (p_that)->cTECS )
#define nMruby_tsColorSensor_cTECS_getAmbient( p_that ) \
	  tColorSensor_eColorSensor_getAmbient( \
	   (p_that)->cTECS )
#define nMruby_tsColorSensor_cTECS_initializePort( p_that ) \
	  tColorSensor_eColorSensor_initializePort( \
	   (p_that)->cTECS )
#define nMruby_tsColorSensor_cTECS_getRGBRaw( p_that, r, g, b ) \
	  tColorSensor_eColorSensor_getRGBRaw( \
	   (p_that)->cTECS, (r), (g), (b) )

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
#define VALID_IDX(IDX)  nMruby_tsColorSensor_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tsColorSensor_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nMruby_tsColorSensor_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nMruby_tsColorSensor_IDX

#define tsColorSensor_IDX  nMruby_tsColorSensor_IDX
/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cTECS_getColor( ) \
          ((void)p_cellcb, nMruby_tsColorSensor_cTECS_getColor( p_cellcb ))
#define cTECS_getReflect( ) \
          ((void)p_cellcb, nMruby_tsColorSensor_cTECS_getReflect( p_cellcb ))
#define cTECS_getAmbient( ) \
          ((void)p_cellcb, nMruby_tsColorSensor_cTECS_getAmbient( p_cellcb ))
#define cTECS_initializePort( ) \
          ((void)p_cellcb, nMruby_tsColorSensor_cTECS_initializePort( p_cellcb ))
#define cTECS_getRGBRaw( r, g, b ) \
          ((void)p_cellcb, nMruby_tsColorSensor_cTECS_getRGBRaw( p_cellcb, r, g, b ))



/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nMruby_tsColorSensor_N_CELL; (i)++ ){ \
       (p_cb) = nMruby_tsColorSensor_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tsColorSensor_TECSGENH */
