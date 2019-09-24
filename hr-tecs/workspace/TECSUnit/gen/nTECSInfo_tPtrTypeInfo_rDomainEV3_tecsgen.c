/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tPtrTypeInfo_tecsgen.h"
#include "nTECSInfo_tPtrTypeInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tPtrTypeInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tPtrTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tPtrTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tPtrTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint16_t* len)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getNameLength( lepd->idx, len );
}
void           nTECSInfo_tPtrTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t* size)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getSize( lepd->idx, size );
}
void           nTECSInfo_tPtrTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int8_t* kind)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getKind( lepd->idx, kind );
}
void           nTECSInfo_tPtrTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t* num)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getNType( lepd->idx, num );
}
void           nTECSInfo_tPtrTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, ith, desc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tPtrTypeInfo_eTypeInfo_getTypeInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RTSKTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RTEXTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_ROVRTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RCYCTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RALMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RSEMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RFLGTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RDTQTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RPDQTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_void_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_voidTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__voidTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RMPFTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SYSTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SYSUTMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__uint8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_T_RMBFTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__charTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__mrb_stateTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_mrb_stateTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_struct__RClassTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_const__char_tTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfoTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfoTypeInfo_eTypeInfo_des;

/* 呼び口配列 #_CPA_# */













































/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tPtrTypeInfo_INIB nTECSInfo_tPtrTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[0]:  PRI_Ptr_TypeInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "PRI*",                                  /* name */
        4,                                       /* typeKind */
        sizeof(PRI*),                            /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[1]:  T_RTSK_Ptr_TypeInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RTSKTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RTSK*",                               /* name */
        4,                                       /* typeKind */
        sizeof(T_RTSK*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[2]:  T_RTEX_Ptr_TypeInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RTEXTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RTEX*",                               /* name */
        4,                                       /* typeKind */
        sizeof(T_RTEX*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[3]:  T_ROVR_Ptr_TypeInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_ROVRTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_ROVR*",                               /* name */
        4,                                       /* typeKind */
        sizeof(T_ROVR*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[4]:  T_RCYC_Ptr_TypeInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RCYCTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RCYC*",                               /* name */
        4,                                       /* typeKind */
        sizeof(T_RCYC*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[5]:  T_RALM_Ptr_TypeInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RALMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RALM*",                               /* name */
        4,                                       /* typeKind */
        sizeof(T_RALM*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[6]:  T_RSEM_Ptr_TypeInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RSEMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RSEM*",                               /* name */
        4,                                       /* typeKind */
        sizeof(T_RSEM*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[7]:  FLGPTN_Ptr_TypeInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "FLGPTN*",                               /* name */
        4,                                       /* typeKind */
        sizeof(FLGPTN*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[8]:  T_RFLG_Ptr_TypeInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RFLGTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RFLG*",                               /* name */
        4,                                       /* typeKind */
        sizeof(T_RFLG*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[9]:  intptr_t_Ptr_TypeInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_intptr_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "intptr_t*",                             /* name */
        4,                                       /* typeKind */
        sizeof(intptr_t*),                       /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[10]:  T_RDTQ_Ptr_TypeInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RDTQTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RDTQ*",                               /* name */
        4,                                       /* typeKind */
        sizeof(T_RDTQ*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[11]:  T_RPDQ_Ptr_TypeInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RPDQTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RPDQ*",                               /* name */
        4,                                       /* typeKind */
        sizeof(T_RPDQ*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[12]:  void_Ptr__Ptr_TypeInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_void_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "void**",                                /* name */
        4,                                       /* typeKind */
        sizeof(void**),                          /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[13]:  void_Ptr_TypeInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_voidTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "void*",                                 /* name */
        4,                                       /* typeKind */
        sizeof(void*),                           /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[14]:  const__void_Ptr_TypeInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__voidTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const void*",                           /* name */
        4,                                       /* typeKind */
        sizeof(const void*),                     /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[15]:  T_RMPF_Ptr_TypeInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RMPFTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RMPF*",                               /* name */
        4,                                       /* typeKind */
        sizeof(T_RMPF*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[16]:  ID_Ptr_TypeInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ID*",                                   /* name */
        4,                                       /* typeKind */
        sizeof(ID*),                             /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[17]:  SYSTIM_Ptr_TypeInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_SYSTIMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "SYSTIM*",                               /* name */
        4,                                       /* typeKind */
        sizeof(SYSTIM*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[18]:  SYSUTM_Ptr_TypeInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_SYSUTMTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "SYSUTM*",                               /* name */
        4,                                       /* typeKind */
        sizeof(SYSUTM*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[19]:  const__uint8_t_Ptr_TypeInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__uint8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const uint8_t*",                        /* name */
        4,                                       /* typeKind */
        sizeof(const uint8_t*),                  /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[20]:  uint8_t_Ptr_TypeInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint8_t*",                              /* name */
        4,                                       /* typeKind */
        sizeof(uint8_t*),                        /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[21]:  T_RMBF_Ptr_TypeInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_T_RMBFTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "T_RMBF*",                               /* name */
        4,                                       /* typeKind */
        sizeof(T_RMBF*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[22]:  uint16_t_Ptr_TypeInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint16_t*",                             /* name */
        4,                                       /* typeKind */
        sizeof(uint16_t*),                       /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[23]:  int32_t_Ptr_TypeInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int32_t*",                              /* name */
        4,                                       /* typeKind */
        sizeof(int32_t*),                        /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[24]:  const__char_Ptr_TypeInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__charTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const char*",                           /* name */
        4,                                       /* typeKind */
        sizeof(const char*),                     /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[25]:  int8_t_Ptr_TypeInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int8_t*",                               /* name */
        4,                                       /* typeKind */
        sizeof(int8_t*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[26]:  char_t_Ptr_TypeInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "char_t*",                               /* name */
        4,                                       /* typeKind */
        sizeof(char_t*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[27]:  const__mrb_state_Ptr_TypeInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__mrb_stateTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const mrb_state*",                      /* name */
        4,                                       /* typeKind */
        sizeof(const mrb_state*),                /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[28]:  mrb_state_Ptr_TypeInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_mrb_stateTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "mrb_state*",                            /* name */
        4,                                       /* typeKind */
        sizeof(mrb_state*),                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[29]:  struct__RClass_Ptr_TypeInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_struct__RClassTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct RClass*",                        /* name */
        4,                                       /* typeKind */
        sizeof(struct RClass*),                  /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[30]:  const__char_t_Ptr_TypeInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_const__char_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const char_t*",                         /* name */
        4,                                       /* typeKind */
        sizeof(const char_t*),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[31]:  const__char_Ptr__Ptr_TypeInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const char**",                          /* name */
        4,                                       /* typeKind */
        sizeof(const char**),                    /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[32]:  uint32_t_Ptr_TypeInfo id=33 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint32_t*",                             /* name */
        4,                                       /* typeKind */
        sizeof(uint32_t*),                       /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[33]:  Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo id=34 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sTypeInfo )*",    /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sTypeInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[34]:  Descriptor_of_nTECSInfo_sParamInfo_Ptr_TypeInfo id=35 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sParamInfo )*",   /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sParamInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[35]:  Descriptor_of_nTECSInfo_sFunctionInfo_Ptr_TypeInfo id=36 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sFunctionInfo )*", /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sFunctionInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[36]:  Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo id=37 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sSignatureInfo )*", /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sSignatureInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[37]:  bool_t_Ptr_TypeInfo id=38 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bool_t*",                               /* name */
        4,                                       /* typeKind */
        sizeof(bool_t*),                         /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[38]:  Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo id=39 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sVarDeclInfo )*", /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sVarDeclInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[39]:  Descriptor_of_nTECSInfo_sCallInfo_Ptr_TypeInfo id=40 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sCallInfo )*",    /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sCallInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[40]:  Descriptor_of_nTECSInfo_sEntryInfo_Ptr_TypeInfo id=41 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sEntryInfo )*",   /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sEntryInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[41]:  Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo id=42 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sCelltypeInfo )*", /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sCelltypeInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[42]:  Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo id=43 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sNamespaceInfo )*", /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sNamespaceInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[43]:  Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo id=44 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sCellInfo )*",    /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sCellInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tPtrTypeInfo_CB_tab[44]:  Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo id=45 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfoTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sRegionInfo )*",  /* name */
        4,                                       /* typeKind */
        sizeof(Descriptor( nTECSInfo_sRegionInfo )*), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
};

extern const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_PRI_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RTSK_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RTSK_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[1],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RTEX_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RTEX_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[2],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_ROVR_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_ROVR_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[3],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RCYC_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RCYC_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[4],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RALM_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RALM_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[5],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RSEM_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RSEM_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[6],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_FLGPTN_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[7],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RFLG_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RFLG_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[8],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_intptr_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[9],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RDTQ_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RDTQ_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[10],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RPDQ_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RPDQ_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[11],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_void_Ptr__Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[12],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_void_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_void_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[13],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__void_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[14],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RMPF_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RMPF_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[15],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ID_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ID_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[16],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_SYSTIM_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_SYSTIM_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[17],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_SYSUTM_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_SYSUTM_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[18],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__uint8_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__uint8_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[19],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint8_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint8_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[20],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RMBF_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_T_RMBF_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[21],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint16_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[22],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[23],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__char_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[24],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int8_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[25],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[26],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__mrb_state_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__mrb_state_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[27],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_mrb_state_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_mrb_state_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[28],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__RClass_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__RClass_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[29],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__char_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[30],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__char_Ptr__Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__char_Ptr__Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[31],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint32_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[32],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[33],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[34],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[35],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[36],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_bool_t_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[37],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[38],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[39],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[40],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[41],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[42],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[43],   /* INIB */
};
extern const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tPtrTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfo_Ptr_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tPtrTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tPtrTypeInfo_INIB_tab[44],   /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tPtrTypeInfo_CB_initialize()
{
    nTECSInfo_tPtrTypeInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
