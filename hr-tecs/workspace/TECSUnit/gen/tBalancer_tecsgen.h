/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tBalancer_TECSGEN_H
#define tBalancer_TECSGEN_H

/*
 * celltype          :  tBalancer
 * global name       :  tBalancer
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
#include "sBalancer_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tBalancer_INIB {
    /* call port #_NEP_# */ 
}  tBalancer_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tBalancer_CB_tab           tBalancer_INIB_tab
#define tBalancer_SINGLE_CELL_CB   tBalancer_SINGLE_CELL_INIB
#define tBalancer_CB               tBalancer_INIB
#define tag_tBalancer_CB           tag_tBalancer_INIB

/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tBalancer_INIB  tBalancer_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tBalancer_INIB *tBalancer_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sBalancer */
void         tBalancer_eBalancer_control( int16_t forward, int16_t turn, int16_t gyro, int16_t gyroOffset, int32_t leftRevolution, int32_t rightRevolution, int16_t battery, int8_t* pwm_l, int8_t* pwm_r, int32_t backlashhalf);
void         tBalancer_eBalancer_init();
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tBalancer_GET_CELLCB(idx) ((void *)0)
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


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  tBalancer_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tBalancer_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tBalancer_IDX




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eBalancer_control tBalancer_eBalancer_control
#define eBalancer_init   tBalancer_eBalancer_init

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tBalancer_TECSGENH */
