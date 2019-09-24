/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sBattery_TECSGEN_H
#define sBattery_TECSGEN_H

/*
 * signature   :  sBattery
 * global name :  sBattery
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sBattery_VDES {
    struct tag_sBattery_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sBattery_VMT {
    int            (*current_mA__T)( const struct tag_sBattery_VDES *edp );
    int            (*voltage_mV__T)( const struct tag_sBattery_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sBattery_Defined
#define  Descriptor_of_sBattery_Defined
typedef struct { struct tag_sBattery_VDES *vdes; } Descriptor( sBattery );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SBATTERY_CURRENT_MA             (1)
#define	FUNCID_SBATTERY_VOLTAGE_MV             (2)

#endif /* sBattery_TECSGEN_H */
