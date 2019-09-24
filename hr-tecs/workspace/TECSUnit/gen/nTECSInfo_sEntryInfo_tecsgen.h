/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_sEntryInfo_TECSGEN_H
#define nTECSInfo_sEntryInfo_TECSGEN_H

/*
 * signature   :  sEntryInfo
 * global name :  nTECSInfo_sEntryInfo
 * context     :  task
 */

/* �����˥���ǥ�������ץ����ȥإå� #_SDI_# */
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sSignatureInfo_Defined
#define  Descriptor_of_nTECSInfo_sSignatureInfo_Defined
typedef struct { struct tag_nTECSInfo_sSignatureInfo_VDES *vdes; } Descriptor( nTECSInfo_sSignatureInfo );
#endif

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_nTECSInfo_sEntryInfo_VDES {
    struct tag_nTECSInfo_sEntryInfo_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_nTECSInfo_sEntryInfo_VMT {
    ER             (*getName__T)( const struct tag_nTECSInfo_sEntryInfo_VDES *edp, char_t* name, int_t max_len );
    void           (*getNameLength__T)( const struct tag_nTECSInfo_sEntryInfo_VDES *edp, uint16_t* len );
    void           (*getSignatureInfo__T)( const struct tag_nTECSInfo_sEntryInfo_VDES *edp, Descriptor( nTECSInfo_sSignatureInfo )* desc );
    void           (*getArraySize__T)( const struct tag_nTECSInfo_sEntryInfo_VDES *edp, uint32_t* array_size );
    bool_t         (*isInline__T)( const struct tag_nTECSInfo_sEntryInfo_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_nTECSInfo_sEntryInfo_Defined
#define  Descriptor_of_nTECSInfo_sEntryInfo_Defined
typedef struct { struct tag_nTECSInfo_sEntryInfo_VDES *vdes; } Descriptor( nTECSInfo_sEntryInfo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NTECSINFO_SENTRYINFO_GETNAME    (1)
#define	FUNCID_NTECSINFO_SENTRYINFO_GETNAMELENGTH (2)
#define	FUNCID_NTECSINFO_SENTRYINFO_GETSIGNATUREINFO (3)
#define	FUNCID_NTECSINFO_SENTRYINFO_GETARRAYSIZE (4)
#define	FUNCID_NTECSINFO_SENTRYINFO_ISINLINE   (5)

#endif /* nTECSInfo_sEntryInfo_TECSGEN_H */
