/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_tCelltypeInfo_TECSGEN_H
#define nTECSInfo_tCelltypeInfo_TECSGEN_H

/*
 * celltype          :  tCelltypeInfo
 * global name       :  nTECSInfo_tCelltypeInfo
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  false
 * has_INIB          :  true
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "nTECSInfo_sEntryInfo_tecsgen.h"
#include "nTECSInfo_sCallInfo_tecsgen.h"
#include "nTECSInfo_sVarDeclInfo_tecsgen.h"
#include "nTECSInfo_sCelltypeInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nTECSInfo_tCelltypeInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sEntryInfo_VDES *const*cEntryInfo;
    int_t n_cEntryInfo;
    struct tag_nTECSInfo_sCallInfo_VDES *const*cCallInfo;
    int_t n_cCallInfo;
    struct tag_nTECSInfo_sVarDeclInfo_VDES *const*cAttrInfo;
    int_t n_cAttrInfo;
    struct tag_nTECSInfo_sVarDeclInfo_VDES *const*cVarInfo;
    int_t n_cVarInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    bool_t         b_singleton;
    bool_t         b_IDX_is_ID_act;
    bool_t         b_hasCB;
    bool_t         b_hasINIB;
    int32_t        n_cellInLinUnit;
    int32_t        n_cellInSystem;
}  nTECSInfo_tCelltypeInfo_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nTECSInfo_tCelltypeInfo_CB_tab           nTECSInfo_tCelltypeInfo_INIB_tab
#define nTECSInfo_tCelltypeInfo_SINGLE_CELL_CB   nTECSInfo_tCelltypeInfo_SINGLE_CELL_INIB
#define nTECSInfo_tCelltypeInfo_CB               nTECSInfo_tCelltypeInfo_INIB
#define tag_nTECSInfo_tCelltypeInfo_CB           tag_nTECSInfo_tCelltypeInfo_INIB

extern nTECSInfo_tCelltypeInfo_CB  nTECSInfo_tCelltypeInfo_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_nTECSInfo_tCelltypeInfo_INIB *nTECSInfo_tCelltypeInfo_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* nTECSInfo_sCelltypeInfo */
ER           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getName(nTECSInfo_tCelltypeInfo_IDX idx, char_t* name, int_t max_len);
void         nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNameLength(nTECSInfo_tCelltypeInfo_IDX idx, uint16_t* len);
void         nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNAttr(nTECSInfo_tCelltypeInfo_IDX idx, int32_t* nAttr);
void         nTECSInfo_tCelltypeInfo_eCelltypeInfo_getAttrInfo(nTECSInfo_tCelltypeInfo_IDX idx, int32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc);
void         nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNVar(nTECSInfo_tCelltypeInfo_IDX idx, int32_t* nVar);
void         nTECSInfo_tCelltypeInfo_eCelltypeInfo_getVarInfo(nTECSInfo_tCelltypeInfo_IDX idx, int32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc);
void         nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNCall(nTECSInfo_tCelltypeInfo_IDX idx, int32_t* nCall);
void         nTECSInfo_tCelltypeInfo_eCelltypeInfo_getCallInfo(nTECSInfo_tCelltypeInfo_IDX idx, int32_t ith, Descriptor( nTECSInfo_sCallInfo )* desc);
void         nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNEntry(nTECSInfo_tCelltypeInfo_IDX idx, int32_t* nEntry);
void         nTECSInfo_tCelltypeInfo_eCelltypeInfo_getEntryInfo(nTECSInfo_tCelltypeInfo_IDX idx, int32_t ith, Descriptor( nTECSInfo_sEntryInfo )* desc);
bool_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_isSingleton(nTECSInfo_tCelltypeInfo_IDX idx);
bool_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_isIDX_is_ID(nTECSInfo_tCelltypeInfo_IDX idx);
bool_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_hasCB(nTECSInfo_tCelltypeInfo_IDX idx);
bool_t       nTECSInfo_tCelltypeInfo_eCelltypeInfo_hasINIB(nTECSInfo_tCelltypeInfo_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tCelltypeInfo_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nTECSInfo_tCelltypeInfo_N_CELL       (30)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nTECSInfo_tCelltypeInfo_VALID_IDX(IDX) (1)

/* �ƤӸ�������礭��������ޥ��� #_NCPA_# */
#define N_CP_cEntryInfo(p_that)  ((p_that)->n_cEntryInfo)
#define NCP_cEntryInfo           (N_CP_cEntryInfo(p_cellcb))
#define N_CP_cCallInfo(p_that)  ((p_that)->n_cCallInfo)
#define NCP_cCallInfo           (N_CP_cCallInfo(p_cellcb))
#define N_CP_cAttrInfo(p_that)  ((p_that)->n_cAttrInfo)
#define NCP_cAttrInfo           (N_CP_cAttrInfo(p_cellcb))
#define N_CP_cVarInfo(p_that)  ((p_that)->n_cVarInfo)
#define NCP_cVarInfo           (N_CP_cVarInfo(p_cellcb))
/* optional �ƤӸ���ƥ��Ȥ���ޥ��� #_TOCP_# */
#define nTECSInfo_tCelltypeInfo_is_cEntryInfo_joined(p_that,subscript) \
	  (((p_that)->cEntryInfo!=0)\
	  &&((p_that)->cEntryInfo[subscript]!=0))
#define nTECSInfo_tCelltypeInfo_is_cCallInfo_joined(p_that,subscript) \
	  (((p_that)->cCallInfo!=0)\
	  &&((p_that)->cCallInfo[subscript]!=0))
#define nTECSInfo_tCelltypeInfo_is_cAttrInfo_joined(p_that,subscript) \
	  (((p_that)->cAttrInfo!=0)\
	  &&((p_that)->cAttrInfo[subscript]!=0))
#define nTECSInfo_tCelltypeInfo_is_cVarInfo_joined(p_that,subscript) \
	  (((p_that)->cVarInfo!=0)\
	  &&((p_that)->cVarInfo[subscript]!=0))

/* ����CB������ޥ��� #_GCB_# */
#define nTECSInfo_tCelltypeInfo_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define nTECSInfo_tCelltypeInfo_ATTR_name( p_that )	((p_that)->name)
#define nTECSInfo_tCelltypeInfo_ATTR_b_singleton( p_that )	((p_that)->b_singleton)
#define nTECSInfo_tCelltypeInfo_ATTR_b_IDX_is_ID_act( p_that )	((p_that)->b_IDX_is_ID_act)
#define nTECSInfo_tCelltypeInfo_ATTR_b_hasCB( p_that )	((p_that)->b_hasCB)
#define nTECSInfo_tCelltypeInfo_ATTR_b_hasINIB( p_that )	((p_that)->b_hasINIB)
#define nTECSInfo_tCelltypeInfo_ATTR_n_cellInLinUnit( p_that )	((p_that)->n_cellInLinUnit)
#define nTECSInfo_tCelltypeInfo_ATTR_n_cellInSystem( p_that )	((p_that)->n_cellInSystem)

#define nTECSInfo_tCelltypeInfo_GET_name(p_that)	((p_that)->name)
#define nTECSInfo_tCelltypeInfo_GET_b_singleton(p_that)	((p_that)->b_singleton)
#define nTECSInfo_tCelltypeInfo_GET_b_IDX_is_ID_act(p_that)	((p_that)->b_IDX_is_ID_act)
#define nTECSInfo_tCelltypeInfo_GET_b_hasCB(p_that)	((p_that)->b_hasCB)
#define nTECSInfo_tCelltypeInfo_GET_b_hasINIB(p_that)	((p_that)->b_hasINIB)
#define nTECSInfo_tCelltypeInfo_GET_n_cellInLinUnit(p_that)	((p_that)->n_cellInLinUnit)
#define nTECSInfo_tCelltypeInfo_GET_n_cellInSystem(p_that)	((p_that)->n_cellInSystem)



 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nTECSInfo_tCelltypeInfo_cEntryInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cEntryInfo[subscript]->VMT->getName__T( \
	   (p_that)->cEntryInfo[subscript], (name), (max_len) )
#define nTECSInfo_tCelltypeInfo_cEntryInfo_getNameLength( p_that, subscript, len ) \
	  (p_that)->cEntryInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cEntryInfo[subscript], (len) )
