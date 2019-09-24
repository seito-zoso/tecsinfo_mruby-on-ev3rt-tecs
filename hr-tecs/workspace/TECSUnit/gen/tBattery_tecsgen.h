/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tBattery_TECSGEN_H
#define tBattery_TECSGEN_H

/*
 * celltype          :  tBattery
 * global name       :  tBattery
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
#include "sBattery_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tBattery_INIB {
    /* call port #_NEP_# */ 
}  tBattery_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tBattery_CB_tab           tBattery_INIB_tab
#define tBattery_SINGLE_CELL_CB   tBattery_SINGLE_CELL_INIB
#define tBattery_CB               tBattery_INIB
#define tag_tBattery_CB           tag_tBattery_INIB

extern tBattery_CB  tBattery_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tBattery_INIB *tBattery_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sBattery */
int          tBattery_eBattery_current_mA(tBattery_IDX idx);
int          tBattery_eBattery_voltage_mV(tBattery_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define tBattery_ID_BASE            (1)  /* ID のベース  #_NIDB_# */
#define tBattery_N_CELL             (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define tBattery_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define tBattery_GET_CELLCB(idx) (idx)
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
#define VALID_IDX(IDX)  tBattery_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tBattery_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tBattery_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tBattery_IDX




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBattery_current_mA tBattery_eBattery_current_mA
#define eBattery_voltage_mV tBattery_eBattery_voltage_mV

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tBattery_N_CELL; (i)++ ){ \
       (p_cb) = &tBattery_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tBattery_TECSGENH */
