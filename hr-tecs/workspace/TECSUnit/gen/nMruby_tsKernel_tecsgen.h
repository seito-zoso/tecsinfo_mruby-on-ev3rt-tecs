/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nMruby_tsKernel_TECSGEN_H
#define nMruby_tsKernel_TECSGEN_H

/*
 * celltype          :  tsKernel
 * global name       :  nMruby_tsKernel
 * idx_is_id(actual) :  yes(yes)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  0
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sKernel_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nMruby_tsKernel_INIB {
    /* call port #_TCP_# */
}  nMruby_tsKernel_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nMruby_tsKernel_CB_tab           nMruby_tsKernel_INIB_tab
#define nMruby_tsKernel_SINGLE_CELL_CB   nMruby_tsKernel_SINGLE_CELL_INIB
#define nMruby_tsKernel_CB               nMruby_tsKernel_INIB
#define tag_nMruby_tsKernel_CB           tag_nMruby_tsKernel_INIB

extern nMruby_tsKernel_CB  *nMruby_tsKernel_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef ID nMruby_tsKernel_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nMruby_tsKernel_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tKernel_tecsgen.h"
#ifdef  nMruby_tsKernel_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nMruby_tsKernel_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tsKernel_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nMruby_tsKernel_N_CELL        (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nMruby_tsKernel_VALID_IDX(IDX) (nMruby_tsKernel_ID_BASE <= (IDX) && (IDX) < nMruby_tsKernel_ID_BASE+nMruby_tsKernel_N_CELL)


/* ����CB������ޥ��� #_GCB_# */
#define nMruby_tsKernel_GET_CELLCB(idx) (nMruby_tsKernel_CB_tab[(idx) - nMruby_tsKernel_ID_BASE])
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nMruby_tsKernel_cTECS_sleep( p_that ) \
	  tKernel_eKernel_sleep( \
	    )
#define nMruby_tsKernel_cTECS_sleepTimeout( p_that, timeout ) \
	  tKernel_eKernel_sleepTimeout( \
	    (timeout) )
#define nMruby_tsKernel_cTECS_delay( p_that, delayTime ) \
	  tKernel_eKernel_delay( \
	    (delayTime) )
#define nMruby_tsKernel_cTECS_exitTask( p_that ) \
	  tKernel_eKernel_exitTask( \
	    )
#define nMruby_tsKernel_cTECS_getTaskId( p_that, p_taskId ) \
	  tKernel_eKernel_getTaskId( \
	    (p_taskId) )
#define nMruby_tsKernel_cTECS_rotateReadyQueue( p_that, taskPriority ) \
	  tKernel_eKernel_rotateReadyQueue( \
	    (taskPriority) )
#define nMruby_tsKernel_cTECS_getTime( p_that, p_systemTime ) \
	  tKernel_eKernel_getTime( \
	    (p_systemTime) )
#define nMruby_tsKernel_cTECS_getMicroTime( p_that, p_systemMicroTime ) \
	  tKernel_eKernel_getMicroTime( \
	    (p_systemMicroTime) )
#define nMruby_tsKernel_cTECS_lockCpu( p_that ) \
	  tKernel_eKernel_lockCpu( \
	    )
#define nMruby_tsKernel_cTECS_unlockCpu( p_that ) \
	  tKernel_eKernel_unlockCpu( \
	    )
#define nMruby_tsKernel_cTECS_disableDispatch( p_that ) \
	  tKernel_eKernel_disableDispatch( \
	    )
#define nMruby_tsKernel_cTECS_enableDispatch( p_that ) \
	  tKernel_eKernel_enableDispatch( \
	    )
#define nMruby_tsKernel_cTECS_disableTaskException( p_that ) \
	  tKernel_eKernel_disableTaskException( \
	    )
#define nMruby_tsKernel_cTECS_enableTaskException( p_that ) \
	  tKernel_eKernel_enableTaskException( \
	    )
#define nMruby_tsKernel_cTECS_changeInterruptPriorityMask( p_that, interruptPriority ) \
	  tKernel_eKernel_changeInterruptPriorityMask( \
	    (interruptPriority) )
#define nMruby_tsKernel_cTECS_getInterruptPriorityMask( p_that, p_interruptPriority ) \
	  tKernel_eKernel_getInterruptPriorityMask( \
	    (p_interruptPriority) )
#define nMruby_tsKernel_cTECS_exitKernel( p_that ) \
	  tKernel_eKernel_exitKernel( \
	    )
#define nMruby_tsKernel_cTECS_senseContext( p_that ) \
	  tKernel_eKernel_senseContext( \
	    )
#define nMruby_tsKernel_cTECS_senseLock( p_that ) \
	  tKernel_eKernel_senseLock( \
	    )
#define nMruby_tsKernel_cTECS_senseDispatch( p_that ) \
	  tKernel_eKernel_senseDispatch( \
	    )
#define nMruby_tsKernel_cTECS_senseDispatchPendingState( p_that ) \
	  tKernel_eKernel_senseDispatchPendingState( \
	    )
#define nMruby_tsKernel_cTECS_senseKernel( p_that ) \
	  tKernel_eKernel_senseKernel( \
	    )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  nMruby_tsKernel_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tsKernel_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nMruby_tsKernel_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nMruby_tsKernel_IDX

#define tsKernel_IDX  nMruby_tsKernel_IDX
/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cTECS_sleep( ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_sleep( p_cellcb ))
#define cTECS_sleepTimeout( timeout ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_sleepTimeout( p_cellcb, timeout ))
#define cTECS_delay( delayTime ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_delay( p_cellcb, delayTime ))
#define cTECS_exitTask( ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_exitTask( p_cellcb ))
#define cTECS_getTaskId( p_taskId ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_getTaskId( p_cellcb, p_taskId ))
#define cTECS_rotateReadyQueue( taskPriority ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_rotateReadyQueue( p_cellcb, taskPriority ))
#define cTECS_getTime( p_systemTime ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_getTime( p_cellcb, p_systemTime ))
#define cTECS_getMicroTime( p_systemMicroTime ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_getMicroTime( p_cellcb, p_systemMicroTime ))
#define cTECS_lockCpu( ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_lockCpu( p_cellcb ))
#define cTECS_unlockCpu( ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_unlockCpu( p_cellcb ))
#define cTECS_disableDispatch( ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_disableDispatch( p_cellcb ))
#define cTECS_enableDispatch( ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_enableDispatch( p_cellcb ))
#define cTECS_disableTaskException( ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_disableTaskException( p_cellcb ))
#define cTECS_enableTaskException( ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_enableTaskException( p_cellcb ))
#define cTECS_changeInterruptPriorityMask( interruptPriority ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_changeInterruptPriorityMask( p_cellcb, interruptPriority ))
#define cTECS_getInterruptPriorityMask( p_interruptPriority ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_getInterruptPriorityMask( p_cellcb, p_interruptPriority ))
#define cTECS_exitKernel( ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_exitKernel( p_cellcb ))
#define cTECS_senseContext( ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_senseContext( p_cellcb ))
#define cTECS_senseLock( ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_senseLock( p_cellcb ))
#define cTECS_senseDispatch( ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_senseDispatch( p_cellcb ))
#define cTECS_senseDispatchPendingState( ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_senseDispatchPendingState( p_cellcb ))
#define cTECS_senseKernel( ) \
          ((void)p_cellcb, nMruby_tsKernel_cTECS_senseKernel( p_cellcb ))



/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nMruby_tsKernel_N_CELL; (i)++ ){ \
       (p_cb) = nMruby_tsKernel_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tsKernel_TECSGENH */
