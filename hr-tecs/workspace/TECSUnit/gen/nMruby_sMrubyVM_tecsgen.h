/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nMruby_sMrubyVM_TECSGEN_H
#define nMruby_sMrubyVM_TECSGEN_H

/*
 * signature   :  sMrubyVM
 * global name :  nMruby_sMrubyVM
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_nMruby_sMrubyVM_VDES {
    struct tag_nMruby_sMrubyVM_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_nMruby_sMrubyVM_VMT {
    bool_t         (*initialize__T)( const struct tag_nMruby_sMrubyVM_VDES *edp );
    bool_t         (*run__T)( const struct tag_nMruby_sMrubyVM_VDES *edp );
    void           (*funcall__T)( const struct tag_nMruby_sMrubyVM_VDES *edp, const char_t* name );
    void           (*finalize__T)( const struct tag_nMruby_sMrubyVM_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_nMruby_sMrubyVM_Defined
#define  Descriptor_of_nMruby_sMrubyVM_Defined
typedef struct { struct tag_nMruby_sMrubyVM_VDES *vdes; } Descriptor( nMruby_sMrubyVM );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NMRUBY_SMRUBYVM_INITIALIZE      (1)
#define	FUNCID_NMRUBY_SMRUBYVM_RUN             (2)
#define	FUNCID_NMRUBY_SMRUBYVM_FUNCALL         (3)
#define	FUNCID_NMRUBY_SMRUBYVM_FINALIZE        (4)

#endif /* nMruby_sMrubyVM_TECSGEN_H */
