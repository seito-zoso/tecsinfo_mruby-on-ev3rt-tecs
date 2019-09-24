/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_tTECSInfoSub_TECSGEN_H
#define nTECSInfo_tTECSInfoSub_TECSGEN_H

/*
 * celltype          :  tTECSInfoSub
 * global name       :  nTECSInfo_tTECSInfoSub
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "nTECSInfo_sTECSInfo_tecsgen.h"
#include "nTECSInfo_sNamespaceInfo_tecsgen.h"
#include "nTECSInfo_sRegionInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nTECSInfo_tTECSInfoSub_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sNamespaceInfo_VDES const*cNamespaceInfo;
    struct tag_nTECSInfo_sRegionInfo_VDES const*cRegionInfo;
    /* call port #_NEP_# */ 
}  nTECSInfo_tTECSInfoSub_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nTECSInfo_tTECSInfoSub_CB_tab           nTECSInfo_tTECSInfoSub_INIB_tab
#define nTECSInfo_tTECSInfoSub_SINGLE_CELL_CB   nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB
#define nTECSInfo_tTECSInfoSub_CB               nTECSInfo_tTECSInfoSub_INIB
#define tag_nTECSInfo_tTECSInfoSub_CB           tag_nTECSInfo_tTECSInfoSub_INIB

/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */
extern  nTECSInfo_tTECSInfoSub_INIB  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB;