#define nTECSInfo_tCelltypeInfo_cEntryInfo_getSignatureInfo( p_that, subscript, desc ) \
	  (p_that)->cEntryInfo[subscript]->VMT->getSignatureInfo__T( \
	   (p_that)->cEntryInfo[subscript], (desc) )
#define nTECSInfo_tCelltypeInfo_cEntryInfo_getArraySize( p_that, subscript, array_size ) \
	  (p_that)->cEntryInfo[subscript]->VMT->getArraySize__T( \
	   (p_that)->cEntryInfo[subscript], (array_size) )
#define nTECSInfo_tCelltypeInfo_cEntryInfo_isInline( p_that, subscript ) \
	  (p_that)->cEntryInfo[subscript]->VMT->isInline__T( \
	   (p_that)->cEntryInfo[subscript] )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cCallInfo[subscript]->VMT->getName__T( \
	   (p_that)->cCallInfo[subscript], (name), (max_len) )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getNameLength( p_that, subscript, len ) \
	  (p_that)->cCallInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cCallInfo[subscript], (len) )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getSignatureInfo( p_that, subscript, desc ) \
	  (p_that)->cCallInfo[subscript]->VMT->getSignatureInfo__T( \
	   (p_that)->cCallInfo[subscript], (desc) )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getArraySize( p_that, subscript, array_size ) \
	  (p_that)->cCallInfo[subscript]->VMT->getArraySize__T( \
	   (p_that)->cCallInfo[subscript], (array_size) )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getSpecifierInfo( p_that, subscript, b_optional, b_dynamic, b_ref_desc, b_omit ) \
	  (p_that)->cCallInfo[subscript]->VMT->getSpecifierInfo__T( \
	   (p_that)->cCallInfo[subscript], (b_optional), (b_dynamic), (b_ref_desc), (b_omit) )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getInternalInfo( p_that, subscript, b_allocator_port, b_require_port ) \
	  (p_that)->cCallInfo[subscript]->VMT->getInternalInfo__T( \
	   (p_that)->cCallInfo[subscript], (b_allocator_port), (b_require_port) )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getLocationInfo( p_that, subscript, offset, place ) \
	  (p_that)->cCallInfo[subscript]->VMT->getLocationInfo__T( \
	   (p_that)->cCallInfo[subscript], (offset), (place) )
