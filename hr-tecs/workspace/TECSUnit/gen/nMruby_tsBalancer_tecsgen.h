/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef nMruby_tsBalancer_TECSGEN_H
#define nMruby_tsBalancer_TECSGEN_H

/*
 * celltype          :  tsBalancer
 * global name       :  nMruby_tsBalancer
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
#include "sBalancer_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_nMruby_tsBalancer_INIB {
    /* call port #_TCP_# */
}  nMruby_tsBalancer_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define nMruby_tsBalancer_CB_tab           nMruby_tsBalancer_INIB_tab
#define nMruby_tsBalancer_SINGLE_CELL_CB   nMruby_tsBalancer_SINGLE_CELL_INIB
#define nMruby_tsBalancer_CB               nMruby_tsBalancer_INIB
#define tag_nMruby_tsBalancer_CB           tag_nMruby_tsBalancer_INIB

extern nMruby_tsBalancer_CB  *nMruby_tsBalancer_CB_tab[];

/* セルタイプのIDX型 #_CTIX_# */
typedef ID nMruby_tsBalancer_IDX;
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* 最適化のため参照するセルタイプの CB 型の定義を取込む #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nMruby_tsBalancer_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tBalancer_tecsgen.h"
#ifdef  nMruby_tsBalancer_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nMruby_tsBalancer_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define nMruby_tsBalancer_ID_BASE        (1)  /* ID のベース  #_NIDB_# */
#define nMruby_tsBalancer_N_CELL        (1)  /* セルの個数  #_NCEL_# */

/* IDXの正当性チェックマクロ #_CVI_# */
#define nMruby_tsBalancer_VALID_IDX(IDX) (nMruby_tsBalancer_ID_BASE <= (IDX) && (IDX) < nMruby_tsBalancer_ID_BASE+nMruby_tsBalancer_N_CELL)


/* セルCBを得るマクロ #_GCB_# */
#define nMruby_tsBalancer_GET_CELLCB(idx) (nMruby_tsBalancer_CB_tab[(idx) - nMruby_tsBalancer_ID_BASE])
 /* 呼び口関数マクロ #_CPM_# */
#define nMruby_tsBalancer_cTECS_control( p_that, forward, turn, gyro, gyroOffset, leftRevolution, rightRevolution, battery, pwm_l, pwm_r, backlashhalf ) \
	  tBalancer_eBalancer_control( \
	    (forward), (turn), (gyro), (gyroOffset), (leftRevolution), (rightRevolution), (battery), (pwm_l), (pwm_r), (backlashhalf) )
#define nMruby_tsBalancer_cTECS_init( p_that ) \
	  tBalancer_eBalancer_init( \
	    )

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
#define VALID_IDX(IDX)  nMruby_tsBalancer_VALID_IDX(IDX)


/* セルCBを得るマクロ(短縮形) #_GCBA_# */
#define GET_CELLCB(idx)  nMruby_tsBalancer_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	nMruby_tsBalancer_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	nMruby_tsBalancer_IDX

#define tsBalancer_IDX  nMruby_tsBalancer_IDX
/* 呼び口関数マクロ（短縮形）#_CPMA_# */
#define cTECS_control( forward, turn, gyro, gyroOffset, leftRevolution, rightRevolution, battery, pwm_l, pwm_r, backlashhalf ) \
          ((void)p_cellcb, nMruby_tsBalancer_cTECS_control( p_cellcb, forward, turn, gyro, gyroOffset, leftRevolution, rightRevolution, battery, pwm_l, pwm_r, backlashhalf ))
#define cTECS_init( ) \
          ((void)p_cellcb, nMruby_tsBalancer_cTECS_init( p_cellcb ))



/* イテレータコード (FOREACH_CELL)の生成 #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nMruby_tsBalancer_N_CELL; (i)++ ){ \
       (p_cb) = nMruby_tsBalancer_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nMruby_tsBalancer_TECSGENH */
