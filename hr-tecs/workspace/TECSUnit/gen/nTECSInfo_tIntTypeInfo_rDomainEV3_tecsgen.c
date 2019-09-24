/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nTECSInfo_tIntTypeInfo_tecsgen.h"
#include "nTECSInfo_tIntTypeInfo_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tIntTypeInfo_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tIntTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tIntTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tIntTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint16_t* len)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tIntTypeInfo_eTypeInfo_getNameLength( lepd->idx, len );
}
void           nTECSInfo_tIntTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t* size)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tIntTypeInfo_eTypeInfo_getSize( lepd->idx, size );
}
void           nTECSInfo_tIntTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int8_t* kind)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tIntTypeInfo_eTypeInfo_getKind( lepd->idx, kind );
}
void           nTECSInfo_tIntTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t* num)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tIntTypeInfo_eTypeInfo_getNType( lepd->idx, num );
}
void           nTECSInfo_tIntTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tIntTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, ith, desc );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tIntTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tIntTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tIntTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tIntTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tIntTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tIntTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tIntTypeInfo_eTypeInfo_getTypeInfo_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */















/* �ƤӸ����� #_CPA_# */















/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
nTECSInfo_tIntTypeInfo_INIB nTECSInfo_tIntTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[0]:  unsigned__intTypeInfo id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "unsigned int",                          /* name */
        2,                                       /* typeKind */
        -3,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[1]:  signed__intTypeInfo id=2 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "signed int",                            /* name */
        2,                                       /* typeKind */
        -3,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[2]:  intTypeInfo id=3 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int",                                   /* name */
        2,                                       /* typeKind */
        -3,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[3]:  unsigned__longTypeInfo id=4 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "unsigned long",                         /* name */
        2,                                       /* typeKind */
        -4,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[4]:  const__uint8_tTypeInfo id=5 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const uint8_t",                         /* name */
        2,                                       /* typeKind */
        8,                                       /* bitSize */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[5]:  uint32_tTypeInfo id=6 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint32_t",                              /* name */
        2,                                       /* typeKind */
        32,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[6]:  uint8_tTypeInfo id=7 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint8_t",                               /* name */
        2,                                       /* typeKind */
        8,                                       /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[7]:  int16_tTypeInfo id=8 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int16_t",                               /* name */
        2,                                       /* typeKind */
        16,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[8]:  longTypeInfo id=9 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "long",                                  /* name */
        2,                                       /* typeKind */
        -4,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[9]:  uint16_tTypeInfo id=10 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "uint16_t",                              /* name */
        2,                                       /* typeKind */
        16,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[10]:  const__charTypeInfo id=11 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const char",                            /* name */
        2,                                       /* typeKind */
        -11,                                     /* bitSize */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[11]:  int8_tTypeInfo id=12 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "int8_t",                                /* name */
        2,                                       /* typeKind */
        8,                                       /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[12]:  char_tTypeInfo id=13 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "char_t",                                /* name */
        2,                                       /* typeKind */
        -1,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[13]:  const__intTypeInfo id=14 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const int",                             /* name */
        2,                                       /* typeKind */
        -3,                                      /* bitSize */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
    /* cell: nTECSInfo_tIntTypeInfo_CB_tab[14]:  const__char_tTypeInfo id=15 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "const char_t",                          /* name */
        2,                                       /* typeKind */
        -1,                                      /* bitSize */
        true,                                    /* b_const */
        false,                                   /* b_volatile */
    },
};

extern const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tIntTypeInfo_eTypeInfo_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_unsigned__intTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_unsigned__intTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_signed__intTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_signed__intTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[1],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_intTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[2],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_unsigned__longTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_unsigned__longTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[3],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__uint8_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__uint8_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[4],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint32_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[5],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint8_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint8_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[6],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[7],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_longTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_longTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[8],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint16_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_uint16_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[9],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__charTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__charTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[10],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[11],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_char_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[12],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__intTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__intTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[13],   /* INIB */
};
extern const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__char_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tIntTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_const__char_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tIntTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tIntTypeInfo_INIB_tab[14],   /* INIB */
};
/* CB ����������� #_CIC_# */
void
nTECSInfo_tIntTypeInfo_CB_initialize()
{
    nTECSInfo_tIntTypeInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
