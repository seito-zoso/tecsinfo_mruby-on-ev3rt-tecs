/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sInitializeRoutineBody_TECSGEN_H
#define sInitializeRoutineBody_TECSGEN_H

/*
 * signature   :  sInitializeRoutineBody
 * global name :  sInitializeRoutineBody
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sInitializeRoutineBody_VDES {
    struct tag_sInitializeRoutineBody_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sInitializeRoutineBody_VMT {
    void           (*main__T)( const struct tag_sInitializeRoutineBody_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sInitializeRoutineBody_Defined
#define  Descriptor_of_sInitializeRoutineBody_Defined
typedef struct { struct tag_sInitializeRoutineBody_VDES *vdes; } Descriptor( sInitializeRoutineBody );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SINITIALIZEROUTINEBODY_MAIN     (1)

#endif /* sInitializeRoutineBody_TECSGEN_H */
