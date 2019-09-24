/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nTECSInfo_tRegionInfo_tecsgen.h"
#include "nTECSInfo_tRegionInfo_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eRegionInfo */
struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES {
    const struct tag_nTECSInfo_sRegionInfo_VMT *vmt;
    tRegionInfo_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eRegionInfo */
ER             nTECSInfo_tRegionInfo_eRegionInfo_getName_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *lepd
        = (struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *)epd;
    return nTECSInfo_tRegionInfo_eRegionInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tRegionInfo_eRegionInfo_getNameLength_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd, uint16_t* len)
{
    struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *lepd
        = (struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *)epd;
    nTECSInfo_tRegionInfo_eRegionInfo_getNameLength( lepd->idx, len );
}
void           nTECSInfo_tRegionInfo_eRegionInfo_getNCell_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd, int32_t* num)
{
    struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *lepd
        = (struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *)epd;
    nTECSInfo_tRegionInfo_eRegionInfo_getNCell( lepd->idx, num );
}
void           nTECSInfo_tRegionInfo_eRegionInfo_getCellInfo_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sCellInfo )* des)
{
    struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *lepd
        = (struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *)epd;
    nTECSInfo_tRegionInfo_eRegionInfo_getCellInfo( lepd->idx, ith, des );
}
void           nTECSInfo_tRegionInfo_eRegionInfo_getNRegion_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd, int32_t* num)
{
    struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *lepd
        = (struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *)epd;
    nTECSInfo_tRegionInfo_eRegionInfo_getNRegion( lepd->idx, num );
}
void           nTECSInfo_tRegionInfo_eRegionInfo_getRegionInfo_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sRegionInfo )* des)
{
    struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *lepd
        = (struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES *)epd;
    nTECSInfo_tRegionInfo_eRegionInfo_getRegionInfo( lepd->idx, ith, des );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eRegionInfo */
const struct tag_nTECSInfo_sRegionInfo_VMT nTECSInfo_tRegionInfo_eRegionInfo_MT_ = {
    nTECSInfo_tRegionInfo_eRegionInfo_getName_skel,
    nTECSInfo_tRegionInfo_eRegionInfo_getNameLength_skel,
    nTECSInfo_tRegionInfo_eRegionInfo_getNCell_skel,
    nTECSInfo_tRegionInfo_eRegionInfo_getCellInfo_skel,
    nTECSInfo_tRegionInfo_eRegionInfo_getNRegion_skel,
    nTECSInfo_tRegionInfo_eRegionInfo_getRegionInfo_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */



/* �ƤӸ����� #_CPA_# */



/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
nTECSInfo_tRegionInfo_INIB nTECSInfo_tRegionInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tRegionInfo_CB_tab[0]:  _LinkRootRegionInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCellInfo (n_cCellInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRegionInfo (n_cRegionInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "::",                                    /* name */
    },
    /* cell: nTECSInfo_tRegionInfo_CB_tab[1]:  rDomainEV3RegionInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCellInfo (n_cCellInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRegionInfo (n_cRegionInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rDomainEV3",                            /* name */
    },
    /* cell: nTECSInfo_tRegionInfo_CB_tab[2]:  rDomainEV3_rTECSInfoRegionInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cCellInfo (n_cCellInfo) #_CCP6_# */
        0,                                       /* #_CCP9_# */
        0,                                       /* length of cRegionInfo (n_cRegionInfo) #_CCP6_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "rTECSInfo",                             /* name */
    },
};

extern const struct tag_nTECSInfo_sRegionInfo_VMT nTECSInfo_tRegionInfo_eRegionInfo_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES rDomainEV3_rTECSInfo__LinkRootRegionInfo_eRegionInfo_des;
const struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES rDomainEV3_rTECSInfo__LinkRootRegionInfo_eRegionInfo_des = {
    &nTECSInfo_tRegionInfo_eRegionInfo_MT_,
    &nTECSInfo_tRegionInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES rDomainEV3_rTECSInfo_rDomainEV3RegionInfo_eRegionInfo_des;
const struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES rDomainEV3_rTECSInfo_rDomainEV3RegionInfo_eRegionInfo_des = {
    &nTECSInfo_tRegionInfo_eRegionInfo_MT_,
    &nTECSInfo_tRegionInfo_INIB_tab[1],   /* INIB */
};
extern const struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_rTECSInfoRegionInfo_eRegionInfo_des;
const struct tag_nTECSInfo_tRegionInfo_eRegionInfo_DES rDomainEV3_rTECSInfo_rDomainEV3_rTECSInfoRegionInfo_eRegionInfo_des = {
    &nTECSInfo_tRegionInfo_eRegionInfo_MT_,
    &nTECSInfo_tRegionInfo_INIB_tab[2],   /* INIB */
};
/* CB ����������� #_CIC_# */
void
nTECSInfo_tRegionInfo_CB_initialize()
{
    nTECSInfo_tRegionInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
