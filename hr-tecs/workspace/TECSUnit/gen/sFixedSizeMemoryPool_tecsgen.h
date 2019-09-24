/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sFixedSizeMemoryPool_TECSGEN_H
#define sFixedSizeMemoryPool_TECSGEN_H

/*
 * signature   :  sFixedSizeMemoryPool
 * global name :  sFixedSizeMemoryPool
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sFixedSizeMemoryPool_VDES {
    struct tag_sFixedSizeMemoryPool_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sFixedSizeMemoryPool_VMT {
    ER             (*get__T)( const struct tag_sFixedSizeMemoryPool_VDES *edp, void** p_block );
    ER             (*getPolling__T)( const struct tag_sFixedSizeMemoryPool_VDES *edp, void** p_block );
    ER             (*getTimeout__T)( const struct tag_sFixedSizeMemoryPool_VDES *edp, void** p_block, TMO timeout );
    ER             (*release__T)( const struct tag_sFixedSizeMemoryPool_VDES *edp, const void* block );
    ER             (*initialize__T)( const struct tag_sFixedSizeMemoryPool_VDES *edp );
    ER             (*refer__T)( const struct tag_sFixedSizeMemoryPool_VDES *edp, T_RMPF* pk_memoryPoolFixedSizeStatus );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sFixedSizeMemoryPool_Defined
#define  Descriptor_of_sFixedSizeMemoryPool_Defined
typedef struct { struct tag_sFixedSizeMemoryPool_VDES *vdes; } Descriptor( sFixedSizeMemoryPool );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SFIXEDSIZEMEMORYPOOL_GET        (1)
#define	FUNCID_SFIXEDSIZEMEMORYPOOL_GETPOLLING (2)
#define	FUNCID_SFIXEDSIZEMEMORYPOOL_GETTIMEOUT (3)
#define	FUNCID_SFIXEDSIZEMEMORYPOOL_RELEASE    (4)
#define	FUNCID_SFIXEDSIZEMEMORYPOOL_INITIALIZE (5)
#define	FUNCID_SFIXEDSIZEMEMORYPOOL_REFER      (6)

#endif /* sFixedSizeMemoryPool_TECSGEN_H */
