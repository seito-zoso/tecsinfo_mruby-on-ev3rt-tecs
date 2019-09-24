/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tBalancer_TECSGEN_H
#define tBalancer_TECSGEN_H

/*
 * celltype          :  tBalancer
 * global name       :  tBalancer
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  false
 * has_INIB          :  0
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sBalancer_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tBalancer_INIB {
    /* call port #_NEP_# */ 
}  tBalancer_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tBalancer_CB_tab           tBalancer_INIB_tab
#define tBalancer_SINGLE_CELL_CB   tBalancer_SINGLE_CELL_INIB
#define tBalancer_CB               tBalancer_INIB
#define tag_tBalancer_CB           tag_tBalancer_INIB

/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */
extern  tBalancer_INIB  tBalancer_SINGLE_CELL_INIB;


/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tBalancer_INIB *tBalancer_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sBalancer */
void         tBalancer_eBalancer_control( int16_t forward, int16_t turn, int16_t gyro, int16_t gyroOffset, int32_t leftRevolution, int32_t rightRevolution, int16_t battery, int8_t* pwm_l, int8_t* pwm_r, int32_t backlashhalf);
void         tBalancer_eBalancer_init();
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ��� #_GCB_# */
#define tBalancer_GET_CELLCB(idx) ((void *)0)
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


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tBalancer_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tBalancer_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tBalancer_IDX




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eBalancer_control tBalancer_eBalancer_control
#define eBalancer_init   tBalancer_eBalancer_init

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tBalancer_TECSGENH */
