/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef siPriorityDataqueue_TECSGEN_H
#define siPriorityDataqueue_TECSGEN_H

/*
 * signature   :  siPriorityDataqueue
 * global name :  siPriorityDataqueue
 * context     :  non-task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_siPriorityDataqueue_VDES {
    struct tag_siPriorityDataqueue_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_siPriorityDataqueue_VMT {
    ER             (*sendPolling__T)( const struct tag_siPriorityDataqueue_VDES *edp, intptr_t data, PRI dataPriority );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_siPriorityDataqueue_Defined
#define  Descriptor_of_siPriorityDataqueue_Defined
typedef struct { struct tag_siPriorityDataqueue_VDES *vdes; } Descriptor( siPriorityDataqueue );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SIPRIORITYDATAQUEUE_SENDPOLLING (1)

#endif /* siPriorityDataqueue_TECSGEN_H */
