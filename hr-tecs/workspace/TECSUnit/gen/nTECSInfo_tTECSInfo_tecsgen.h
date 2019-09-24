/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_tTECSInfo_TECSGEN_H
#define nTECSInfo_tTECSInfo_TECSGEN_H

/*
 * celltype          :  tTECSInfo
 * global name       :  nTECSInfo_tTECSInfo
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  false
 * has_INIB          :  0
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "nTECSInfo_sTECSInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nTECSInfo_tTECSInfo_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
}  nTECSInfo_tTECSInfo_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nTECSInfo_tTECSInfo_CB_tab           nTECSInfo_tTECSInfo_INIB_tab
#define nTECSInfo_tTECSInfo_SINGLE_CELL_CB   nTECSInfo_tTECSInfo_SINGLE_CELL_INIB
#define nTECSInfo_tTECSInfo_CB               nTECSInfo_tTECSInfo_INIB
#define tag_nTECSInfo_tTECSInfo_CB           tag_nTECSInfo_tTECSInfo_INIB

/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */
extern  nTECSInfo_tTECSInfo_INIB  nTECSInfo_tTECSInfo_SINGLE_CELL_INIB;


/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_nTECSInfo_tTECSInfo_INIB *nTECSInfo_tTECSInfo_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* nTECSInfo_sTECSInfo */
Inline ER           nTECSInfo_tTECSInfo_eTECSInfo_findNamespace( const char_t* namespace_path, Descriptor( nTECSInfo_sNamespaceInfo )* NSdesc);
Inline ER           nTECSInfo_tTECSInfo_eTECSInfo_findRegion( const char_t* namespace_path, Descriptor( nTECSInfo_sRegionInfo )* RGNdesc);
Inline ER           nTECSInfo_tTECSInfo_eTECSInfo_findSignature( const char_t* namespace_path, Descriptor( nTECSInfo_sSignatureInfo )* SIGdesc);
Inline ER           nTECSInfo_tTECSInfo_eTECSInfo_findCelltype( const char_t* namespace_path, Descriptor( nTECSInfo_sCelltypeInfo )* CTdesc);
Inline ER           nTECSInfo_tTECSInfo_eTECSInfo_findCell( const char_t* namespace_path, Descriptor( nTECSInfo_sCellInfo )* CELLdesc);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  nTECSInfo_tTECSInfo_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "nTECSInfo_tTECSInfoSub_tecsgen.h"
#ifdef  nTECSInfo_tTECSInfo_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* nTECSInfo_tTECSInfo_CB_TYPE_ONLY */

/* ����CB������ޥ��� #_GCB_# */
#define nTECSInfo_tTECSInfo_GET_CELLCB(idx) ((void *)0)
 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nTECSInfo_tTECSInfo_cTECSInfo_findNamespace( namespace_path, NSdesc ) \
	  nTECSInfo_tTECSInfoSub_eTECSInfo_findNamespace( \
	    (namespace_path), (NSdesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findRegion( namespace_path, RGNdesc ) \
	  nTECSInfo_tTECSInfoSub_eTECSInfo_findRegion( \
	    (namespace_path), (RGNdesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findSignature( namespace_path, SIGdesc ) \
	  nTECSInfo_tTECSInfoSub_eTECSInfo_findSignature( \
	    (namespace_path), (SIGdesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findCelltype( namespace_path, CTdesc ) \
	  nTECSInfo_tTECSInfoSub_eTECSInfo_findCelltype( \
	    (namespace_path), (CTdesc) )
#define nTECSInfo_tTECSInfo_cTECSInfo_findCell( namespace_path, CELLdesc ) \
	  nTECSInfo_tTECSInfoSub_eTECSInfo_findCell( \
	    (namespace_path), (CELLdesc) )

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tTECSInfo_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nTECSInfo_tTECSInfo_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tTECSInfo_IDX

#define tTECSInfo_IDX  nTECSInfo_tTECSInfo_IDX
/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cTECSInfo_findNamespace( namespace_path, NSdesc ) \
          nTECSInfo_tTECSInfo_cTECSInfo_findNamespace( namespace_path, NSdesc )
#define cTECSInfo_findRegion( namespace_path, RGNdesc ) \
          nTECSInfo_tTECSInfo_cTECSInfo_findRegion( namespace_path, RGNdesc )
#define cTECSInfo_findSignature( namespace_path, SIGdesc ) \
          nTECSInfo_tTECSInfo_cTECSInfo_findSignature( namespace_path, SIGdesc )
#define cTECSInfo_findCelltype( namespace_path, CTdesc ) \
          nTECSInfo_tTECSInfo_cTECSInfo_findCelltype( namespace_path, CTdesc )
#define cTECSInfo_findCell( namespace_path, CELLdesc ) \
          nTECSInfo_tTECSInfo_cTECSInfo_findCell( namespace_path, CELLdesc )




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eTECSInfo_findNamespace nTECSInfo_tTECSInfo_eTECSInfo_findNamespace
#define eTECSInfo_findRegion nTECSInfo_tTECSInfo_eTECSInfo_findRegion
#define eTECSInfo_findSignature nTECSInfo_tTECSInfo_eTECSInfo_findSignature
#define eTECSInfo_findCelltype nTECSInfo_tTECSInfo_eTECSInfo_findCelltype
#define eTECSInfo_findCell nTECSInfo_tTECSInfo_eTECSInfo_findCell

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#ifndef TOPPERS_MACRO_ONLY

/* inline �إå��� include #_INL_# */
#include "nTECSInfo_tTECSInfo_inline.h"

#endif /* TOPPERS_MACRO_ONLY */

#ifdef TOPPERS_CB_TYPE_ONLY

/* inline �Τ���� undef #_UDF_# */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef tTECSInfo_IDX
#undef FOREACH_CELL
#undef END_FOREACH_CELL
#undef INITIALIZE_CB
#undef SET_CB_INIB_POINTER
#undef nTECSInfo_tTECSInfo_cTECSInfo_findNamespace
#undef cTECSInfo_findNamespace
#undef nTECSInfo_tTECSInfo_cTECSInfo_findRegion
#undef cTECSInfo_findRegion
#undef nTECSInfo_tTECSInfo_cTECSInfo_findSignature
#undef cTECSInfo_findSignature
#undef nTECSInfo_tTECSInfo_cTECSInfo_findCelltype
#undef cTECSInfo_findCelltype
#undef nTECSInfo_tTECSInfo_cTECSInfo_findCell
#undef cTECSInfo_findCell
#undef eTECSInfo_findNamespace
#undef eTECSInfo_findRegion
#undef eTECSInfo_findSignature
#undef eTECSInfo_findCelltype
#undef eTECSInfo_findCell
#endif /* TOPPERS_CB_TYPE_ONLY */

#endif /* nTECSInfo_tTECSInfo_TECSGENH */