#define nTECSInfo_tCelltypeInfo_cCallInfo_getOptimizeInfo( p_that, subscript, b_VMT_useless, b_skelton_useless, b_cell_unique ) \
	  (p_that)->cCallInfo[subscript]->VMT->getOptimizeInfo__T( \
	   (p_that)->cCallInfo[subscript], (b_VMT_useless), (b_skelton_useless), (b_cell_unique) )
#define nTECSInfo_tCelltypeInfo_cAttrInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cAttrInfo[subscript]->VMT->getName__T( \
	   (p_that)->cAttrInfo[subscript], (name), (max_len) )
#define nTECSInfo_tCelltypeInfo_cAttrInfo_getOffset( p_that, subscript, offset ) \
	  (p_that)->cAttrInfo[subscript]->VMT->getOffset__T( \
	   (p_that)->cAttrInfo[subscript], (offset) )
#define nTECSInfo_tCelltypeInfo_cAttrInfo_getTypeInfo( p_that, subscript, desc ) \
	  (p_that)->cAttrInfo[subscript]->VMT->getTypeInfo__T( \
	   (p_that)->cAttrInfo[subscript], (desc) )
#define nTECSInfo_tCelltypeInfo_cAttrInfo_getSizeIsExpr( p_that, subscript, expr_str, max_len ) \
	  (p_that)->cAttrInfo[subscript]->VMT->getSizeIsExpr__T( \
	   (p_that)->cAttrInfo[subscript], (expr_str), (max_len) )
#define nTECSInfo_tCelltypeInfo_cAttrInfo_getSizeIs( p_that, subscript, size, p_cb ) \
	  (p_that)->cAttrInfo[subscript]->VMT->getSizeIs__T( \
	   (p_that)->cAttrInfo[subscript], (size), (p_cb) )
#define nTECSInfo_tCelltypeInfo_cVarInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cVarInfo[subscript]->VMT->getName__T( \
	   (p_that)->cVarInfo[subscript], (name), (max_len) )
#define nTECSInfo_tCelltypeInfo_cVarInfo_getOffset( p_that, subscript, offset ) \
	  (p_that)->cVarInfo[subscript]->VMT->getOffset__T( \
	   (p_that)->cVarInfo[subscript], (offset) )
#define nTECSInfo_tCelltypeInfo_cVarInfo_getTypeInfo( p_that, subscript, desc ) \
	  (p_that)->cVarInfo[subscript]->VMT->getTypeInfo__T( \
	   (p_that)->cVarInfo[subscript], (desc) )
