/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tButton_TECSGEN_H
#define tButton_TECSGEN_H

/*
 * celltype          :  tButton
 * global name       :  tButton
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  0
 * rom               :  yes
 * CB initializer    :  yes
 */

/* グローバルヘッダ #_IGH_# */
#include "global_tecsgen.h"

/* シグニチャヘッダ #_ISH_# */
#include "sButton_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tButton_INIB {
    /* call port #_NEP_# */ 
}  tButton_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tButton_CB_tab           tButton_INIB_tab
#define tButton_SINGLE_CELL_CB   tButton_SINGLE_CELL_INIB
#define tButton_CB               tButton_INIB
#define tag_tButton_CB           tag_tButton_INIB

extern tButton_CB  tButton_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tButton_INIB *tButton_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sButton */
bool_t       tButton_eButton_isPressed(tButton_IDX idx, button_t button);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tButton_ID_BASE             (1)  /* ID のベース  #_NIDB_# */
#define tButton_N_CELL              (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tButton_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tButton_GET_CELLCB(idx) (idx)
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  tButton_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tButton_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tButton_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tButton_IDX




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eButton_isPressed tButton_eButton_isPressed

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tButton_N_CELL; (i)++ ){ \
       (p_cb) = &tButton_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tButton_TECSGENH */
