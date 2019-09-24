/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_tSignatureInfo_TECSGEN_H
#define nTECSInfo_tSignatureInfo_TECSGEN_H

/*
 * celltype          :  tSignatureInfo
 * global name       :  nTECSInfo_tSignatureInfo
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
#include "nTECSInfo_sSignatureInfo_tecsgen.h"
#include "nTECSInfo_sFunctionInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nTECSInfo_tSignatureInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sFunctionInfo_VDES *const*cFunctionInfo;
    int_t n_cFunctionInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char*          name;
}  nTECSInfo_tSignatureInfo_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nTECSInfo_tSignatureInfo_CB_tab           nTECSInfo_tSignatureInfo_INIB_tab
#define nTECSInfo_tSignatureInfo_SINGLE_CELL_CB   nTECSInfo_tSignatureInfo_SINGLE_CELL_INIB
#define nTECSInfo_tSignatureInfo_CB               nTECSInfo_tSignatureInfo_INIB
#define tag_nTECSInfo_tSignatureInfo_CB           tag_nTECSInfo_tSignatureInfo_INIB

extern nTECSInfo_tSignatureInfo_CB  nTECSInfo_tSignatureInfo_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_nTECSInfo_tSignatureInfo_INIB *nTECSInfo_tSignatureInfo_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* nTECSInfo_sSignatureInfo */
ER           nTECSInfo_tSignatureInfo_eSignatureInfo_getName(nTECSInfo_tSignatureInfo_IDX idx, char_t* name, int_t max_len);
void         nTECSInfo_tSignatureInfo_eSignatureInfo_getNameLength(nTECSInfo_tSignatureInfo_IDX idx, uint16_t* len);
void         nTECSInfo_tSignatureInfo_eSignatureInfo_getNFunction(nTECSInfo_tSignatureInfo_IDX idx, int32_t* num);
void         nTECSInfo_tSignatureInfo_eSignatureInfo_getFunctionInfo(nTECSInfo_tSignatureInfo_IDX idx, int32_t ith, Descriptor( nTECSInfo_sFunctionInfo )* desc);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tSignatureInfo_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nTECSInfo_tSignatureInfo_N_CELL       (53)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nTECSInfo_tSignatureInfo_VALID_IDX(IDX) (1)

/* �ƤӸ�������礭��������ޥ��� #_NCPA_# */
#define N_CP_cFunctionInfo(p_that)  ((p_that)->n_cFunctionInfo)
#define NCP_cFunctionInfo           (N_CP_cFunctionInfo(p_cellcb))
/* optional �ƤӸ���ƥ��Ȥ���ޥ��� #_TOCP_# */
#define nTECSInfo_tSignatureInfo_is_cFunctionInfo_joined(p_that,subscript) \
	  (((p_that)->cFunctionInfo!=0)\
	  &&((p_that)->cFunctionInfo[subscript]!=0))

/* ����CB������ޥ��� #_GCB_# */
#define nTECSInfo_tSignatureInfo_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define nTECSInfo_tSignatureInfo_ATTR_name( p_that )	((p_that)->name)

#define nTECSInfo_tSignatureInfo_GET_name(p_that)	((p_that)->name)



 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nTECSInfo_tSignatureInfo_cFunctionInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cFunctionInfo[subscript]->VMT->getName__T( \
	   (p_that)->cFunctionInfo[subscript], (name), (max_len) )
#define nTECSInfo_tSignatureInfo_cFunctionInfo_getNameLength( p_that, subscript, len ) \
	  (p_that)->cFunctionInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cFunctionInfo[subscript], (len) )
#define nTECSInfo_tSignatureInfo_cFunctionInfo_getReturnTypeInfo( p_that, subscript, desc ) \
	  (p_that)->cFunctionInfo[subscript]->VMT->getReturnTypeInfo__T( \
	   (p_that)->cFunctionInfo[subscript], (desc) )
#define nTECSInfo_tSignatureInfo_cFunctionInfo_getNParam( p_that, subscript, num ) \
	  (p_that)->cFunctionInfo[subscript]->VMT->getNParam__T( \
	   (p_that)->cFunctionInfo[subscript], (num) )
