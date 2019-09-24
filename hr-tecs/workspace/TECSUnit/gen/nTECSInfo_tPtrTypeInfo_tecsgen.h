/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nTECSInfo_tPtrTypeInfo_TECSGEN_H
#define nTECSInfo_tPtrTypeInfo_TECSGEN_H

/*
 * celltype          :  tPtrTypeInfo
 * global name       :  nTECSInfo_tPtrTypeInfo
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
typedef const struct tag_nTECSInfo_tPtrTypeInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sTypeInfo_VDES const*cTypeInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    int8_t         typeKind;
    int32_t        bitSize;
    bool_t         b_const;
    bool_t         b_volatile;
}  nTECSInfo_tPtrTypeInfo_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nTECSInfo_tPtrTypeInfo_CB_tab           nTECSInfo_tPtrTypeInfo_INIB_tab
#define nTECSInfo_tPtrTypeInfo_SINGLE_CELL_CB   nTECSInfo_tPtrTypeInfo_SINGLE_CELL_INIB
#define nTECSInfo_tPtrTypeInfo_CB               nTECSInfo_tPtrTypeInfo_INIB
#define tag_nTECSInfo_tPtrTypeInfo_CB           tag_nTECSInfo_tPtrTypeInfo_INIB

extern nTECSInfo_tPtrTypeInfo_CB  nTECSInfo_tPtrTypeInfo_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_nTECSInfo_tPtrTypeInfo_INIB *nTECSInfo_tPtrTypeInfo_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nTECSInfo_sTypeInfo */
ER           nTECSInfo_tPtrTypeInfo_eTypeInfo_getName(nTECSInfo_tPtrTypeInfo_IDX idx, char_t* name, int_t max_len);
void         nTECSInfo_tPtrTypeInfo_eTypeInfo_getNameLength(nTECSInfo_tPtrTypeInfo_IDX idx, uint16_t* len);
void         nTECSInfo_tPtrTypeInfo_eTypeInfo_getSize(nTECSInfo_tPtrTypeInfo_IDX idx, uint32_t* size);
void         nTECSInfo_tPtrTypeInfo_eTypeInfo_getKind(nTECSInfo_tPtrTypeInfo_IDX idx, int8_t* kind);
void         nTECSInfo_tPtrTypeInfo_eTypeInfo_getNType(nTECSInfo_tPtrTypeInfo_IDX idx, int32_t* num);
void         nTECSInfo_tPtrTypeInfo_eTypeInfo_getTypeInfo(nTECSInfo_tPtrTypeInfo_IDX idx, int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tPtrTypeInfo_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nTECSInfo_tPtrTypeInfo_N_CELL       (45)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nTECSInfo_tPtrTypeInfo_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define nTECSInfo_tPtrTypeInfo_GET_CELLCB(idx) (idx)

/* 属性アクセスマクロ #_AAM_# */
#define nTECSInfo_tPtrTypeInfo_ATTR_name( p_that )	((p_that)->name)
#define nTECSInfo_tPtrTypeInfo_ATTR_typeKind( p_that )	((p_that)->typeKind)
#define nTECSInfo_tPtrTypeInfo_ATTR_bitSize( p_that )	((p_that)->bitSize)
#define nTECSInfo_tPtrTypeInfo_ATTR_b_const( p_that )	((p_that)->b_const)
#define nTECSInfo_tPtrTypeInfo_ATTR_b_volatile( p_that )	((p_that)->b_volatile)

#define nTECSInfo_tPtrTypeInfo_GET_name(p_that)	((p_that)->name)
#define nTECSInfo_tPtrTypeInfo_GET_typeKind(p_that)	((p_that)->typeKind)
#define nTECSInfo_tPtrTypeInfo_GET_bitSize(p_that)	((p_that)->bitSize)
#define nTECSInfo_tPtrTypeInfo_GET_b_const(p_that)	((p_that)->b_const)
#define nTECSInfo_tPtrTypeInfo_GET_b_volatile(p_that)	((p_that)->b_volatile)



 /* 呼び口関数マクロ #_CPM_# */
#define nTECSInfo_tPtrTypeInfo_cTypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cTypeInfo->VMT->getName__T( \
	   (p_that)->cTypeInfo, (name), (max_len) )
#define nTECSInfo_tPtrTypeInfo_cTypeInfo_getNameLength( p_that, len ) \
	  (p_that)->cTypeInfo->VMT->getNameLength__T( \
	   (p_that)->cTypeInfo, (len) )
#define nTECSInfo_tPtrTypeInfo_cTypeInfo_getSize( p_that, size ) \
	  (p_that)->cTypeInfo->VMT->getSize__T( \
	   (p_that)->cTypeInfo, (size) )
