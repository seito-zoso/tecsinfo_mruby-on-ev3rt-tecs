/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_tNamespaceInfo_TECSGEN_H
#define nTECSInfo_tNamespaceInfo_TECSGEN_H

/*
 * celltype          :  tNamespaceInfo
 * global name       :  nTECSInfo_tNamespaceInfo
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
#include "nTECSInfo_sNamespaceInfo_tecsgen.h"
#include "nTECSInfo_sSignatureInfo_tecsgen.h"
#include "nTECSInfo_sCelltypeInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nTECSInfo_tNamespaceInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sSignatureInfo_VDES *const*cSignatureInfo;
    int_t n_cSignatureInfo;
    struct tag_nTECSInfo_sCelltypeInfo_VDES *const*cCelltypeInfo;
    int_t n_cCelltypeInfo;
    struct tag_nTECSInfo_sNamespaceInfo_VDES *const*cNamespaceInfo;
    int_t n_cNamespaceInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char*          name;
}  nTECSInfo_tNamespaceInfo_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nTECSInfo_tNamespaceInfo_CB_tab           nTECSInfo_tNamespaceInfo_INIB_tab
#define nTECSInfo_tNamespaceInfo_SINGLE_CELL_CB   nTECSInfo_tNamespaceInfo_SINGLE_CELL_INIB
#define nTECSInfo_tNamespaceInfo_CB               nTECSInfo_tNamespaceInfo_INIB
#define tag_nTECSInfo_tNamespaceInfo_CB           tag_nTECSInfo_tNamespaceInfo_INIB

extern nTECSInfo_tNamespaceInfo_CB  nTECSInfo_tNamespaceInfo_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_nTECSInfo_tNamespaceInfo_INIB *nTECSInfo_tNamespaceInfo_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* nTECSInfo_sNamespaceInfo */
ER           nTECSInfo_tNamespaceInfo_eNamespaceInfo_getName(nTECSInfo_tNamespaceInfo_IDX idx, char_t* name, int_t max_len);
void         nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNameLength(nTECSInfo_tNamespaceInfo_IDX idx, uint16_t* len);
void         nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNNamespace(nTECSInfo_tNamespaceInfo_IDX idx, int32_t* num);
void         nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNamespaceInfo(nTECSInfo_tNamespaceInfo_IDX idx, int32_t ith, Descriptor( nTECSInfo_sNamespaceInfo )* des);
void         nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNSignature(nTECSInfo_tNamespaceInfo_IDX idx, int32_t* num);
void         nTECSInfo_tNamespaceInfo_eNamespaceInfo_getSignatureInfo(nTECSInfo_tNamespaceInfo_IDX idx, int32_t ith, Descriptor( nTECSInfo_sSignatureInfo )* des);
void         nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNCelltype(nTECSInfo_tNamespaceInfo_IDX idx, int32_t* num);
void         nTECSInfo_tNamespaceInfo_eNamespaceInfo_getCelltypeInfo(nTECSInfo_tNamespaceInfo_IDX idx, int32_t ith, Descriptor( nTECSInfo_sCelltypeInfo )* des);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tNamespaceInfo_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nTECSInfo_tNamespaceInfo_N_CELL        (4)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nTECSInfo_tNamespaceInfo_VALID_IDX(IDX) (1)

/* �ƤӸ�������礭��������ޥ��� #_NCPA_# */
#define N_CP_cSignatureInfo(p_that)  ((p_that)->n_cSignatureInfo)
#define NCP_cSignatureInfo           (N_CP_cSignatureInfo(p_cellcb))
#define N_CP_cCelltypeInfo(p_that)  ((p_that)->n_cCelltypeInfo)
#define NCP_cCelltypeInfo           (N_CP_cCelltypeInfo(p_cellcb))
#define N_CP_cNamespaceInfo(p_that)  ((p_that)->n_cNamespaceInfo)
#define NCP_cNamespaceInfo           (N_CP_cNamespaceInfo(p_cellcb))
/* optional �ƤӸ���ƥ��Ȥ���ޥ��� #_TOCP_# */
#define nTECSInfo_tNamespaceInfo_is_cSignatureInfo_joined(p_that,subscript) \
	  (((p_that)->cSignatureInfo!=0)\
	  &&((p_that)->cSignatureInfo[subscript]!=0))
#define nTECSInfo_tNamespaceInfo_is_cCelltypeInfo_joined(p_that,subscript) \
	  (((p_that)->cCelltypeInfo!=0)\
	  &&((p_that)->cCelltypeInfo[subscript]!=0))
#define nTECSInfo_tNamespaceInfo_is_cNamespaceInfo_joined(p_that,subscript) \
	  (((p_that)->cNamespaceInfo!=0)\
	  &&((p_that)->cNamespaceInfo[subscript]!=0))

