/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sTaskExceptionBody_TECSGEN_H
#define sTaskExceptionBody_TECSGEN_H

/*
 * signature   :  sTaskExceptionBody
 * global name :  sTaskExceptionBody
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sTaskExceptionBody_VDES {
    struct tag_sTaskExceptionBody_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sTaskExceptionBody_VMT {
    void           (*main__T)( const struct tag_sTaskExceptionBody_VDES *edp, TEXPTN pattern );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sTaskExceptionBody_Defined
#define  Descriptor_of_sTaskExceptionBody_Defined
typedef struct { struct tag_sTaskExceptionBody_VDES *vdes; } Descriptor( sTaskExceptionBody );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STASKEXCEPTIONBODY_MAIN         (1)

#endif /* sTaskExceptionBody_TECSGEN_H */
