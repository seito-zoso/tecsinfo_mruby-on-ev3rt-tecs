/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_tEntryInfo_TECSGEN_H
#define nTECSInfo_tEntryInfo_TECSGEN_H

/*
 * celltype          :  tEntryInfo
 * global name       :  nTECSInfo_tEntryInfo
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
#include "nTECSInfo_sSignatureInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nTECSInfo_tEntryInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sSignatureInfo_VDES const*cSignatureInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    bool_t         b_inline;
}  nTECSInfo_tEntryInfo_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nTECSInfo_tEntryInfo_CB_tab           nTECSInfo_tEntryInfo_INIB_tab
#define nTECSInfo_tEntryInfo_SINGLE_CELL_CB   nTECSInfo_tEntryInfo_SINGLE_CELL_INIB
#define nTECSInfo_tEntryInfo_CB               nTECSInfo_tEntryInfo_INIB
#define tag_nTECSInfo_tEntryInfo_CB           tag_nTECSInfo_tEntryInfo_INIB

extern nTECSInfo_tEntryInfo_CB  nTECSInfo_tEntryInfo_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_nTECSInfo_tEntryInfo_INIB *nTECSInfo_tEntryInfo_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* nTECSInfo_sEntryInfo */
ER           nTECSInfo_tEntryInfo_eEntryInfo_getName(nTECSInfo_tEntryInfo_IDX idx, char_t* name, int_t max_len);
void         nTECSInfo_tEntryInfo_eEntryInfo_getNameLength(nTECSInfo_tEntryInfo_IDX idx, uint16_t* len);
void         nTECSInfo_tEntryInfo_eEntryInfo_getSignatureInfo(nTECSInfo_tEntryInfo_IDX idx, Descriptor( nTECSInfo_sSignatureInfo )* desc);
void         nTECSInfo_tEntryInfo_eEntryInfo_getArraySize(nTECSInfo_tEntryInfo_IDX idx, uint32_t* array_size);
bool_t       nTECSInfo_tEntryInfo_eEntryInfo_isInline(nTECSInfo_tEntryInfo_IDX idx);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tEntryInfo_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nTECSInfo_tEntryInfo_N_CELL       (19)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nTECSInfo_tEntryInfo_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define nTECSInfo_tEntryInfo_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define nTECSInfo_tEntryInfo_ATTR_name( p_that )	((p_that)->name)
#define nTECSInfo_tEntryInfo_ATTR_b_inline( p_that )	((p_that)->b_inline)

#define nTECSInfo_tEntryInfo_GET_name(p_that)	((p_that)->name)
#define nTECSInfo_tEntryInfo_GET_b_inline(p_that)	((p_that)->b_inline)



 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nTECSInfo_tEntryInfo_cSignatureInfo_getName( p_that, name, max_len ) \
	  (p_that)->cSignatureInfo->VMT->getName__T( \
	   (p_that)->cSignatureInfo, (name), (max_len) )
#define nTECSInfo_tEntryInfo_cSignatureInfo_getNameLength( p_that, len ) \
	  (p_that)->cSignatureInfo->VMT->getNameLength__T( \
	   (p_that)->cSignatureInfo, (len) )
#define nTECSInfo_tEntryInfo_cSignatureInfo_getNFunction( p_that, num ) \
	  (p_that)->cSignatureInfo->VMT->getNFunction__T( \
	   (p_that)->cSignatureInfo, (num) )
#define nTECSInfo_tEntryInfo_cSignatureInfo_getFunctionInfo( p_that, ith, desc ) \
	  (p_that)->cSignatureInfo->VMT->getFunctionInfo__T( \
	   (p_that)->cSignatureInfo, (ith), (desc) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eEntryInfo */
ER             nTECSInfo_tEntryInfo_eEntryInfo_getName_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd, char_t* name, int_t max_len);
void           nTECSInfo_tEntryInfo_eEntryInfo_getNameLength_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd, uint16_t* len);
void           nTECSInfo_tEntryInfo_eEntryInfo_getSignatureInfo_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd, Descriptor( nTECSInfo_sSignatureInfo )* desc);
void           nTECSInfo_tEntryInfo_eEntryInfo_getArraySize_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd, uint32_t* array_size);
bool_t         nTECSInfo_tEntryInfo_eEntryInfo_isInline_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd);

#ifndef TOPPERS_CB_TYPE_ONLY

/* �ǥ�������ץ����ȴؿ� #_CRD_# */
/* [ref_desc] cSignatureInfo */
Inline Descriptor( nTECSInfo_sSignatureInfo )
nTECSInfo_tEntryInfo_cSignatureInfo_refer_to_descriptor( nTECSInfo_tEntryInfo_CB  *p_that )
{
    Descriptor( nTECSInfo_sSignatureInfo )  des;
    nTECSInfo_tEntryInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    des.vdes = (struct tag_nTECSInfo_sSignatureInfo_VDES *)p_that->cSignatureInfo;
    return des;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tEntryInfo_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tEntryInfo_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nTECSInfo_tEntryInfo_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tEntryInfo_IDX

#define tEntryInfo_IDX  nTECSInfo_tEntryInfo_IDX

/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_name            nTECSInfo_tEntryInfo_ATTR_name( p_cellcb )
#define ATTR_b_inline        nTECSInfo_tEntryInfo_ATTR_b_inline( p_cellcb )


/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cSignatureInfo_getName( name, max_len ) \
          nTECSInfo_tEntryInfo_cSignatureInfo_getName( p_cellcb, name, max_len )
#define cSignatureInfo_getNameLength( len ) \
          nTECSInfo_tEntryInfo_cSignatureInfo_getNameLength( p_cellcb, len )
#define cSignatureInfo_getNFunction( num ) \
          nTECSInfo_tEntryInfo_cSignatureInfo_getNFunction( p_cellcb, num )
#define cSignatureInfo_getFunctionInfo( ith, desc ) \
          nTECSInfo_tEntryInfo_cSignatureInfo_getFunctionInfo( p_cellcb, ith, desc )


/* �ǥ�������ץ����ȥޥ����û�̷��� #_CRDA_# */
#define cSignatureInfo_refer_to_descriptor()\
          nTECSInfo_tEntryInfo_cSignatureInfo_refer_to_descriptor( p_cellcb )
#define cSignatureInfo_ref_desc()\
          cSignatureInfo_refer_to_descriptor()



/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eEntryInfo_getName nTECSInfo_tEntryInfo_eEntryInfo_getName
#define eEntryInfo_getNameLength nTECSInfo_tEntryInfo_eEntryInfo_getNameLength
#define eEntryInfo_getSignatureInfo nTECSInfo_tEntryInfo_eEntryInfo_getSignatureInfo
#define eEntryInfo_getArraySize nTECSInfo_tEntryInfo_eEntryInfo_getArraySize
#define eEntryInfo_isInline nTECSInfo_tEntryInfo_eEntryInfo_isInline

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tEntryInfo_N_CELL; (i)++ ){ \
       (p_cb) = &nTECSInfo_tEntryInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tEntryInfo_TECSGENH */
