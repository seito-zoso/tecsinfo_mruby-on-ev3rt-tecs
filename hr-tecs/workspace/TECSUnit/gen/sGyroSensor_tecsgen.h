/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sGyroSensor_TECSGEN_H
#define sGyroSensor_TECSGEN_H

/*
 * signature   :  sGyroSensor
 * global name :  sGyroSensor
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sGyroSensor_VDES {
    struct tag_sGyroSensor_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sGyroSensor_VMT {
    int16_t        (*getAngle__T)( const struct tag_sGyroSensor_VDES *edp );
    int16_t        (*getRate__T)( const struct tag_sGyroSensor_VDES *edp );
    ER             (*reset__T)( const struct tag_sGyroSensor_VDES *edp );
    float32_t      (*calibrate__T)( const struct tag_sGyroSensor_VDES *edp, int32_t times );
    void           (*initializePort__T)( const struct tag_sGyroSensor_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sGyroSensor_Defined
#define  Descriptor_of_sGyroSensor_Defined
typedef struct { struct tag_sGyroSensor_VDES *vdes; } Descriptor( sGyroSensor );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SGYROSENSOR_GETANGLE            (1)
#define	FUNCID_SGYROSENSOR_GETRATE             (2)
#define	FUNCID_SGYROSENSOR_RESET               (3)
#define	FUNCID_SGYROSENSOR_CALIBRATE           (4)
#define	FUNCID_SGYROSENSOR_INITIALIZEPORT      (5)

#endif /* sGyroSensor_TECSGEN_H */
