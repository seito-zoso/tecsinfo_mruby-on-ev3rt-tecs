/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tTECSInfoSub_tecsgen.h"
#include "nTECSInfo_tTECSInfoSub_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTECSInfo : omitted by entry port optimize */

/* 受け口スケルトン関数 #_EPSF_# */
/* eTECSInfo : omitted by entry port optimize */

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTECSInfo : omitted by entry port optimize */

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sNamespaceInfo_VDES rDomainEV3_rTECSInfo__RootNamespaceInfo_eNamespaceInfo_des;
extern struct tag_nTECSInfo_sRegionInfo_VDES rDomainEV3_rTECSInfo__LinkRootRegionInfo_eRegionInfo_des;

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tTECSInfoSub_INIB nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB = 
{
    /* call port (INIB) #_CP_# */ 
    &rDomainEV3_rTECSInfo__RootNamespaceInfo_eNamespaceInfo_des, /* cNamespaceInfo #_CCP1_# */
    &rDomainEV3_rTECSInfo__LinkRootRegionInfo_eRegionInfo_des, /* cRegionInfo #_CCP1_# */
    /* entry port #_EP_# */ 
};

/* 受け口ディスクリプタ #_EPD_# */
/* eTECSInfo : omitted by entry port optimize */
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tTECSInfoSub_CB_initialize()
{
    SET_CB_INIB_POINTER(i,p_cb)
    INITIALIZE_CB()
}
