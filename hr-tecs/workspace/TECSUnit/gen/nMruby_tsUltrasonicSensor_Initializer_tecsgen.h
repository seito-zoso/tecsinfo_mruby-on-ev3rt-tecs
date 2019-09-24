/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nMruby_tsUltrasonicSensor_Initializer_TECSGEN_H
#define nMruby_tsUltrasonicSensor_Initializer_TECSGEN_H

/*
 * celltype          :  tsUltrasonicSensor_Initializer
 * global name       :  nMruby_tsUltrasonicSensor_Initializer
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
#include "nMruby_sInitializeTECSBridge_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nMruby_tsUltrasonicSensor_Initializer_INIB {
    /* call port #_NEP_# */ 
}  nMruby_tsUltrasonicSensor_Initializer_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nMruby_tsUltrasonicSensor_Initializer_CB_tab           nMruby_tsUltrasonicSensor_Initializer_INIB_tab
#define nMruby_tsUltrasonicSensor_Initializer_SINGLE_CELL_CB   nMruby_tsUltrasonicSensor_Initializer_SINGLE_CELL_INIB
#define nMruby_tsUltrasonicSensor_Initializer_CB               nMruby_tsUltrasonicSensor_Initializer_INIB
#define tag_nMruby_tsUltrasonicSensor_Initializer_CB           tag_nMruby_tsUltrasonicSensor_Initializer_INIB

extern nMruby_tsUltrasonicSensor_Initializer_CB  nMruby_tsUltrasonicSensor_Initializer_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_nMruby_tsUltrasonicSensor_Initializer_INIB *nMruby_tsUltrasonicSensor_Initializer_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* nMruby_sInitializeTECSBridge */
void         nMruby_tsUltrasonicSensor_Initializer_eInitialize_initializeBridge(nMruby_tsUltrasonicSensor_Initializer_IDX idx, mrb_state* mrb, struct RClass* TECS);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tsUltrasonicSensor_Initializer_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nMruby_tsUltrasonicSensor_Initializer_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nMruby_tsUltrasonicSensor_Initializer_VALID_IDX(IDX) (1)


/* セルCBを得るマクロ #_GCB_# */
#define nMruby_tsUltrasonicSensor_Initializer_GET_CELLCB(idx) (idx)
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* 受け口スケルトン関数プロトタイプ宣言（VMT不要最適化により参照するもの） #_EPSP_# */
/* eInitialize */
void           nMruby_tsUltrasonicSensor_Initializer_eInitialize_initializeBridge_skel( const struct tag_nMruby_sInitializeTECSBridge_VDES *epd, mrb_state* mrb, struct RClass* TECS);

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDXの正当性チェックマクロ（短縮形） #_CVIA_# */
#define VALID_IDX(IDX)  nMruby_tsUltrasonicSensor_Initializer_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tsUltrasonicSensor_Initializer_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nMruby_tsUltrasonicSensor_Initializer_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nMruby_tsUltrasonicSensor_Initializer_IDX

#define tsUltrasonicSensor_Initializer_IDX  nMruby_tsUltrasonicSensor_Initializer_IDX



/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eInitialize_initializeBridge nMruby_tsUltrasonicSensor_Initializer_eInitialize_initializeBridge

/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nMruby_tsUltrasonicSensor_Initializer_N_CELL; (i)++ ){ \
       (p_cb) = &nMruby_tsUltrasonicSensor_Initializer_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tsUltrasonicSensor_Initializer_TECSGENH */
