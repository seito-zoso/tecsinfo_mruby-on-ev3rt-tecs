/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sConfigInterrupt_TECSGEN_H
#define sConfigInterrupt_TECSGEN_H

/*
 * signature   :  sConfigInterrupt
 * global name :  sConfigInterrupt
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sConfigInterrupt_VDES {
    struct tag_sConfigInterrupt_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sConfigInterrupt_VMT {
    ER             (*disable__T)( const struct tag_sConfigInterrupt_VDES *edp );
    ER             (*enable__T)( const struct tag_sConfigInterrupt_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sConfigInterrupt_Defined
#define  Descriptor_of_sConfigInterrupt_Defined
typedef struct { struct tag_sConfigInterrupt_VDES *vdes; } Descriptor( sConfigInterrupt );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SCONFIGINTERRUPT_DISABLE        (1)
#define	FUNCID_SCONFIGINTERRUPT_ENABLE         (2)

#endif /* sConfigInterrupt_TECSGEN_H */