#define nTECSInfo_tPtrTypeInfo_cTypeInfo_getKind( p_that, kind ) \
	  (p_that)->cTypeInfo->VMT->getKind__T( \
	   (p_that)->cTypeInfo, (kind) )
#define nTECSInfo_tPtrTypeInfo_cTypeInfo_getNType( p_that, num ) \
	  (p_that)->cTypeInfo->VMT->getNType__T( \
	   (p_that)->cTypeInfo, (num) )
#define nTECSInfo_tPtrTypeInfo_cTypeInfo_getTypeInfo( p_that, ith, desc ) \
	  (p_that)->cTypeInfo->VMT->getTypeInfo__T( \
	   (p_that)->cTypeInfo, (ith), (desc) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eTypeInfo */
ER             nTECSInfo_tPtrTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len);
void           nTECSInfo_tPtrTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint16_t* len);
void           nTECSInfo_tPtrTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t* size);
void           nTECSInfo_tPtrTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int8_t* kind);
void           nTECSInfo_tPtrTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t* num);
void           nTECSInfo_tPtrTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc);

#ifndef TOPPERS_CB_TYPE_ONLY

/* ディスクリプタ参照関数 #_CRD_# */
/* [ref_desc] cTypeInfo */
Inline Descriptor( nTECSInfo_sTypeInfo )
nTECSInfo_tPtrTypeInfo_cTypeInfo_refer_to_descriptor( nTECSInfo_tPtrTypeInfo_CB  *p_that )
{
    Descriptor( nTECSInfo_sTypeInfo )  des;
    nTECSInfo_tPtrTypeInfo_CB *p_cellcb = p_that;
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
#define VALID_IDX(IDX)  nTECSInfo_tPtrTypeInfo_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tPtrTypeInfo_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nTECSInfo_tPtrTypeInfo_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tPtrTypeInfo_IDX

#define tPtrTypeInfo_IDX  nTECSInfo_tPtrTypeInfo_IDX

/* 属性アクセスマクロ(短縮形) #_AAMA_# */
#define ATTR_name            nTECSInfo_tPtrTypeInfo_ATTR_name( p_cellcb )
#define ATTR_typeKind        nTECSInfo_tPtrTypeInfo_ATTR_typeKind( p_cellcb )
#define ATTR_bitSize         nTECSInfo_tPtrTypeInfo_ATTR_bitSize( p_cellcb )
#define ATTR_b_const         nTECSInfo_tPtrTypeInfo_ATTR_b_const( p_cellcb )
#define ATTR_b_volatile      nTECSInfo_tPtrTypeInfo_ATTR_b_volatile( p_cellcb )


/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cTypeInfo_getName( name, max_len ) \
          nTECSInfo_tPtrTypeInfo_cTypeInfo_getName( p_cellcb, name, max_len )
#define cTypeInfo_getNameLength( len ) \
          nTECSInfo_tPtrTypeInfo_cTypeInfo_getNameLength( p_cellcb, len )
#define cTypeInfo_getSize( size ) \
          nTECSInfo_tPtrTypeInfo_cTypeInfo_getSize( p_cellcb, size )
#define cTypeInfo_getKind( kind ) \
          nTECSInfo_tPtrTypeInfo_cTypeInfo_getKind( p_cellcb, kind )
#define cTypeInfo_getNType( num ) \
          nTECSInfo_tPtrTypeInfo_cTypeInfo_getNType( p_cellcb, num )
#define cTypeInfo_getTypeInfo( ith, desc ) \
          nTECSInfo_tPtrTypeInfo_cTypeInfo_getTypeInfo( p_cellcb, ith, desc )


/* ディスクリプタ参照マクロ（短縮形） #_CRDA_# */
#define cTypeInfo_refer_to_descriptor()\
          nTECSInfo_tPtrTypeInfo_cTypeInfo_refer_to_descriptor( p_cellcb )
#define cTypeInfo_ref_desc()\
          cTypeInfo_refer_to_descriptor()



/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eTypeInfo_getName nTECSInfo_tPtrTypeInfo_eTypeInfo_getName
#define eTypeInfo_getNameLength nTECSInfo_tPtrTypeInfo_eTypeInfo_getNameLength
#define eTypeInfo_getSize nTECSInfo_tPtrTypeInfo_eTypeInfo_getSize
#define eTypeInfo_getKind nTECSInfo_tPtrTypeInfo_eTypeInfo_getKind
#define eTypeInfo_getNType nTECSInfo_tPtrTypeInfo_eTypeInfo_getNType
#define eTypeInfo_getTypeInfo nTECSInfo_tPtrTypeInfo_eTypeInfo_getTypeInfo

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tPtrTypeInfo_N_CELL; (i)++ ){ \
       (p_cb) = &nTECSInfo_tPtrTypeInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tPtrTypeInfo_TECSGENH */
