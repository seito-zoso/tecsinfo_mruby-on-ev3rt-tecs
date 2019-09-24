/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nMruby_tsLED_TECSGEN_H
#define nMruby_tsLED_TECSGEN_H

/*
 * celltype          :  tsLED
 * global name       :  nMruby_tsLED
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
#include "sLED_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nMruby_tsLED_INIB {
    /* call port #_TCP_# */
}  nMruby_tsLED_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nMruby_tsLED_CB_tab           nMruby_tsLED_INIB_tab
#define nMruby_tsLED_SINGLE_CELL_CB   nMruby_tsLED_SINGLE_CELL_INIB
#define nMruby_tsLED_CB               nMruby_tsLED_INIB
#define tag_nMruby_tsLED_CB           tag_nMruby_tsLED_INIB

extern nMruby_tsLED_CB  *nMruby_tsLED_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef ID nMruby_tsLED_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nMruby_tsLED_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tLED_tecsgen.h"
#ifdef  nMruby_tsLED_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nMruby_tsLED_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tsLED_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nMruby_tsLED_N_CELL         (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nMruby_tsLED_VALID_IDX(IDX) (nMruby_tsLED_ID_BASE <= (IDX) && (IDX) < nMruby_tsLED_ID_BASE+nMruby_tsLED_N_CELL)


/* ����CB������ޥ��� #_GCB_# */
#define nMruby_tsLED_GET_CELLCB(idx) (nMruby_tsLED_CB_tab[(idx) - nMruby_tsLED_ID_BASE])
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nMruby_tsLED_cTECS_setColor( p_that, color ) \
	  tLED_eLED_setColor( \
	   &tLED_CB_tab[0], (color) )
#define nMruby_tsLED_cTECS_off( p_that ) \
	  tLED_eLED_off( \
	   &tLED_CB_tab[0] )

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
#define VALID_IDX(IDX)  nMruby_tsLED_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tsLED_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nMruby_tsLED_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nMruby_tsLED_IDX

#define tsLED_IDX  nMruby_tsLED_IDX
/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cTECS_setColor( color ) \
          ((void)p_cellcb, nMruby_tsLED_cTECS_setColor( p_cellcb, color ))
#define cTECS_off( ) \
          ((void)p_cellcb, nMruby_tsLED_cTECS_off( p_cellcb ))



/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nMruby_tsLED_N_CELL; (i)++ ){ \
       (p_cb) = nMruby_tsLED_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tsLED_TECSGENH */
