/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tDescriptorTypeInfo_tecsgen.h"
#include "nTECSInfo_tDescriptorTypeInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tDescriptorTypeInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint16_t* len)
{
    struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getNameLength( lepd->idx, len );
}
void           nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t* size)
{
    struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getSize( lepd->idx, size );
}
void           nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int8_t* kind)
{
    struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getKind( lepd->idx, kind );
}
void           nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t* num)
{
    struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getNType( lepd->idx, num );
}
void           nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, ith, desc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tDescriptorTypeInfo_eTypeInfo_getTypeInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sCallInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des;

/* 呼び口配列 #_CPA_# */











/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tDescriptorTypeInfo_INIB nTECSInfo_tDescriptorTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[0]:  Descriptor_of_nTECSInfo_sTypeInfoTypeInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sTypeInfo )",     /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sTypeInfo )), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[1]:  Descriptor_of_nTECSInfo_sParamInfoTypeInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sParamInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sParamInfo )",    /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sParamInfo )), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[2]:  Descriptor_of_nTECSInfo_sFunctionInfoTypeInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sFunctionInfo )", /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sFunctionInfo )), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[3]:  Descriptor_of_nTECSInfo_sSignatureInfoTypeInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sSignatureInfo )", /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sSignatureInfo )), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[4]:  Descriptor_of_nTECSInfo_sVarDeclInfoTypeInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sVarDeclInfo )",  /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sVarDeclInfo )), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[5]:  Descriptor_of_nTECSInfo_sCallInfoTypeInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sCallInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sCallInfo )",     /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sCallInfo )), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[6]:  Descriptor_of_nTECSInfo_sEntryInfoTypeInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sEntryInfo )",    /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sEntryInfo )), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[7]:  Descriptor_of_nTECSInfo_sCelltypeInfoTypeInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sCelltypeInfo )", /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sCelltypeInfo )), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[8]:  Descriptor_of_nTECSInfo_sNamespaceInfoTypeInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sNamespaceInfo )", /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sNamespaceInfo )), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[9]:  Descriptor_of_nTECSInfo_sCellInfoTypeInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sCellInfo )",     /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sCellInfo )), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tDescriptorTypeInfo_CB_tab[10]:  Descriptor_of_nTECSInfo_sRegionInfoTypeInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "Descriptor( nTECSInfo_sRegionInfo )",   /* name */
        10,                                      /* typeKind */
        sizeof(Descriptor( nTECSInfo_sRegionInfo )), /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
};

extern const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sTypeInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sParamInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[1],   /* INIB */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sFunctionInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[2],   /* INIB */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sSignatureInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[3],   /* INIB */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sVarDeclInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[4],   /* INIB */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCallInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[5],   /* INIB */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sEntryInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[6],   /* INIB */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCelltypeInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[7],   /* INIB */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sNamespaceInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[8],   /* INIB */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sCellInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[9],   /* INIB */
};
extern const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfoTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tDescriptorTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_Descriptor_of_nTECSInfo_sRegionInfoTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tDescriptorTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tDescriptorTypeInfo_INIB_tab[10],   /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tDescriptorTypeInfo_CB_initialize()
{
    nTECSInfo_tDescriptorTypeInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
