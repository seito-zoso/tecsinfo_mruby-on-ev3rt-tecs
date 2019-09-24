/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sMessageBuffer_TECSGEN_H
#define sMessageBuffer_TECSGEN_H

/*
 * signature   :  sMessageBuffer
 * global name :  sMessageBuffer
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sMessageBuffer_VDES {
    struct tag_sMessageBuffer_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sMessageBuffer_VMT {
    ER             (*send__T)( const struct tag_sMessageBuffer_VDES *edp, const uint8_t* message, uint32_t size );
    ER             (*sendPolling__T)( const struct tag_sMessageBuffer_VDES *edp, const uint8_t* message, uint32_t size );
    ER             (*sendTimeout__T)( const struct tag_sMessageBuffer_VDES *edp, const uint8_t* message, uint32_t size, TMO timeout );
    ER_UINT        (*receive__T)( const struct tag_sMessageBuffer_VDES *edp, uint8_t* message );
    ER_UINT        (*receivePolling__T)( const struct tag_sMessageBuffer_VDES *edp, uint8_t* message );
    ER_UINT        (*receiveTimeout__T)( const struct tag_sMessageBuffer_VDES *edp, uint8_t* message, TMO timeout );
    void           (*initialize__T)( const struct tag_sMessageBuffer_VDES *edp );
    ER             (*refer__T)( const struct tag_sMessageBuffer_VDES *edp, T_RMBF* packet );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sMessageBuffer_Defined
#define  Descriptor_of_sMessageBuffer_Defined
typedef struct { struct tag_sMessageBuffer_VDES *vdes; } Descriptor( sMessageBuffer );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SMESSAGEBUFFER_SEND             (1)
#define	FUNCID_SMESSAGEBUFFER_SENDPOLLING      (2)
#define	FUNCID_SMESSAGEBUFFER_SENDTIMEOUT      (3)
#define	FUNCID_SMESSAGEBUFFER_RECEIVE          (4)
#define	FUNCID_SMESSAGEBUFFER_RECEIVEPOLLING   (5)
#define	FUNCID_SMESSAGEBUFFER_RECEIVETIMEOUT   (6)
#define	FUNCID_SMESSAGEBUFFER_INITIALIZE       (7)
#define	FUNCID_SMESSAGEBUFFER_REFER            (8)

#endif /* sMessageBuffer_TECSGEN_H */
