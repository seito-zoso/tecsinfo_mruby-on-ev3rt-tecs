/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sColorSensor_TECSGEN_H
#define sColorSensor_TECSGEN_H

/*
 * signature   :  sColorSensor
 * global name :  sColorSensor
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sColorSensor_VDES {
    struct tag_sColorSensor_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sColorSensor_VMT {
    colorid_t      (*getColor__T)( const struct tag_sColorSensor_VDES *edp );
    uint8_t        (*getReflect__T)( const struct tag_sColorSensor_VDES *edp );
    uint8_t        (*getAmbient__T)( const struct tag_sColorSensor_VDES *edp );
    void           (*initializePort__T)( const struct tag_sColorSensor_VDES *edp );
    void           (*getRGBRaw__T)( const struct tag_sColorSensor_VDES *edp, uint16_t* r, uint16_t* g, uint16_t* b );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sColorSensor_Defined
#define  Descriptor_of_sColorSensor_Defined
typedef struct { struct tag_sColorSensor_VDES *vdes; } Descriptor( sColorSensor );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SCOLORSENSOR_GETCOLOR           (1)
#define	FUNCID_SCOLORSENSOR_GETREFLECT         (2)
#define	FUNCID_SCOLORSENSOR_GETAMBIENT         (3)
#define	FUNCID_SCOLORSENSOR_INITIALIZEPORT     (4)
#define	FUNCID_SCOLORSENSOR_GETRGBRAW          (5)

#endif /* sColorSensor_TECSGEN_H */
