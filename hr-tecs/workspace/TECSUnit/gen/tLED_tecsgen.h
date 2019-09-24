/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tLED_TECSGEN_H
#define tLED_TECSGEN_H

/*
 * celltype          :  tLED
 * global name       :  tLED
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
#include "sLED_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tLED_INIB {
    /* call port #_NEP_# */ 
}  tLED_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tLED_CB_tab           tLED_INIB_tab
#define tLED_SINGLE_CELL_CB   tLED_SINGLE_CELL_INIB
#define tLED_CB               tLED_INIB
#define tag_tLED_CB           tag_tLED_INIB

extern tLED_CB  tLED_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tLED_INIB *tLED_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sLED */
ER           tLED_eLED_setColor(tLED_IDX idx, ledcolor_t color);
ER           tLED_eLED_off(tLED_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tLED_ID_BASE                (1)  /* ID のベース  #_NIDB_# */
#define tLED_N_CELL                 (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tLED_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tLED_GET_CELLCB(idx) (idx)
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
#define VALID_IDX(IDX)  tLED_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tLED_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tLED_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tLED_IDX




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eLED_setColor    tLED_eLED_setColor
#define eLED_off         tLED_eLED_off

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tLED_N_CELL; (i)++ ){ \
       (p_cb) = &tLED_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tLED_TECSGENH */
