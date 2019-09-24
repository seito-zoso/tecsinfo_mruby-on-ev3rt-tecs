/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tEV3Platform_TECSGEN_H
#define tEV3Platform_TECSGEN_H

/*
 * celltype          :  tEV3Platform
 * global name       :  tEV3Platform
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
#include "sTaskBody_tecsgen.h"
#include "sRiteVM_tecsgen.h"
#include "sTask_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tEV3Platform_INIB {
    /* call port #_TCP_# */
    struct tag_sRiteVM_VDES *const*cRiteVM;
    int_t n_cRiteVM;
    struct tag_sTask_VDES *const*cTask;
    int_t n_cTask;
    /* call port #_NEP_# */ 
}  tEV3Platform_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tEV3Platform_CB_tab           tEV3Platform_INIB_tab
#define tEV3Platform_SINGLE_CELL_CB   tEV3Platform_SINGLE_CELL_INIB
#define tEV3Platform_CB               tEV3Platform_INIB
#define tag_tEV3Platform_CB           tag_tEV3Platform_INIB

extern tEV3Platform_CB  tEV3Platform_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tEV3Platform_INIB *tEV3Platform_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sTaskBody */
void         tEV3Platform_eTaskBody_main(tEV3Platform_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tEV3Platform_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define tEV3Platform_N_CELL         (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tEV3Platform_VALID_IDX(IDX) (1)

/* �ƤӸ�������礭��������ޥ��� #_NCPA_# */
#define N_CP_cRiteVM(p_that)  ((p_that)->n_cRiteVM)
#define NCP_cRiteVM           (N_CP_cRiteVM(p_cellcb))
#define N_CP_cTask(p_that)  ((p_that)->n_cTask)
#define NCP_cTask           (N_CP_cTask(p_cellcb))
/* optional �ƤӸ���ƥ��Ȥ���ޥ��� #_TOCP_# */
#define tEV3Platform_is_cRiteVM_joined(p_that,subscript) \
	  (((p_that)->cRiteVM!=0)\
	  &&((p_that)->cRiteVM[subscript]!=0))
#define tEV3Platform_is_cTask_joined(p_that,subscript) \
	  (((p_that)->cTask!=0)\
	  &&((p_that)->cTask[subscript]!=0))

/* ����CB������ޥ��� #_GCB_# */
#define tEV3Platform_GET_CELLCB(idx) (idx)
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tEV3Platform_cRiteVM_reset( p_that, subscript ) \
	  (p_that)->cRiteVM[subscript]->VMT->reset__T( \
	   (p_that)->cRiteVM[subscript] )
#define tEV3Platform_cTask_activate( p_that, subscript ) \
	  (p_that)->cTask[subscript]->VMT->activate__T( \
	   (p_that)->cTask[subscript] )
#define tEV3Platform_cTask_cancelActivate( p_that, subscript ) \
	  (p_that)->cTask[subscript]->VMT->cancelActivate__T( \
	   (p_that)->cTask[subscript] )
#define tEV3Platform_cTask_terminate( p_that, subscript ) \
	  (p_that)->cTask[subscript]->VMT->terminate__T( \
	   (p_that)->cTask[subscript] )
#define tEV3Platform_cTask_changePriority( p_that, subscript, priority ) \
	  (p_that)->cTask[subscript]->VMT->changePriority__T( \
	   (p_that)->cTask[subscript], (priority) )
#define tEV3Platform_cTask_getPriority( p_that, subscript, p_priority ) \
	  (p_that)->cTask[subscript]->VMT->getPriority__T( \
	   (p_that)->cTask[subscript], (p_priority) )
#define tEV3Platform_cTask_refer( p_that, subscript, pk_taskStatus ) \
	  (p_that)->cTask[subscript]->VMT->refer__T( \
	   (p_that)->cTask[subscript], (pk_taskStatus) )
#define tEV3Platform_cTask_wakeup( p_that, subscript ) \
	  (p_that)->cTask[subscript]->VMT->wakeup__T( \
	   (p_that)->cTask[subscript] )
#define tEV3Platform_cTask_cancelWakeup( p_that, subscript ) \
	  (p_that)->cTask[subscript]->VMT->cancelWakeup__T( \
	   (p_that)->cTask[subscript] )
#define tEV3Platform_cTask_releaseWait( p_that, subscript ) \
	  (p_that)->cTask[subscript]->VMT->releaseWait__T( \
	   (p_that)->cTask[subscript] )
#define tEV3Platform_cTask_suspend( p_that, subscript ) \
	  (p_that)->cTask[subscript]->VMT->suspend__T( \
	   (p_that)->cTask[subscript] )
#define tEV3Platform_cTask_resume( p_that, subscript ) \
	  (p_that)->cTask[subscript]->VMT->resume__T( \
	   (p_that)->cTask[subscript] )
#define tEV3Platform_cTask_raiseException( p_that, subscript, pattern ) \
	  (p_that)->cTask[subscript]->VMT->raiseException__T( \
	   (p_that)->cTask[subscript], (pattern) )
#define tEV3Platform_cTask_referException( p_that, subscript, pk_rtex ) \
	  (p_that)->cTask[subscript]->VMT->referException__T( \
	   (p_that)->cTask[subscript], (pk_rtex) )
#define tEV3Platform_cTask_startOverRunHandler( p_that, subscript, ovrtim ) \
	  (p_that)->cTask[subscript]->VMT->startOverRunHandler__T( \
	   (p_that)->cTask[subscript], (ovrtim) )
#define tEV3Platform_cTask_stopOverRunHandler( p_that, subscript ) \
	  (p_that)->cTask[subscript]->VMT->stopOverRunHandler__T( \
	   (p_that)->cTask[subscript] )
#define tEV3Platform_cTask_referOverRunHandler( p_that, subscript, pk_rovr ) \
	  (p_that)->cTask[subscript]->VMT->referOverRunHandler__T( \
	   (p_that)->cTask[subscript], (pk_rovr) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eTaskBody */
void           tEV3Platform_eTaskBody_main_skel( const struct tag_sTaskBody_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tEV3Platform_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tEV3Platform_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tEV3Platform_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tEV3Platform_IDX

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cRiteVM_reset( subscript ) \
          tEV3Platform_cRiteVM_reset( p_cellcb, subscript )
#define cTask_activate( subscript ) \
          tEV3Platform_cTask_activate( p_cellcb, subscript )
#define cTask_cancelActivate( subscript ) \
          tEV3Platform_cTask_cancelActivate( p_cellcb, subscript )
#define cTask_terminate( subscript ) \
          tEV3Platform_cTask_terminate( p_cellcb, subscript )
#define cTask_changePriority( subscript, priority ) \
          tEV3Platform_cTask_changePriority( p_cellcb, subscript, priority )
#define cTask_getPriority( subscript, p_priority ) \
          tEV3Platform_cTask_getPriority( p_cellcb, subscript, p_priority )
#define cTask_refer( subscript, pk_taskStatus ) \
          tEV3Platform_cTask_refer( p_cellcb, subscript, pk_taskStatus )
#define cTask_wakeup( subscript ) \
          tEV3Platform_cTask_wakeup( p_cellcb, subscript )
#define cTask_cancelWakeup( subscript ) \
          tEV3Platform_cTask_cancelWakeup( p_cellcb, subscript )
#define cTask_releaseWait( subscript ) \
          tEV3Platform_cTask_releaseWait( p_cellcb, subscript )
#define cTask_suspend( subscript ) \
          tEV3Platform_cTask_suspend( p_cellcb, subscript )
#define cTask_resume( subscript ) \
          tEV3Platform_cTask_resume( p_cellcb, subscript )
#define cTask_raiseException( subscript, pattern ) \
          tEV3Platform_cTask_raiseException( p_cellcb, subscript, pattern )
#define cTask_referException( subscript, pk_rtex ) \
          tEV3Platform_cTask_referException( p_cellcb, subscript, pk_rtex )
#define cTask_startOverRunHandler( subscript, ovrtim ) \
          tEV3Platform_cTask_startOverRunHandler( p_cellcb, subscript, ovrtim )
#define cTask_stopOverRunHandler( subscript ) \
          tEV3Platform_cTask_stopOverRunHandler( p_cellcb, subscript )
#define cTask_referOverRunHandler( subscript, pk_rovr ) \
          tEV3Platform_cTask_referOverRunHandler( p_cellcb, subscript, pk_rovr )



/* optional �ƤӸ���ƥ��Ȥ���ޥ����û�̷��� #_TOCPA_# */
#define is_cRiteVM_joined(subscript)\
		tEV3Platform_is_cRiteVM_joined(p_cellcb,subscript)
#define is_cTask_joined(subscript)\
		tEV3Platform_is_cTask_joined(p_cellcb,subscript)

/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eTaskBody_main   tEV3Platform_eTaskBody_main

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tEV3Platform_N_CELL; (i)++ ){ \
       (p_cb) = &tEV3Platform_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tEV3Platform_TECSGENH */
