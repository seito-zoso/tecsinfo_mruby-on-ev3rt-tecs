/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tColorSensor_TECSGEN_H
#define tColorSensor_TECSGEN_H

/*
 * celltype          :  tColorSensor
 * global name       :  tColorSensor
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
#include "sColorSensor_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tColorSensor_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        port;
}  tColorSensor_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tColorSensor_CB_tab           tColorSensor_INIB_tab
#define tColorSensor_SINGLE_CELL_CB   tColorSensor_SINGLE_CELL_INIB
#define tColorSensor_CB               tColorSensor_INIB
#define tag_tColorSensor_CB           tag_tColorSensor_INIB

extern tColorSensor_CB  tColorSensor_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tColorSensor_INIB *tColorSensor_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sColorSensor */
colorid_t    tColorSensor_eColorSensor_getColor(tColorSensor_IDX idx);
uint8_t      tColorSensor_eColorSensor_getReflect(tColorSensor_IDX idx);
uint8_t      tColorSensor_eColorSensor_getAmbient(tColorSensor_IDX idx);
void         tColorSensor_eColorSensor_initializePort(tColorSensor_IDX idx);
void         tColorSensor_eColorSensor_getRGBRaw(tColorSensor_IDX idx, uint16_t* r, uint16_t* g, uint16_t* b);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tColorSensor_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define tColorSensor_N_CELL         (4)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tColorSensor_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tColorSensor_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define tColorSensor_ATTR_port( p_that )	((p_that)->port)

#define tColorSensor_GET_port(p_that)	((p_that)->port)



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
#define VALID_IDX(IDX)  tColorSensor_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tColorSensor_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tColorSensor_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tColorSensor_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_port            tColorSensor_ATTR_port( p_cellcb )





/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eColorSensor_getColor tColorSensor_eColorSensor_getColor
#define eColorSensor_getReflect tColorSensor_eColorSensor_getReflect
#define eColorSensor_getAmbient tColorSensor_eColorSensor_getAmbient
#define eColorSensor_initializePort tColorSensor_eColorSensor_initializePort
#define eColorSensor_getRGBRaw tColorSensor_eColorSensor_getRGBRaw

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tColorSensor_N_CELL; (i)++ ){ \
       (p_cb) = &tColorSensor_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tColorSensor_TECSGENH */
