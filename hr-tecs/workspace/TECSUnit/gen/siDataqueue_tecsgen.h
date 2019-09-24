/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef siDataqueue_TECSGEN_H
#define siDataqueue_TECSGEN_H

/*
 * signature   :  siDataqueue
 * global name :  siDataqueue
 * context     :  non-task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_siDataqueue_VDES {
    struct tag_siDataqueue_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_siDataqueue_VMT {
    ER             (*sendPolling__T)( const struct tag_siDataqueue_VDES *edp, intptr_t data );
    ER             (*sendForce__T)( const struct tag_siDataqueue_VDES *edp, intptr_t data );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_siDataqueue_Defined
#define  Descriptor_of_siDataqueue_Defined
typedef struct { struct tag_siDataqueue_VDES *vdes; } Descriptor( siDataqueue );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SIDATAQUEUE_SENDPOLLING         (1)
#define	FUNCID_SIDATAQUEUE_SENDFORCE           (2)

#endif /* siDataqueue_TECSGEN_H */
