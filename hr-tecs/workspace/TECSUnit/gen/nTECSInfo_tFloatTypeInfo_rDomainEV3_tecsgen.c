/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nTECSInfo_tFloatTypeInfo_tecsgen.h"
#include "nTECSInfo_tFloatTypeInfo_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eTypeInfo */
struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES {
    const struct tag_nTECSInfo_sTypeInfo_VMT *vmt;
    tFloatTypeInfo_IDX  idx;
};

/* ������������ȥ�ؿ� #_EPSF_# */
/* eTypeInfo */
ER             nTECSInfo_tFloatTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *)epd;
    return nTECSInfo_tFloatTypeInfo_eTypeInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tFloatTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint16_t* len)
{
    struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tFloatTypeInfo_eTypeInfo_getNameLength( lepd->idx, len );
}
void           nTECSInfo_tFloatTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t* size)
{
    struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tFloatTypeInfo_eTypeInfo_getSize( lepd->idx, size );
}
void           nTECSInfo_tFloatTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int8_t* kind)
{
    struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tFloatTypeInfo_eTypeInfo_getKind( lepd->idx, kind );
}
void           nTECSInfo_tFloatTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t* num)
{
    struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tFloatTypeInfo_eTypeInfo_getNType( lepd->idx, num );
}
void           nTECSInfo_tFloatTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *lepd
        = (struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES *)epd;
    nTECSInfo_tFloatTypeInfo_eTypeInfo_getTypeInfo( lepd->idx, ith, desc );
}

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eTypeInfo */
const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tFloatTypeInfo_eTypeInfo_MT_ = {
    nTECSInfo_tFloatTypeInfo_eTypeInfo_getName_skel,
    nTECSInfo_tFloatTypeInfo_eTypeInfo_getNameLength_skel,
    nTECSInfo_tFloatTypeInfo_eTypeInfo_getSize_skel,
    nTECSInfo_tFloatTypeInfo_eTypeInfo_getKind_skel,
    nTECSInfo_tFloatTypeInfo_eTypeInfo_getNType_skel,
    nTECSInfo_tFloatTypeInfo_eTypeInfo_getTypeInfo_skel,
};

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
nTECSInfo_tFloatTypeInfo_INIB nTECSInfo_tFloatTypeInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tFloatTypeInfo_CB_tab[0]:  float32_tTypeInfo id=1 */
    {
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "float32_t",                             /* name */
        3,                                       /* typeKind */
        32,                                      /* bitSize */
        false,                                   /* b_const */
        false,                                   /* b_volatile */
    },
};

extern const struct tag_nTECSInfo_sTypeInfo_VMT nTECSInfo_tFloatTypeInfo_eTypeInfo_MT_;
/* �������ǥ�������ץ� #_EPD_# */
extern const struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_float32_tTypeInfo_eTypeInfo_des;
const struct tag_nTECSInfo_tFloatTypeInfo_eTypeInfo_DES rDomainEV3_rTECSInfo_float32_tTypeInfo_eTypeInfo_des = {
    &nTECSInfo_tFloatTypeInfo_eTypeInfo_MT_,
    &nTECSInfo_tFloatTypeInfo_INIB_tab[0],   /* INIB */
};
/* CB ����������� #_CIC_# */
void
nTECSInfo_tFloatTypeInfo_CB_initialize()
{
    nTECSInfo_tFloatTypeInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
