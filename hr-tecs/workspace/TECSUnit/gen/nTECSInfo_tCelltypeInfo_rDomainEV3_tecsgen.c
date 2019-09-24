/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tCelltypeInfo_tecsgen.h"
#include "nTECSInfo_tCelltypeInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eCelltypeInfo */
struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES {
    const struct tag_nTECSInfo_sCelltypeInfo_VMT *vmt;
    tCelltypeInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eCelltypeInfo */
ER             nTECSInfo_tCelltypeInfo_eCelltypeInfo_getName_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, uint16_t* len)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNameLength( lepd->idx, len );
}
void           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNAttr_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, int32_t* nAttr)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNAttr( lepd->idx, nAttr );
}
void           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getAttrInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getAttrInfo( lepd->idx, ith, desc );
}
void           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNVar_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, int32_t* nVar)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNVar( lepd->idx, nVar );
}
void           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getVarInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getVarInfo( lepd->idx, ith, desc );
}
void           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNCall_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, int32_t* nCall)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNCall( lepd->idx, nCall );
}
void           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getCallInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sCallInfo )* desc)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getCallInfo( lepd->idx, ith, desc );
}
void           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNEntry_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, int32_t* nEntry)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNEntry( lepd->idx, nEntry );
}
void           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getEntryInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sEntryInfo )* desc)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getEntryInfo( lepd->idx, ith, desc );
}
bool_t         nTECSInfo_tCelltypeInfo_eCelltypeInfo_isSingleton_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_isSingleton( lepd->idx );
}
bool_t         nTECSInfo_tCelltypeInfo_eCelltypeInfo_isIDX_is_ID_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_isIDX_is_ID( lepd->idx );
}
bool_t         nTECSInfo_tCelltypeInfo_eCelltypeInfo_hasCB_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_hasCB( lepd->idx );
}
bool_t         nTECSInfo_tCelltypeInfo_eCelltypeInfo_hasINIB_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd)
{
    struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES *)epd;
    return nTECSInfo_tCelltypeInfo_eCelltypeInfo_hasINIB( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eCelltypeInfo */
const struct tag_nTECSInfo_sCelltypeInfo_VMT nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_ = {
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getName_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNameLength_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNAttr_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getAttrInfo_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNVar_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getVarInfo_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNCall_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getCallInfo_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNEntry_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_getEntryInfo_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_isSingleton_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_isIDX_is_ID_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_hasCB_skel,
    nTECSInfo_tCelltypeInfo_eCelltypeInfo_hasINIB_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tTask_eTaskEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tTask_eiTaskEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTask_cBodyCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTask_cExceptionBodyCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTask_idVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTask_taskAttributeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTask_exceptionAttributeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTask_priorityVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTask_stackSizeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTask_systemStackSizeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTask_userStackSizeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTask_accessPatternVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tKernel_eKernelEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tKernel_eiKernelEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tKernel_accessPatternVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tUltrasonicSensor_eUltrasonicSensorEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tUltrasonicSensor_portVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tColorSensor_eColorSensorEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tColorSensor_portVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tTouchSensor_eTouchSensorEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTouchSensor_portVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tGyroSensor_eGyroSensorEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tGyroSensor_portVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tMotor_eMotorEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tMotor_portVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tButton_eButtonEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tLCD_eLCDEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tLCD_cButtonCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tLCD_currentFontVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tLED_eLEDEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tBattery_eBatteryEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tSpeaker_eSpeakerEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tEV3Platform_eTaskBodyEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tEV3Platform_cRiteVMCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tEV3Platform_cTaskCallInfo_eCallInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tBalancer_eBalancerEntryInfo_eEntryInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tSharedMemory_eSharedMemoryEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tSharedMemory_sizeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tSharedMemory_dataVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_eBodyEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cLCDCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cButtonCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cTECSInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cNSInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cRegionInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cCellInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cSignatureInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cCelltypeInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cVarDeclInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cTypeInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cFunctionInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cParamInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cEntryInfoCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_NAME_LENVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_ARG_NAME_LENVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_ARG_DIMVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_TARGET_NUMVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_cell_pathVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_celltype_pathVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_entry_pathVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_entry_path_tmpVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_signature_pathVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_function_pathVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_function_path_tmpVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_arg_numVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_exp_typeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_argVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_arg_typeVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_find_entryVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_tTaskMain_find_funcVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsKernel_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsKernel_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsKernel_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsMotor_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsMotor_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsMotor_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLCD_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLCD_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLCD_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLED_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLED_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsLED_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsButton_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsButton_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsButton_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBattery_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBattery_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBattery_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBalancer_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBalancer_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsBalancer_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_cTECSCallInfo_eCallInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_VMnameVarDeclInfo_eVarDeclInfo_des;
extern struct tag_nTECSInfo_sVarDeclInfo_VDES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_bridgeNameVarDeclInfo_eVarDeclInfo_des;

extern struct tag_nTECSInfo_sEntryInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfo_eTECSInfoEntryInfo_eEntryInfo_des;
extern struct tag_nTECSInfo_sCallInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfo_cTECSInfoCallInfo_eCallInfo_des;

/* 呼び口配列 #_CPA_# */
struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tTaskCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tTask_eTaskEntryInfo_eEntryInfo_des,
    &rDomainEV3_rTECSInfo_tTask_eiTaskEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_tTaskCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_tTask_cBodyCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTask_cExceptionBodyCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tTaskCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_tTask_idVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTask_taskAttributeVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTask_exceptionAttributeVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTask_priorityVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTask_stackSizeVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTask_systemStackSizeVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTask_userStackSizeVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTask_accessPatternVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tKernelCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tKernel_eKernelEntryInfo_eEntryInfo_des,
    &rDomainEV3_rTECSInfo_tKernel_eiKernelEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tKernelCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_tKernel_accessPatternVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tUltrasonicSensor_eUltrasonicSensorEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_tUltrasonicSensor_portVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tColorSensor_eColorSensorEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_tColorSensor_portVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tTouchSensor_eTouchSensorEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_tTouchSensor_portVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tGyroSensor_eGyroSensorEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_tGyroSensor_portVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tMotorCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tMotor_eMotorEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tMotorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_tMotor_portVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tButtonCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tButton_eButtonEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tLCDCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tLCD_eLCDEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_tLCDCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_tLCD_cButtonCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tLCDCelltypeInfo_cVarInfo[] = {
    &rDomainEV3_rTECSInfo_tLCD_currentFontVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tLEDCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tLED_eLEDEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tBatteryCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tBattery_eBatteryEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tSpeakerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tSpeaker_eSpeakerEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tEV3PlatformCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tEV3Platform_eTaskBodyEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_tEV3PlatformCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_tEV3Platform_cRiteVMCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tEV3Platform_cTaskCallInfo_eCallInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tBalancerCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tBalancer_eBalancerEntryInfo_eEntryInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tSharedMemory_eSharedMemoryEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_tSharedMemory_sizeVarDeclInfo_eVarDeclInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_cVarInfo[] = {
    &rDomainEV3_rTECSInfo_tSharedMemory_dataVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_tTaskMain_eBodyEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_tTaskMain_cLCDCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cButtonCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cTECSInfoCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cNSInfoCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cRegionInfoCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cCellInfoCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cSignatureInfoCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cCelltypeInfoCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cVarDeclInfoCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cTypeInfoCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cFunctionInfoCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cParamInfoCallInfo_eCallInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_cEntryInfoCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_tTaskMain_NAME_LENVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_ARG_NAME_LENVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_ARG_DIMVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_TARGET_NUMVarDeclInfo_eVarDeclInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_cVarInfo[] = {
    &rDomainEV3_rTECSInfo_tTaskMain_cell_pathVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_celltype_pathVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_entry_pathVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_entry_path_tmpVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_signature_pathVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_function_pathVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_function_path_tmpVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_arg_numVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_exp_typeVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_argVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_arg_typeVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_find_entryVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_tTaskMain_find_funcVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsKernelCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsKernel_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsKernelCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsKernel_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsKernel_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsMotor_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsMotor_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsMotor_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsLCDCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsLCD_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsLCDCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsLCD_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsLCD_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsLEDCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsLED_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsLEDCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsLED_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsLED_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsButtonCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsButton_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsButtonCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsButton_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsButton_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsBatteryCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsBattery_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsBatteryCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsBattery_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsBattery_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsSpeakerCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsSpeaker_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsSpeakerCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsSpeaker_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsSpeaker_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsColorSensor_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsColorSensor_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsColorSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsBalancerCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsBalancer_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsBalancerCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsBalancer_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsBalancer_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsSharedMemoryCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_cTECSCallInfo_eCallInfo_des,
};
struct tag_nTECSInfo_sVarDeclInfo_VDES * const rDomainEV3_rTECSInfo_nMruby_tsSharedMemoryCelltypeInfo_cAttrInfo[] = {
    &rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_VMnameVarDeclInfo_eVarDeclInfo_des,
    &rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_bridgeNameVarDeclInfo_eVarDeclInfo_des,
};

struct tag_nTECSInfo_sEntryInfo_VDES * const rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_cEntryInfo[] = {
    &rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfo_eTECSInfoEntryInfo_eEntryInfo_des,
};
struct tag_nTECSInfo_sCallInfo_VDES * const rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_cCallInfo[] = {
    &rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfo_cTECSInfoCallInfo_eCallInfo_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tCelltypeInfo_INIB nTECSInfo_tCelltypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[0]:  tTaskCelltypeInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tTaskCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        2,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_tTaskCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        2,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_tTaskCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        8,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTask",                                 /* name */
        false,                                   /* b_singleton */
        tTask__IDX_is_ID_act,                    /* b_IDX_is_ID_act */
        tTask__hasCB,                            /* b_hasCB */
        tTask__hasINIB,                          /* b_hasINIB */
        tTask__NCELLINLINKUNIT,                  /* n_cellInLinUnit */
        2,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[1]:  tKernelCelltypeInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tKernelCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        2,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_tKernelCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        1,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tKernel",                               /* name */
        true,                                    /* b_singleton */
        tKernel__IDX_is_ID_act,                  /* b_IDX_is_ID_act */
        tKernel__hasCB,                          /* b_hasCB */
        tKernel__hasINIB,                        /* b_hasINIB */
        tKernel__NCELLINLINKUNIT,                /* n_cellInLinUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[2]:  tUltrasonicSensorCelltypeInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        1,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tUltrasonicSensor",                     /* name */
        false,                                   /* b_singleton */
        tUltrasonicSensor__IDX_is_ID_act,        /* b_IDX_is_ID_act */
        tUltrasonicSensor__hasCB,                /* b_hasCB */
        tUltrasonicSensor__hasINIB,              /* b_hasINIB */
        tUltrasonicSensor__NCELLINLINKUNIT,      /* n_cellInLinUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[3]:  tColorSensorCelltypeInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        1,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tColorSensor",                          /* name */
        false,                                   /* b_singleton */
        tColorSensor__IDX_is_ID_act,             /* b_IDX_is_ID_act */
        tColorSensor__hasCB,                     /* b_hasCB */
        tColorSensor__hasINIB,                   /* b_hasINIB */
        tColorSensor__NCELLINLINKUNIT,           /* n_cellInLinUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[4]:  tTouchSensorCelltypeInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        1,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTouchSensor",                          /* name */
        false,                                   /* b_singleton */
        tTouchSensor__IDX_is_ID_act,             /* b_IDX_is_ID_act */
        tTouchSensor__hasCB,                     /* b_hasCB */
        tTouchSensor__hasINIB,                   /* b_hasINIB */
        tTouchSensor__NCELLINLINKUNIT,           /* n_cellInLinUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[5]:  tGyroSensorCelltypeInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        1,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tGyroSensor",                           /* name */
        false,                                   /* b_singleton */
        tGyroSensor__IDX_is_ID_act,              /* b_IDX_is_ID_act */
        tGyroSensor__hasCB,                      /* b_hasCB */
        tGyroSensor__hasINIB,                    /* b_hasINIB */
        tGyroSensor__NCELLINLINKUNIT,            /* n_cellInLinUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[6]:  tMotorCelltypeInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tMotorCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_tMotorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        1,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tMotor",                                /* name */
        false,                                   /* b_singleton */
        tMotor__IDX_is_ID_act,                   /* b_IDX_is_ID_act */
        tMotor__hasCB,                           /* b_hasCB */
        tMotor__hasINIB,                         /* b_hasINIB */
        tMotor__NCELLINLINKUNIT,                 /* n_cellInLinUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[7]:  tButtonCelltypeInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tButtonCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tButton",                               /* name */
        false,                                   /* b_singleton */
        tButton__IDX_is_ID_act,                  /* b_IDX_is_ID_act */
        tButton__hasCB,                          /* b_hasCB */
        tButton__hasINIB,                        /* b_hasINIB */
        tButton__NCELLINLINKUNIT,                /* n_cellInLinUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[8]:  tLCDCelltypeInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tLCDCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_tLCDCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_tLCDCelltypeInfo_cVarInfo, /* #_CCP3B_# */
        1,                                       /* length of cVarInfo (n_cVarInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tLCD",                                  /* name */
        false,                                   /* b_singleton */
        tLCD__IDX_is_ID_act,                     /* b_IDX_is_ID_act */
        tLCD__hasCB,                             /* b_hasCB */
        tLCD__hasINIB,                           /* b_hasINIB */
        tLCD__NCELLINLINKUNIT,                   /* n_cellInLinUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[9]:  tLEDCelltypeInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tLEDCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tLED",                                  /* name */
        false,                                   /* b_singleton */
        tLED__IDX_is_ID_act,                     /* b_IDX_is_ID_act */
        tLED__hasCB,                             /* b_hasCB */
        tLED__hasINIB,                           /* b_hasINIB */
        tLED__NCELLINLINKUNIT,                   /* n_cellInLinUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[10]:  tBatteryCelltypeInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tBatteryCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tBattery",                              /* name */
        false,                                   /* b_singleton */
        tBattery__IDX_is_ID_act,                 /* b_IDX_is_ID_act */
        tBattery__hasCB,                         /* b_hasCB */
        tBattery__hasINIB,                       /* b_hasINIB */
        tBattery__NCELLINLINKUNIT,               /* n_cellInLinUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[11]:  tSpeakerCelltypeInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tSpeakerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tSpeaker",                              /* name */
        true,                                    /* b_singleton */
        tSpeaker__IDX_is_ID_act,                 /* b_IDX_is_ID_act */
        tSpeaker__hasCB,                         /* b_hasCB */
        tSpeaker__hasINIB,                       /* b_hasINIB */
        tSpeaker__NCELLINLINKUNIT,               /* n_cellInLinUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[12]:  tEV3PlatformCelltypeInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tEV3PlatformCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_tEV3PlatformCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        2,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tEV3Platform",                          /* name */
        false,                                   /* b_singleton */
        tEV3Platform__IDX_is_ID_act,             /* b_IDX_is_ID_act */
        tEV3Platform__hasCB,                     /* b_hasCB */
        tEV3Platform__hasINIB,                   /* b_hasINIB */
        tEV3Platform__NCELLINLINKUNIT,           /* n_cellInLinUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[13]:  tBalancerCelltypeInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tBalancerCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tBalancer",                             /* name */
        true,                                    /* b_singleton */
        tBalancer__IDX_is_ID_act,                /* b_IDX_is_ID_act */
        tBalancer__hasCB,                        /* b_hasCB */
        tBalancer__hasINIB,                      /* b_hasINIB */
        tBalancer__NCELLINLINKUNIT,              /* n_cellInLinUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[14]:  tSharedMemoryCelltypeInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCallInfo (n_cCallInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        1,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_cVarInfo, /* #_CCP3B_# */
        1,                                       /* length of cVarInfo (n_cVarInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tSharedMemory",                         /* name */
        false,                                   /* b_singleton */
        tSharedMemory__IDX_is_ID_act,            /* b_IDX_is_ID_act */
        tSharedMemory__hasCB,                    /* b_hasCB */
        tSharedMemory__hasINIB,                  /* b_hasINIB */
        tSharedMemory__NCELLINLINKUNIT,          /* n_cellInLinUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[15]:  tTaskMainCelltypeInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        13,                                      /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        4,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_cVarInfo, /* #_CCP3B_# */
        13,                                      /* length of cVarInfo (n_cVarInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTaskMain",                             /* name */
        false,                                   /* b_singleton */
        tTaskMain__IDX_is_ID_act,                /* b_IDX_is_ID_act */
        tTaskMain__hasCB,                        /* b_hasCB */
        tTaskMain__hasINIB,                      /* b_hasINIB */
        tTaskMain__NCELLINLINKUNIT,              /* n_cellInLinUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[16]:  nMruby_tsKernelCelltypeInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsKernelCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsKernelCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsKernel",                              /* name */
        false,                                   /* b_singleton */
        nMruby_tsKernel__IDX_is_ID_act,          /* b_IDX_is_ID_act */
        nMruby_tsKernel__hasCB,                  /* b_hasCB */
        nMruby_tsKernel__hasINIB,                /* b_hasINIB */
        nMruby_tsKernel__NCELLINLINKUNIT,        /* n_cellInLinUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[17]:  nMruby_tsMotorCelltypeInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsMotor",                               /* name */
        false,                                   /* b_singleton */
        nMruby_tsMotor__IDX_is_ID_act,           /* b_IDX_is_ID_act */
        nMruby_tsMotor__hasCB,                   /* b_hasCB */
        nMruby_tsMotor__hasINIB,                 /* b_hasINIB */
        nMruby_tsMotor__NCELLINLINKUNIT,         /* n_cellInLinUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[18]:  nMruby_tsLCDCelltypeInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsLCDCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsLCDCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsLCD",                                 /* name */
        false,                                   /* b_singleton */
        nMruby_tsLCD__IDX_is_ID_act,             /* b_IDX_is_ID_act */
        nMruby_tsLCD__hasCB,                     /* b_hasCB */
        nMruby_tsLCD__hasINIB,                   /* b_hasINIB */
        nMruby_tsLCD__NCELLINLINKUNIT,           /* n_cellInLinUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[19]:  nMruby_tsLEDCelltypeInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsLEDCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsLEDCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsLED",                                 /* name */
        false,                                   /* b_singleton */
        nMruby_tsLED__IDX_is_ID_act,             /* b_IDX_is_ID_act */
        nMruby_tsLED__hasCB,                     /* b_hasCB */
        nMruby_tsLED__hasINIB,                   /* b_hasINIB */
        nMruby_tsLED__NCELLINLINKUNIT,           /* n_cellInLinUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[20]:  nMruby_tsButtonCelltypeInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsButtonCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsButtonCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsButton",                              /* name */
        false,                                   /* b_singleton */
        nMruby_tsButton__IDX_is_ID_act,          /* b_IDX_is_ID_act */
        nMruby_tsButton__hasCB,                  /* b_hasCB */
        nMruby_tsButton__hasINIB,                /* b_hasINIB */
        nMruby_tsButton__NCELLINLINKUNIT,        /* n_cellInLinUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[21]:  nMruby_tsBatteryCelltypeInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsBatteryCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsBatteryCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsBattery",                             /* name */
        false,                                   /* b_singleton */
        nMruby_tsBattery__IDX_is_ID_act,         /* b_IDX_is_ID_act */
        nMruby_tsBattery__hasCB,                 /* b_hasCB */
        nMruby_tsBattery__hasINIB,               /* b_hasINIB */
        nMruby_tsBattery__NCELLINLINKUNIT,       /* n_cellInLinUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[22]:  nMruby_tsSpeakerCelltypeInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsSpeakerCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsSpeakerCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsSpeaker",                             /* name */
        false,                                   /* b_singleton */
        nMruby_tsSpeaker__IDX_is_ID_act,         /* b_IDX_is_ID_act */
        nMruby_tsSpeaker__hasCB,                 /* b_hasCB */
        nMruby_tsSpeaker__hasINIB,               /* b_hasINIB */
        nMruby_tsSpeaker__NCELLINLINKUNIT,       /* n_cellInLinUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[23]:  nMruby_tsUltrasonicSensorCelltypeInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsUltrasonicSensor",                    /* name */
        false,                                   /* b_singleton */
        nMruby_tsUltrasonicSensor__IDX_is_ID_act, /* b_IDX_is_ID_act */
        nMruby_tsUltrasonicSensor__hasCB,        /* b_hasCB */
        nMruby_tsUltrasonicSensor__hasINIB,      /* b_hasINIB */
        nMruby_tsUltrasonicSensor__NCELLINLINKUNIT, /* n_cellInLinUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[24]:  nMruby_tsGyroSensorCelltypeInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsGyroSensor",                          /* name */
        false,                                   /* b_singleton */
        nMruby_tsGyroSensor__IDX_is_ID_act,      /* b_IDX_is_ID_act */
        nMruby_tsGyroSensor__hasCB,              /* b_hasCB */
        nMruby_tsGyroSensor__hasINIB,            /* b_hasINIB */
        nMruby_tsGyroSensor__NCELLINLINKUNIT,    /* n_cellInLinUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[25]:  nMruby_tsColorSensorCelltypeInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsColorSensor",                         /* name */
        false,                                   /* b_singleton */
        nMruby_tsColorSensor__IDX_is_ID_act,     /* b_IDX_is_ID_act */
        nMruby_tsColorSensor__hasCB,             /* b_hasCB */
        nMruby_tsColorSensor__hasINIB,           /* b_hasINIB */
        nMruby_tsColorSensor__NCELLINLINKUNIT,   /* n_cellInLinUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[26]:  nMruby_tsTouchSensorCelltypeInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsTouchSensor",                         /* name */
        false,                                   /* b_singleton */
        nMruby_tsTouchSensor__IDX_is_ID_act,     /* b_IDX_is_ID_act */
        nMruby_tsTouchSensor__hasCB,             /* b_hasCB */
        nMruby_tsTouchSensor__hasINIB,           /* b_hasINIB */
        nMruby_tsTouchSensor__NCELLINLINKUNIT,   /* n_cellInLinUnit */
        4,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[27]:  nMruby_tsBalancerCelltypeInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsBalancerCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsBalancerCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsBalancer",                            /* name */
        false,                                   /* b_singleton */
        nMruby_tsBalancer__IDX_is_ID_act,        /* b_IDX_is_ID_act */
        nMruby_tsBalancer__hasCB,                /* b_hasCB */
        nMruby_tsBalancer__hasINIB,              /* b_hasINIB */
        nMruby_tsBalancer__NCELLINLINKUNIT,      /* n_cellInLinUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[28]:  nMruby_tsSharedMemoryCelltypeInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP6_# */
        rDomainEV3_rTECSInfo_nMruby_tsSharedMemoryCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nMruby_tsSharedMemoryCelltypeInfo_cAttrInfo, /* #_CCP3B_# */
        2,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tsSharedMemory",                        /* name */
        false,                                   /* b_singleton */
        nMruby_tsSharedMemory__IDX_is_ID_act,    /* b_IDX_is_ID_act */
        nMruby_tsSharedMemory__hasCB,            /* b_hasCB */
        nMruby_tsSharedMemory__hasINIB,          /* b_hasINIB */
        nMruby_tsSharedMemory__NCELLINLINKUNIT,  /* n_cellInLinUnit */
        1,                                       /* n_cellInSystem */
    },
    /* cell: nTECSInfo_tCelltypeInfo_CB_tab[29]:  nTECSInfo_tTECSInfoCelltypeInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_cEntryInfo, /* #_CCP3B_# */
        1,                                       /* length of cEntryInfo (n_cEntryInfo) #_CCP4_# */
        rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_cCallInfo, /* #_CCP3B_# */
        1,                                       /* length of cCallInfo (n_cCallInfo) #_CCP4_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cAttrInfo (n_cAttrInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cVarInfo (n_cVarInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "tTECSInfo",                             /* name */
        true,                                    /* b_singleton */
        nTECSInfo_tTECSInfo__IDX_is_ID_act,      /* b_IDX_is_ID_act */
        nTECSInfo_tTECSInfo__hasCB,              /* b_hasCB */
        nTECSInfo_tTECSInfo__hasINIB,            /* b_hasINIB */
        nTECSInfo_tTECSInfo__NCELLINLINKUNIT,    /* n_cellInLinUnit */
        1,                                       /* n_cellInSystem */
    },
};

extern const struct tag_nTECSInfo_sCelltypeInfo_VMT nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tTaskCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tTaskCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tKernelCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tKernelCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[1],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tUltrasonicSensorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[2],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tColorSensorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[3],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tTouchSensorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[4],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tGyroSensorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[5],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tMotorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tMotorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[6],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tButtonCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tButtonCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[7],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tLCDCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tLCDCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[8],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tLEDCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tLEDCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[9],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tBatteryCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tBatteryCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[10],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tSpeakerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tSpeakerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[11],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tEV3PlatformCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tEV3PlatformCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[12],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tBalancerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tBalancerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[13],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tSharedMemoryCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[14],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_tTaskMainCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[15],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernelCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernelCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[16],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[17],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCDCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCDCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[18],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLEDCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLEDCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[19],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButtonCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButtonCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[20],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBatteryCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBatteryCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[21],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeakerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeakerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[22],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[23],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[24],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[25],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensorCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[26],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancerCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancerCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[27],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemoryCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemoryCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[28],   /* INIB */
};
extern const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_eCelltypeInfo_des;
const struct tag_nTECSInfo_tCelltypeInfo_eCelltypeInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfoCelltypeInfo_eCelltypeInfo_des = {
    &nTECSInfo_tCelltypeInfo_eCelltypeInfo_MT_,
    &nTECSInfo_tCelltypeInfo_INIB_tab[29],   /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tCelltypeInfo_CB_initialize()
{
    nTECSInfo_tCelltypeInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