/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_nTECSInfo_tTECSInfoSub_INIB *nTECSInfo_tTECSInfoSub_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* nTECSInfo_sTECSInfo */
ER           nTECSInfo_tTECSInfoSub_eTECSInfo_findNamespace( const char_t* namespace_path, Descriptor( nTECSInfo_sNamespaceInfo )* NSdesc);
ER           nTECSInfo_tTECSInfoSub_eTECSInfo_findRegion( const char_t* namespace_path, Descriptor( nTECSInfo_sRegionInfo )* RGNdesc);
ER           nTECSInfo_tTECSInfoSub_eTECSInfo_findSignature( const char_t* namespace_path, Descriptor( nTECSInfo_sSignatureInfo )* SIGdesc);
ER           nTECSInfo_tTECSInfoSub_eTECSInfo_findCelltype( const char_t* namespace_path, Descriptor( nTECSInfo_sCelltypeInfo )* CTdesc);
ER           nTECSInfo_tTECSInfoSub_eTECSInfo_findCell( const char_t* namespace_path, Descriptor( nTECSInfo_sCellInfo )* CELLdesc);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ��� #_GCB_# */
#define nTECSInfo_tTECSInfoSub_GET_CELLCB(idx) ((void *)0)
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getName( name, max_len ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo->VMT->getName__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo, (name), (max_len) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNameLength( len ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo->VMT->getNameLength__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo, (len) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNNamespace( num ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo->VMT->getNNamespace__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo, (num) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNamespaceInfo( ith, des ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo->VMT->getNamespaceInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo, (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNSignature( num ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo->VMT->getNSignature__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo, (num) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getSignatureInfo( ith, des ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo->VMT->getSignatureInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo, (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNCelltype( num ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo->VMT->getNCelltype__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo, (num) )
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo_getCelltypeInfo( ith, des ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo->VMT->getCelltypeInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo, (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cRegionInfo_getName( name, max_len ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo->VMT->getName__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo, (name), (max_len) )
#define nTECSInfo_tTECSInfoSub_cRegionInfo_getNameLength( len ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo->VMT->getNameLength__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo, (len) )
#define nTECSInfo_tTECSInfoSub_cRegionInfo_getNCell( num ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo->VMT->getNCell__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo, (num) )
#define nTECSInfo_tTECSInfoSub_cRegionInfo_getCellInfo( ith, des ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo->VMT->getCellInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo, (ith), (des) )
#define nTECSInfo_tTECSInfoSub_cRegionInfo_getNRegion( num ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo->VMT->getNRegion__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo, (num) )
#define nTECSInfo_tTECSInfoSub_cRegionInfo_getRegionInfo( ith, des ) \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo->VMT->getRegionInfo__T( \
	  nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo, (ith), (des) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

/* �ǥ�������ץ����ȴؿ� #_CRD_# */
/* [ref_desc] cNamespaceInfo */
Inline Descriptor( nTECSInfo_sNamespaceInfo )
nTECSInfo_tTECSInfoSub_cNamespaceInfo_refer_to_descriptor(  )
{
    Descriptor( nTECSInfo_sNamespaceInfo )  des;
    /* cast is ncecessary for removing 'const'  */
    des.vdes = (struct tag_nTECSInfo_sNamespaceInfo_VDES *)nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cNamespaceInfo;
    return des;
}

/* [ref_desc] cRegionInfo */
Inline Descriptor( nTECSInfo_sRegionInfo )
nTECSInfo_tTECSInfoSub_cRegionInfo_refer_to_descriptor(  )
{
    Descriptor( nTECSInfo_sRegionInfo )  des;
    /* cast is ncecessary for removing 'const'  */
    des.vdes = (struct tag_nTECSInfo_sRegionInfo_VDES *)nTECSInfo_tTECSInfoSub_SINGLE_CELL_INIB.cRegionInfo;
    return des;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tTECSInfoSub_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nTECSInfo_tTECSInfoSub_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tTECSInfoSub_IDX

#define tTECSInfoSub_IDX  nTECSInfo_tTECSInfoSub_IDX
/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cNamespaceInfo_getName( name, max_len ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfo_getName( name, max_len )
#define cNamespaceInfo_getNameLength( len ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNameLength( len )
#define cNamespaceInfo_getNNamespace( num ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNNamespace( num )
#define cNamespaceInfo_getNamespaceInfo( ith, des ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNamespaceInfo( ith, des )
#define cNamespaceInfo_getNSignature( num ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNSignature( num )
#define cNamespaceInfo_getSignatureInfo( ith, des ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfo_getSignatureInfo( ith, des )
#define cNamespaceInfo_getNCelltype( num ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfo_getNCelltype( num )
#define cNamespaceInfo_getCelltypeInfo( ith, des ) \
          nTECSInfo_tTECSInfoSub_cNamespaceInfo_getCelltypeInfo( ith, des )
#define cRegionInfo_getName( name, max_len ) \
          nTECSInfo_tTECSInfoSub_cRegionInfo_getName( name, max_len )
#define cRegionInfo_getNameLength( len ) \
          nTECSInfo_tTECSInfoSub_cRegionInfo_getNameLength( len )
#define cRegionInfo_getNCell( num ) \
          nTECSInfo_tTECSInfoSub_cRegionInfo_getNCell( num )
#define cRegionInfo_getCellInfo( ith, des ) \
          nTECSInfo_tTECSInfoSub_cRegionInfo_getCellInfo( ith, des )
#define cRegionInfo_getNRegion( num ) \
          nTECSInfo_tTECSInfoSub_cRegionInfo_getNRegion( num )
#define cRegionInfo_getRegionInfo( ith, des ) \
          nTECSInfo_tTECSInfoSub_cRegionInfo_getRegionInfo( ith, des )


/* �ǥ�������ץ����ȥޥ����û�̷��� #_CRDA_# */
#define cNamespaceInfo_refer_to_descriptor()\
          nTECSInfo_tTECSInfoSub_cNamespaceInfo_refer_to_descriptor(  )
#define cNamespaceInfo_ref_desc()\
          cNamespaceInfo_refer_to_descriptor()
#define cRegionInfo_refer_to_descriptor()\
          nTECSInfo_tTECSInfoSub_cRegionInfo_refer_to_descriptor(  )
#define cRegionInfo_ref_desc()\
          cRegionInfo_refer_to_descriptor()



/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eTECSInfo_findNamespace nTECSInfo_tTECSInfoSub_eTECSInfo_findNamespace
#define eTECSInfo_findRegion nTECSInfo_tTECSInfoSub_eTECSInfo_findRegion
#define eTECSInfo_findSignature nTECSInfo_tTECSInfoSub_eTECSInfo_findSignature
#define eTECSInfo_findCelltype nTECSInfo_tTECSInfoSub_eTECSInfo_findCelltype
#define eTECSInfo_findCell nTECSInfo_tTECSInfoSub_eTECSInfo_findCell

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tTECSInfoSub_TECSGENH */
