/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sRiteVM_TECSGEN_H
#define sRiteVM_TECSGEN_H

/*
 * signature   :  sRiteVM
 * global name :  sRiteVM
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sRiteVM_VDES {
    struct tag_sRiteVM_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sRiteVM_VMT {
    void           (*reset__T)( const struct tag_sRiteVM_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sRiteVM_Defined
#define  Descriptor_of_sRiteVM_Defined
typedef struct { struct tag_sRiteVM_VDES *vdes; } Descriptor( sRiteVM );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SRITEVM_RESET                   (1)

#endif /* sRiteVM_TECSGEN_H */
