/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nMruby_tsKernel_tecsgen.h"
#include "nMruby_tsKernel_factory.h"


/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */

/* 呼び口配列 #_CPA_# */

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
/* cell: rDomainEV3_BridgeKernel_CB:  BridgeKernel id=1 */
const nMruby_tsKernel_INIB rDomainEV3_BridgeKernel_INIB = {
};

/* 受け口ディスクリプタ #_EPD_# */
/* ID to INIB table #_INTAB_# */
    extern nMruby_tsKernel_INIB  rDomainEV3_BridgeKernel_INIB;
nMruby_tsKernel_INIB *nMruby_tsKernel_INIB_tab[] ={
    &rDomainEV3_BridgeKernel_INIB,
};
/* CB 初期化コード #_CIC_# */
void
nMruby_tsKernel_CB_initialize()
{
    nMruby_tsKernel_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
