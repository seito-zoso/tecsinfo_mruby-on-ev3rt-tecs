/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nMruby_tCharPointer_TECSGEN_H
#define nMruby_tCharPointer_TECSGEN_H

/*
 * celltype          :  tCharPointer
 * global name       :  nMruby_tCharPointer
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
typedef const struct tag_nMruby_tCharPointer_INIB {
    /* call port #_NEP_# */ 
}  nMruby_tCharPointer_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nMruby_tCharPointer_CB_tab           nMruby_tCharPointer_INIB_tab
#define nMruby_tCharPointer_SINGLE_CELL_CB   nMruby_tCharPointer_SINGLE_CELL_INIB
#define nMruby_tCharPointer_CB               nMruby_tCharPointer_INIB
#define tag_nMruby_tCharPointer_CB           tag_nMruby_tCharPointer_INIB

/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  nMruby_tCharPointer_INIB  nMruby_tCharPointer_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_nMruby_tCharPointer_INIB *nMruby_tCharPointer_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nMruby_sInitializeTECSBridge */
void         nMruby_tCharPointer_eInitialize_initializeBridge( mrb_state* mrb, struct RClass* TECS);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define nMruby_tCharPointer_GET_CELLCB(idx) ((void *)0)
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eInitialize */
void           nMruby_tCharPointer_eInitialize_initializeBridge_skel( const struct tag_nMruby_sInitializeTECSBridge_VDES *epd, mrb_state* mrb, struct RClass* TECS);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tCharPointer_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nMruby_tCharPointer_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nMruby_tCharPointer_IDX

#define tCharPointer_IDX  nMruby_tCharPointer_IDX



/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eInitialize_initializeBridge nMruby_tCharPointer_eInitialize_initializeBridge

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tCharPointer_TECSGENH */
