/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_tCallInfo_TECSGEN_H
#define nTECSInfo_tCallInfo_TECSGEN_H

/*
 * celltype          :  tCallInfo
 * global name       :  nTECSInfo_tCallInfo
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
#include "nTECSInfo_sCallInfo_tecsgen.h"
#include "nTECSInfo_sSignatureInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nTECSInfo_tCallInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sSignatureInfo_VDES const*cSignatureInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    uint32_t       offset;
    bool_t         b_optional;
    bool_t         b_omit;
    bool_t         b_dynamic;
    bool_t         b_ref_desc;
    bool_t         b_allocator_port;
    bool_t         b_require_port;
    uint8_t        place;
    bool_t         b_VMT_useless;
    bool_t         b_skelton_useless;
    bool_t         b_cell_unique;
}  nTECSInfo_tCallInfo_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nTECSInfo_tCallInfo_CB_tab           nTECSInfo_tCallInfo_INIB_tab
#define nTECSInfo_tCallInfo_SINGLE_CELL_CB   nTECSInfo_tCallInfo_SINGLE_CELL_INIB
#define nTECSInfo_tCallInfo_CB               nTECSInfo_tCallInfo_INIB
#define tag_nTECSInfo_tCallInfo_CB           tag_nTECSInfo_tCallInfo_INIB

extern nTECSInfo_tCallInfo_CB  nTECSInfo_tCallInfo_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_nTECSInfo_tCallInfo_INIB *nTECSInfo_tCallInfo_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* nTECSInfo_sCallInfo */
ER           nTECSInfo_tCallInfo_eCallInfo_getName(nTECSInfo_tCallInfo_IDX idx, char_t* name, int_t max_len);
void         nTECSInfo_tCallInfo_eCallInfo_getNameLength(nTECSInfo_tCallInfo_IDX idx, uint16_t* len);
void         nTECSInfo_tCallInfo_eCallInfo_getSignatureInfo(nTECSInfo_tCallInfo_IDX idx, Descriptor( nTECSInfo_sSignatureInfo )* desc);
void         nTECSInfo_tCallInfo_eCallInfo_getArraySize(nTECSInfo_tCallInfo_IDX idx, uint32_t* array_size);
void         nTECSInfo_tCallInfo_eCallInfo_getSpecifierInfo(nTECSInfo_tCallInfo_IDX idx, bool_t* b_optional, bool_t* b_dynamic, bool_t* b_ref_desc, bool_t* b_omit);
void         nTECSInfo_tCallInfo_eCallInfo_getInternalInfo(nTECSInfo_tCallInfo_IDX idx, bool_t* b_allocator_port, bool_t* b_require_port);
void         nTECSInfo_tCallInfo_eCallInfo_getLocationInfo(nTECSInfo_tCallInfo_IDX idx, uint32_t* offset, uint8_t* place);
void         nTECSInfo_tCallInfo_eCallInfo_getOptimizeInfo(nTECSInfo_tCallInfo_IDX idx, bool_t* b_VMT_useless, bool_t* b_skelton_useless, bool_t* b_cell_unique);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tCallInfo_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nTECSInfo_tCallInfo_N_CELL       (32)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nTECSInfo_tCallInfo_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define nTECSInfo_tCallInfo_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define nTECSInfo_tCallInfo_ATTR_name( p_that )	((p_that)->name)
#define nTECSInfo_tCallInfo_ATTR_offset( p_that )	((p_that)->offset)
#define nTECSInfo_tCallInfo_ATTR_b_optional( p_that )	((p_that)->b_optional)
#define nTECSInfo_tCallInfo_ATTR_b_omit( p_that )	((p_that)->b_omit)
#define nTECSInfo_tCallInfo_ATTR_b_dynamic( p_that )	((p_that)->b_dynamic)
#define nTECSInfo_tCallInfo_ATTR_b_ref_desc( p_that )	((p_that)->b_ref_desc)
#define nTECSInfo_tCallInfo_ATTR_b_allocator_port( p_that )	((p_that)->b_allocator_port)
#define nTECSInfo_tCallInfo_ATTR_b_require_port( p_that )	((p_that)->b_require_port)
#define nTECSInfo_tCallInfo_ATTR_place( p_that )	((p_that)->place)
#define nTECSInfo_tCallInfo_ATTR_b_VMT_useless( p_that )	((p_that)->b_VMT_useless)
#define nTECSInfo_tCallInfo_ATTR_b_skelton_useless( p_that )	((p_that)->b_skelton_useless)
#define nTECSInfo_tCallInfo_ATTR_b_cell_unique( p_that )	((p_that)->b_cell_unique)

