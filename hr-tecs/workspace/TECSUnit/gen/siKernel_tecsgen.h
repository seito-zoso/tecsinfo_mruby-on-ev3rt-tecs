/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef siKernel_TECSGEN_H
#define siKernel_TECSGEN_H

/*
 * signature   :  siKernel
 * global name :  siKernel
 * context     :  non-task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_siKernel_VDES {
    struct tag_siKernel_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_siKernel_VMT {
    ER             (*getTaskId__T)( const struct tag_siKernel_VDES *edp, ID* p_taskId );
    ER             (*rotateReadyQueue__T)( const struct tag_siKernel_VDES *edp, PRI taskPriority );
    ER             (*getMicroTime__T)( const struct tag_siKernel_VDES *edp, SYSUTM* p_systemMicroTime );
    ER             (*lockCpu__T)( const struct tag_siKernel_VDES *edp );
    ER             (*unlockCpu__T)( const struct tag_siKernel_VDES *edp );
    ER             (*exitKernel__T)( const struct tag_siKernel_VDES *edp );
    bool_t         (*senseContext__T)( const struct tag_siKernel_VDES *edp );
    bool_t         (*senseLock__T)( const struct tag_siKernel_VDES *edp );
    bool_t         (*senseDispatch__T)( const struct tag_siKernel_VDES *edp );
    bool_t         (*senseDispatchPendingState__T)( const struct tag_siKernel_VDES *edp );
    bool_t         (*senseKernel__T)( const struct tag_siKernel_VDES *edp );
    bool_t         (*senseDispatchPendingStateCPU__T)( const struct tag_siKernel_VDES *edp, const void* p_exceptionInfomation );
    bool_t         (*senseTaskExceptionPendingStateCPU__T)( const struct tag_siKernel_VDES *edp, const void* p_exceptionInfomation );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_siKernel_Defined
#define  Descriptor_of_siKernel_Defined
typedef struct { struct tag_siKernel_VDES *vdes; } Descriptor( siKernel );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SIKERNEL_GETTASKID              (1)
#define	FUNCID_SIKERNEL_ROTATEREADYQUEUE       (2)
#define	FUNCID_SIKERNEL_GETMICROTIME           (3)
#define	FUNCID_SIKERNEL_LOCKCPU                (4)
#define	FUNCID_SIKERNEL_UNLOCKCPU              (5)
#define	FUNCID_SIKERNEL_EXITKERNEL             (6)
#define	FUNCID_SIKERNEL_SENSECONTEXT           (7)
#define	FUNCID_SIKERNEL_SENSELOCK              (8)
#define	FUNCID_SIKERNEL_SENSEDISPATCH          (9)
#define	FUNCID_SIKERNEL_SENSEDISPATCHPENDINGSTATE (10)
#define	FUNCID_SIKERNEL_SENSEKERNEL            (11)
#define	FUNCID_SIKERNEL_SENSEDISPATCHPENDINGSTATECPU (12)
#define	FUNCID_SIKERNEL_SENSETASKEXCEPTIONPENDINGSTATECPU (13)

#endif /* siKernel_TECSGEN_H */
