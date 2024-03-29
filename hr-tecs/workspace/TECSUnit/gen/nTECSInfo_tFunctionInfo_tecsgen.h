/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_tFunctionInfo_TECSGEN_H
#define nTECSInfo_tFunctionInfo_TECSGEN_H

/*
 * celltype          :  tFunctionInfo
 * global name       :  nTECSInfo_tFunctionInfo
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
#include "nTECSInfo_sFunctionInfo_tecsgen.h"
#include "nTECSInfo_sParamInfo_tecsgen.h"
#include "nTECSInfo_sTypeInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nTECSInfo_tFunctionInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sParamInfo_VDES *const*cParamInfo;
    int_t n_cParamInfo;
    struct tag_nTECSInfo_sTypeInfo_VDES const*cReturnTypeInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    bool_t         bOneway;
}  nTECSInfo_tFunctionInfo_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nTECSInfo_tFunctionInfo_CB_tab           nTECSInfo_tFunctionInfo_INIB_tab
#define nTECSInfo_tFunctionInfo_SINGLE_CELL_CB   nTECSInfo_tFunctionInfo_SINGLE_CELL_INIB
#define nTECSInfo_tFunctionInfo_CB               nTECSInfo_tFunctionInfo_INIB
#define tag_nTECSInfo_tFunctionInfo_CB           tag_nTECSInfo_tFunctionInfo_INIB

extern nTECSInfo_tFunctionInfo_CB  nTECSInfo_tFunctionInfo_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_nTECSInfo_tFunctionInfo_INIB *nTECSInfo_tFunctionInfo_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nTECSInfo_sFunctionInfo */
ER           nTECSInfo_tFunctionInfo_eFunctionInfo_getName(nTECSInfo_tFunctionInfo_IDX idx, char_t* name, int_t max_len);
void         nTECSInfo_tFunctionInfo_eFunctionInfo_getNameLength(nTECSInfo_tFunctionInfo_IDX idx, uint16_t* len);
void         nTECSInfo_tFunctionInfo_eFunctionInfo_getReturnTypeInfo(nTECSInfo_tFunctionInfo_IDX idx, Descriptor( nTECSInfo_sTypeInfo )* desc);
void         nTECSInfo_tFunctionInfo_eFunctionInfo_getNParam(nTECSInfo_tFunctionInfo_IDX idx, int32_t* num);
ER           nTECSInfo_tFunctionInfo_eFunctionInfo_getParamInfo(nTECSInfo_tFunctionInfo_IDX idx, int32_t ith, Descriptor( nTECSInfo_sParamInfo )* param);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tFunctionInfo_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nTECSInfo_tFunctionInfo_N_CELL      (254)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nTECSInfo_tFunctionInfo_VALID_IDX(IDX) (1)

/* 呼び口配列の大きさを得るマクロ #_NCPA_# */
#define N_CP_cParamInfo(p_that)  ((p_that)->n_cParamInfo)
#define NCP_cParamInfo           (N_CP_cParamInfo(p_cellcb))
/* optional 呼び口をテストするマクロ #_TOCP_# */
#define nTECSInfo_tFunctionInfo_is_cParamInfo_joined(p_that,subscript) \
	  (((p_that)->cParamInfo!=0)\
	  &&((p_that)->cParamInfo[subscript]!=0))

/* セルCBを得るマクロ #_GCB_# */
#define nTECSInfo_tFunctionInfo_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define nTECSInfo_tFunctionInfo_ATTR_name( p_that )	((p_that)->name)
#define nTECSInfo_tFunctionInfo_ATTR_bOneway( p_that )	((p_that)->bOneway)

#define nTECSInfo_tFunctionInfo_GET_name(p_that)	((p_that)->name)
#define nTECSInfo_tFunctionInfo_GET_bOneway(p_that)	((p_that)->bOneway)



 /* 呼び口関数マクロ #_CPM_# */
#define nTECSInfo_tFunctionInfo_cParamInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cParamInfo[subscript]->VMT->getName__T( \
	   (p_that)->cParamInfo[subscript], (name), (max_len) )
#define nTECSInfo_tFunctionInfo_cParamInfo_getNameLength( p_that, subscript, len ) \
	  (p_that)->cParamInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cParamInfo[subscript], (len) )
