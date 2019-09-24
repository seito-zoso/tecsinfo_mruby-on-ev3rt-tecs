/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sButton_TECSGEN_H
#define sButton_TECSGEN_H

/*
 * signature   :  sButton
 * global name :  sButton
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sButton_VDES {
    struct tag_sButton_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sButton_VMT {
    bool_t         (*isPressed__T)( const struct tag_sButton_VDES *edp, button_t button );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sButton_Defined
#define  Descriptor_of_sButton_Defined
typedef struct { struct tag_sButton_VDES *vdes; } Descriptor( sButton );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SBUTTON_ISPRESSED               (1)

#endif /* sButton_TECSGEN_H */
