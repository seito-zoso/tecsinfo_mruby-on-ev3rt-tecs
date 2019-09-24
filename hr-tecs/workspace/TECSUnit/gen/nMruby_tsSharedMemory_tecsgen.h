/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nMruby_tsSharedMemory_TECSGEN_H
#define nMruby_tsSharedMemory_TECSGEN_H

/*
 * celltype          :  tsSharedMemory
 * global name       :  nMruby_tsSharedMemory
 * idx_is_id(actual) :  yes(yes)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  0
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sSharedMemory_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nMruby_tsSharedMemory_INIB {
    /* call port #_TCP_# */
}  nMruby_tsSharedMemory_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nMruby_tsSharedMemory_CB_tab           nMruby_tsSharedMemory_INIB_tab
#define nMruby_tsSharedMemory_SINGLE_CELL_CB   nMruby_tsSharedMemory_SINGLE_CELL_INIB
#define nMruby_tsSharedMemory_CB               nMruby_tsSharedMemory_INIB
#define tag_nMruby_tsSharedMemory_CB           tag_nMruby_tsSharedMemory_INIB

extern nMruby_tsSharedMemory_CB  *nMruby_tsSharedMemory_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef ID nMruby_tsSharedMemory_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nMruby_tsSharedMemory_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tSharedMemory_tecsgen.h"
#ifdef  nMruby_tsSharedMemory_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nMruby_tsSharedMemory_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tsSharedMemory_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nMruby_tsSharedMemory_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nMruby_tsSharedMemory_VALID_IDX(IDX) (nMruby_tsSharedMemory_ID_BASE <= (IDX) && (IDX) < nMruby_tsSharedMemory_ID_BASE+nMruby_tsSharedMemory_N_CELL)


/* セルCBを得るマクロ #_GCB_# */
#define nMruby_tsSharedMemory_GET_CELLCB(idx) (nMruby_tsSharedMemory_CB_tab[(idx) - nMruby_tsSharedMemory_ID_BASE])
 /* 呼び口関数マクロ #_CPM_# */
#define nMruby_tsSharedMemory_cTECS_putVal( p_that, index, val ) \
	  tSharedMemory_eSharedMemory_putVal( \
	   &tSharedMemory_CB_tab[0], (index), (val) )
#define nMruby_tsSharedMemory_cTECS_getVal( p_that, index ) \
	  tSharedMemory_eSharedMemory_getVal( \
	   &tSharedMemory_CB_tab[0], (index) )
#define nMruby_tsSharedMemory_cTECS_getSize( p_that ) \
	  tSharedMemory_eSharedMemory_getSize( \
	   &tSharedMemory_CB_tab[0] )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  nMruby_tsSharedMemory_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tsSharedMemory_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nMruby_tsSharedMemory_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nMruby_tsSharedMemory_IDX

#define tsSharedMemory_IDX  nMruby_tsSharedMemory_IDX
/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cTECS_putVal( index, val ) \
          ((void)p_cellcb, nMruby_tsSharedMemory_cTECS_putVal( p_cellcb, index, val ))
#define cTECS_getVal( index ) \
          ((void)p_cellcb, nMruby_tsSharedMemory_cTECS_getVal( p_cellcb, index ))
#define cTECS_getSize( ) \
          ((void)p_cellcb, nMruby_tsSharedMemory_cTECS_getSize( p_cellcb ))



/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nMruby_tsSharedMemory_N_CELL; (i)++ ){ \
       (p_cb) = nMruby_tsSharedMemory_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tsSharedMemory_TECSGENH */
