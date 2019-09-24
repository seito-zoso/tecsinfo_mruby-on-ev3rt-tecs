/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tBattery_TECSGEN_H
#define tBattery_TECSGEN_H

/*
 * celltype          :  tBattery
 * global name       :  tBattery
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
#include "sBattery_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tBattery_INIB {
    /* call port #_NEP_# */ 
}  tBattery_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tBattery_CB_tab           tBattery_INIB_tab
#define tBattery_SINGLE_CELL_CB   tBattery_SINGLE_CELL_INIB
#define tBattery_CB               tBattery_INIB
#define tag_tBattery_CB           tag_tBattery_INIB

extern tBattery_CB  tBattery_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tBattery_INIB *tBattery_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sBattery */
int          tBattery_eBattery_current_mA(tBattery_IDX idx);
int          tBattery_eBattery_voltage_mV(tBattery_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tBattery_ID_BASE            (1)  /* ID �Υ١���  #_NIDB_# */
#define tBattery_N_CELL             (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tBattery_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tBattery_GET_CELLCB(idx) (idx)
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
#define VALID_IDX(IDX)  tBattery_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tBattery_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tBattery_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tBattery_IDX




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eBattery_current_mA tBattery_eBattery_current_mA
#define eBattery_voltage_mV tBattery_eBattery_voltage_mV

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tBattery_N_CELL; (i)++ ){ \
       (p_cb) = &tBattery_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tBattery_TECSGENH */