#define nTECSInfo_tSignatureInfo_cFunctionInfo_getParamInfo( p_that, subscript, ith, param ) \
	  (p_that)->cFunctionInfo[subscript]->VMT->getParamInfo__T( \
	   (p_that)->cFunctionInfo[subscript], (ith), (param) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eSignatureInfo */
ER             nTECSInfo_tSignatureInfo_eSignatureInfo_getName_skel( const struct tag_nTECSInfo_sSignatureInfo_VDES *epd, char_t* name, int_t max_len);
void           nTECSInfo_tSignatureInfo_eSignatureInfo_getNameLength_skel( const struct tag_nTECSInfo_sSignatureInfo_VDES *epd, uint16_t* len);
void           nTECSInfo_tSignatureInfo_eSignatureInfo_getNFunction_skel( const struct tag_nTECSInfo_sSignatureInfo_VDES *epd, int32_t* num);
void           nTECSInfo_tSignatureInfo_eSignatureInfo_getFunctionInfo_skel( const struct tag_nTECSInfo_sSignatureInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sFunctionInfo )* desc);

#ifndef TOPPERS_CB_TYPE_ONLY

/* �ǥ�������ץ����ȴؿ� #_CRD_# */
/* [ref_desc] cFunctionInfo */
Inline Descriptor( nTECSInfo_sFunctionInfo )
nTECSInfo_tSignatureInfo_cFunctionInfo_refer_to_descriptor( nTECSInfo_tSignatureInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sFunctionInfo )  des;
    nTECSInfo_tSignatureInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cFunctionInfo );
    des.vdes = (struct tag_nTECSInfo_sFunctionInfo_VDES *)p_that->cFunctionInfo[ i ];
    return des;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tSignatureInfo_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tSignatureInfo_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nTECSInfo_tSignatureInfo_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tSignatureInfo_IDX

#define tSignatureInfo_IDX  nTECSInfo_tSignatureInfo_IDX

/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_name            nTECSInfo_tSignatureInfo_ATTR_name( p_cellcb )


/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cFunctionInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tSignatureInfo_cFunctionInfo_getName( p_cellcb, subscript, name, max_len )
#define cFunctionInfo_getNameLength( subscript, len ) \
          nTECSInfo_tSignatureInfo_cFunctionInfo_getNameLength( p_cellcb, subscript, len )
#define cFunctionInfo_getReturnTypeInfo( subscript, desc ) \
          nTECSInfo_tSignatureInfo_cFunctionInfo_getReturnTypeInfo( p_cellcb, subscript, desc )
#define cFunctionInfo_getNParam( subscript, num ) \
          nTECSInfo_tSignatureInfo_cFunctionInfo_getNParam( p_cellcb, subscript, num )
#define cFunctionInfo_getParamInfo( subscript, ith, param ) \
          nTECSInfo_tSignatureInfo_cFunctionInfo_getParamInfo( p_cellcb, subscript, ith, param )


/* �ǥ�������ץ����ȥޥ����û�̷��� #_CRDA_# */
#define cFunctionInfo_refer_to_descriptor( i )\
          nTECSInfo_tSignatureInfo_cFunctionInfo_refer_to_descriptor( p_cellcb, i )
#define cFunctionInfo_ref_desc( i )\
          cFunctionInfo_refer_to_descriptor( i )


/* optional �ƤӸ���ƥ��Ȥ���ޥ����û�̷��� #_TOCPA_# */
#define is_cFunctionInfo_joined(subscript)\
		nTECSInfo_tSignatureInfo_is_cFunctionInfo_joined(p_cellcb,subscript)

/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eSignatureInfo_getName nTECSInfo_tSignatureInfo_eSignatureInfo_getName
#define eSignatureInfo_getNameLength nTECSInfo_tSignatureInfo_eSignatureInfo_getNameLength
#define eSignatureInfo_getNFunction nTECSInfo_tSignatureInfo_eSignatureInfo_getNFunction
#define eSignatureInfo_getFunctionInfo nTECSInfo_tSignatureInfo_eSignatureInfo_getFunctionInfo

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tSignatureInfo_N_CELL; (i)++ ){ \
       (p_cb) = &nTECSInfo_tSignatureInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tSignatureInfo_TECSGENH */
