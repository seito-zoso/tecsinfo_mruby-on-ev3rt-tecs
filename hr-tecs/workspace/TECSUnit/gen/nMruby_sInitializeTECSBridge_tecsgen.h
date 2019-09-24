/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nMruby_sInitializeTECSBridge_TECSGEN_H
#define nMruby_sInitializeTECSBridge_TECSGEN_H

/*
 * signature   :  sInitializeTECSBridge
 * global name :  nMruby_sInitializeTECSBridge
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_nMruby_sInitializeTECSBridge_VDES {
    struct tag_nMruby_sInitializeTECSBridge_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_nMruby_sInitializeTECSBridge_VMT {
    void           (*initializeBridge__T)( const struct tag_nMruby_sInitializeTECSBridge_VDES *edp, mrb_state* mrb, struct RClass* TECS );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_nMruby_sInitializeTECSBridge_Defined
#define  Descriptor_of_nMruby_sInitializeTECSBridge_Defined
typedef struct { struct tag_nMruby_sInitializeTECSBridge_VDES *vdes; } Descriptor( nMruby_sInitializeTECSBridge );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NMRUBY_SINITIALIZETECSBRIDGE_INITIALIZEBRIDGE (1)

#endif /* nMruby_sInitializeTECSBridge_TECSGEN_H */
