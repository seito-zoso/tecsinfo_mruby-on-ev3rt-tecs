/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_sNamespaceInfo_TECSGEN_H
#define nTECSInfo_sNamespaceInfo_TECSGEN_H

/*
 * signature   :  sNamespaceInfo
 * global name :  nTECSInfo_sNamespaceInfo
 * context     :  task
 */

/* シグニチャディスクリプタ参照ヘッダ #_SDI_# */
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sNamespaceInfo_Defined
#define  Descriptor_of_nTECSInfo_sNamespaceInfo_Defined
typedef struct { struct tag_nTECSInfo_sNamespaceInfo_VDES *vdes; } Descriptor( nTECSInfo_sNamespaceInfo );
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

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_nTECSInfo_sNamespaceInfo_VDES {
    struct tag_nTECSInfo_sNamespaceInfo_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_nTECSInfo_sNamespaceInfo_VMT {
    ER             (*getName__T)( const struct tag_nTECSInfo_sNamespaceInfo_VDES *edp, char_t* name, int_t max_len );
    void           (*getNameLength__T)( const struct tag_nTECSInfo_sNamespaceInfo_VDES *edp, uint16_t* len );
    void           (*getNNamespace__T)( const struct tag_nTECSInfo_sNamespaceInfo_VDES *edp, int32_t* num );
    void           (*getNamespaceInfo__T)( const struct tag_nTECSInfo_sNamespaceInfo_VDES *edp, int32_t ith, Descriptor( nTECSInfo_sNamespaceInfo )* des );
    void           (*getNSignature__T)( const struct tag_nTECSInfo_sNamespaceInfo_VDES *edp, int32_t* num );
    void           (*getSignatureInfo__T)( const struct tag_nTECSInfo_sNamespaceInfo_VDES *edp, int32_t ith, Descriptor( nTECSInfo_sSignatureInfo )* des );
    void           (*getNCelltype__T)( const struct tag_nTECSInfo_sNamespaceInfo_VDES *edp, int32_t* num );
    void           (*getCelltypeInfo__T)( const struct tag_nTECSInfo_sNamespaceInfo_VDES *edp, int32_t ith, Descriptor( nTECSInfo_sCelltypeInfo )* des );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_nTECSInfo_sNamespaceInfo_Defined
#define  Descriptor_of_nTECSInfo_sNamespaceInfo_Defined
typedef struct { struct tag_nTECSInfo_sNamespaceInfo_VDES *vdes; } Descriptor( nTECSInfo_sNamespaceInfo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NTECSINFO_SNAMESPACEINFO_GETNAME (1)
#define	FUNCID_NTECSINFO_SNAMESPACEINFO_GETNAMELENGTH (2)
#define	FUNCID_NTECSINFO_SNAMESPACEINFO_GETNNAMESPACE (3)
#define	FUNCID_NTECSINFO_SNAMESPACEINFO_GETNAMESPACEINFO (4)
#define	FUNCID_NTECSINFO_SNAMESPACEINFO_GETNSIGNATURE (5)
#define	FUNCID_NTECSINFO_SNAMESPACEINFO_GETSIGNATUREINFO (6)
#define	FUNCID_NTECSINFO_SNAMESPACEINFO_GETNCELLTYPE (7)
#define	FUNCID_NTECSINFO_SNAMESPACEINFO_GETCELLTYPEINFO (8)

#endif /* nTECSInfo_sNamespaceInfo_TECSGEN_H */