#define nTECSInfo_tCelltypeInfo_cVarInfo_getSizeIsExpr( p_that, subscript, expr_str, max_len ) \
	  (p_that)->cVarInfo[subscript]->VMT->getSizeIsExpr__T( \
	   (p_that)->cVarInfo[subscript], (expr_str), (max_len) )
#define nTECSInfo_tCelltypeInfo_cVarInfo_getSizeIs( p_that, subscript, size, p_cb ) \
	  (p_that)->cVarInfo[subscript]->VMT->getSizeIs__T( \
	   (p_that)->cVarInfo[subscript], (size), (p_cb) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eCelltypeInfo */
ER             nTECSInfo_tCelltypeInfo_eCelltypeInfo_getName_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, char_t* name, int_t max_len);
void           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, uint16_t* len);
void           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNAttr_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, int32_t* nAttr);
void           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getAttrInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc);
void           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNVar_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, int32_t* nVar);
void           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getVarInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sVarDeclInfo )* desc);
void           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNCall_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, int32_t* nCall);
void           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getCallInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sCallInfo )* desc);
void           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNEntry_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, int32_t* nEntry);
void           nTECSInfo_tCelltypeInfo_eCelltypeInfo_getEntryInfo_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sEntryInfo )* desc);
bool_t         nTECSInfo_tCelltypeInfo_eCelltypeInfo_isSingleton_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd);
bool_t         nTECSInfo_tCelltypeInfo_eCelltypeInfo_isIDX_is_ID_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd);
bool_t         nTECSInfo_tCelltypeInfo_eCelltypeInfo_hasCB_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd);
bool_t         nTECSInfo_tCelltypeInfo_eCelltypeInfo_hasINIB_skel( const struct tag_nTECSInfo_sCelltypeInfo_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

/* �ǥ�������ץ����ȴؿ� #_CRD_# */
/* [ref_desc] cEntryInfo */
Inline Descriptor( nTECSInfo_sEntryInfo )
nTECSInfo_tCelltypeInfo_cEntryInfo_refer_to_descriptor( nTECSInfo_tCelltypeInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sEntryInfo )  des;
    nTECSInfo_tCelltypeInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cEntryInfo );
    des.vdes = (struct tag_nTECSInfo_sEntryInfo_VDES *)p_that->cEntryInfo[ i ];
    return des;
}

/* [ref_desc] cCallInfo */
Inline Descriptor( nTECSInfo_sCallInfo )
nTECSInfo_tCelltypeInfo_cCallInfo_refer_to_descriptor( nTECSInfo_tCelltypeInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sCallInfo )  des;
    nTECSInfo_tCelltypeInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cCallInfo );
    des.vdes = (struct tag_nTECSInfo_sCallInfo_VDES *)p_that->cCallInfo[ i ];
    return des;
}

/* [ref_desc] cAttrInfo */
Inline Descriptor( nTECSInfo_sVarDeclInfo )
nTECSInfo_tCelltypeInfo_cAttrInfo_refer_to_descriptor( nTECSInfo_tCelltypeInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sVarDeclInfo )  des;
    nTECSInfo_tCelltypeInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cAttrInfo );
    des.vdes = (struct tag_nTECSInfo_sVarDeclInfo_VDES *)p_that->cAttrInfo[ i ];
    return des;
}

/* [ref_desc] cVarInfo */
Inline Descriptor( nTECSInfo_sVarDeclInfo )
nTECSInfo_tCelltypeInfo_cVarInfo_refer_to_descriptor( nTECSInfo_tCelltypeInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sVarDeclInfo )  des;
    nTECSInfo_tCelltypeInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cVarInfo );
    des.vdes = (struct tag_nTECSInfo_sVarDeclInfo_VDES *)p_that->cVarInfo[ i ];
    return des;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tCelltypeInfo_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tCelltypeInfo_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nTECSInfo_tCelltypeInfo_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tCelltypeInfo_IDX

#define tCelltypeInfo_IDX  nTECSInfo_tCelltypeInfo_IDX

