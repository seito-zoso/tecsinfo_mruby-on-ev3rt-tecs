/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#include "nTECSInfo_tTECSInfoSub_tecsgen.h"
#include "nTECSInfo_tTECSInfoSub_factory.h"

/* �������ǥ�������ץ��� #_EDT_# */
/* eTECSInfo : omitted by entry port optimize */

/* ������������ȥ�ؿ� #_EPSF_# */
/* eTECSInfo : omitted by entry port optimize */

/* ������������ȥ�ؿ��ơ��֥� #_EPSFT_# */
/* eTECSInfo : omitted by entry port optimize */

/* �ƤӸ��λ��Ȥ���������ǥ�������ץ�(�ºݤη�����㤷�����) #_CPEPD_# */
extern struct tag_nTECSInfo_sNamespaceInfo_VDES rDomainEV3_rTECSInfo__RootNamespaceInfo_eNamespaceInfo_des;
extern struct tag_nTECSInfo_sRegionInfo_VDES rDomainEV3_rTECSInfo__LinkRootRegionInfo_eRegionInfo_des;

/* �ƤӸ����� #_CPA_# */

/* °�����ѿ������� #_AVAI_# */
/* ���� INIB #_INIB_# */
nTECSInfo_tTECSInfoSub_INIB nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB = 
{
    /* call port (INIB) #_CP_# */ 
    &rDomainEV3_rTECSInfo__RootNamespaceInfo_eNamespaceInfo_des, /* cNamespaceInfo #_CCP1_# */
    &rDomainEV3_rTECSInfo__LinkRootRegionInfo_eRegionInfo_des, /* cRegionInfo #_CCP1_# */
    /* entry port #_EP_# */ 
};

/* �������ǥ�������ץ� #_EPD_# */
/* eTECSInfo : omitted by entry port optimize */
/* CB ����������� #_CIC_# */
void
nTECSInfo_tTECSInfoSub_CB_initialize()
{
    SET_CB_INIB_POINTER(i,p_cb)
    INITIALIZE_CB()
}
