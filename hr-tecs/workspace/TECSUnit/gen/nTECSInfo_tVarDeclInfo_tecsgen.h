/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_tVarDeclInfo_TECSGEN_H
#define nTECSInfo_tVarDeclInfo_TECSGEN_H

/*
 * celltype          :  tVarDeclInfo
 * global name       :  nTECSInfo_tVarDeclInfo
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "nTECSInfo_sVarDeclInfo_tecsgen.h"
#include "nTECSInfo_sTypeInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nTECSInfo_tVarDeclInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sTypeInfo_VDES const*cTypeInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    char_t*        sizeIsExpr;
    int8_t         declType;
    uint32_t       offset;
}  nTECSInfo_tVarDeclInfo_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nTECSInfo_tVarDeclInfo_CB_tab           nTECSInfo_tVarDeclInfo_INIB_tab
#define nTECSInfo_tVarDeclInfo_SINGLE_CELL_CB   nTECSInfo_tVarDeclInfo_SINGLE_CELL_INIB
#define nTECSInfo_tVarDeclInfo_CB               nTECSInfo_tVarDeclInfo_INIB
#define tag_nTECSInfo_tVarDeclInfo_CB           tag_nTECSInfo_tVarDeclInfo_INIB

extern nTECSInfo_tVarDeclInfo_CB  nTECSInfo_tVarDeclInfo_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_nTECSInfo_tVarDeclInfo_INIB *nTECSInfo_tVarDeclInfo_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nTECSInfo_sVarDeclInfo */
ER           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getName(nTECSInfo_tVarDeclInfo_IDX idx, char_t* name, int_t max_len);
void         nTECSInfo_tVarDeclInfo_eVarDeclInfo_getOffset(nTECSInfo_tVarDeclInfo_IDX idx, uint32_t* offset);
void         nTECSInfo_tVarDeclInfo_eVarDeclInfo_getTypeInfo(nTECSInfo_tVarDeclInfo_IDX idx, Descriptor( nTECSInfo_sTypeInfo )* desc);
void         nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIsExpr(nTECSInfo_tVarDeclInfo_IDX idx, uint32_t* expr_str, int32_t max_len);
ER           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIs(nTECSInfo_tVarDeclInfo_IDX idx, uint32_t* size, const void* p_cb);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tVarDeclInfo_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nTECSInfo_tVarDeclInfo_N_CELL       (60)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nTECSInfo_tVarDeclInfo_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define nTECSInfo_tVarDeclInfo_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define nTECSInfo_tVarDeclInfo_ATTR_name( p_that )	((p_that)->name)
#define nTECSInfo_tVarDeclInfo_ATTR_sizeIsExpr( p_that )	((p_that)->sizeIsExpr)
#define nTECSInfo_tVarDeclInfo_ATTR_declType( p_that )	((p_that)->declType)
#define nTECSInfo_tVarDeclInfo_ATTR_offset( p_that )	((p_that)->offset)

#define nTECSInfo_tVarDeclInfo_GET_name(p_that)	((p_that)->name)
#define nTECSInfo_tVarDeclInfo_GET_sizeIsExpr(p_that)	((p_that)->sizeIsExpr)
#define nTECSInfo_tVarDeclInfo_GET_declType(p_that)	((p_that)->declType)
#define nTECSInfo_tVarDeclInfo_GET_offset(p_that)	((p_that)->offset)



 /* 呼び口関数マクロ #_CPM_# */
#define nTECSInfo_tVarDeclInfo_cTypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cTypeInfo->VMT->getName__T( \
	   (p_that)->cTypeInfo, (name), (max_len) )
#define nTECSInfo_tVarDeclInfo_cTypeInfo_getNameLength( p_that, len ) \
	  (p_that)->cTypeInfo->VMT->getNameLength__T( \
	   (p_that)->cTypeInfo, (len) )
#define nTECSInfo_tVarDeclInfo_cTypeInfo_getSize( p_that, size ) \
	  (p_that)->cTypeInfo->VMT->getSize__T( \
	   (p_that)->cTypeInfo, (size) )
#define nTECSInfo_tVarDeclInfo_cTypeInfo_getKind( p_that, kind ) \
	  (p_that)->cTypeInfo->VMT->getKind__T( \
	   (p_that)->cTypeInfo, (kind) )
