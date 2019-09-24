/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tSharedMemory_TECSGEN_H
#define tSharedMemory_TECSGEN_H

/*
 * celltype          :  tSharedMemory
 * global name       :  tSharedMemory
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
#include "sSharedMemory_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tSharedMemory_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    int32_t        size;
    int32_t*       data;
}  tSharedMemory_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tSharedMemory_CB_tab           tSharedMemory_INIB_tab
#define tSharedMemory_SINGLE_CELL_CB   tSharedMemory_SINGLE_CELL_INIB
#define tSharedMemory_CB               tSharedMemory_INIB
#define tag_tSharedMemory_CB           tag_tSharedMemory_INIB

extern tSharedMemory_CB  tSharedMemory_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tSharedMemory_INIB *tSharedMemory_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sSharedMemory */
void         tSharedMemory_eSharedMemory_putVal(tSharedMemory_IDX idx, int32_t index, int32_t val);
int32_t      tSharedMemory_eSharedMemory_getVal(tSharedMemory_IDX idx, int32_t index);
int32_t      tSharedMemory_eSharedMemory_getSize(tSharedMemory_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tSharedMemory_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define tSharedMemory_N_CELL        (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tSharedMemory_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tSharedMemory_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define tSharedMemory_ATTR_size( p_that )	((p_that)->size)

#define tSharedMemory_GET_size(p_that)	((p_that)->size)


/* var ���������ޥ��� #_VAM_# */
#define tSharedMemory_VAR_data(p_that)	((p_that)->data)

#define tSharedMemory_GET_data(p_that)	((p_that)->data)
#define tSharedMemory_SET_data(p_that,val)	((p_that)->data=(val))

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
#define VALID_IDX(IDX)  tSharedMemory_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tSharedMemory_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tSharedMemory_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tSharedMemory_IDX


/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_size            tSharedMemory_ATTR_size( p_cellcb )


/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_data             tSharedMemory_VAR_data( p_cellcb )




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eSharedMemory_putVal tSharedMemory_eSharedMemory_putVal
#define eSharedMemory_getVal tSharedMemory_eSharedMemory_getVal
#define eSharedMemory_getSize tSharedMemory_eSharedMemory_getSize

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tSharedMemory_N_CELL; (i)++ ){ \
       (p_cb) = &tSharedMemory_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSharedMemory_TECSGENH */
