/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nMruby_tULongPointer_TECSGEN_H
#define nMruby_tULongPointer_TECSGEN_H

/*
 * celltype          :  tULongPointer
 * global name       :  nMruby_tULongPointer
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
#include "nMruby_sInitializeTECSBridge_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nMruby_tULongPointer_INIB {
    /* call port #_NEP_# */ 
}  nMruby_tULongPointer_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nMruby_tULongPointer_CB_tab           nMruby_tULongPointer_INIB_tab
#define nMruby_tULongPointer_SINGLE_CELL_CB   nMruby_tULongPointer_SINGLE_CELL_INIB
#define nMruby_tULongPointer_CB               nMruby_tULongPointer_INIB
#define tag_nMruby_tULongPointer_CB           tag_nMruby_tULongPointer_INIB

/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  nMruby_tULongPointer_INIB  nMruby_tULongPointer_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_nMruby_tULongPointer_INIB *nMruby_tULongPointer_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nMruby_sInitializeTECSBridge */
void         nMruby_tULongPointer_eInitialize_initializeBridge( mrb_state* mrb, struct RClass* TECS);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define nMruby_tULongPointer_GET_CELLCB(idx) ((void *)0)
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eInitialize */
void           nMruby_tULongPointer_eInitialize_initializeBridge_skel( const struct tag_nMruby_sInitializeTECSBridge_VDES *epd, mrb_state* mrb, struct RClass* TECS);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tULongPointer_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nMruby_tULongPointer_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nMruby_tULongPointer_IDX

#define tULongPointer_IDX  nMruby_tULongPointer_IDX



/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eInitialize_initializeBridge nMruby_tULongPointer_eInitialize_initializeBridge

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tULongPointer_TECSGENH */
