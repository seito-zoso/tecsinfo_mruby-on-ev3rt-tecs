/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tGyroSensor_TECSGEN_H
#define tGyroSensor_TECSGEN_H

/*
 * celltype          :  tGyroSensor
 * global name       :  tGyroSensor
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
#include "sGyroSensor_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tGyroSensor_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        port;
}  tGyroSensor_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tGyroSensor_CB_tab           tGyroSensor_INIB_tab
#define tGyroSensor_SINGLE_CELL_CB   tGyroSensor_SINGLE_CELL_INIB
#define tGyroSensor_CB               tGyroSensor_INIB
#define tag_tGyroSensor_CB           tag_tGyroSensor_INIB

extern tGyroSensor_CB  tGyroSensor_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tGyroSensor_INIB *tGyroSensor_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sGyroSensor */
int16_t      tGyroSensor_eGyroSensor_getAngle(tGyroSensor_IDX idx);
int16_t      tGyroSensor_eGyroSensor_getRate(tGyroSensor_IDX idx);
ER           tGyroSensor_eGyroSensor_reset(tGyroSensor_IDX idx);
float32_t    tGyroSensor_eGyroSensor_calibrate(tGyroSensor_IDX idx, int32_t times);
void         tGyroSensor_eGyroSensor_initializePort(tGyroSensor_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tGyroSensor_ID_BASE         (1)  /* ID �Υ١���  #_NIDB_# */
#define tGyroSensor_N_CELL          (4)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tGyroSensor_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tGyroSensor_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define tGyroSensor_ATTR_port( p_that )	((p_that)->port)

#define tGyroSensor_GET_port(p_that)	((p_that)->port)



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
#define VALID_IDX(IDX)  tGyroSensor_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tGyroSensor_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tGyroSensor_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tGyroSensor_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_port            tGyroSensor_ATTR_port( p_cellcb )





/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eGyroSensor_getAngle tGyroSensor_eGyroSensor_getAngle
#define eGyroSensor_getRate tGyroSensor_eGyroSensor_getRate
#define eGyroSensor_reset tGyroSensor_eGyroSensor_reset
#define eGyroSensor_calibrate tGyroSensor_eGyroSensor_calibrate
#define eGyroSensor_initializePort tGyroSensor_eGyroSensor_initializePort

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tGyroSensor_N_CELL; (i)++ ){ \
       (p_cb) = &tGyroSensor_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tGyroSensor_TECSGENH */
