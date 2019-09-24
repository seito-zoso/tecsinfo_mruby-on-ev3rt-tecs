/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_tStructTypeInfo_TECSGEN_H
#define nTECSInfo_tStructTypeInfo_TECSGEN_H

/*
 * celltype          :  tStructTypeInfo
 * global name       :  nTECSInfo_tStructTypeInfo
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
#include "nTECSInfo_sTypeInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nTECSInfo_tStructTypeInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sTypeInfo_VDES *const*cTypeInfo;
    int_t n_cTypeInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    int8_t         typeKind;
    int32_t        bitSize;
    bool_t         b_const;
    bool_t         b_volatile;
}  nTECSInfo_tStructTypeInfo_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nTECSInfo_tStructTypeInfo_CB_tab           nTECSInfo_tStructTypeInfo_INIB_tab
#define nTECSInfo_tStructTypeInfo_SINGLE_CELL_CB   nTECSInfo_tStructTypeInfo_SINGLE_CELL_INIB
#define nTECSInfo_tStructTypeInfo_CB               nTECSInfo_tStructTypeInfo_INIB
#define tag_nTECSInfo_tStructTypeInfo_CB           tag_nTECSInfo_tStructTypeInfo_INIB

extern nTECSInfo_tStructTypeInfo_CB  nTECSInfo_tStructTypeInfo_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_nTECSInfo_tStructTypeInfo_INIB *nTECSInfo_tStructTypeInfo_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* nTECSInfo_sTypeInfo */
ER           nTECSInfo_tStructTypeInfo_eTypeInfo_getName(nTECSInfo_tStructTypeInfo_IDX idx, char_t* name, int_t max_len);
void         nTECSInfo_tStructTypeInfo_eTypeInfo_getNameLength(nTECSInfo_tStructTypeInfo_IDX idx, uint16_t* len);
void         nTECSInfo_tStructTypeInfo_eTypeInfo_getSize(nTECSInfo_tStructTypeInfo_IDX idx, uint32_t* size);
void         nTECSInfo_tStructTypeInfo_eTypeInfo_getKind(nTECSInfo_tStructTypeInfo_IDX idx, int8_t* kind);
void         nTECSInfo_tStructTypeInfo_eTypeInfo_getNType(nTECSInfo_tStructTypeInfo_IDX idx, int32_t* num);
void         nTECSInfo_tStructTypeInfo_eTypeInfo_getTypeInfo(nTECSInfo_tStructTypeInfo_IDX idx, int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tStructTypeInfo_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nTECSInfo_tStructTypeInfo_N_CELL       (12)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nTECSInfo_tStructTypeInfo_VALID_IDX(IDX) (1)

/* �ƤӸ�������礭��������ޥ��� #_NCPA_# */
#define N_CP_cTypeInfo(p_that)  ((p_that)->n_cTypeInfo)
#define NCP_cTypeInfo           (N_CP_cTypeInfo(p_cellcb))

/* ����CB������ޥ��� #_GCB_# */
#define nTECSInfo_tStructTypeInfo_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define nTECSInfo_tStructTypeInfo_ATTR_name( p_that )	((p_that)->name)
#define nTECSInfo_tStructTypeInfo_ATTR_typeKind( p_that )	((p_that)->typeKind)
#define nTECSInfo_tStructTypeInfo_ATTR_bitSize( p_that )	((p_that)->bitSize)
#define nTECSInfo_tStructTypeInfo_ATTR_b_const( p_that )	((p_that)->b_const)
#define nTECSInfo_tStructTypeInfo_ATTR_b_volatile( p_that )	((p_that)->b_volatile)

#define nTECSInfo_tStructTypeInfo_GET_name(p_that)	((p_that)->name)
#define nTECSInfo_tStructTypeInfo_GET_typeKind(p_that)	((p_that)->typeKind)
#define nTECSInfo_tStructTypeInfo_GET_bitSize(p_that)	((p_that)->bitSize)
#define nTECSInfo_tStructTypeInfo_GET_b_const(p_that)	((p_that)->b_const)
#define nTECSInfo_tStructTypeInfo_GET_b_volatile(p_that)	((p_that)->b_volatile)



 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nTECSInfo_tStructTypeInfo_cTypeInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cTypeInfo[subscript]->VMT->getName__T( \
	   (p_that)->cTypeInfo[subscript], (name), (max_len) )
#define nTECSInfo_tStructTypeInfo_cTypeInfo_getNameLength( p_that, subscript, len ) \
	  (p_that)->cTypeInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cTypeInfo[subscript], (len) )
#define nTECSInfo_tStructTypeInfo_cTypeInfo_getSize( p_that, subscript, size ) \
	  (p_that)->cTypeInfo[subscript]->VMT->getSize__T( \
	   (p_that)->cTypeInfo[subscript], (size) )
#define nTECSInfo_tStructTypeInfo_cTypeInfo_getKind( p_that, subscript, kind ) \
	  (p_that)->cTypeInfo[subscript]->VMT->getKind__T( \
	   (p_that)->cTypeInfo[subscript], (kind) )
