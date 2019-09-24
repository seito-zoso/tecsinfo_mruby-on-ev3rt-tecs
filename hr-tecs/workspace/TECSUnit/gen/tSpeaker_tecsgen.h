/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#ifndef tSpeaker_TECSGEN_H
#define tSpeaker_TECSGEN_H

/*
 * celltype          :  tSpeaker
 * global name       :  tSpeaker
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
#include "sSpeaker_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* セル INIB 型宣言 #_CIP_# */
typedef const struct tag_tSpeaker_INIB {
    /* call port #_NEP_# */ 
}  tSpeaker_INIB;

/* CB は存在しない。INIB を CB の代わりに使用するための define #_DCI_# */
#define tSpeaker_CB_tab           tSpeaker_INIB_tab
#define tSpeaker_SINGLE_CELL_CB   tSpeaker_SINGLE_CELL_INIB
#define tSpeaker_CB               tSpeaker_INIB
#define tag_tSpeaker_CB           tag_tSpeaker_INIB

/* シングルトンセル CB プロトタイプ宣言 #_SCP_# */
extern  tSpeaker_INIB  tSpeaker_SINGLE_CELL_INIB;


/* セルタイプのIDX型 #_CTIX_# */
typedef const struct tag_tSpeaker_INIB *tSpeaker_IDX;

/* 受け口関数プロトタイプ宣言 #_EPP_# */
/* sSpeaker */
ER           tSpeaker_eSpeaker_setVolume( uint8_t volume);
ER           tSpeaker_eSpeaker_playTone( uint16_t frequency, int32_t duration);
ER           tSpeaker_eSpeaker_stop();
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* セルCBを得るマクロ #_GCB_# */
#define tSpeaker_GET_CELLCB(idx) ((void *)0)
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
#define GET_CELLCB(idx)  tSpeaker_GET_CELLCB(idx)

/* CELLCB 型(短縮形) #_CCT_# */
#define CELLCB	tSpeaker_CB

/* セルタイプのIDX型(短縮形) #_CTIXA_# */
#define CELLIDX	tSpeaker_IDX




/* 受け口関数マクロ（短縮形） #_EPM_# */
#define eSpeaker_setVolume tSpeaker_eSpeaker_setVolume
#define eSpeaker_playTone tSpeaker_eSpeaker_playTone
#define eSpeaker_stop    tSpeaker_eSpeaker_stop

/* CB 初期化マクロ #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSpeaker_TECSGENH */
