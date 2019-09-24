/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_sCelltypeInfo_TECSGEN_H
#define nTECSInfo_sCelltypeInfo_TECSGEN_H

/*
 * signature   :  sCelltypeInfo
 * global name :  nTECSInfo_sCelltypeInfo
 * context     :  task
 */

/* �����˥���ǥ�������ץ����ȥإå� #_SDI_# */
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sVarDeclInfo_Defined
#define  Descriptor_of_nTECSInfo_sVarDeclInfo_Defined
typedef struct { struct tag_nTECSInfo_sVarDeclInfo_VDES *vdes; } Descriptor( nTECSInfo_sVarDeclInfo );
#endif
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sCallInfo_Defined
#define  Descriptor_of_nTECSInfo_sCallInfo_Defined
typedef struct { struct tag_nTECSInfo_sCallInfo_VDES *vdes; } Descriptor( nTECSInfo_sCallInfo );
#endif
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sEntryInfo_Defined
#define  Descriptor_of_nTECSInfo_sEntryInfo_Defined
typedef struct { struct tag_nTECSInfo_sEntryInfo_VDES *vdes; } Descriptor( nTECSInfo_sEntryInfo );
#endif

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_nTECSInfo_sCelltypeInfo_VDES {
    struct tag_nTECSInfo_sCelltypeInfo_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_nTECSInfo_sCelltypeInfo_VMT {
    ER             (*getName__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp, char_t* name, int_t max_len );
    void           (*getNameLength__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp, uint16_t* len );
    void           (*getNAttr__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp, int32_t* nAttr );
    void           (*getAttrInfo__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp, int32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc );
    void           (*getNVar__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp, int32_t* nVar );
    void           (*getVarInfo__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp, int32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc );
    void           (*getNCall__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp, int32_t* nCall );
    void           (*getCallInfo__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp, int32_t ith, Descriptor( nTECSInfo_sCallInfo )* desc );
    void           (*getNEntry__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp, int32_t* nEntry );
    void           (*getEntryInfo__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp, int32_t ith, Descriptor( nTECSInfo_sEntryInfo )* desc );
    bool_t         (*isSingleton__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp );
    bool_t         (*isIDX_is_ID__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp );
    bool_t         (*hasCB__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp );
    bool_t         (*hasINIB__T)( const struct tag_nTECSInfo_sCelltypeInfo_VDES *edp );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_nTECSInfo_sCelltypeInfo_Defined
#define  Descriptor_of_nTECSInfo_sCelltypeInfo_Defined
typedef struct { struct tag_nTECSInfo_sCelltypeInfo_VDES *vdes; } Descriptor( nTECSInfo_sCelltypeInfo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETNAME (1)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETNAMELENGTH (2)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETNATTR (3)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETATTRINFO (4)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETNVAR (5)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETVARINFO (6)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETNCALL (7)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETCALLINFO (8)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETNENTRY (9)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_GETENTRYINFO (10)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_ISSINGLETON (11)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_ISIDX_IS_ID (12)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_HASCB   (13)
#define	FUNCID_NTECSINFO_SCELLTYPEINFO_HASINIB (14)

#endif /* nTECSInfo_sCelltypeInfo_TECSGEN_H */
