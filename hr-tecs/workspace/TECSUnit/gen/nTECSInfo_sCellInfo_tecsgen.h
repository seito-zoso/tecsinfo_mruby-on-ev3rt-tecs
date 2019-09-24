/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_sCellInfo_TECSGEN_H
#define nTECSInfo_sCellInfo_TECSGEN_H

/*
 * signature   :  sCellInfo
 * global name :  nTECSInfo_sCellInfo
 * context     :  task
 */

/* シグニチャディスクリプタ参照ヘッダ #_SDI_# */
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sCelltypeInfo_Defined
#define  Descriptor_of_nTECSInfo_sCelltypeInfo_Defined
typedef struct { struct tag_nTECSInfo_sCelltypeInfo_VDES *vdes; } Descriptor( nTECSInfo_sCelltypeInfo );
#endif

#ifndef TOPPERS_MACRO_ONLY

/* シグニチャディスクリプタ #_SD_# */
struct tag_nTECSInfo_sCellInfo_VDES {
    struct tag_nTECSInfo_sCellInfo_VMT *VMT;
};

/* シグニチャ関数テーブル #_SFT_# */
struct tag_nTECSInfo_sCellInfo_VMT {
    ER             (*getName__T)( const struct tag_nTECSInfo_sCellInfo_VDES *edp, char_t* name, int_t max_len );
    void           (*getCelltypeInfo__T)( const struct tag_nTECSInfo_sCellInfo_VDES *edp, Descriptor( nTECSInfo_sCelltypeInfo )* desc );
    void           (*getCBP__T)( const struct tag_nTECSInfo_sCellInfo_VDES *edp, void** cbp );
    void           (*getINIBP__T)( const struct tag_nTECSInfo_sCellInfo_VDES *edp, void** inibp );
};

/* シグニチャディスクリプタ(動的結合用) #_SDES_# */
#ifndef Descriptor_of_nTECSInfo_sCellInfo_Defined
#define  Descriptor_of_nTECSInfo_sCellInfo_Defined
typedef struct { struct tag_nTECSInfo_sCellInfo_VDES *vdes; } Descriptor( nTECSInfo_sCellInfo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NTECSINFO_SCELLINFO_GETNAME     (1)
#define	FUNCID_NTECSINFO_SCELLINFO_GETCELLTYPEINFO (2)
#define	FUNCID_NTECSINFO_SCELLINFO_GETCBP      (3)
#define	FUNCID_NTECSINFO_SCELLINFO_GETINIBP    (4)

#endif /* nTECSInfo_sCellInfo_TECSGEN_H */
