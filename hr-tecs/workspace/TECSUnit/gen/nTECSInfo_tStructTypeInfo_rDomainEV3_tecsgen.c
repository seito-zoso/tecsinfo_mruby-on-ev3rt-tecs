/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tStructTypeInfo_tecsgen.h"
#include "nTECSInfo_tStructTypeInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tStructTypeInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tStructTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tStructTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tStructTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint16_t* len)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tStructTypeInfo_eTypeInfo_getNameLength( lepd->idx, len );
}
void           nTECSInfo_tStructTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t* size)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tStructTypeInfo_eTypeInfo_getSize( lepd->idx, size );
}
void           nTECSInfo_tStructTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int8_t* kind)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tStructTypeInfo_eTypeInfo_getKind( lepd->idx, kind );
}
void           nTECSInfo_tStructTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t* num)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tStructTypeInfo_eTypeInfo_getNType( lepd->idx, num );
}
void           nTECSInfo_tStructTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tStructTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, ith, desc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tStructTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tStructTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tStructTypeInfo_eTypeInfo_getTypeInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_OVRTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des;
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;

/* 呼び口配列 #_CPA_# */
struct tag_nTECSInfo_sTypeInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rtskTypeInfo_cTypeInfo[] = {
    &rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_TMOTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_bool_tTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rtexTypeInfo_cTypeInfo[] = {
    &rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_TEXPTNTypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rovrTypeInfo_cTypeInfo[] = {
    &rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_OVRTIMTypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rcycTypeInfo_cTypeInfo[] = {
    &rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_ralmTypeInfo_cTypeInfo[] = {
    &rDomainEV3_rTECSInfo_STATTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_RELTIMTypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rsemTypeInfo_cTypeInfo[] = {
    &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rflgTypeInfo_cTypeInfo[] = {
    &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_FLGPTNTypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rdtqTypeInfo_cTypeInfo[] = {
    &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rpdqTypeInfo_cTypeInfo[] = {
    &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rmpfTypeInfo_cTypeInfo[] = {
    &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rDomainEV3_rTECSInfo_struct__t_rmbfTypeInfo_cTypeInfo[] = {
    &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_uint_tTypeInfo_eTypeInfo_des,
    &rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des,
};

struct tag_nTECSInfo_sTypeInfo_VDES * const rDomainEV3_rTECSInfo_struct__RClassTypeInfo_cTypeInfo[] = {
    &rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des,
};

/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tStructTypeInfo_INIB nTECSInfo_tStructTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[0]:  struct__t_rtskTypeInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rtskTypeInfo_cTypeInfo, /* #_CCP3B_# */
        11,                                      /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rtsk",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rtsk),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[1]:  struct__t_rtexTypeInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rtexTypeInfo_cTypeInfo, /* #_CCP3B_# */
        2,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rtex",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rtex),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[2]:  struct__t_rovrTypeInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rovrTypeInfo_cTypeInfo, /* #_CCP3B_# */
        2,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rovr",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rovr),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[3]:  struct__t_rcycTypeInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rcycTypeInfo_cTypeInfo, /* #_CCP3B_# */
        2,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rcyc",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rcyc),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[4]:  struct__t_ralmTypeInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_ralmTypeInfo_cTypeInfo, /* #_CCP3B_# */
        2,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_ralm",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_ralm),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[5]:  struct__t_rsemTypeInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rsemTypeInfo_cTypeInfo, /* #_CCP3B_# */
        2,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rsem",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rsem),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[6]:  struct__t_rflgTypeInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rflgTypeInfo_cTypeInfo, /* #_CCP3B_# */
        2,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rflg",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rflg),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[7]:  struct__t_rdtqTypeInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rdtqTypeInfo_cTypeInfo, /* #_CCP3B_# */
        3,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rdtq",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rdtq),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[8]:  struct__t_rpdqTypeInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rpdqTypeInfo_cTypeInfo, /* #_CCP3B_# */
        3,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rpdq",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rpdq),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[9]:  struct__t_rmpfTypeInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rmpfTypeInfo_cTypeInfo, /* #_CCP3B_# */
        2,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rmpf",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rmpf),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[10]:  struct__t_rmbfTypeInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__t_rmbfTypeInfo_cTypeInfo, /* #_CCP3B_# */
        4,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct t_rmbf",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct t_rmbf),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tStructTypeInfo_CB_tab[11]:  struct__RClassTypeInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        rDomainEV3_rTECSInfo_struct__RClassTypeInfo_cTypeInfo, /* #_CCP3B_# */
        1,                                       /* length of cTypeInfo (n_cTypeInfo) #_CCP4_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "struct RClass",                         /* name */
        7,                                       /* typeKind */
        sizeof(struct RClass),                   /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
};

extern const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tStructTypeInfo_eTypeInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rtskTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rtskTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rtexTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rtexTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[1],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rovrTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rovrTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[2],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rcycTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rcycTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[3],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_ralmTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_ralmTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[4],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rsemTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rsemTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[5],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rflgTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rflgTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[6],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rdtqTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rdtqTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[7],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rpdqTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rpdqTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[8],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rmpfTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rmpfTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[9],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbfTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__t_rmbfTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[10],   /* INIB */
};
extern const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__RClassTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tStructTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_struct__RClassTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tStructTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tStructTypeInfo_INIB_tab[11],   /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tStructTypeInfo_CB_initialize()
{
    nTECSInfo_tStructTypeInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
