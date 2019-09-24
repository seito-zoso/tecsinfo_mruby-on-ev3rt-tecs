/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sAlarm_TECSGEN_H
#define sAlarm_TECSGEN_H

/*
 * signature   :  sAlarm
 * global name :  sAlarm
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sAlarm_VDES {
    struct tag_sAlarm_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sAlarm_VMT {
    ER             (*start__T)( const struct tag_sAlarm_VDES *edp, RELTIM alarmTime );
    ER             (*stop__T)( const struct tag_sAlarm_VDES *edp );
    ER             (*refer__T)( const struct tag_sAlarm_VDES *edp, T_RALM* pk_alarmStatus );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sAlarm_Defined
#define  Descriptor_of_sAlarm_Defined
typedef struct { struct tag_sAlarm_VDES *vdes; } Descriptor( sAlarm );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SALARM_START                    (1)
#define	FUNCID_SALARM_STOP                     (2)
#define	FUNCID_SALARM_REFER                    (3)

#endif /* sAlarm_TECSGEN_H */