#define nTECSInfo_tFunctionInfo_cParamInfo_getTypeInfo( p_that, subscript, desc ) \
	  (p_that)->cParamInfo[subscript]->VMT->getTypeInfo__T( \
	   (p_that)->cParamInfo[subscript], (desc) )
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cReturnTypeInfo->VMT->getName__T( \
	   (p_that)->cReturnTypeInfo, (name), (max_len) )
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo_getNameLength( p_that, len ) \
	  (p_that)->cReturnTypeInfo->VMT->getNameLength__T( \
	   (p_that)->cReturnTypeInfo, (len) )
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo_getSize( p_that, size ) \
	  (p_that)->cReturnTypeInfo->VMT->getSize__T( \
	   (p_that)->cReturnTypeInfo, (size) )
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo_getKind( p_that, kind ) \
	  (p_that)->cReturnTypeInfo->VMT->getKind__T( \
	   (p_that)->cReturnTypeInfo, (kind) )
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo_getNType( p_that, num ) \
	  (p_that)->cReturnTypeInfo->VMT->getNType__T( \
	   (p_that)->cReturnTypeInfo, (num) )
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo_getTypeInfo( p_that, ith, desc ) \
	  (p_that)->cReturnTypeInfo->VMT->getTypeInfo__T( \
	   (p_that)->cReturnTypeInfo, (ith), (desc) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eFunctionInfo */
ER             nTECSInfo_tFunctionInfo_eFunctionInfo_getName_skel( const struct tag_nTECSInfo_sFunctionInfo_VDES *epd, char_t* name, int_t max_len);
void           nTECSInfo_tFunctionInfo_eFunctionInfo_getNameLength_skel( const struct tag_nTECSInfo_sFunctionInfo_VDES *epd, uint16_t* len);
void           nTECSInfo_tFunctionInfo_eFunctionInfo_getReturnTypeInfo_skel( const struct tag_nTECSInfo_sFunctionInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc);
void           nTECSInfo_tFunctionInfo_eFunctionInfo_getNParam_skel( const struct tag_nTECSInfo_sFunctionInfo_VDES *epd, int32_t* num);
ER             nTECSInfo_tFunctionInfo_eFunctionInfo_getParamInfo_skel( const struct tag_nTECSInfo_sFunctionInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sParamInfo )* param);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ参照関数 #_CRD_# */
/* [ref_desc] cParamInfo */
Inline Descriptor( nTECSInfo_sParamInfo )
nTECSInfo_tFunctionInfo_cParamInfo_refer_to_descriptor( nTECSInfo_tFunctionInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sParamInfo )  des;
    nTECSInfo_tFunctionInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cParamInfo );
    des.vdes = (struct tag_nTECSInfo_sParamInfo_VDES *)p_that->cParamInfo[ i ];
    return des;
}

/* [ref_desc] cReturnTypeInfo */
Inline Descriptor( nTECSInfo_sTypeInfo )
nTECSInfo_tFunctionInfo_cReturnTypeInfo_refer_to_descriptor( nTECSInfo_tFunctionInfo_CB  *p_that )
{
    Descriptor( nTECSInfo_sTypeInfo )  des;
    nTECSInfo_tFunctionInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    des.vdes = (struct tag_nTECSInfo_sTypeInfo_VDES *)p_that->cReturnTypeInfo;
    return des;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tFunctionInfo_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tFunctionInfo_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nTECSInfo_tFunctionInfo_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tFunctionInfo_IDX

#define tFunctionInfo_IDX  nTECSInfo_tFunctionInfo_IDX

/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            nTECSInfo_tFunctionInfo_ATTR_name( p_cellcb )
#define ATTR_bOneway         nTECSInfo_tFunctionInfo_ATTR_bOneway( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cParamInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tFunctionInfo_cParamInfo_getName( p_cellcb, subscript, name, max_len )
#define cParamInfo_getNameLength( subscript, len ) \
          nTECSInfo_tFunctionInfo_cParamInfo_getNameLength( p_cellcb, subscript, len )
#define cParamInfo_getTypeInfo( subscript, desc ) \
          nTECSInfo_tFunctionInfo_cParamInfo_getTypeInfo( p_cellcb, subscript, desc )
#define cReturnTypeInfo_getName( name, max_len ) \
          nTECSInfo_tFunctionInfo_cReturnTypeInfo_getName( p_cellcb, name, max_len )
#define cReturnTypeInfo_getNameLength( len ) \
          nTECSInfo_tFunctionInfo_cReturnTypeInfo_getNameLength( p_cellcb, len )
#define cReturnTypeInfo_getSize( size ) \
          nTECSInfo_tFunctionInfo_cReturnTypeInfo_getSize( p_cellcb, size )
#define cReturnTypeInfo_getKind( kind ) \
          nTECSInfo_tFunctionInfo_cReturnTypeInfo_getKind( p_cellcb, kind )
#define cReturnTypeInfo_getNType( num ) \
          nTECSInfo_tFunctionInfo_cReturnTypeInfo_getNType( p_cellcb, num )
#define cReturnTypeInfo_getTypeInfo( ith, desc ) \
          nTECSInfo_tFunctionInfo_cReturnTypeInfo_getTypeInfo( p_cellcb, ith, desc )


/* ディスクリプタ参照マクロ（短縮形） #_CRDA_# */
#define cParamInfo_refer_to_descriptor( i )\
          nTECSInfo_tFunctionInfo_cParamInfo_refer_to_descriptor( p_cellcb, i )
#define cParamInfo_ref_desc( i )\
          cParamInfo_refer_to_descriptor( i )
#define cReturnTypeInfo_refer_to_descriptor()\
          nTECSInfo_tFunctionInfo_cReturnTypeInfo_refer_to_descriptor( p_cellcb )
#define cReturnTypeInfo_ref_desc()\
          cReturnTypeInfo_refer_to_descriptor()


/* optional 呼び口をテストするマクロ（短縮形） #_TOCPA_# */
#define is_cParamInfo_joined(subscript)\
		nTECSInfo_tFunctionInfo_is_cParamInfo_joined(p_cellcb,subscript)

/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eFunctionInfo_getName nTECSInfo_tFunctionInfo_eFunctionInfo_getName
#define eFunctionInfo_getNameLength nTECSInfo_tFunctionInfo_eFunctionInfo_getNameLength
#define eFunctionInfo_getReturnTypeInfo nTECSInfo_tFunctionInfo_eFunctionInfo_getReturnTypeInfo
#define eFunctionInfo_getNParam nTECSInfo_tFunctionInfo_eFunctionInfo_getNParam
#define eFunctionInfo_getParamInfo nTECSInfo_tFunctionInfo_eFunctionInfo_getParamInfo

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tFunctionInfo_N_CELL; (i)++ ){ \
       (p_cb) = &nTECSInfo_tFunctionInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tFunctionInfo_TECSGENH */
