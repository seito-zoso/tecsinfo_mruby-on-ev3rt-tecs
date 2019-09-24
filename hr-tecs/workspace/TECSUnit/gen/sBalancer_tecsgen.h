/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sBalancer_TECSGEN_H
#define sBalancer_TECSGEN_H

/*
 * signature   :  sBalancer
 * global name :  sBalancer
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sBalancer_VDES {
    struct tag_sBalancer_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sBalancer_VMT {
    void           (*control__T)( const struct tag_sBalancer_VDES *edp, int16_t forward, int16_t turn, int16_t gyro, int16_t gyroOffset, int32_t leftRevolution, int32_t rightRevolution, int16_t battery, int8_t* pwm_l, int8_t* pwm_r, int32_t backlashhalf );
    void           (*init__T)( const struct tag_sBalancer_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sBalancer_Defined
#define  Descriptor_of_sBalancer_Defined
typedef struct { struct tag_sBalancer_VDES *vdes; } Descriptor( sBalancer );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SBALANCER_CONTROL               (1)
#define	FUNCID_SBALANCER_INIT                  (2)

#endif /* sBalancer_TECSGEN_H */