#define nTECSInfo_tStructTypeInfo_cTypeInfo_getNType( p_that, subscript, num ) \
	  (p_that)->cTypeInfo[subscript]->VMT->getNType__T( \
	   (p_that)->cTypeInfo[subscript], (num) )
#define nTECSInfo_tStructTypeInfo_cTypeInfo_getTypeInfo( p_that, subscript, ith, desc ) \
	  (p_that)->cTypeInfo[subscript]->VMT->getTypeInfo__T( \
	   (p_that)->cTypeInfo[subscript], (ith), (desc) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eTypeInfo */
ER             nTECSInfo_tStructTypeInfo_eTypeInfo_getName_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, char_t* name, int_t max_len);
void           nTECSInfo_tStructTypeInfo_eTypeInfo_getNameLength_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint16_t* len);
void           nTECSInfo_tStructTypeInfo_eTypeInfo_getSize_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, uint32_t* size);
void           nTECSInfo_tStructTypeInfo_eTypeInfo_getKind_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int8_t* kind);
void           nTECSInfo_tStructTypeInfo_eTypeInfo_getNType_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t* num);
void           nTECSInfo_tStructTypeInfo_eTypeInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sTypeInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sTypeInfo )* desc);

#ifndef TOPPERS_CB_TYPE_ONLY

/* �ǥ�������ץ����ȴؿ� #_CRD_# */
/* [ref_desc] cTypeInfo */
Inline Descriptor( nTECSInfo_sTypeInfo )
nTECSInfo_tStructTypeInfo_cTypeInfo_refer_to_descriptor( nTECSInfo_tStructTypeInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sTypeInfo )  des;
    nTECSInfo_tStructTypeInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cTypeInfo );
    des.vdes = (struct tag_nTECSInfo_sTypeInfo_VDES *)p_that->cTypeInfo[ i ];
    return des;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tStructTypeInfo_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tStructTypeInfo_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nTECSInfo_tStructTypeInfo_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tStructTypeInfo_IDX

#define tStructTypeInfo_IDX  nTECSInfo_tStructTypeInfo_IDX

/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_name            nTECSInfo_tStructTypeInfo_ATTR_name( p_cellcb )
#define ATTR_typeKind        nTECSInfo_tStructTypeInfo_ATTR_typeKind( p_cellcb )
#define ATTR_bitSize         nTECSInfo_tStructTypeInfo_ATTR_bitSize( p_cellcb )
#define ATTR_b_const         nTECSInfo_tStructTypeInfo_ATTR_b_const( p_cellcb )
#define ATTR_b_volatile      nTECSInfo_tStructTypeInfo_ATTR_b_volatile( p_cellcb )


/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cTypeInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tStructTypeInfo_cTypeInfo_getName( p_cellcb, subscript, name, max_len )
#define cTypeInfo_getNameLength( subscript, len ) \
          nTECSInfo_tStructTypeInfo_cTypeInfo_getNameLength( p_cellcb, subscript, len )
#define cTypeInfo_getSize( subscript, size ) \
          nTECSInfo_tStructTypeInfo_cTypeInfo_getSize( p_cellcb, subscript, size )
#define cTypeInfo_getKind( subscript, kind ) \
          nTECSInfo_tStructTypeInfo_cTypeInfo_getKind( p_cellcb, subscript, kind )
#define cTypeInfo_getNType( subscript, num ) \
          nTECSInfo_tStructTypeInfo_cTypeInfo_getNType( p_cellcb, subscript, num )
#define cTypeInfo_getTypeInfo( subscript, ith, desc ) \
          nTECSInfo_tStructTypeInfo_cTypeInfo_getTypeInfo( p_cellcb, subscript, ith, desc )


/* �ǥ�������ץ����ȥޥ����û�̷��� #_CRDA_# */
#define cTypeInfo_refer_to_descriptor( i )\
          nTECSInfo_tStructTypeInfo_cTypeInfo_refer_to_descriptor( p_cellcb, i )
#define cTypeInfo_ref_desc( i )\
          cTypeInfo_refer_to_descriptor( i )



/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eTypeInfo_getName nTECSInfo_tStructTypeInfo_eTypeInfo_getName
#define eTypeInfo_getNameLength nTECSInfo_tStructTypeInfo_eTypeInfo_getNameLength
#define eTypeInfo_getSize nTECSInfo_tStructTypeInfo_eTypeInfo_getSize
#define eTypeInfo_getKind nTECSInfo_tStructTypeInfo_eTypeInfo_getKind
#define eTypeInfo_getNType nTECSInfo_tStructTypeInfo_eTypeInfo_getNType
#define eTypeInfo_getTypeInfo nTECSInfo_tStructTypeInfo_eTypeInfo_getTypeInfo

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tStructTypeInfo_N_CELL; (i)++ ){ \
       (p_cb) = &nTECSInfo_tStructTypeInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tStructTypeInfo_TECSGENH */
