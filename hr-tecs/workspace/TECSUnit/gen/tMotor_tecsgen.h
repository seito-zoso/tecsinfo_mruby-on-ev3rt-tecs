/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tMotor_TECSGEN_H
#define tMotor_TECSGEN_H

/*
 * celltype          :  tMotor
 * global name       :  tMotor
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
#include "sMotor_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tMotor_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        port;
}  tMotor_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tMotor_CB_tab           tMotor_INIB_tab
#define tMotor_SINGLE_CELL_CB   tMotor_SINGLE_CELL_INIB
#define tMotor_CB               tMotor_INIB
#define tag_tMotor_CB           tag_tMotor_INIB

extern tMotor_CB  tMotor_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tMotor_INIB *tMotor_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sMotor */
ER_UINT      tMotor_eMotor_getType(tMotor_IDX idx);
int32_t      tMotor_eMotor_getCounts(tMotor_IDX idx);
int          tMotor_eMotor_getPower(tMotor_IDX idx);
ER           tMotor_eMotor_resetCounts(tMotor_IDX idx);
ER           tMotor_eMotor_setPower(tMotor_IDX idx, int power);
ER           tMotor_eMotor_stop(tMotor_IDX idx, bool_t brake);
ER           tMotor_eMotor_rotate(tMotor_IDX idx, int degrees, uint32_t speed_abs, bool_t blocking);
void         tMotor_eMotor_initializePort(tMotor_IDX idx, int32_t type);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tMotor_ID_BASE              (1)  /* ID �Υ١���  #_NIDB_# */
#define tMotor_N_CELL               (4)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tMotor_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tMotor_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define tMotor_ATTR_port( p_that )	((p_that)->port)

#define tMotor_GET_port(p_that)	((p_that)->port)



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
#define VALID_IDX(IDX)  tMotor_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tMotor_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tMotor_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tMotor_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_port            tMotor_ATTR_port( p_cellcb )





/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eMotor_getType   tMotor_eMotor_getType
#define eMotor_getCounts tMotor_eMotor_getCounts
#define eMotor_getPower  tMotor_eMotor_getPower
#define eMotor_resetCounts tMotor_eMotor_resetCounts
#define eMotor_setPower  tMotor_eMotor_setPower
#define eMotor_stop      tMotor_eMotor_stop
#define eMotor_rotate    tMotor_eMotor_rotate
#define eMotor_initializePort tMotor_eMotor_initializePort

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tMotor_N_CELL; (i)++ ){ \
       (p_cb) = &tMotor_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tMotor_TECSGENH */
