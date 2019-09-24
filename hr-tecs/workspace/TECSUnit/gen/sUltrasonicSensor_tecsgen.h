/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sUltrasonicSensor_TECSGEN_H
#define sUltrasonicSensor_TECSGEN_H

/*
 * signature   :  sUltrasonicSensor
 * global name :  sUltrasonicSensor
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sUltrasonicSensor_VDES {
    struct tag_sUltrasonicSensor_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sUltrasonicSensor_VMT {
    int16_t        (*getDistance__T)( const struct tag_sUltrasonicSensor_VDES *edp );
    bool_t         (*listen__T)( const struct tag_sUltrasonicSensor_VDES *edp );
    void           (*initializePort__T)( const struct tag_sUltrasonicSensor_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sUltrasonicSensor_Defined
#define  Descriptor_of_sUltrasonicSensor_Defined
typedef struct { struct tag_sUltrasonicSensor_VDES *vdes; } Descriptor( sUltrasonicSensor );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SULTRASONICSENSOR_GETDISTANCE   (1)
#define	FUNCID_SULTRASONICSENSOR_LISTEN        (2)
#define	FUNCID_SULTRASONICSENSOR_INITIALIZEPORT (3)

#endif /* sUltrasonicSensor_TECSGEN_H */
