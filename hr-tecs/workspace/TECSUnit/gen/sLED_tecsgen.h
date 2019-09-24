/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sLED_TECSGEN_H
#define sLED_TECSGEN_H

/*
 * signature   :  sLED
 * global name :  sLED
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sLED_VDES {
    struct tag_sLED_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sLED_VMT {
    ER             (*setColor__T)( const struct tag_sLED_VDES *edp, ledcolor_t color );
    ER             (*off__T)( const struct tag_sLED_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sLED_Defined
#define  Descriptor_of_sLED_Defined
typedef struct { struct tag_sLED_VDES *vdes; } Descriptor( sLED );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SLED_SETCOLOR                   (1)
#define	FUNCID_SLED_OFF                        (2)

#endif /* sLED_TECSGEN_H */
