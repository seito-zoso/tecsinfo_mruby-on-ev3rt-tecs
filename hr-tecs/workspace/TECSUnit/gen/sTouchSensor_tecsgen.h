/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sTouchSensor_TECSGEN_H
#define sTouchSensor_TECSGEN_H

/*
 * signature   :  sTouchSensor
 * global name :  sTouchSensor
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sTouchSensor_VDES {
    struct tag_sTouchSensor_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sTouchSensor_VMT {
    bool_t         (*isPressed__T)( const struct tag_sTouchSensor_VDES *edp );
    void           (*initializePort__T)( const struct tag_sTouchSensor_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sTouchSensor_Defined
#define  Descriptor_of_sTouchSensor_Defined
typedef struct { struct tag_sTouchSensor_VDES *vdes; } Descriptor( sTouchSensor );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_STOUCHSENSOR_ISPRESSED          (1)
#define	FUNCID_STOUCHSENSOR_INITIALIZEPORT     (2)

#endif /* sTouchSensor_TECSGEN_H */
