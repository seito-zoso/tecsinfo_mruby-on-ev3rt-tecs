/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_sTECSInfo_TECSGEN_H
#define nTECSInfo_sTECSInfo_TECSGEN_H

/*
 * signature   :  sTECSInfo
 * global name :  nTECSInfo_sTECSInfo
 * context     :  task
 */

/* シグニチャディスクリプタ参照ヘッダ #_SDI_# */
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sNamespaceInfo_Defined
#define  Descriptor_of_nTECSInfo_sNamespaceInfo_Defined
typedef struct { struct tag_nTECSInfo_sNamespaceInfo_VDES *vdes; } Descriptor( nTECSInfo_sNamespaceInfo );
#endif
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sRegionInfo_Defined
#define  Descriptor_of_nTECSInfo_sRegionInfo_Defined
typedef struct { struct tag_nTECSInfo_sRegionInfo_VDES *vdes; } Descriptor( nTECSInfo_sRegionInfo );
#endif
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sSignatureInfo_Defined
#define  Descriptor_of_nTECSInfo_sSignatureInfo_Defined
typedef struct { struct tag_nTECSInfo_sSignatureInfo_VDES *vdes; } Descriptor( nTECSInfo_sSignatureInfo );
#endif
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sCelltypeInfo_Defined
#define  Descriptor_of_nTECSInfo_sCelltypeInfo_Defined
typedef struct { struct tag_nTECSInfo_sCelltypeInfo_VDES *vdes; } Descriptor( nTECSInfo_sCelltypeInfo );
#endif
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sCellInfo_Defined
#define  Descriptor_of_nTECSInfo_sCellInfo_Defined
typedef struct { struct tag_nTECSInfo_sCellInfo_VDES *vdes; } Descriptor( nTECSInfo_sCellInfo );
#endif

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_nTECSInfo_sTECSInfo_VDES {
    struct tag_nTECSInfo_sTECSInfo_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_nTECSInfo_sTECSInfo_VMT {
    ER             (*findNamespace__T)( const struct tag_nTECSInfo_sTECSInfo_VDES *edp, const char_t* namespace_path, Descriptor( nTECSInfo_sNamespaceInfo )* NSdesc );
    ER             (*findRegion__T)( const struct tag_nTECSInfo_sTECSInfo_VDES *edp, const char_t* namespace_path, Descriptor( nTECSInfo_sRegionInfo )* RGNdesc );
    ER             (*findSignature__T)( const struct tag_nTECSInfo_sTECSInfo_VDES *edp, const char_t* namespace_path, Descriptor( nTECSInfo_sSignatureInfo )* SIGdesc );
    ER             (*findCelltype__T)( const struct tag_nTECSInfo_sTECSInfo_VDES *edp, const char_t* namespace_path, Descriptor( nTECSInfo_sCelltypeInfo )* CTdesc );
    ER             (*findCell__T)( const struct tag_nTECSInfo_sTECSInfo_VDES *edp, const char_t* namespace_path, Descriptor( nTECSInfo_sCellInfo )* CELLdesc );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_nTECSInfo_sTECSInfo_Defined
#define  Descriptor_of_nTECSInfo_sTECSInfo_Defined
typedef struct { struct tag_nTECSInfo_sTECSInfo_VDES *vdes; } Descriptor( nTECSInfo_sTECSInfo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NTECSINFO_STECSINFO_FINDNAMESPACE (1)
#define	FUNCID_NTECSINFO_STECSINFO_FINDREGION  (2)
#define	FUNCID_NTECSINFO_STECSINFO_FINDSIGNATURE (3)
#define	FUNCID_NTECSINFO_STECSINFO_FINDCELLTYPE (4)
#define	FUNCID_NTECSINFO_STECSINFO_FINDCELL    (5)

#endif /* nTECSInfo_sTECSInfo_TECSGEN_H */
