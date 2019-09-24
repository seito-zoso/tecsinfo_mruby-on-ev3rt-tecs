/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tArrayTypeInfo_tecsgen.h"
#include "nTECSInfo_tArrayTypeInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tArrayTypeInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tArrayTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tArrayTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tArrayTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint16_t* len)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getNameLength( lepd->idx, len );
}
void           nTECSInfo_tArrayTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t* size)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getSize( lepd->idx, size );
}
void           nTECSInfo_tArrayTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int8_t* kind)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getKind( lepd->idx, kind );
}
void           nTECSInfo_tArrayTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t* num)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getNType( lepd->idx, num );
}
void           nTECSInfo_tArrayTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, ith, desc );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tArrayTypeInfo_eTypeInfo_getTypeInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ACPTNTypeInfo_eTypeInfo_des;

extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_t_Array128_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_tTypeInfo_eTypeInfo_des;

/* 呼び口配列 #_CPA_# */



/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tArrayTypeInfo_INIB nTECSInfo_tArrayTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[0]:  ACPTN_Array4_TypeInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ACPTNTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ACPTN[4]",                              /* name */
        5,                                       /* typeKind */
        sizeof(ACPTN[4]),                        /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[1]:  char_t_Array128__Array32_TypeInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        (struct tag_nTECSInfo_sTypeInfo_VDES *)&rDomainEV3_rTECSInfo_char_t_Array128_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "char_t[32][128]",                       /* name */
        5,                                       /* typeKind */
        sizeof(char_t[32][128]),                 /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tArrayTypeInfo_CB_tab[2]:  char_t_Array128_TypeInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "char_t[128]",                           /* name */
        5,                                       /* typeKind */
        sizeof(char_t[128]),                     /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
};

extern const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ACPTN_Array4_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_ACPTN_Array4_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_t_Array128__Array32_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_t_Array128__Array32_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[1],   /* INIB */
};
extern const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_t_Array128_TypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tArrayTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_t_Array128_TypeInfo_eTypeInfo_des = {
    &nTECSInfo_tArrayTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tArrayTypeInfo_INIB_tab[2],   /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tArrayTypeInfo_CB_initialize()
{
    nTECSInfo_tArrayTypeInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