/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_name            nTECSInfo_tCelltypeInfo_ATTR_name( p_cellcb )
#define ATTR_b_singleton     nTECSInfo_tCelltypeInfo_ATTR_b_singleton( p_cellcb )
#define ATTR_b_IDX_is_ID_act nTECSInfo_tCelltypeInfo_ATTR_b_IDX_is_ID_act( p_cellcb )
#define ATTR_b_hasCB         nTECSInfo_tCelltypeInfo_ATTR_b_hasCB( p_cellcb )
#define ATTR_b_hasINIB       nTECSInfo_tCelltypeInfo_ATTR_b_hasINIB( p_cellcb )
#define ATTR_n_cellInLinUnit nTECSInfo_tCelltypeInfo_ATTR_n_cellInLinUnit( p_cellcb )
#define ATTR_n_cellInSystem  nTECSInfo_tCelltypeInfo_ATTR_n_cellInSystem( p_cellcb )


/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cEntryInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tCelltypeInfo_cEntryInfo_getName( p_cellcb, subscript, name, max_len )
#define cEntryInfo_getNameLength( subscript, len ) \
          nTECSInfo_tCelltypeInfo_cEntryInfo_getNameLength( p_cellcb, subscript, len )
#define cEntryInfo_getSignatureInfo( subscript, desc ) \
          nTECSInfo_tCelltypeInfo_cEntryInfo_getSignatureInfo( p_cellcb, subscript, desc )
#define cEntryInfo_getArraySize( subscript, array_size ) \
          nTECSInfo_tCelltypeInfo_cEntryInfo_getArraySize( p_cellcb, subscript, array_size )
#define cEntryInfo_isInline( subscript ) \
          nTECSInfo_tCelltypeInfo_cEntryInfo_isInline( p_cellcb, subscript )
#define cCallInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tCelltypeInfo_cCallInfo_getName( p_cellcb, subscript, name, max_len )
#define cCallInfo_getNameLength( subscript, len ) \
          nTECSInfo_tCelltypeInfo_cCallInfo_getNameLength( p_cellcb, subscript, len )
#define cCallInfo_getSignatureInfo( subscript, desc ) \
          nTECSInfo_tCelltypeInfo_cCallInfo_getSignatureInfo( p_cellcb, subscript, desc )
#define cCallInfo_getArraySize( subscript, array_size ) \
          nTECSInfo_tCelltypeInfo_cCallInfo_getArraySize( p_cellcb, subscript, array_size )
#define cCallInfo_getSpecifierInfo( subscript, b_optional, b_dynamic, b_ref_desc, b_omit ) \
          nTECSInfo_tCelltypeInfo_cCallInfo_getSpecifierInfo( p_cellcb, subscript, b_optional, b_dynamic, b_ref_desc, b_omit )
#define cCallInfo_getInternalInfo( subscript, b_allocator_port, b_require_port ) \
          nTECSInfo_tCelltypeInfo_cCallInfo_getInternalInfo( p_cellcb, subscript, b_allocator_port, b_require_port )
#define cCallInfo_getLocationInfo( subscript, offset, place ) \
          nTECSInfo_tCelltypeInfo_cCallInfo_getLocationInfo( p_cellcb, subscript, offset, place )
#define cCallInfo_getOptimizeInfo( subscript, b_VMT_useless, b_skelton_useless, b_cell_unique ) \
          nTECSInfo_tCelltypeInfo_cCallInfo_getOptimizeInfo( p_cellcb, subscript, b_VMT_useless, b_skelton_useless, b_cell_unique )
#define cAttrInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tCelltypeInfo_cAttrInfo_getName( p_cellcb, subscript, name, max_len )
#define cAttrInfo_getOffset( subscript, offset ) \
          nTECSInfo_tCelltypeInfo_cAttrInfo_getOffset( p_cellcb, subscript, offset )
#define cAttrInfo_getTypeInfo( subscript, desc ) \
          nTECSInfo_tCelltypeInfo_cAttrInfo_getTypeInfo( p_cellcb, subscript, desc )
#define cAttrInfo_getSizeIsExpr( subscript, expr_str, max_len ) \
          nTECSInfo_tCelltypeInfo_cAttrInfo_getSizeIsExpr( p_cellcb, subscript, expr_str, max_len )
#define cAttrInfo_getSizeIs( subscript, size, p_cb ) \
          nTECSInfo_tCelltypeInfo_cAttrInfo_getSizeIs( p_cellcb, subscript, size, p_cb )
#define cVarInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tCelltypeInfo_cVarInfo_getName( p_cellcb, subscript, name, max_len )
#define cVarInfo_getOffset( subscript, offset ) \
          nTECSInfo_tCelltypeInfo_cVarInfo_getOffset( p_cellcb, subscript, offset )
