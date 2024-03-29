/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_tVoidTypeInfo_TECSGEN_H
#define nTECSInfo_tVoidTypeInfo_TECSGEN_H

/*
 * celltype          :  tVoidTypeInfo
 * global name       :  nTECSInfo_tVoidTypeInfo
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
#include "nTECSInfo_sTypeInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nTECSInfo_tVoidTypeInfo_INIB {
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    int8_t         typeKind;
    int32_t        bitSize;
    bool_t         b_const;
    bool_t         b_volatile;
}  nTECSInfo_tVoidTypeInfo_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nTECSInfo_tVoidTypeInfo_CB_tab           nTECSInfo_tVoidTypeInfo_INIB_tab
#define nTECSInfo_tVoidTypeInfo_SINGLE_CELL_CB   nTECSInfo_tVoidTypeInfo_SINGLE_CELL_INIB
#define nTECSInfo_tVoidTypeInfo_CB               nTECSInfo_tVoidTypeInfo_INIB
#define tag_nTECSInfo_tVoidTypeInfo_CB           tag_nTECSInfo_tVoidTypeInfo_INIB

extern nTECSInfo_tVoidTypeInfo_CB  nTECSInfo_tVoidTypeInfo_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_nTECSInfo_tVoidTypeInfo_INIB *nTECSInfo_tVoidTypeInfo_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nTECSInfo_sTypeInfo */
ER           nTECSInfo_tVoidTypeInfo_eTypeInfo_getName(nTECSInfo_tVoidTypeInfo_IDX idx, char_t* name, int_t max_len);
void         nTECSInfo_tVoidTypeInfo_eTypeInfo_getNameLength(nTECSInfo_tVoidTypeInfo_IDX idx, uint16_t* len);
void         nTECSInfo_tVoidTypeInfo_eTypeInfo_getSize(nTECSInfo_tVoidTypeInfo_IDX idx, uint32_t* size);
void         nTECSInfo_tVoidTypeInfo_eTypeInfo_getKind(nTECSInfo_tVoidTypeInfo_IDX idx, int8_t* kind);
void         nTECSInfo_tVoidTypeInfo_eTypeInfo_getNType(nTECSInfo_tVoidTypeInfo_IDX idx, int32_t* num);
void         nTECSInfo_tVoidTypeInfo_eTypeInfo_getTypeInfo(nTECSInfo_tVoidTypeInfo_IDX idx, int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tVoidTypeInfo_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nTECSInfo_tVoidTypeInfo_N_CELL        (2)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nTECSInfo_tVoidTypeInfo_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define nTECSInfo_tVoidTypeInfo_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define nTECSInfo_tVoidTypeInfo_ATTR_name( p_that )	((p_that)->name)
#define nTECSInfo_tVoidTypeInfo_ATTR_typeKind( p_that )	((p_that)->typeKind)
#define nTECSInfo_tVoidTypeInfo_ATTR_bitSize( p_that )	((p_that)->bitSize)
#define nTECSInfo_tVoidTypeInfo_ATTR_b_const( p_that )	((p_that)->b_const)
#define nTECSInfo_tVoidTypeInfo_ATTR_b_volatile( p_that )	((p_that)->b_volatile)

#define nTECSInfo_tVoidTypeInfo_GET_name(p_that)	((p_that)->name)
#define nTECSInfo_tVoidTypeInfo_GET_typeKind(p_that)	((p_that)->typeKind)
#define nTECSInfo_tVoidTypeInfo_GET_bitSize(p_that)	((p_that)->bitSize)
#define nTECSInfo_tVoidTypeInfo_GET_b_const(p_that)	((p_that)->b_const)
#define nTECSInfo_tVoidTypeInfo_GET_b_volatile(p_that)	((p_that)->b_volatile)



#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eTypeInfo */
ER             nTECSInfo_tVoidTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len);
void           nTECSInfo_tVoidTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint16_t* len);
void           nTECSInfo_tVoidTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t* size);
void           nTECSInfo_tVoidTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int8_t* kind);
void           nTECSInfo_tVoidTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t* num);
void           nTECSInfo_tVoidTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tVoidTypeInfo_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tVoidTypeInfo_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nTECSInfo_tVoidTypeInfo_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tVoidTypeInfo_IDX

#define tVoidTypeInfo_IDX  nTECSInfo_tVoidTypeInfo_IDX

/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            nTECSInfo_tVoidTypeInfo_ATTR_name( p_cellcb )
#define ATTR_typeKind        nTECSInfo_tVoidTypeInfo_ATTR_typeKind( p_cellcb )
#define ATTR_bitSize         nTECSInfo_tVoidTypeInfo_ATTR_bitSize( p_cellcb )
#define ATTR_b_const         nTECSInfo_tVoidTypeInfo_ATTR_b_const( p_cellcb )
#define ATTR_b_volatile      nTECSInfo_tVoidTypeInfo_ATTR_b_volatile( p_cellcb )





/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eTypeInfo_getName nTECSInfo_tVoidTypeInfo_eTypeInfo_getName
#define eTypeInfo_getNameLength nTECSInfo_tVoidTypeInfo_eTypeInfo_getNameLength
#define eTypeInfo_getSize nTECSInfo_tVoidTypeInfo_eTypeInfo_getSize
#define eTypeInfo_getKind nTECSInfo_tVoidTypeInfo_eTypeInfo_getKind
#define eTypeInfo_getNType nTECSInfo_tVoidTypeInfo_eTypeInfo_getNType
#define eTypeInfo_getTypeInfo nTECSInfo_tVoidTypeInfo_eTypeInfo_getTypeInfo

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tVoidTypeInfo_N_CELL; (i)++ ){ \
       (p_cb) = &nTECSInfo_tVoidTypeInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tVoidTypeInfo_TECSGENH */
