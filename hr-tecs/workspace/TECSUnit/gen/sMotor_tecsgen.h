/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sMotor_TECSGEN_H
#define sMotor_TECSGEN_H

/*
 * signature   :  sMotor
 * global name :  sMotor
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sMotor_VDES {
    struct tag_sMotor_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sMotor_VMT {
    ER_UINT        (*getType__T)( const struct tag_sMotor_VDES *edp );
    int32_t        (*getCounts__T)( const struct tag_sMotor_VDES *edp );
    int            (*getPower__T)( const struct tag_sMotor_VDES *edp );
    ER             (*resetCounts__T)( const struct tag_sMotor_VDES *edp );
    ER             (*setPower__T)( const struct tag_sMotor_VDES *edp, int power );
    ER             (*stop__T)( const struct tag_sMotor_VDES *edp, bool_t brake );
    ER             (*rotate__T)( const struct tag_sMotor_VDES *edp, int degrees, uint32_t speed_abs, bool_t blocking );
    void           (*initializePort__T)( const struct tag_sMotor_VDES *edp, int32_t type );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sMotor_Defined
#define  Descriptor_of_sMotor_Defined
typedef struct { struct tag_sMotor_VDES *vdes; } Descriptor( sMotor );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SMOTOR_GETTYPE                  (1)
#define	FUNCID_SMOTOR_GETCOUNTS                (2)
#define	FUNCID_SMOTOR_GETPOWER                 (3)
#define	FUNCID_SMOTOR_RESETCOUNTS              (4)
#define	FUNCID_SMOTOR_SETPOWER                 (5)
#define	FUNCID_SMOTOR_STOP                     (6)
#define	FUNCID_SMOTOR_ROTATE                   (7)
#define	FUNCID_SMOTOR_INITIALIZEPORT           (8)

#endif /* sMotor_TECSGEN_H */
