/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef siAlarm_TECSGEN_H
#define siAlarm_TECSGEN_H

/*
 * signature   :  siAlarm
 * global name :  siAlarm
 * context     :  non-task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_siAlarm_VDES {
    struct tag_siAlarm_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_siAlarm_VMT {
    ER             (*start__T)( const struct tag_siAlarm_VDES *edp, RELTIM alarmTime );
    ER             (*stop__T)( const struct tag_siAlarm_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_siAlarm_Defined
#define  Descriptor_of_siAlarm_Defined
typedef struct { struct tag_siAlarm_VDES *vdes; } Descriptor( siAlarm );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SIALARM_START                   (1)
#define	FUNCID_SIALARM_STOP                    (2)

#endif /* siAlarm_TECSGEN_H */
