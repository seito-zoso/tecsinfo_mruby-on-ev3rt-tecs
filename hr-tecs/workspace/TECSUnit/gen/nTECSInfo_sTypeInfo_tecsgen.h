/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_sTypeInfo_TECSGEN_H
#define nTECSInfo_sTypeInfo_TECSGEN_H

/*
 * signature   :  sTypeInfo
 * global name :  nTECSInfo_sTypeInfo
 * context     :  task
 */

/* シグニチャディスクリプタ参照ヘッダ #_SDI_# */
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sTypeInfo_Defined
#define  Descriptor_of_nTECSInfo_sTypeInfo_Defined
typedef struct { struct tag_nTECSInfo_sTypeInfo_VDES *vdes; } Descriptor( nTECSInfo_sTypeInfo );
#endif

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_nTECSInfo_sTypeInfo_VDES {
    struct tag_nTECSInfo_sTypeInfo_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_nTECSInfo_sTypeInfo_VMT {
    ER             (*getName__T)( const struct tag_nTECSInfo_sTypeInfo_VDES *edp, char_t* name, int_t max_len );
    void           (*getNameLength__T)( const struct tag_nTECSInfo_sTypeInfo_VDES *edp, uint16_t* len );
    void           (*getSize__T)( const struct tag_nTECSInfo_sTypeInfo_VDES *edp, uint32_t* size );
    void           (*getKind__T)( const struct tag_nTECSInfo_sTypeInfo_VDES *edp, int8_t* kind );
    void           (*getNType__T)( const struct tag_nTECSInfo_sTypeInfo_VDES *edp, int32_t* num );
    void           (*getTypeInfo__T)( const struct tag_nTECSInfo_sTypeInfo_VDES *edp, int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_nTECSInfo_sTypeInfo_Defined
#define  Descriptor_of_nTECSInfo_sTypeInfo_Defined
typedef struct { struct tag_nTECSInfo_sTypeInfo_VDES *vdes; } Descriptor( nTECSInfo_sTypeInfo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NTECSINFO_STYPEINFO_GETNAME     (1)
#define	FUNCID_NTECSINFO_STYPEINFO_GETNAMELENGTH (2)
#define	FUNCID_NTECSINFO_STYPEINFO_GETSIZE     (3)
#define	FUNCID_NTECSINFO_STYPEINFO_GETKIND     (4)
#define	FUNCID_NTECSINFO_STYPEINFO_GETNTYPE    (5)
#define	FUNCID_NTECSINFO_STYPEINFO_GETTYPEINFO (6)

#endif /* nTECSInfo_sTypeInfo_TECSGEN_H */
