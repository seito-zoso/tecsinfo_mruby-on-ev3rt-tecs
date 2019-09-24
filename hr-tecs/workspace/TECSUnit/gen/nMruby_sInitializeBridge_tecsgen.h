/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nMruby_sInitializeBridge_TECSGEN_H
#define nMruby_sInitializeBridge_TECSGEN_H

/*
 * signature   :  sInitializeBridge
 * global name :  nMruby_sInitializeBridge
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_nMruby_sInitializeBridge_VDES {
    struct tag_nMruby_sInitializeBridge_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_nMruby_sInitializeBridge_VMT {
    void           (*initializeBridge__T)( const struct tag_nMruby_sInitializeBridge_VDES *edp, const mrb_state* mrb );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_nMruby_sInitializeBridge_Defined
#define  Descriptor_of_nMruby_sInitializeBridge_Defined
typedef struct { struct tag_nMruby_sInitializeBridge_VDES *vdes; } Descriptor( nMruby_sInitializeBridge );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NMRUBY_SINITIALIZEBRIDGE_INITIALIZEBRIDGE (1)

#endif /* nMruby_sInitializeBridge_TECSGEN_H */
