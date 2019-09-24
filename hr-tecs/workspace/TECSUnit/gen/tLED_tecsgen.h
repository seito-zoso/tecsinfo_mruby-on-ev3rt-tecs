/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tLED_TECSGEN_H
#define tLED_TECSGEN_H

/*
 * celltype          :  tLED
 * global name       :  tLED
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
#include "sLED_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tLED_INIB {
    /* call port #_NEP_# */ 
}  tLED_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tLED_CB_tab           tLED_INIB_tab
#define tLED_SINGLE_CELL_CB   tLED_SINGLE_CELL_INIB
#define tLED_CB               tLED_INIB
#define tag_tLED_CB           tag_tLED_INIB

extern tLED_CB  tLED_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tLED_INIB *tLED_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sLED */
ER           tLED_eLED_setColor(tLED_IDX idx, ledcolor_t color);
ER           tLED_eLED_off(tLED_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tLED_ID_BASE                (1)  /* ID �Υ١���  #_NIDB_# */
#define tLED_N_CELL                 (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tLED_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tLED_GET_CELLCB(idx) (idx)
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
#define VALID_IDX(IDX)  tLED_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tLED_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tLED_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tLED_IDX




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eLED_setColor    tLED_eLED_setColor
#define eLED_off         tLED_eLED_off

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tLED_N_CELL; (i)++ ){ \
       (p_cb) = &tLED_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tLED_TECSGENH */