#define nTECSInfo_tVarDeclInfo_cTypeInfo_getNType( p_that, num ) \
	  (p_that)->cTypeInfo->VMT->getNType__T( \
	   (p_that)->cTypeInfo, (num) )
#define nTECSInfo_tVarDeclInfo_cTypeInfo_getTypeInfo( p_that, ith, desc ) \
	  (p_that)->cTypeInfo->VMT->getTypeInfo__T( \
	   (p_that)->cTypeInfo, (ith), (desc) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eVarDeclInfo */
ER             nTECSInfo_tVarDeclInfo_eVarDeclInfo_getName_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, char_t* name, int_t max_len);
void           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getOffset_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, uint32_t* offset);
void           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc);
void           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIsExpr_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, uint32_t* expr_str, int32_t max_len);
ER             nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIs_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, uint32_t* size, const void* p_cb);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ参照関数 #_CRD_# */
/* [ref_desc] cTypeInfo */
Inline Descriptor( nTECSInfo_sTypeInfo )
nTECSInfo_tVarDeclInfo_cTypeInfo_refer_to_descriptor( nTECSInfo_tVarDeclInfo_CB  *p_that )
{
    Descriptor( nTECSInfo_sTypeInfo )  des;
    nTECSInfo_tVarDeclInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    des.vdes = (struct tag_nTECSInfo_sTypeInfo_VDES *)p_that->cTypeInfo;
    return des;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tVarDeclInfo_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tVarDeclInfo_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nTECSInfo_tVarDeclInfo_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tVarDeclInfo_IDX

#define tVarDeclInfo_IDX  nTECSInfo_tVarDeclInfo_IDX

/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            nTECSInfo_tVarDeclInfo_ATTR_name( p_cellcb )
#define ATTR_sizeIsExpr      nTECSInfo_tVarDeclInfo_ATTR_sizeIsExpr( p_cellcb )
#define ATTR_declType        nTECSInfo_tVarDeclInfo_ATTR_declType( p_cellcb )
#define ATTR_offset          nTECSInfo_tVarDeclInfo_ATTR_offset( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cTypeInfo_getName( name, max_len ) \
          nTECSInfo_tVarDeclInfo_cTypeInfo_getName( p_cellcb, name, max_len )
#define cTypeInfo_getNameLength( len ) \
          nTECSInfo_tVarDeclInfo_cTypeInfo_getNameLength( p_cellcb, len )
#define cTypeInfo_getSize( size ) \
          nTECSInfo_tVarDeclInfo_cTypeInfo_getSize( p_cellcb, size )
#define cTypeInfo_getKind( kind ) \
          nTECSInfo_tVarDeclInfo_cTypeInfo_getKind( p_cellcb, kind )
#define cTypeInfo_getNType( num ) \
          nTECSInfo_tVarDeclInfo_cTypeInfo_getNType( p_cellcb, num )
#define cTypeInfo_getTypeInfo( ith, desc ) \
          nTECSInfo_tVarDeclInfo_cTypeInfo_getTypeInfo( p_cellcb, ith, desc )


/* ディスクリプタ参照マクロ（短縮形） #_CRDA_# */
#define cTypeInfo_refer_to_descriptor()\
          nTECSInfo_tVarDeclInfo_cTypeInfo_refer_to_descriptor( p_cellcb )
#define cTypeInfo_ref_desc()\
          cTypeInfo_refer_to_descriptor()



/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eVarDeclInfo_getName nTECSInfo_tVarDeclInfo_eVarDeclInfo_getName
#define eVarDeclInfo_getOffset nTECSInfo_tVarDeclInfo_eVarDeclInfo_getOffset
#define eVarDeclInfo_getTypeInfo nTECSInfo_tVarDeclInfo_eVarDeclInfo_getTypeInfo
#define eVarDeclInfo_getSizeIsExpr nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIsExpr
#define eVarDeclInfo_getSizeIs nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIs

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tVarDeclInfo_N_CELL; (i)++ ){ \
       (p_cb) = &nTECSInfo_tVarDeclInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tVarDeclInfo_TECSGENH */
