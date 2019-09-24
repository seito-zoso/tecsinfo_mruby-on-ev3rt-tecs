/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tParamInfo_tecsgen.h"
#include "nTECSInfo_tParamInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eParamInfo */
struct tag_nTECSInfo_tParamInfo_eParamInfo_DES {
    const struct tag_nTECSInfo_sParamInfo_VMT *vmt;
    tParamInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eParamInfo */
ER             nTECSInfo_tParamInfo_eParamInfo_getName_skel( const struct tag_nTECSInfo_sParamInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *lepd
        = (struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *)epd;
    return nTECSInfo_tParamInfo_eParamInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tParamInfo_eParamInfo_getNameLength_skel( const struct tag_nTECSInfo_sParamInfo_VDES *epd, uint16_t* len)
{
    struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *lepd
        = (struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *)epd;
    nTECSInfo_tParamInfo_eParamInfo_getNameLength( lepd->idx, len );
}
ER             nTECSInfo_tParamInfo_eParamInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sParamInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *lepd
        = (struct tag_nTECSInfo_tParamInfo_eParamInfo_DES *)epd;
    return nTECSInfo_tParamInfo_eParamInfo_getTypeInfo( lepd->idx, desc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eParamInfo */
const struct tag_nTECSInfo_sParamInfo_VMT nTECSInfo_tParamInfo_eParamInfo_MT_ = {
    nTECSInfo_tParamInfo_eParamInfo_getName_skel,
    nTECSInfo_tParamInfo_eParamInfo_getNameLength_skel,
    nTECSInfo_tParamInfo_eParamInfo_getTypeInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RTSK_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RTEX_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_OVRTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_ROVR_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_OVRTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RCYC_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RALM_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RSEM_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_MODETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_MODETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_MODETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RFLG_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RDTQ_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RPDQ_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RMPF_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ID_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SYSTIM_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SYSUTM_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ID_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SYSUTM_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__uint8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__uint8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__uint8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RMBF_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_size_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_size_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_size_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_size_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_button_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_lcdfont_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_lcdfont_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_lcdcolor_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ledcolor_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__mrb_state_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_mrb_state_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__RClass_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_Ptr__Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint8_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo_eTypeInfo_des;

/* 呼び口配列 #_CPA_# */































































































































































































































































/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tParamInfo_INIB nTECSInfo_tParamInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tParamInfo_CB_tab[0]:  sTaskExceptionBody_main_patternParamInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pattern",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[1]:  sTask_changePriority_priorityParamInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "priority",                              /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[2]:  sTask_getPriority_p_priorityParamInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_priority",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[3]:  sTask_refer_pk_taskStatusParamInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RTSK_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_taskStatus",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[4]:  sTask_raiseException_patternParamInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pattern",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[5]:  sTask_referException_pk_rtexParamInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RTEX_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_rtex",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[6]:  sTask_startOverRunHandler_ovrtimParamInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_OVRTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ovrtim",                                /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[7]:  sTask_referOverRunHandler_pk_rovrParamInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_ROVR_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_rovr",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[8]:  siTask_raiseException_patternParamInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pattern",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[9]:  siTask_startOverRunHandler_ovrtimParamInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_OVRTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ovrtim",                                /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[10]:  sCyclic_refer_pk_cyclicHandlerStatusParamInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RCYC_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_cyclicHandlerStatus",                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[11]:  sAlarm_start_alarmTimeParamInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "alarmTime",                             /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[12]:  sAlarm_refer_pk_alarmStatusParamInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RALM_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_alarmStatus",                        /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[13]:  siAlarm_start_alarmTimeParamInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "alarmTime",                             /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[14]:  sSemaphore_waitTimeout_timeoutParamInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[15]:  sSemaphore_refer_pk_semaphoreStatusParamInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RSEM_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_semaphoreStatus",                    /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[16]:  sEventflag_set_setPatternParamInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "setPattern",                            /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[17]:  sEventflag_clear_clearPatternParamInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "clearPattern",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[18]:  sEventflag_wait_waitPatternParamInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "waitPattern",                           /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[19]:  sEventflag_wait_waitFlagModeParamInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_MODETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "waitFlagMode",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[20]:  sEventflag_wait_p_flagPatternParamInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_flagPattern",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[21]:  sEventflag_waitPolling_waitPatternParamInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "waitPattern",                           /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[22]:  sEventflag_waitPolling_waitFlagModeParamInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_MODETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "waitFlagMode",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[23]:  sEventflag_waitPolling_p_flagPatternParamInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_flagPattern",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[24]:  sEventflag_waitTimeout_waitPatternParamInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "waitPattern",                           /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[25]:  sEventflag_waitTimeout_waitFlagModeParamInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_MODETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "waitFlagMode",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[26]:  sEventflag_waitTimeout_p_flagPatternParamInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_flagPattern",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[27]:  sEventflag_waitTimeout_timeoutParamInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[28]:  sEventflag_refer_pk_eventflagStatusParamInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RFLG_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_eventflagStatus",                    /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[29]:  siEventflag_set_setPatternParamInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "setPattern",                            /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[30]:  sDataqueue_send_dataParamInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[31]:  sDataqueue_sendPolling_dataParamInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[32]:  sDataqueue_sendTimeout_dataParamInfo id=33 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[33]:  sDataqueue_sendTimeout_timeoutParamInfo id=34 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[34]:  sDataqueue_sendForce_dataParamInfo id=35 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[35]:  sDataqueue_receive_p_dataParamInfo id=36 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_data",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[36]:  sDataqueue_receivePolling_p_dataParamInfo id=37 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_data",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[37]:  sDataqueue_receiveTimeout_p_dataParamInfo id=38 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_data",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[38]:  sDataqueue_receiveTimeout_timeoutParamInfo id=39 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[39]:  sDataqueue_refer_pk_dataqueueStatusParamInfo id=40 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RDTQ_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_dataqueueStatus",                    /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[40]:  siDataqueue_sendPolling_dataParamInfo id=41 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[41]:  siDataqueue_sendForce_dataParamInfo id=42 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[42]:  sPriorityDataqueue_send_dataParamInfo id=43 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[43]:  sPriorityDataqueue_send_dataPriorityParamInfo id=44 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "dataPriority",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[44]:  sPriorityDataqueue_sendPolling_dataParamInfo id=45 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[45]:  sPriorityDataqueue_sendPolling_dataPriorityParamInfo id=46 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "dataPriority",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[46]:  sPriorityDataqueue_sendTimeout_dataParamInfo id=47 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[47]:  sPriorityDataqueue_sendTimeout_dataPriorityParamInfo id=48 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "dataPriority",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[48]:  sPriorityDataqueue_sendTimeout_timeoutParamInfo id=49 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[49]:  sPriorityDataqueue_receive_p_dataParamInfo id=50 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_data",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[50]:  sPriorityDataqueue_receive_p_dataPriorityParamInfo id=51 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_dataPriority",                        /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[51]:  sPriorityDataqueue_receivePolling_p_dataParamInfo id=52 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_data",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[52]:  sPriorityDataqueue_receivePolling_p_dataPriorityParamInfo id=53 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_dataPriority",                        /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[53]:  sPriorityDataqueue_receiveTimeout_p_dataParamInfo id=54 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_data",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[54]:  sPriorityDataqueue_receiveTimeout_p_dataPriorityParamInfo id=55 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_dataPriority",                        /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[55]:  sPriorityDataqueue_receiveTimeout_timeoutParamInfo id=56 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[56]:  sPriorityDataqueue_refer_pk_priorityDataqueueStatusParamInfo id=57 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RPDQ_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_priorityDataqueueStatus",            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[57]:  siPriorityDataqueue_sendPolling_dataParamInfo id=58 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[58]:  siPriorityDataqueue_sendPolling_dataPriorityParamInfo id=59 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "dataPriority",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[59]:  sFixedSizeMemoryPool_get_p_blockParamInfo id=60 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_block",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[60]:  sFixedSizeMemoryPool_getPolling_p_blockParamInfo id=61 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_block",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[61]:  sFixedSizeMemoryPool_getTimeout_p_blockParamInfo id=62 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_block",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[62]:  sFixedSizeMemoryPool_getTimeout_timeoutParamInfo id=63 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[63]:  sFixedSizeMemoryPool_release_blockParamInfo id=64 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "block",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[64]:  sFixedSizeMemoryPool_refer_pk_memoryPoolFixedSizeStatusParamInfo id=65 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RMPF_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pk_memoryPoolFixedSizeStatus",          /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[65]:  sKernel_sleepTimeout_timeoutParamInfo id=66 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[66]:  sKernel_delay_delayTimeParamInfo id=67 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "delayTime",                             /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[67]:  sKernel_getTaskId_p_taskIdParamInfo id=68 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ID_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_taskId",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[68]:  sKernel_rotateReadyQueue_taskPriorityParamInfo id=69 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "taskPriority",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[69]:  sKernel_getTime_p_systemTimeParamInfo id=70 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_SYSTIM_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_systemTime",                          /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[70]:  sKernel_getMicroTime_p_systemMicroTimeParamInfo id=71 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_SYSUTM_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_systemMicroTime",                     /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[71]:  sKernel_changeInterruptPriorityMask_interruptPriorityParamInfo id=72 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "interruptPriority",                     /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[72]:  sKernel_getInterruptPriorityMask_p_interruptPriorityParamInfo id=73 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_interruptPriority",                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[73]:  siKernel_getTaskId_p_taskIdParamInfo id=74 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ID_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_taskId",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[74]:  siKernel_rotateReadyQueue_taskPriorityParamInfo id=75 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "taskPriority",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[75]:  siKernel_getMicroTime_p_systemMicroTimeParamInfo id=76 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_SYSUTM_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_systemMicroTime",                     /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[76]:  siKernel_senseDispatchPendingStateCPU_p_exceptionInfomationParamInfo id=77 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_exceptionInfomation",                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[77]:  siKernel_senseTaskExceptionPendingStateCPU_p_exceptionInfomationParamInfo id=78 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_exceptionInfomation",                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[78]:  sMessageBuffer_send_messageParamInfo id=79 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__uint8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "message",                               /* name */
        1,                                       /* dir */
        " $1",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[79]:  sMessageBuffer_send_sizeParamInfo id=80 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "size",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[80]:  sMessageBuffer_sendPolling_messageParamInfo id=81 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__uint8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "message",                               /* name */
        1,                                       /* dir */
        " $1",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[81]:  sMessageBuffer_sendPolling_sizeParamInfo id=82 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "size",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[82]:  sMessageBuffer_sendTimeout_messageParamInfo id=83 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__uint8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "message",                               /* name */
        1,                                       /* dir */
        " $1",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[83]:  sMessageBuffer_sendTimeout_sizeParamInfo id=84 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "size",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[84]:  sMessageBuffer_sendTimeout_timeoutParamInfo id=85 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[85]:  sMessageBuffer_receive_messageParamInfo id=86 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "message",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[86]:  sMessageBuffer_receivePolling_messageParamInfo id=87 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "message",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[87]:  sMessageBuffer_receiveTimeout_messageParamInfo id=88 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "message",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[88]:  sMessageBuffer_receiveTimeout_timeoutParamInfo id=89 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "timeout",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[89]:  sMessageBuffer_refer_packetParamInfo id=90 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RMBF_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "packet",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[90]:  sMalloc_calloc_nelemParamInfo id=91 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_size_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "nelem",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[91]:  sMalloc_calloc_elem_sizeParamInfo id=92 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_size_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "elem_size",                             /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[92]:  sMalloc_malloc_sizeParamInfo id=93 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_size_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "size",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[93]:  sMalloc_realloc_ptrParamInfo id=94 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ptr",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[94]:  sMalloc_realloc_new_sizeParamInfo id=95 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_size_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "new_size",                              /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[95]:  sMalloc_free_ptrParamInfo id=96 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ptr",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[96]:  sColorSensor_getRGBRaw_rParamInfo id=97 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "r",                                     /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[97]:  sColorSensor_getRGBRaw_gParamInfo id=98 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "g",                                     /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[98]:  sColorSensor_getRGBRaw_bParamInfo id=99 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b",                                     /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[99]:  sGyroSensor_calibrate_timesParamInfo id=100 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "times",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[100]:  sMotor_setPower_powerParamInfo id=101 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "power",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[101]:  sMotor_stop_brakeParamInfo id=102 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "brake",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[102]:  sMotor_rotate_degreesParamInfo id=103 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "degrees",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[103]:  sMotor_rotate_speed_absParamInfo id=104 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "speed_abs",                             /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[104]:  sMotor_rotate_blockingParamInfo id=105 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "blocking",                              /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[105]:  sMotor_initializePort_typeParamInfo id=106 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "type",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[106]:  sButton_isPressed_buttonParamInfo id=107 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_button_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "button",                                /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[107]:  sLCD_setFont_fontParamInfo id=108 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_lcdfont_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "font",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[108]:  sLCD_getFontSize_fontParamInfo id=109 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_lcdfont_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "font",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[109]:  sLCD_getFontSize_p_widthParamInfo id=110 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_width",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[110]:  sLCD_getFontSize_p_heightParamInfo id=111 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_height",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[111]:  sLCD_drawString_strParamInfo id=112 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "str",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[112]:  sLCD_drawString_xParamInfo id=113 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "x",                                     /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[113]:  sLCD_drawString_yParamInfo id=114 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "y",                                     /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[114]:  sLCD_fillRect_xParamInfo id=115 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "x",                                     /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[115]:  sLCD_fillRect_yParamInfo id=116 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "y",                                     /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[116]:  sLCD_fillRect_wParamInfo id=117 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "w",                                     /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[117]:  sLCD_fillRect_hParamInfo id=118 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "h",                                     /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[118]:  sLCD_fillRect_colorParamInfo id=119 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_lcdcolor_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "color",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[119]:  sLCD_drawLine_x0ParamInfo id=120 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "x0",                                    /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[120]:  sLCD_drawLine_y0ParamInfo id=121 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "y0",                                    /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[121]:  sLCD_drawLine_x1ParamInfo id=122 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "x1",                                    /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[122]:  sLCD_drawLine_y1ParamInfo id=123 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "y1",                                    /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[123]:  sLCD_print_strParamInfo id=124 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "str",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[124]:  sLCD_puts_strParamInfo id=125 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "str",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[125]:  sLCD_showMessageBox_titleParamInfo id=126 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "title",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[126]:  sLCD_showMessageBox_msgParamInfo id=127 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "msg",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[127]:  sLED_setColor_colorParamInfo id=128 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ledcolor_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "color",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[128]:  sSpeaker_setVolume_volumeParamInfo id=129 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "volume",                                /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[129]:  sSpeaker_playTone_frequencyParamInfo id=130 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "frequency",                             /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[130]:  sSpeaker_playTone_durationParamInfo id=131 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "duration",                              /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[131]:  sBalancer_control_forwardParamInfo id=132 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "forward",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[132]:  sBalancer_control_turnParamInfo id=133 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "turn",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[133]:  sBalancer_control_gyroParamInfo id=134 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "gyro",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[134]:  sBalancer_control_gyroOffsetParamInfo id=135 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "gyroOffset",                            /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[135]:  sBalancer_control_leftRevolutionParamInfo id=136 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "leftRevolution",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[136]:  sBalancer_control_rightRevolutionParamInfo id=137 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rightRevolution",                       /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[137]:  sBalancer_control_batteryParamInfo id=138 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "battery",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[138]:  sBalancer_control_pwm_lParamInfo id=139 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pwm_l",                                 /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[139]:  sBalancer_control_pwm_rParamInfo id=140 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "pwm_r",                                 /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[140]:  sBalancer_control_backlashhalfParamInfo id=141 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "backlashhalf",                          /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[141]:  sSharedMemory_putVal_indexParamInfo id=142 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "index",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[142]:  sSharedMemory_putVal_valParamInfo id=143 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "val",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[143]:  sSharedMemory_getVal_indexParamInfo id=144 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "index",                                 /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[144]:  nMruby_sInitializeBridge_initializeBridge_mrbParamInfo id=145 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__mrb_state_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "mrb",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[145]:  nMruby_sInitializeTECSBridge_initializeBridge_mrbParamInfo id=146 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_mrb_state_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "mrb",                                   /* name */
        3,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[146]:  nMruby_sInitializeTECSBridge_initializeBridge_TECSParamInfo id=147 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__RClass_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TECS",                                  /* name */
        3,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[147]:  nMruby_sMrubyVM_funcall_nameParamInfo id=148 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[148]:  nPosix_sMain_main_argcParamInfo id=149 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "argc",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[149]:  nPosix_sMain_main_argvParamInfo id=150 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "argv",                                  /* name */
        1,                                       /* dir */
        " $0",                                   /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[150]:  nTECSInfo_sTypeInfo_getName_nameParamInfo id=151 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[151]:  nTECSInfo_sTypeInfo_getName_max_lenParamInfo id=152 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[152]:  nTECSInfo_sTypeInfo_getNameLength_lenParamInfo id=153 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "len",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[153]:  nTECSInfo_sTypeInfo_getSize_sizeParamInfo id=154 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "size",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[154]:  nTECSInfo_sTypeInfo_getKind_kindParamInfo id=155 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "kind",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[155]:  nTECSInfo_sTypeInfo_getNType_numParamInfo id=156 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[156]:  nTECSInfo_sTypeInfo_getTypeInfo_ithParamInfo id=157 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[157]:  nTECSInfo_sTypeInfo_getTypeInfo_descParamInfo id=158 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[158]:  nTECSInfo_sVarDeclInfo_getName_nameParamInfo id=159 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[159]:  nTECSInfo_sVarDeclInfo_getName_max_lenParamInfo id=160 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[160]:  nTECSInfo_sVarDeclInfo_getOffset_offsetParamInfo id=161 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "offset",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[161]:  nTECSInfo_sVarDeclInfo_getTypeInfo_descParamInfo id=162 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[162]:  nTECSInfo_sVarDeclInfo_getSizeIsExpr_expr_strParamInfo id=163 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "expr_str",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[163]:  nTECSInfo_sVarDeclInfo_getSizeIsExpr_max_lenParamInfo id=164 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[164]:  nTECSInfo_sVarDeclInfo_getSizeIs_sizeParamInfo id=165 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "size",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[165]:  nTECSInfo_sVarDeclInfo_getSizeIs_p_cbParamInfo id=166 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "p_cb",                                  /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[166]:  nTECSInfo_sParamInfo_getName_nameParamInfo id=167 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[167]:  nTECSInfo_sParamInfo_getName_max_lenParamInfo id=168 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[168]:  nTECSInfo_sParamInfo_getNameLength_lenParamInfo id=169 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "len",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[169]:  nTECSInfo_sParamInfo_getTypeInfo_descParamInfo id=170 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[170]:  nTECSInfo_sFunctionInfo_getName_nameParamInfo id=171 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[171]:  nTECSInfo_sFunctionInfo_getName_max_lenParamInfo id=172 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[172]:  nTECSInfo_sFunctionInfo_getNameLength_lenParamInfo id=173 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "len",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[173]:  nTECSInfo_sFunctionInfo_getReturnTypeInfo_descParamInfo id=174 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[174]:  nTECSInfo_sFunctionInfo_getNParam_numParamInfo id=175 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[175]:  nTECSInfo_sFunctionInfo_getParamInfo_ithParamInfo id=176 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[176]:  nTECSInfo_sFunctionInfo_getParamInfo_paramParamInfo id=177 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "param",                                 /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[177]:  nTECSInfo_sSignatureInfo_getName_nameParamInfo id=178 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[178]:  nTECSInfo_sSignatureInfo_getName_max_lenParamInfo id=179 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[179]:  nTECSInfo_sSignatureInfo_getNameLength_lenParamInfo id=180 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "len",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[180]:  nTECSInfo_sSignatureInfo_getNFunction_numParamInfo id=181 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[181]:  nTECSInfo_sSignatureInfo_getFunctionInfo_ithParamInfo id=182 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[182]:  nTECSInfo_sSignatureInfo_getFunctionInfo_descParamInfo id=183 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[183]:  nTECSInfo_sCallInfo_getName_nameParamInfo id=184 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[184]:  nTECSInfo_sCallInfo_getName_max_lenParamInfo id=185 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[185]:  nTECSInfo_sCallInfo_getNameLength_lenParamInfo id=186 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "len",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[186]:  nTECSInfo_sCallInfo_getSignatureInfo_descParamInfo id=187 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[187]:  nTECSInfo_sCallInfo_getArraySize_array_sizeParamInfo id=188 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "array_size",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[188]:  nTECSInfo_sCallInfo_getSpecifierInfo_b_optionalParamInfo id=189 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_optional",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[189]:  nTECSInfo_sCallInfo_getSpecifierInfo_b_dynamicParamInfo id=190 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_dynamic",                             /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[190]:  nTECSInfo_sCallInfo_getSpecifierInfo_b_ref_descParamInfo id=191 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_ref_desc",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[191]:  nTECSInfo_sCallInfo_getSpecifierInfo_b_omitParamInfo id=192 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_omit",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[192]:  nTECSInfo_sCallInfo_getInternalInfo_b_allocator_portParamInfo id=193 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_allocator_port",                      /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[193]:  nTECSInfo_sCallInfo_getInternalInfo_b_require_portParamInfo id=194 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_require_port",                        /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[194]:  nTECSInfo_sCallInfo_getLocationInfo_offsetParamInfo id=195 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "offset",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[195]:  nTECSInfo_sCallInfo_getLocationInfo_placeParamInfo id=196 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint8_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "place",                                 /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[196]:  nTECSInfo_sCallInfo_getOptimizeInfo_b_VMT_uselessParamInfo id=197 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_VMT_useless",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[197]:  nTECSInfo_sCallInfo_getOptimizeInfo_b_skelton_uselessParamInfo id=198 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_skelton_useless",                     /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[198]:  nTECSInfo_sCallInfo_getOptimizeInfo_b_cell_uniqueParamInfo id=199 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "b_cell_unique",                         /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[199]:  nTECSInfo_sEntryInfo_getName_nameParamInfo id=200 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[200]:  nTECSInfo_sEntryInfo_getName_max_lenParamInfo id=201 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[201]:  nTECSInfo_sEntryInfo_getNameLength_lenParamInfo id=202 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "len",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[202]:  nTECSInfo_sEntryInfo_getSignatureInfo_descParamInfo id=203 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[203]:  nTECSInfo_sEntryInfo_getArraySize_array_sizeParamInfo id=204 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "array_size",                            /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[204]:  nTECSInfo_sCelltypeInfo_getName_nameParamInfo id=205 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[205]:  nTECSInfo_sCelltypeInfo_getName_max_lenParamInfo id=206 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[206]:  nTECSInfo_sCelltypeInfo_getNameLength_lenParamInfo id=207 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "len",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[207]:  nTECSInfo_sCelltypeInfo_getNAttr_nAttrParamInfo id=208 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "nAttr",                                 /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[208]:  nTECSInfo_sCelltypeInfo_getAttrInfo_ithParamInfo id=209 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[209]:  nTECSInfo_sCelltypeInfo_getAttrInfo_descParamInfo id=210 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[210]:  nTECSInfo_sCelltypeInfo_getNVar_nVarParamInfo id=211 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "nVar",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[211]:  nTECSInfo_sCelltypeInfo_getVarInfo_ithParamInfo id=212 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[212]:  nTECSInfo_sCelltypeInfo_getVarInfo_descParamInfo id=213 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[213]:  nTECSInfo_sCelltypeInfo_getNCall_nCallParamInfo id=214 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "nCall",                                 /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[214]:  nTECSInfo_sCelltypeInfo_getCallInfo_ithParamInfo id=215 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[215]:  nTECSInfo_sCelltypeInfo_getCallInfo_descParamInfo id=216 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[216]:  nTECSInfo_sCelltypeInfo_getNEntry_nEntryParamInfo id=217 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "nEntry",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[217]:  nTECSInfo_sCelltypeInfo_getEntryInfo_ithParamInfo id=218 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[218]:  nTECSInfo_sCelltypeInfo_getEntryInfo_descParamInfo id=219 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[219]:  nTECSInfo_sCellInfo_getName_nameParamInfo id=220 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[220]:  nTECSInfo_sCellInfo_getName_max_lenParamInfo id=221 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[221]:  nTECSInfo_sCellInfo_getCelltypeInfo_descParamInfo id=222 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "desc",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[222]:  nTECSInfo_sCellInfo_getCBP_cbpParamInfo id=223 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cbp",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[223]:  nTECSInfo_sCellInfo_getINIBP_inibpParamInfo id=224 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "inibp",                                 /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[224]:  nTECSInfo_sNamespaceInfo_getName_nameParamInfo id=225 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[225]:  nTECSInfo_sNamespaceInfo_getName_max_lenParamInfo id=226 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[226]:  nTECSInfo_sNamespaceInfo_getNameLength_lenParamInfo id=227 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "len",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[227]:  nTECSInfo_sNamespaceInfo_getNNamespace_numParamInfo id=228 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[228]:  nTECSInfo_sNamespaceInfo_getNamespaceInfo_ithParamInfo id=229 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[229]:  nTECSInfo_sNamespaceInfo_getNamespaceInfo_desParamInfo id=230 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "des",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[230]:  nTECSInfo_sNamespaceInfo_getNSignature_numParamInfo id=231 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[231]:  nTECSInfo_sNamespaceInfo_getSignatureInfo_ithParamInfo id=232 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[232]:  nTECSInfo_sNamespaceInfo_getSignatureInfo_desParamInfo id=233 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "des",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[233]:  nTECSInfo_sNamespaceInfo_getNCelltype_numParamInfo id=234 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[234]:  nTECSInfo_sNamespaceInfo_getCelltypeInfo_ithParamInfo id=235 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[235]:  nTECSInfo_sNamespaceInfo_getCelltypeInfo_desParamInfo id=236 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "des",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[236]:  nTECSInfo_sRegionInfo_getName_nameParamInfo id=237 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "name",                                  /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        " $1",                                   /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[237]:  nTECSInfo_sRegionInfo_getName_max_lenParamInfo id=238 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "max_len",                               /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[238]:  nTECSInfo_sRegionInfo_getNameLength_lenParamInfo id=239 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "len",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[239]:  nTECSInfo_sRegionInfo_getNCell_numParamInfo id=240 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[240]:  nTECSInfo_sRegionInfo_getCellInfo_ithParamInfo id=241 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[241]:  nTECSInfo_sRegionInfo_getCellInfo_desParamInfo id=242 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "des",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[242]:  nTECSInfo_sRegionInfo_getNRegion_numParamInfo id=243 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "num",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[243]:  nTECSInfo_sRegionInfo_getRegionInfo_ithParamInfo id=244 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ith",                                   /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[244]:  nTECSInfo_sRegionInfo_getRegionInfo_desParamInfo id=245 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "des",                                   /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[245]:  nTECSInfo_sTECSInfo_findNamespace_namespace_pathParamInfo id=246 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespace_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[246]:  nTECSInfo_sTECSInfo_findNamespace_NSdescParamInfo id=247 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "NSdesc",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[247]:  nTECSInfo_sTECSInfo_findRegion_namespace_pathParamInfo id=248 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespace_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[248]:  nTECSInfo_sTECSInfo_findRegion_RGNdescParamInfo id=249 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "RGNdesc",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[249]:  nTECSInfo_sTECSInfo_findSignature_namespace_pathParamInfo id=250 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespace_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[250]:  nTECSInfo_sTECSInfo_findSignature_SIGdescParamInfo id=251 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "SIGdesc",                               /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[251]:  nTECSInfo_sTECSInfo_findCelltype_namespace_pathParamInfo id=252 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespace_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[252]:  nTECSInfo_sTECSInfo_findCelltype_CTdescParamInfo id=253 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "CTdesc",                                /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[253]:  nTECSInfo_sTECSInfo_findCell_namespace_pathParamInfo id=254 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "namespace_path",                        /* name */
        1,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        "",                                      /* stringExpr */
    },
    /* cell: nTECSInfo_tParamInfo_CB_tab[254]:  nTECSInfo_sTECSInfo_findCell_CELLdescParamInfo id=255 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "CELLdesc",                              /* name */
        2,                                       /* dir */
        (char_t*)0x0,                            /* sizeIsExpr */
        (char_t*)0x0,                            /* countIsExpr */
        (char_t*)0x0,                            /* stringExpr */
    },
};

extern const struct tag_nTECSInfo_sParamInfo_VMT nTECSInfo_tParamInfo_eParamInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTaskExceptionBody_main_patternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTaskExceptionBody_main_patternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_changePriority_priorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_changePriority_priorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[1],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_getPriority_p_priorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_getPriority_p_priorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[2],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_refer_pk_taskStatusParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_refer_pk_taskStatusParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[3],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_raiseException_patternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_raiseException_patternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[4],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_referException_pk_rtexParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_referException_pk_rtexParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[5],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_startOverRunHandler_ovrtimParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_startOverRunHandler_ovrtimParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[6],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_referOverRunHandler_pk_rovrParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sTask_referOverRunHandler_pk_rovrParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[7],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siTask_raiseException_patternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siTask_raiseException_patternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[8],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siTask_startOverRunHandler_ovrtimParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siTask_startOverRunHandler_ovrtimParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[9],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sCyclic_refer_pk_cyclicHandlerStatusParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sCyclic_refer_pk_cyclicHandlerStatusParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[10],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sAlarm_start_alarmTimeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sAlarm_start_alarmTimeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[11],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sAlarm_refer_pk_alarmStatusParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sAlarm_refer_pk_alarmStatusParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[12],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siAlarm_start_alarmTimeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siAlarm_start_alarmTimeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[13],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSemaphore_waitTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSemaphore_waitTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[14],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSemaphore_refer_pk_semaphoreStatusParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSemaphore_refer_pk_semaphoreStatusParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[15],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_set_setPatternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_set_setPatternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[16],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_clear_clearPatternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_clear_clearPatternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[17],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_wait_waitPatternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_wait_waitPatternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[18],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_wait_waitFlagModeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_wait_waitFlagModeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[19],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_wait_p_flagPatternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_wait_p_flagPatternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[20],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitPolling_waitPatternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitPolling_waitPatternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[21],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitPolling_waitFlagModeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitPolling_waitFlagModeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[22],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitPolling_p_flagPatternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitPolling_p_flagPatternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[23],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitTimeout_waitPatternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitTimeout_waitPatternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[24],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitTimeout_waitFlagModeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitTimeout_waitFlagModeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[25],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitTimeout_p_flagPatternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitTimeout_p_flagPatternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[26],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_waitTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[27],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_refer_pk_eventflagStatusParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sEventflag_refer_pk_eventflagStatusParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[28],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siEventflag_set_setPatternParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siEventflag_set_setPatternParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[29],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_send_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_send_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[30],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_sendPolling_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_sendPolling_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[31],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_sendTimeout_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_sendTimeout_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[32],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_sendTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_sendTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[33],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_sendForce_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_sendForce_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[34],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_receive_p_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_receive_p_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[35],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_receivePolling_p_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_receivePolling_p_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[36],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_receiveTimeout_p_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_receiveTimeout_p_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[37],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_receiveTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_receiveTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[38],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_refer_pk_dataqueueStatusParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sDataqueue_refer_pk_dataqueueStatusParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[39],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siDataqueue_sendPolling_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siDataqueue_sendPolling_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[40],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siDataqueue_sendForce_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siDataqueue_sendForce_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[41],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_send_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_send_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[42],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_send_dataPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_send_dataPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[43],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendPolling_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendPolling_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[44],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendPolling_dataPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendPolling_dataPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[45],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendTimeout_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendTimeout_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[46],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendTimeout_dataPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendTimeout_dataPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[47],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_sendTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[48],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receive_p_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receive_p_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[49],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receive_p_dataPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receive_p_dataPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[50],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receivePolling_p_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receivePolling_p_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[51],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receivePolling_p_dataPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receivePolling_p_dataPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[52],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receiveTimeout_p_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receiveTimeout_p_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[53],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receiveTimeout_p_dataPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receiveTimeout_p_dataPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[54],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receiveTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_receiveTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[55],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_refer_pk_priorityDataqueueStatusParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sPriorityDataqueue_refer_pk_priorityDataqueueStatusParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[56],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siPriorityDataqueue_sendPolling_dataParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siPriorityDataqueue_sendPolling_dataParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[57],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siPriorityDataqueue_sendPolling_dataPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siPriorityDataqueue_sendPolling_dataPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[58],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_get_p_blockParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_get_p_blockParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[59],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_getPolling_p_blockParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_getPolling_p_blockParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[60],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_getTimeout_p_blockParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_getTimeout_p_blockParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[61],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_getTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_getTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[62],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_release_blockParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_release_blockParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[63],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_refer_pk_memoryPoolFixedSizeStatusParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sFixedSizeMemoryPool_refer_pk_memoryPoolFixedSizeStatusParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[64],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_sleepTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_sleepTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[65],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_delay_delayTimeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_delay_delayTimeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[66],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_getTaskId_p_taskIdParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_getTaskId_p_taskIdParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[67],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_rotateReadyQueue_taskPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_rotateReadyQueue_taskPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[68],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_getTime_p_systemTimeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_getTime_p_systemTimeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[69],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_getMicroTime_p_systemMicroTimeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_getMicroTime_p_systemMicroTimeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[70],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_changeInterruptPriorityMask_interruptPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_changeInterruptPriorityMask_interruptPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[71],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_getInterruptPriorityMask_p_interruptPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sKernel_getInterruptPriorityMask_p_interruptPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[72],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_getTaskId_p_taskIdParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_getTaskId_p_taskIdParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[73],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_rotateReadyQueue_taskPriorityParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_rotateReadyQueue_taskPriorityParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[74],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_getMicroTime_p_systemMicroTimeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_getMicroTime_p_systemMicroTimeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[75],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_senseDispatchPendingStateCPU_p_exceptionInfomationParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_senseDispatchPendingStateCPU_p_exceptionInfomationParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[76],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_senseTaskExceptionPendingStateCPU_p_exceptionInfomationParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_siKernel_senseTaskExceptionPendingStateCPU_p_exceptionInfomationParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[77],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_send_messageParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_send_messageParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[78],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_send_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_send_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[79],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendPolling_messageParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendPolling_messageParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[80],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendPolling_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendPolling_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[81],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendTimeout_messageParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendTimeout_messageParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[82],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendTimeout_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendTimeout_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[83],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_sendTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[84],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_receive_messageParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_receive_messageParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[85],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_receivePolling_messageParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_receivePolling_messageParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[86],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_receiveTimeout_messageParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_receiveTimeout_messageParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[87],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_receiveTimeout_timeoutParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_receiveTimeout_timeoutParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[88],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_refer_packetParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMessageBuffer_refer_packetParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[89],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_calloc_nelemParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_calloc_nelemParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[90],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_calloc_elem_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_calloc_elem_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[91],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_malloc_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_malloc_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[92],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_realloc_ptrParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_realloc_ptrParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[93],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_realloc_new_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_realloc_new_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[94],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_free_ptrParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMalloc_free_ptrParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[95],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sColorSensor_getRGBRaw_rParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sColorSensor_getRGBRaw_rParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[96],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sColorSensor_getRGBRaw_gParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sColorSensor_getRGBRaw_gParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[97],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sColorSensor_getRGBRaw_bParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sColorSensor_getRGBRaw_bParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[98],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sGyroSensor_calibrate_timesParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sGyroSensor_calibrate_timesParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[99],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_setPower_powerParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_setPower_powerParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[100],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_stop_brakeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_stop_brakeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[101],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_rotate_degreesParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_rotate_degreesParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[102],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_rotate_speed_absParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_rotate_speed_absParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[103],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_rotate_blockingParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_rotate_blockingParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[104],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_initializePort_typeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sMotor_initializePort_typeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[105],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sButton_isPressed_buttonParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sButton_isPressed_buttonParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[106],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_setFont_fontParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_setFont_fontParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[107],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_getFontSize_fontParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_getFontSize_fontParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[108],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_getFontSize_p_widthParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_getFontSize_p_widthParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[109],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_getFontSize_p_heightParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_getFontSize_p_heightParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[110],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawString_strParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawString_strParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[111],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawString_xParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawString_xParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[112],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawString_yParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawString_yParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[113],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_xParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_xParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[114],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_yParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_yParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[115],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_wParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_wParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[116],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_hParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_hParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[117],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_colorParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_fillRect_colorParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[118],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawLine_x0ParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawLine_x0ParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[119],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawLine_y0ParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawLine_y0ParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[120],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawLine_x1ParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawLine_x1ParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[121],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawLine_y1ParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_drawLine_y1ParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[122],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_print_strParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_print_strParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[123],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_puts_strParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_puts_strParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[124],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_showMessageBox_titleParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_showMessageBox_titleParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[125],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_showMessageBox_msgParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLCD_showMessageBox_msgParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[126],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLED_setColor_colorParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sLED_setColor_colorParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[127],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSpeaker_setVolume_volumeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSpeaker_setVolume_volumeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[128],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSpeaker_playTone_frequencyParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSpeaker_playTone_frequencyParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[129],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSpeaker_playTone_durationParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSpeaker_playTone_durationParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[130],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_forwardParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_forwardParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[131],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_turnParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_turnParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[132],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_gyroParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_gyroParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[133],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_gyroOffsetParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_gyroOffsetParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[134],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_leftRevolutionParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_leftRevolutionParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[135],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_rightRevolutionParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_rightRevolutionParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[136],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_batteryParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_batteryParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[137],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_pwm_lParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_pwm_lParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[138],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_pwm_rParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_pwm_rParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[139],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_backlashhalfParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sBalancer_control_backlashhalfParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[140],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSharedMemory_putVal_indexParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSharedMemory_putVal_indexParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[141],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSharedMemory_putVal_valParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSharedMemory_putVal_valParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[142],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSharedMemory_getVal_indexParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_sSharedMemory_getVal_indexParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[143],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nMruby_sInitializeBridge_initializeBridge_mrbParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nMruby_sInitializeBridge_initializeBridge_mrbParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[144],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridge_initializeBridge_mrbParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridge_initializeBridge_mrbParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[145],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridge_initializeBridge_TECSParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nMruby_sInitializeTECSBridge_initializeBridge_TECSParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[146],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nMruby_sMrubyVM_funcall_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nMruby_sMrubyVM_funcall_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[147],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nPosix_sMain_main_argcParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nPosix_sMain_main_argcParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[148],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nPosix_sMain_main_argvParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nPosix_sMain_main_argvParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[149],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[150],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[151],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getNameLength_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getNameLength_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[152],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getSize_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getSize_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[153],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getKind_kindParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getKind_kindParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[154],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getNType_numParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getNType_numParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[155],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getTypeInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getTypeInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[156],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getTypeInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfo_getTypeInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[157],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[158],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[159],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getOffset_offsetParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getOffset_offsetParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[160],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getTypeInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getTypeInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[161],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIsExpr_expr_strParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIsExpr_expr_strParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[162],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIsExpr_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIsExpr_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[163],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIs_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIs_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[164],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIs_p_cbParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfo_getSizeIs_p_cbParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[165],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[166],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[167],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfo_getNameLength_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfo_getNameLength_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[168],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfo_getTypeInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfo_getTypeInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[169],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[170],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[171],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getNameLength_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getNameLength_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[172],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getReturnTypeInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getReturnTypeInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[173],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getNParam_numParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getNParam_numParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[174],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getParamInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getParamInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[175],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getParamInfo_paramParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfo_getParamInfo_paramParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[176],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[177],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[178],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getNameLength_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getNameLength_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[179],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getNFunction_numParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getNFunction_numParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[180],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getFunctionInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getFunctionInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[181],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getFunctionInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfo_getFunctionInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[182],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[183],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[184],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getNameLength_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getNameLength_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[185],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSignatureInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSignatureInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[186],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getArraySize_array_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getArraySize_array_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[187],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_optionalParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_optionalParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[188],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_dynamicParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_dynamicParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[189],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_ref_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_ref_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[190],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_omitParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getSpecifierInfo_b_omitParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[191],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getInternalInfo_b_allocator_portParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getInternalInfo_b_allocator_portParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[192],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getInternalInfo_b_require_portParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getInternalInfo_b_require_portParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[193],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getLocationInfo_offsetParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getLocationInfo_offsetParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[194],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getLocationInfo_placeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getLocationInfo_placeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[195],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getOptimizeInfo_b_VMT_uselessParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getOptimizeInfo_b_VMT_uselessParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[196],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getOptimizeInfo_b_skelton_uselessParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getOptimizeInfo_b_skelton_uselessParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[197],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getOptimizeInfo_b_cell_uniqueParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfo_getOptimizeInfo_b_cell_uniqueParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[198],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[199],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[200],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfo_getNameLength_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfo_getNameLength_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[201],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfo_getSignatureInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfo_getSignatureInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[202],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfo_getArraySize_array_sizeParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfo_getArraySize_array_sizeParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[203],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[204],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[205],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getNameLength_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getNameLength_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[206],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getNAttr_nAttrParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getNAttr_nAttrParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[207],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getAttrInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getAttrInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[208],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getAttrInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getAttrInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[209],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getNVar_nVarParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getNVar_nVarParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[210],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getVarInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getVarInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[211],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getVarInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getVarInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[212],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getNCall_nCallParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getNCall_nCallParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[213],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getCallInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getCallInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[214],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getCallInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getCallInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[215],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getNEntry_nEntryParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getNEntry_nEntryParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[216],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getEntryInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getEntryInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[217],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getEntryInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfo_getEntryInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[218],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[219],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[220],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getCelltypeInfo_descParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getCelltypeInfo_descParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[221],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getCBP_cbpParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getCBP_cbpParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[222],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getINIBP_inibpParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfo_getINIBP_inibpParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[223],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[224],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[225],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getNameLength_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getNameLength_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[226],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getNNamespace_numParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getNNamespace_numParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[227],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getNamespaceInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getNamespaceInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[228],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getNamespaceInfo_desParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getNamespaceInfo_desParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[229],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getNSignature_numParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getNSignature_numParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[230],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getSignatureInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getSignatureInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[231],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getSignatureInfo_desParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getSignatureInfo_desParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[232],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getNCelltype_numParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getNCelltype_numParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[233],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getCelltypeInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getCelltypeInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[234],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getCelltypeInfo_desParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfo_getCelltypeInfo_desParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[235],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getName_nameParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getName_nameParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[236],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getName_max_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getName_max_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[237],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getNameLength_lenParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getNameLength_lenParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[238],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getNCell_numParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getNCell_numParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[239],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getCellInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getCellInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[240],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getCellInfo_desParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getCellInfo_desParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[241],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getNRegion_numParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getNRegion_numParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[242],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getRegionInfo_ithParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getRegionInfo_ithParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[243],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getRegionInfo_desParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfo_getRegionInfo_desParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[244],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findNamespace_namespace_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findNamespace_namespace_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[245],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findNamespace_NSdescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findNamespace_NSdescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[246],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRegion_namespace_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRegion_namespace_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[247],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRegion_RGNdescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findRegion_RGNdescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[248],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findSignature_namespace_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findSignature_namespace_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[249],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findSignature_SIGdescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findSignature_SIGdescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[250],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findCelltype_namespace_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findCelltype_namespace_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[251],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findCelltype_CTdescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findCelltype_CTdescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[252],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findCell_namespace_pathParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findCell_namespace_pathParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[253],   /* INIB */
};
extern const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findCell_CELLdescParamInfo_eParamInfo_des;
const struct tag_nTECSInfo_tParamInfo_eParamInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfo_findCell_CELLdescParamInfo_eParamInfo_des = {
    &nTECSInfo_tParamInfo_eParamInfo_MT_,
    &nTECSInfo_tParamInfo_INIB_tab[254],   /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tParamInfo_CB_initialize()
{
    nTECSInfo_tParamInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
