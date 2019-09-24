/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sSpeaker_TECSGEN_H
#define sSpeaker_TECSGEN_H

/*
 * signature   :  sSpeaker
 * global name :  sSpeaker
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sSpeaker_VDES {
    struct tag_sSpeaker_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sSpeaker_VMT {
    ER             (*setVolume__T)( const struct tag_sSpeaker_VDES *edp, uint8_t volume );
    ER             (*playTone__T)( const struct tag_sSpeaker_VDES *edp, uint16_t frequency, int32_t duration );
    ER             (*stop__T)( const struct tag_sSpeaker_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sSpeaker_Defined
#define  Descriptor_of_sSpeaker_Defined
typedef struct { struct tag_sSpeaker_VDES *vdes; } Descriptor( sSpeaker );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSPEAKER_SETVOLUME              (1)
#define	FUNCID_SSPEAKER_PLAYTONE               (2)
#define	FUNCID_SSPEAKER_STOP                   (3)

#endif /* sSpeaker_TECSGEN_H */