#define cVarInfo_getTypeInfo( subscript, desc ) \
          nTECSInfo_tCelltypeInfo_cVarInfo_getTypeInfo( p_cellcb, subscript, desc )
#define cVarInfo_getSizeIsExpr( subscript, expr_str, max_len ) \
          nTECSInfo_tCelltypeInfo_cVarInfo_getSizeIsExpr( p_cellcb, subscript, expr_str, max_len )
#define cVarInfo_getSizeIs( subscript, size, p_cb ) \
          nTECSInfo_tCelltypeInfo_cVarInfo_getSizeIs( p_cellcb, subscript, size, p_cb )


/* �ǥ�������ץ����ȥޥ����û�̷��� #_CRDA_# */
#define cEntryInfo_refer_to_descriptor( i )\
          nTECSInfo_tCelltypeInfo_cEntryInfo_refer_to_descriptor( p_cellcb, i )
#define cEntryInfo_ref_desc( i )\
          cEntryInfo_refer_to_descriptor( i )
#define cCallInfo_refer_to_descriptor( i )\
          nTECSInfo_tCelltypeInfo_cCallInfo_refer_to_descriptor( p_cellcb, i )
#define cCallInfo_ref_desc( i )\
          cCallInfo_refer_to_descriptor( i )
#define cAttrInfo_refer_to_descriptor( i )\
          nTECSInfo_tCelltypeInfo_cAttrInfo_refer_to_descriptor( p_cellcb, i )
#define cAttrInfo_ref_desc( i )\
          cAttrInfo_refer_to_descriptor( i )
#define cVarInfo_refer_to_descriptor( i )\
          nTECSInfo_tCelltypeInfo_cVarInfo_refer_to_descriptor( p_cellcb, i )
#define cVarInfo_ref_desc( i )\
          cVarInfo_refer_to_descriptor( i )


/* optional �ƤӸ���ƥ��Ȥ���ޥ����û�̷��� #_TOCPA_# */
#define is_cEntryInfo_joined(subscript)\
		nTECSInfo_tCelltypeInfo_is_cEntryInfo_joined(p_cellcb,subscript)
#define is_cCallInfo_joined(subscript)\
		nTECSInfo_tCelltypeInfo_is_cCallInfo_joined(p_cellcb,subscript)
#define is_cAttrInfo_joined(subscript)\
		nTECSInfo_tCelltypeInfo_is_cAttrInfo_joined(p_cellcb,subscript)
#define is_cVarInfo_joined(subscript)\
		nTECSInfo_tCelltypeInfo_is_cVarInfo_joined(p_cellcb,subscript)

/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eCelltypeInfo_getName nTECSInfo_tCelltypeInfo_eCelltypeInfo_getName
#define eCelltypeInfo_getNameLength nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNameLength
#define eCelltypeInfo_getNAttr nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNAttr
#define eCelltypeInfo_getAttrInfo nTECSInfo_tCelltypeInfo_eCelltypeInfo_getAttrInfo
#define eCelltypeInfo_getNVar nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNVar
#define eCelltypeInfo_getVarInfo nTECSInfo_tCelltypeInfo_eCelltypeInfo_getVarInfo
#define eCelltypeInfo_getNCall nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNCall
#define eCelltypeInfo_getCallInfo nTECSInfo_tCelltypeInfo_eCelltypeInfo_getCallInfo
#define eCelltypeInfo_getNEntry nTECSInfo_tCelltypeInfo_eCelltypeInfo_getNEntry
#define eCelltypeInfo_getEntryInfo nTECSInfo_tCelltypeInfo_eCelltypeInfo_getEntryInfo
#define eCelltypeInfo_isSingleton nTECSInfo_tCelltypeInfo_eCelltypeInfo_isSingleton
#define eCelltypeInfo_isIDX_is_ID nTECSInfo_tCelltypeInfo_eCelltypeInfo_isIDX_is_ID
#define eCelltypeInfo_hasCB nTECSInfo_tCelltypeInfo_eCelltypeInfo_hasCB
#define eCelltypeInfo_hasINIB nTECSInfo_tCelltypeInfo_eCelltypeInfo_hasINIB

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tCelltypeInfo_N_CELL; (i)++ ){ \
       (p_cb) = &nTECSInfo_tCelltypeInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tCelltypeInfo_TECSGENH */