#define nTECSInfo_tCallInfo_GET_name(p_that)	((p_that)->name)
#define nTECSInfo_tCallInfo_GET_offset(p_that)	((p_that)->offset)
#define nTECSInfo_tCallInfo_GET_b_optional(p_that)	((p_that)->b_optional)
#define nTECSInfo_tCallInfo_GET_b_omit(p_that)	((p_that)->b_omit)
#define nTECSInfo_tCallInfo_GET_b_dynamic(p_that)	((p_that)->b_dynamic)
#define nTECSInfo_tCallInfo_GET_b_ref_desc(p_that)	((p_that)->b_ref_desc)
#define nTECSInfo_tCallInfo_GET_b_allocator_port(p_that)	((p_that)->b_allocator_port)
#define nTECSInfo_tCallInfo_GET_b_require_port(p_that)	((p_that)->b_require_port)
#define nTECSInfo_tCallInfo_GET_place(p_that)	((p_that)->place)
#define nTECSInfo_tCallInfo_GET_b_VMT_useless(p_that)	((p_that)->b_VMT_useless)
#define nTECSInfo_tCallInfo_GET_b_skelton_useless(p_that)	((p_that)->b_skelton_useless)
#define nTECSInfo_tCallInfo_GET_b_cell_unique(p_that)	((p_that)->b_cell_unique)



 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nTECSInfo_tCallInfo_cSignatureInfo_getName( p_that, name, max_len ) \
	  (p_that)->cSignatureInfo->VMT->getName__T( \
	   (p_that)->cSignatureInfo, (name), (max_len) )
#define nTECSInfo_tCallInfo_cSignatureInfo_getNameLength( p_that, len ) \
	  (p_that)->cSignatureInfo->VMT->getNameLength__T( \
	   (p_that)->cSignatureInfo, (len) )
#define nTECSInfo_tCallInfo_cSignatureInfo_getNFunction( p_that, num ) \
	  (p_that)->cSignatureInfo->VMT->getNFunction__T( \
	   (p_that)->cSignatureInfo, (num) )
#define nTECSInfo_tCallInfo_cSignatureInfo_getFunctionInfo( p_that, ith, desc ) \
	  (p_that)->cSignatureInfo->VMT->getFunctionInfo__T( \
	   (p_that)->cSignatureInfo, (ith), (desc) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eCallInfo */
ER             nTECSInfo_tCallInfo_eCallInfo_getName_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, char_t* name, int_t max_len);
void           nTECSInfo_tCallInfo_eCallInfo_getNameLength_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, uint16_t* len);
void           nTECSInfo_tCallInfo_eCallInfo_getSignatureInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, Descriptor( nTECSInfo_sSignatureInfo )* desc);
void           nTECSInfo_tCallInfo_eCallInfo_getArraySize_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, uint32_t* array_size);
void           nTECSInfo_tCallInfo_eCallInfo_getSpecifierInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, bool_t* b_optional, bool_t* b_dynamic, bool_t* b_ref_desc, bool_t* b_omit);
void           nTECSInfo_tCallInfo_eCallInfo_getInternalInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, bool_t* b_allocator_port, bool_t* b_require_port);
void           nTECSInfo_tCallInfo_eCallInfo_getLocationInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, uint32_t* offset, uint8_t* place);
void           nTECSInfo_tCallInfo_eCallInfo_getOptimizeInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, bool_t* b_VMT_useless, bool_t* b_skelton_useless, bool_t* b_cell_unique);

#ifndef TOPPERS_CB_TYPE_ONLY

