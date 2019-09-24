/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_tTECSInfo_TECSGEN_H
#define nTECSInfo_tTECSInfo_TECSGEN_H

/*
 * celltype          :  tTECSInfo
 * global name       :  nTECSInfo_tTECSInfo
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  false
 * has_INIB          :  0
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "nTECSInfo_sTECSInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nTECSInfo_tTECSInfo_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
}  nTECSInfo_tTECSInfo_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nTECSInfo_tTECSInfo_CB_tab           nTECSInfo_tTECSInfo_INIB_tab
#define nTECSInfo_tTECSInfo_SINGLE_CELL_CB   nTECSInfo_tTECSInfo_SINGLE_CELL_INIB
#define nTECSInfo_tTECSInfo_CB               nTECSInfo_tTECSInfo_INIB
#define tag_nTECSInfo_tTECSInfo_CB           tag_nTECSInfo_tTECSInfo_INIB

/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  nTECSInfo_tTECSInfo_INIB  nTECSInfo_tTECSInfo_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_nTECSInfo_tTECSInfo_INIB *nTECSInfo_tTECSInfo_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nTECSInfo_sTECSInfo */
Inline ER           nTECSInfo_tTECSInfo_eTECSInfo_findNamespace( const char_t* namespace_path, Descriptor( nTECSInfo_sNamespaceInfo )* NSdesc);
Inline ER           nTECSInfo_tTECSInfo_eTECSInfo_findRegion( const char_t* namespace_path, Descriptor( nTECSInfo_sRegionInfo )* RGNdesc);
Inline ER           nTECSInfo_tTECSInfo_eTECSInfo_findSignature( const char_t* namespace_path, Descriptor( nTECSInfo_sSignatureInfo )* SIGdesc);
Inline ER           nTECSInfo_tTECSInfo_eTECSInfo_findCelltype( const char_t* namespace_path, Descriptor( nTECSInfo_sCelltypeInfo )* CTdesc);
Inline ER           nTECSInfo_tTECSInfo_eTECSInfo_findCell( const char_t* namespace_path, Descriptor( nTECSInfo_sCellInfo )* CELLdesc);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nTECSInfo_tTECSInfo_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "nTECSInfo_tTECSInfoSub_tecsgen.h"
#ifdef  nTECSInfo_tTECSInfo_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nTECSInfo_tTECSInfo_CB_TYPE_ONLY */

/* セルCBを得るマクロ #_GCB_# */
#define nTECSInfo_tTECSInfo_GET_CELLCB(idx) ((void *)0)
 /* 呼び口関数マクロ #_CPM_# */
#define nTECSInfo_tTECSInfo_cTECSInfo_findNamespace( namespace_path, NSdesc ) \
	  nTECSInfo_tTECSInfoSub_eTECSInfo_findNamespace( \
	    (namespace_path), (NSdesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findRegion( namespace_path, RGNdesc ) \
	  nTECSInfo_tTECSInfoSub_eTECSInfo_findRegion( \
	    (namespace_path), (RGNdesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findSignature( namespace_path, SIGdesc ) \
	  nTECSInfo_tTECSInfoSub_eTECSInfo_findSignature( \
	    (namespace_path), (SIGdesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findCelltype( namespace_path, CTdesc ) \
	  nTECSInfo_tTECSInfoSub_eTECSInfo_findCelltype( \
	    (namespace_path), (CTdesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findCell( namespace_path, CELLdesc ) \
	  nTECSInfo_tTECSInfoSub_eTECSInfo_findCell( \
	    (namespace_path), (CELLdesc) )

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tTECSInfo_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nTECSInfo_tTECSInfo_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tTECSInfo_IDX

#define tTECSInfo_IDX  nTECSInfo_tTECSInfo_IDX
/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cTECSInfo_findNamespace( namespace_path, NSdesc ) \
          nTECSInfo_tTECSInfo_cTECSInfo_findNamespace( namespace_path, NSdesc )
#define cTECSInfo_findRegion( namespace_path, RGNdesc ) \
          nTECSInfo_tTECSInfo_cTECSInfo_findRegion( namespace_path, RGNdesc )
#define cTECSInfo_findSignature( namespace_path, SIGdesc ) \
          nTECSInfo_tTECSInfo_cTECSInfo_findSignature( namespace_path, SIGdesc )
#define cTECSInfo_findCelltype( namespace_path, CTdesc ) \
          nTECSInfo_tTECSInfo_cTECSInfo_findCelltype( namespace_path, CTdesc )
#define cTECSInfo_findCell( namespace_path, CELLdesc ) \
          nTECSInfo_tTECSInfo_cTECSInfo_findCell( namespace_path, CELLdesc )




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eTECSInfo_findNamespace nTECSInfo_tTECSInfo_eTECSInfo_findNamespace
#define eTECSInfo_findRegion nTECSInfo_tTECSInfo_eTECSInfo_findRegion
#define eTECSInfo_findSignature nTECSInfo_tTECSInfo_eTECSInfo_findSignature
#define eTECSInfo_findCelltype nTECSInfo_tTECSInfo_eTECSInfo_findCelltype
#define eTECSInfo_findCell nTECSInfo_tTECSInfo_eTECSInfo_findCell

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#ifndef TOPPERS_MACRO_ONLY

/* inline ヘッダの include #_INL_# */
#include "nTECSInfo_tTECSInfo_inline.h"

#endif /* TOPPERS_MACRO_ONLY */

#ifdef TOPPERS_CB_TYPE_ONLY

/* inline のための undef #_UDF_# */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef tTECSInfo_IDX
#undef FOREACH_CELL
#undef END_FOREACH_CELL
#undef INITIALIZE_CB
#undef SET_CB_INIB_POINTER
#undef nTECSInfo_tTECSInfo_cTECSInfo_findNamespace
#undef cTECSInfo_findNamespace
#undef nTECSInfo_tTECSInfo_cTECSInfo_findRegion
#undef cTECSInfo_findRegion
#undef nTECSInfo_tTECSInfo_cTECSInfo_findSignature
#undef cTECSInfo_findSignature
#undef nTECSInfo_tTECSInfo_cTECSInfo_findCelltype
#undef cTECSInfo_findCelltype
#undef nTECSInfo_tTECSInfo_cTECSInfo_findCell
#undef cTECSInfo_findCell
#undef eTECSInfo_findNamespace
#undef eTECSInfo_findRegion
#undef eTECSInfo_findSignature
#undef eTECSInfo_findCelltype
#undef eTECSInfo_findCell
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* nTECSInfo_tTECSInfo_TECSGENH */