/* ����CB������ޥ��� #_GCB_# */
#define nTECSInfo_tNamespaceInfo_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define nTECSInfo_tNamespaceInfo_ATTR_name( p_that )	((p_that)->name)

#define nTECSInfo_tNamespaceInfo_GET_name(p_that)	((p_that)->name)



 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nTECSInfo_tNamespaceInfo_cSignatureInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cSignatureInfo[subscript]->VMT->getName__T( \
	   (p_that)->cSignatureInfo[subscript], (name), (max_len) )
#define nTECSInfo_tNamespaceInfo_cSignatureInfo_getNameLength( p_that, subscript, len ) \
	  (p_that)->cSignatureInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cSignatureInfo[subscript], (len) )
#define nTECSInfo_tNamespaceInfo_cSignatureInfo_getNFunction( p_that, subscript, num ) \
	  (p_that)->cSignatureInfo[subscript]->VMT->getNFunction__T( \
	   (p_that)->cSignatureInfo[subscript], (num) )
#define nTECSInfo_tNamespaceInfo_cSignatureInfo_getFunctionInfo( p_that, subscript, ith, desc ) \
	  (p_that)->cSignatureInfo[subscript]->VMT->getFunctionInfo__T( \
	   (p_that)->cSignatureInfo[subscript], (ith), (desc) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getName__T( \
	   (p_that)->cCelltypeInfo[subscript], (name), (max_len) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNameLength( p_that, subscript, len ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cCelltypeInfo[subscript], (len) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNAttr( p_that, subscript, nAttr ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getNAttr__T( \
	   (p_that)->cCelltypeInfo[subscript], (nAttr) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getAttrInfo( p_that, subscript, ith, desc ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getAttrInfo__T( \
	   (p_that)->cCelltypeInfo[subscript], (ith), (desc) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNVar( p_that, subscript, nVar ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getNVar__T( \
	   (p_that)->cCelltypeInfo[subscript], (nVar) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getVarInfo( p_that, subscript, ith, desc ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getVarInfo__T( \
	   (p_that)->cCelltypeInfo[subscript], (ith), (desc) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNCall( p_that, subscript, nCall ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getNCall__T( \
	   (p_that)->cCelltypeInfo[subscript], (nCall) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getCallInfo( p_that, subscript, ith, desc ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getCallInfo__T( \
	   (p_that)->cCelltypeInfo[subscript], (ith), (desc) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNEntry( p_that, subscript, nEntry ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getNEntry__T( \
	   (p_that)->cCelltypeInfo[subscript], (nEntry) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_getEntryInfo( p_that, subscript, ith, desc ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->getEntryInfo__T( \
	   (p_that)->cCelltypeInfo[subscript], (ith), (desc) )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_isSingleton( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->isSingleton__T( \
	   (p_that)->cCelltypeInfo[subscript] )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_isIDX_is_ID( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->isIDX_is_ID__T( \
	   (p_that)->cCelltypeInfo[subscript] )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_hasCB( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->hasCB__T( \
	   (p_that)->cCelltypeInfo[subscript] )
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo_hasINIB( p_that, subscript ) \
	  (p_that)->cCelltypeInfo[subscript]->VMT->hasINIB__T( \
	   (p_that)->cCelltypeInfo[subscript] )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cNamespaceInfo[subscript]->VMT->getName__T( \
	   (p_that)->cNamespaceInfo[subscript], (name), (max_len) )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNameLength( p_that, subscript, len ) \
	  (p_that)->cNamespaceInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cNamespaceInfo[subscript], (len) )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNNamespace( p_that, subscript, num ) \
	  (p_that)->cNamespaceInfo[subscript]->VMT->getNNamespace__T( \
	   (p_that)->cNamespaceInfo[subscript], (num) )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNamespaceInfo( p_that, subscript, ith, des ) \
	  (p_that)->cNamespaceInfo[subscript]->VMT->getNamespaceInfo__T( \
	   (p_that)->cNamespaceInfo[subscript], (ith), (des) )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNSignature( p_that, subscript, num ) \
	  (p_that)->cNamespaceInfo[subscript]->VMT->getNSignature__T( \
	   (p_that)->cNamespaceInfo[subscript], (num) )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getSignatureInfo( p_that, subscript, ith, des ) \
	  (p_that)->cNamespaceInfo[subscript]->VMT->getSignatureInfo__T( \
	   (p_that)->cNamespaceInfo[subscript], (ith), (des) )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNCelltype( p_that, subscript, num ) \
	  (p_that)->cNamespaceInfo[subscript]->VMT->getNCelltype__T( \
	   (p_that)->cNamespaceInfo[subscript], (num) )
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo_getCelltypeInfo( p_that, subscript, ith, des ) \
	  (p_that)->cNamespaceInfo[subscript]->VMT->getCelltypeInfo__T( \
	   (p_that)->cNamespaceInfo[subscript], (ith), (des) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eNamespaceInfo */
ER             nTECSInfo_tNamespaceInfo_eNamespaceInfo_getName_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, char_t* name, int_t max_len);
void           nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNameLength_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, uint16_t* len);
void           nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNNamespace_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, int32_t* num);
void           nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNamespaceInfo_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sNamespaceInfo )* des);
void           nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNSignature_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, int32_t* num);
void           nTECSInfo_tNamespaceInfo_eNamespaceInfo_getSignatureInfo_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sSignatureInfo )* des);
void           nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNCelltype_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, int32_t* num);
void           nTECSInfo_tNamespaceInfo_eNamespaceInfo_getCelltypeInfo_skel( const struct tag_nTECSInfo_sNamespaceInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sCelltypeInfo )* des);

#ifndef TOPPERS_CB_TYPE_ONLY

/* �ǥ�������ץ����ȴؿ� #_CRD_# */
/* [ref_desc] cSignatureInfo */
Inline Descriptor( nTECSInfo_sSignatureInfo )
nTECSInfo_tNamespaceInfo_cSignatureInfo_refer_to_descriptor( nTECSInfo_tNamespaceInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sSignatureInfo )  des;
    nTECSInfo_tNamespaceInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cSignatureInfo );
    des.vdes = (struct tag_nTECSInfo_sSignatureInfo_VDES *)p_that->cSignatureInfo[ i ];
    return des;
}

/* [ref_desc] cCelltypeInfo */
Inline Descriptor( nTECSInfo_sCelltypeInfo )
nTECSInfo_tNamespaceInfo_cCelltypeInfo_refer_to_descriptor( nTECSInfo_tNamespaceInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sCelltypeInfo )  des;
    nTECSInfo_tNamespaceInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cCelltypeInfo );
    des.vdes = (struct tag_nTECSInfo_sCelltypeInfo_VDES *)p_that->cCelltypeInfo[ i ];
    return des;
}

/* [ref_desc] cNamespaceInfo */
Inline Descriptor( nTECSInfo_sNamespaceInfo )
nTECSInfo_tNamespaceInfo_cNamespaceInfo_refer_to_descriptor( nTECSInfo_tNamespaceInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sNamespaceInfo )  des;
    nTECSInfo_tNamespaceInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cNamespaceInfo );
    des.vdes = (struct tag_nTECSInfo_sNamespaceInfo_VDES *)p_that->cNamespaceInfo[ i ];
    return des;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tNamespaceInfo_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tNamespaceInfo_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nTECSInfo_tNamespaceInfo_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tNamespaceInfo_IDX

#define tNamespaceInfo_IDX  nTECSInfo_tNamespaceInfo_IDX

/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_name            nTECSInfo_tNamespaceInfo_ATTR_name( p_cellcb )


/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cSignatureInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tNamespaceInfo_cSignatureInfo_getName( p_cellcb, subscript, name, max_len )
#define cSignatureInfo_getNameLength( subscript, len ) \
          nTECSInfo_tNamespaceInfo_cSignatureInfo_getNameLength( p_cellcb, subscript, len )
#define cSignatureInfo_getNFunction( subscript, num ) \
          nTECSInfo_tNamespaceInfo_cSignatureInfo_getNFunction( p_cellcb, subscript, num )
#define cSignatureInfo_getFunctionInfo( subscript, ith, desc ) \
          nTECSInfo_tNamespaceInfo_cSignatureInfo_getFunctionInfo( p_cellcb, subscript, ith, desc )
#define cCelltypeInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getName( p_cellcb, subscript, name, max_len )
#define cCelltypeInfo_getNameLength( subscript, len ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNameLength( p_cellcb, subscript, len )
#define cCelltypeInfo_getNAttr( subscript, nAttr ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNAttr( p_cellcb, subscript, nAttr )
#define cCelltypeInfo_getAttrInfo( subscript, ith, desc ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getAttrInfo( p_cellcb, subscript, ith, desc )
#define cCelltypeInfo_getNVar( subscript, nVar ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNVar( p_cellcb, subscript, nVar )
#define cCelltypeInfo_getVarInfo( subscript, ith, desc ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getVarInfo( p_cellcb, subscript, ith, desc )
#define cCelltypeInfo_getNCall( subscript, nCall ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNCall( p_cellcb, subscript, nCall )
#define cCelltypeInfo_getCallInfo( subscript, ith, desc ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getCallInfo( p_cellcb, subscript, ith, desc )
#define cCelltypeInfo_getNEntry( subscript, nEntry ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getNEntry( p_cellcb, subscript, nEntry )
#define cCelltypeInfo_getEntryInfo( subscript, ith, desc ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_getEntryInfo( p_cellcb, subscript, ith, desc )
#define cCelltypeInfo_isSingleton( subscript ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_isSingleton( p_cellcb, subscript )
#define cCelltypeInfo_isIDX_is_ID( subscript ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_isIDX_is_ID( p_cellcb, subscript )
#define cCelltypeInfo_hasCB( subscript ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_hasCB( p_cellcb, subscript )
#define cCelltypeInfo_hasINIB( subscript ) \
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_hasINIB( p_cellcb, subscript )
#define cNamespaceInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tNamespaceInfo_cNamespaceInfo_getName( p_cellcb, subscript, name, max_len )
#define cNamespaceInfo_getNameLength( subscript, len ) \
          nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNameLength( p_cellcb, subscript, len )
#define cNamespaceInfo_getNNamespace( subscript, num ) \
          nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNNamespace( p_cellcb, subscript, num )
#define cNamespaceInfo_getNamespaceInfo( subscript, ith, des ) \
          nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNamespaceInfo( p_cellcb, subscript, ith, des )
#define cNamespaceInfo_getNSignature( subscript, num ) \
          nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNSignature( p_cellcb, subscript, num )
#define cNamespaceInfo_getSignatureInfo( subscript, ith, des ) \
          nTECSInfo_tNamespaceInfo_cNamespaceInfo_getSignatureInfo( p_cellcb, subscript, ith, des )
#define cNamespaceInfo_getNCelltype( subscript, num ) \
          nTECSInfo_tNamespaceInfo_cNamespaceInfo_getNCelltype( p_cellcb, subscript, num )
#define cNamespaceInfo_getCelltypeInfo( subscript, ith, des ) \
          nTECSInfo_tNamespaceInfo_cNamespaceInfo_getCelltypeInfo( p_cellcb, subscript, ith, des )


/* �ǥ�������ץ����ȥޥ����û�̷��� #_CRDA_# */
#define cSignatureInfo_refer_to_descriptor( i )\
          nTECSInfo_tNamespaceInfo_cSignatureInfo_refer_to_descriptor( p_cellcb, i )
#define cSignatureInfo_ref_desc( i )\
          cSignatureInfo_refer_to_descriptor( i )
#define cCelltypeInfo_refer_to_descriptor( i )\
          nTECSInfo_tNamespaceInfo_cCelltypeInfo_refer_to_descriptor( p_cellcb, i )
#define cCelltypeInfo_ref_desc( i )\
          cCelltypeInfo_refer_to_descriptor( i )
#define cNamespaceInfo_refer_to_descriptor( i )\
          nTECSInfo_tNamespaceInfo_cNamespaceInfo_refer_to_descriptor( p_cellcb, i )
#define cNamespaceInfo_ref_desc( i )\
          cNamespaceInfo_refer_to_descriptor( i )


/* optional �ƤӸ���ƥ��Ȥ���ޥ����û�̷��� #_TOCPA_# */
#define is_cSignatureInfo_joined(subscript)\
		nTECSInfo_tNamespaceInfo_is_cSignatureInfo_joined(p_cellcb,subscript)
#define is_cCelltypeInfo_joined(subscript)\
		nTECSInfo_tNamespaceInfo_is_cCelltypeInfo_joined(p_cellcb,subscript)
#define is_cNamespaceInfo_joined(subscript)\
		nTECSInfo_tNamespaceInfo_is_cNamespaceInfo_joined(p_cellcb,subscript)

/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eNamespaceInfo_getName nTECSInfo_tNamespaceInfo_eNamespaceInfo_getName
#define eNamespaceInfo_getNameLength nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNameLength
#define eNamespaceInfo_getNNamespace nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNNamespace
#define eNamespaceInfo_getNamespaceInfo nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNamespaceInfo
#define eNamespaceInfo_getNSignature nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNSignature
#define eNamespaceInfo_getSignatureInfo nTECSInfo_tNamespaceInfo_eNamespaceInfo_getSignatureInfo
#define eNamespaceInfo_getNCelltype nTECSInfo_tNamespaceInfo_eNamespaceInfo_getNCelltype
#define eNamespaceInfo_getCelltypeInfo nTECSInfo_tNamespaceInfo_eNamespaceInfo_getCelltypeInfo

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tNamespaceInfo_N_CELL; (i)++ ){ \
       (p_cb) = &nTECSInfo_tNamespaceInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tNamespaceInfo_TECSGENH */
