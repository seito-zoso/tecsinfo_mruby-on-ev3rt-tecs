/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tTouchSensor_TECSGEN_H
#define tTouchSensor_TECSGEN_H

/*
 * celltype          :  tTouchSensor
 * global name       :  tTouchSensor
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sTouchSensor_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tTouchSensor_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        port;
}  tTouchSensor_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tTouchSensor_CB_tab           tTouchSensor_INIB_tab
#define tTouchSensor_SINGLE_CELL_CB   tTouchSensor_SINGLE_CELL_INIB
#define tTouchSensor_CB               tTouchSensor_INIB
#define tag_tTouchSensor_CB           tag_tTouchSensor_INIB

extern tTouchSensor_CB  tTouchSensor_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tTouchSensor_INIB *tTouchSensor_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sTouchSensor */
bool_t       tTouchSensor_eTouchSensor_isPressed(tTouchSensor_IDX idx);
void         tTouchSensor_eTouchSensor_initializePort(tTouchSensor_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tTouchSensor_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define tTouchSensor_N_CELL         (4)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tTouchSensor_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tTouchSensor_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define tTouchSensor_ATTR_port( p_that )	((p_that)->port)

#define tTouchSensor_GET_port(p_that)	((p_that)->port)



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
#define VALID_IDX(IDX)  tTouchSensor_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tTouchSensor_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tTouchSensor_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tTouchSensor_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_port            tTouchSensor_ATTR_port( p_cellcb )





/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eTouchSensor_isPressed tTouchSensor_eTouchSensor_isPressed
#define eTouchSensor_initializePort tTouchSensor_eTouchSensor_initializePort

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tTouchSensor_N_CELL; (i)++ ){ \
       (p_cb) = &tTouchSensor_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tTouchSensor_TECSGENH */
