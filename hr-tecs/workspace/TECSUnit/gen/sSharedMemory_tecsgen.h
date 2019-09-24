/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sSharedMemory_TECSGEN_H
#define sSharedMemory_TECSGEN_H

/*
 * signature   :  sSharedMemory
 * global name :  sSharedMemory
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sSharedMemory_VDES {
    struct tag_sSharedMemory_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sSharedMemory_VMT {
    void           (*putVal__T)( const struct tag_sSharedMemory_VDES *edp, int32_t index, int32_t val );
    int32_t        (*getVal__T)( const struct tag_sSharedMemory_VDES *edp, int32_t index );
    int32_t        (*getSize__T)( const struct tag_sSharedMemory_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sSharedMemory_Defined
#define  Descriptor_of_sSharedMemory_Defined
typedef struct { struct tag_sSharedMemory_VDES *vdes; } Descriptor( sSharedMemory );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SSHAREDMEMORY_PUTVAL            (1)
#define	FUNCID_SSHAREDMEMORY_GETVAL            (2)
#define	FUNCID_SSHAREDMEMORY_GETSIZE           (3)

#endif /* sSharedMemory_TECSGEN_H */
