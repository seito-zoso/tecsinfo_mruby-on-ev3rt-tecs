/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tUltrasonicSensor_TECSGEN_H
#define tUltrasonicSensor_TECSGEN_H

/*
 * celltype          :  tUltrasonicSensor
 * global name       :  tUltrasonicSensor
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
#include "sUltrasonicSensor_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tUltrasonicSensor_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        port;
}  tUltrasonicSensor_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tUltrasonicSensor_CB_tab           tUltrasonicSensor_INIB_tab
#define tUltrasonicSensor_SINGLE_CELL_CB   tUltrasonicSensor_SINGLE_CELL_INIB
#define tUltrasonicSensor_CB               tUltrasonicSensor_INIB
#define tag_tUltrasonicSensor_CB           tag_tUltrasonicSensor_INIB

extern tUltrasonicSensor_CB  tUltrasonicSensor_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tUltrasonicSensor_INIB *tUltrasonicSensor_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sUltrasonicSensor */
int16_t      tUltrasonicSensor_eUltrasonicSensor_getDistance(tUltrasonicSensor_IDX idx);
bool_t       tUltrasonicSensor_eUltrasonicSensor_listen(tUltrasonicSensor_IDX idx);
void         tUltrasonicSensor_eUltrasonicSensor_initializePort(tUltrasonicSensor_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tUltrasonicSensor_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define tUltrasonicSensor_N_CELL        (4)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tUltrasonicSensor_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tUltrasonicSensor_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define tUltrasonicSensor_ATTR_port( p_that )	((p_that)->port)

#define tUltrasonicSensor_GET_port(p_that)	((p_that)->port)



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
#define VALID_IDX(IDX)  tUltrasonicSensor_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tUltrasonicSensor_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tUltrasonicSensor_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tUltrasonicSensor_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_port            tUltrasonicSensor_ATTR_port( p_cellcb )





/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eUltrasonicSensor_getDistance tUltrasonicSensor_eUltrasonicSensor_getDistance
#define eUltrasonicSensor_listen tUltrasonicSensor_eUltrasonicSensor_listen
#define eUltrasonicSensor_initializePort tUltrasonicSensor_eUltrasonicSensor_initializePort

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tUltrasonicSensor_N_CELL; (i)++ ){ \
       (p_cb) = &tUltrasonicSensor_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tUltrasonicSensor_TECSGENH */