/* �ǥ�������ץ����ȴؿ� #_CRD_# */
/* [ref_desc] cSignatureInfo */
Inline Descriptor( nTECSInfo_sSignatureInfo )
nTECSInfo_tCallInfo_cSignatureInfo_refer_to_descriptor( nTECSInfo_tCallInfo_CB  *p_that )
{
    Descriptor( nTECSInfo_sSignatureInfo )  des;
    nTECSInfo_tCallInfo_CB *p_cellcb = p_that;
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
#define VALID_IDX(IDX)  nTECSInfo_tCallInfo_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tCallInfo_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nTECSInfo_tCallInfo_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tCallInfo_IDX

#define tCallInfo_IDX  nTECSInfo_tCallInfo_IDX

/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_name            nTECSInfo_tCallInfo_ATTR_name( p_cellcb )
#define ATTR_offset          nTECSInfo_tCallInfo_ATTR_offset( p_cellcb )
#define ATTR_b_optional      nTECSInfo_tCallInfo_ATTR_b_optional( p_cellcb )
#define ATTR_b_omit          nTECSInfo_tCallInfo_ATTR_b_omit( p_cellcb )
#define ATTR_b_dynamic       nTECSInfo_tCallInfo_ATTR_b_dynamic( p_cellcb )
#define ATTR_b_ref_desc      nTECSInfo_tCallInfo_ATTR_b_ref_desc( p_cellcb )
#define ATTR_b_allocator_port nTECSInfo_tCallInfo_ATTR_b_allocator_port( p_cellcb )
#define ATTR_b_require_port  nTECSInfo_tCallInfo_ATTR_b_require_port( p_cellcb )
#define ATTR_place           nTECSInfo_tCallInfo_ATTR_place( p_cellcb )
#define ATTR_b_VMT_useless   nTECSInfo_tCallInfo_ATTR_b_VMT_useless( p_cellcb )
#define ATTR_b_skelton_useless nTECSInfo_tCallInfo_ATTR_b_skelton_useless( p_cellcb )
#define ATTR_b_cell_unique   nTECSInfo_tCallInfo_ATTR_b_cell_unique( p_cellcb )


/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cSignatureInfo_getName( name, max_len ) \
          nTECSInfo_tCallInfo_cSignatureInfo_getName( p_cellcb, name, max_len )
#define cSignatureInfo_getNameLength( len ) \
          nTECSInfo_tCallInfo_cSignatureInfo_getNameLength( p_cellcb, len )
#define cSignatureInfo_getNFunction( num ) \
          nTECSInfo_tCallInfo_cSignatureInfo_getNFunction( p_cellcb, num )
#define cSignatureInfo_getFunctionInfo( ith, desc ) \
          nTECSInfo_tCallInfo_cSignatureInfo_getFunctionInfo( p_cellcb, ith, desc )


/* �ǥ�������ץ����ȥޥ����û�̷��� #_CRDA_# */
#define cSignatureInfo_refer_to_descriptor()\
          nTECSInfo_tCallInfo_cSignatureInfo_refer_to_descriptor( p_cellcb )
#define cSignatureInfo_ref_desc()\
          cSignatureInfo_refer_to_descriptor()



/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eCallInfo_getName nTECSInfo_tCallInfo_eCallInfo_getName
#define eCallInfo_getNameLength nTECSInfo_tCallInfo_eCallInfo_getNameLength
#define eCallInfo_getSignatureInfo nTECSInfo_tCallInfo_eCallInfo_getSignatureInfo
#define eCallInfo_getArraySize nTECSInfo_tCallInfo_eCallInfo_getArraySize
#define eCallInfo_getSpecifierInfo nTECSInfo_tCallInfo_eCallInfo_getSpecifierInfo
#define eCallInfo_getInternalInfo nTECSInfo_tCallInfo_eCallInfo_getInternalInfo
#define eCallInfo_getLocationInfo nTECSInfo_tCallInfo_eCallInfo_getLocationInfo
#define eCallInfo_getOptimizeInfo nTECSInfo_tCallInfo_eCallInfo_getOptimizeInfo

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tCallInfo_N_CELL; (i)++ ){ \
       (p_cb) = &nTECSInfo_tCallInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tCallInfo_TECSGENH */
