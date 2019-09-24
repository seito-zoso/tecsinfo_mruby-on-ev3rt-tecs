/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_tRegionInfo_TECSGEN_H
#define nTECSInfo_tRegionInfo_TECSGEN_H

/*
 * celltype          :  tRegionInfo
 * global name       :  nTECSInfo_tRegionInfo
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
#include "nTECSInfo_sRegionInfo_tecsgen.h"
#include "nTECSInfo_sCellInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nTECSInfo_tRegionInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sCellInfo_VDES *const*cCellInfo;
    int_t n_cCellInfo;
    struct tag_nTECSInfo_sRegionInfo_VDES *const*cRegionInfo;
    int_t n_cRegionInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char*          name;
}  nTECSInfo_tRegionInfo_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nTECSInfo_tRegionInfo_CB_tab           nTECSInfo_tRegionInfo_INIB_tab
#define nTECSInfo_tRegionInfo_SINGLE_CELL_CB   nTECSInfo_tRegionInfo_SINGLE_CELL_INIB
#define nTECSInfo_tRegionInfo_CB               nTECSInfo_tRegionInfo_INIB
#define tag_nTECSInfo_tRegionInfo_CB           tag_nTECSInfo_tRegionInfo_INIB

extern nTECSInfo_tRegionInfo_CB  nTECSInfo_tRegionInfo_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_nTECSInfo_tRegionInfo_INIB *nTECSInfo_tRegionInfo_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* nTECSInfo_sRegionInfo */
ER           nTECSInfo_tRegionInfo_eRegionInfo_getName(nTECSInfo_tRegionInfo_IDX idx, char_t* name, int_t max_len);
void         nTECSInfo_tRegionInfo_eRegionInfo_getNameLength(nTECSInfo_tRegionInfo_IDX idx, uint16_t* len);
void         nTECSInfo_tRegionInfo_eRegionInfo_getNCell(nTECSInfo_tRegionInfo_IDX idx, int32_t* num);
void         nTECSInfo_tRegionInfo_eRegionInfo_getCellInfo(nTECSInfo_tRegionInfo_IDX idx, int32_t ith, Descriptor( nTECSInfo_sCellInfo )* des);
void         nTECSInfo_tRegionInfo_eRegionInfo_getNRegion(nTECSInfo_tRegionInfo_IDX idx, int32_t* num);
void         nTECSInfo_tRegionInfo_eRegionInfo_getRegionInfo(nTECSInfo_tRegionInfo_IDX idx, int32_t ith, Descriptor( nTECSInfo_sRegionInfo )* des);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tRegionInfo_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nTECSInfo_tRegionInfo_N_CELL        (3)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nTECSInfo_tRegionInfo_VALID_IDX(IDX) (1)

/* �ƤӸ�������礭��������ޥ��� #_NCPA_# */
#define N_CP_cCellInfo(p_that)  ((p_that)->n_cCellInfo)
#define NCP_cCellInfo           (N_CP_cCellInfo(p_cellcb))
#define N_CP_cRegionInfo(p_that)  ((p_that)->n_cRegionInfo)
#define NCP_cRegionInfo           (N_CP_cRegionInfo(p_cellcb))
/* optional �ƤӸ���ƥ��Ȥ���ޥ��� #_TOCP_# */
#define nTECSInfo_tRegionInfo_is_cCellInfo_joined(p_that,subscript) \
	  (((p_that)->cCellInfo!=0)\
	  &&((p_that)->cCellInfo[subscript]!=0))
#define nTECSInfo_tRegionInfo_is_cRegionInfo_joined(p_that,subscript) \
	  (((p_that)->cRegionInfo!=0)\
	  &&((p_that)->cRegionInfo[subscript]!=0))

/* ����CB������ޥ��� #_GCB_# */
#define nTECSInfo_tRegionInfo_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define nTECSInfo_tRegionInfo_ATTR_name( p_that )	((p_that)->name)

#define nTECSInfo_tRegionInfo_GET_name(p_that)	((p_that)->name)



 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nTECSInfo_tRegionInfo_cCellInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cCellInfo[subscript]->VMT->getName__T( \
	   (p_that)->cCellInfo[subscript], (name), (max_len) )
#define nTECSInfo_tRegionInfo_cCellInfo_getCelltypeInfo( p_that, subscript, desc ) \
	  (p_that)->cCellInfo[subscript]->VMT->getCelltypeInfo__T( \
	   (p_that)->cCellInfo[subscript], (desc) )
#define nTECSInfo_tRegionInfo_cCellInfo_getCBP( p_that, subscript, cbp ) \
	  (p_that)->cCellInfo[subscript]->VMT->getCBP__T( \
	   (p_that)->cCellInfo[subscript], (cbp) )
#define nTECSInfo_tRegionInfo_cCellInfo_getINIBP( p_that, subscript, inibp ) \
	  (p_that)->cCellInfo[subscript]->VMT->getINIBP__T( \
	   (p_that)->cCellInfo[subscript], (inibp) )
#define nTECSInfo_tRegionInfo_cRegionInfo_getName( p_that, subscript, name, max_len ) \
	  (p_that)->cRegionInfo[subscript]->VMT->getName__T( \
	   (p_that)->cRegionInfo[subscript], (name), (max_len) )
#define nTECSInfo_tRegionInfo_cRegionInfo_getNameLength( p_that, subscript, len ) \
	  (p_that)->cRegionInfo[subscript]->VMT->getNameLength__T( \
	   (p_that)->cRegionInfo[subscript], (len) )
#define nTECSInfo_tRegionInfo_cRegionInfo_getNCell( p_that, subscript, num ) \
	  (p_that)->cRegionInfo[subscript]->VMT->getNCell__T( \
	   (p_that)->cRegionInfo[subscript], (num) )
#define nTECSInfo_tRegionInfo_cRegionInfo_getCellInfo( p_that, subscript, ith, des ) \
	  (p_that)->cRegionInfo[subscript]->VMT->getCellInfo__T( \
	   (p_that)->cRegionInfo[subscript], (ith), (des) )
#define nTECSInfo_tRegionInfo_cRegionInfo_getNRegion( p_that, subscript, num ) \
	  (p_that)->cRegionInfo[subscript]->VMT->getNRegion__T( \
	   (p_that)->cRegionInfo[subscript], (num) )
#define nTECSInfo_tRegionInfo_cRegionInfo_getRegionInfo( p_that, subscript, ith, des ) \
	  (p_that)->cRegionInfo[subscript]->VMT->getRegionInfo__T( \
	   (p_that)->cRegionInfo[subscript], (ith), (des) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eRegionInfo */
ER             nTECSInfo_tRegionInfo_eRegionInfo_getName_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd, char_t* name, int_t max_len);
void           nTECSInfo_tRegionInfo_eRegionInfo_getNameLength_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd, uint16_t* len);
void           nTECSInfo_tRegionInfo_eRegionInfo_getNCell_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd, int32_t* num);
void           nTECSInfo_tRegionInfo_eRegionInfo_getCellInfo_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sCellInfo )* des);
void           nTECSInfo_tRegionInfo_eRegionInfo_getNRegion_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd, int32_t* num);
void           nTECSInfo_tRegionInfo_eRegionInfo_getRegionInfo_skel( const struct tag_nTECSInfo_sRegionInfo_VDES *epd, int32_t ith, Descriptor( nTECSInfo_sRegionInfo )* des);

#ifndef TOPPERS_CB_TYPE_ONLY

/* �ǥ�������ץ����ȴؿ� #_CRD_# */
/* [ref_desc] cCellInfo */
Inline Descriptor( nTECSInfo_sCellInfo )
nTECSInfo_tRegionInfo_cCellInfo_refer_to_descriptor( nTECSInfo_tRegionInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sCellInfo )  des;
    nTECSInfo_tRegionInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cCellInfo );
    des.vdes = (struct tag_nTECSInfo_sCellInfo_VDES *)p_that->cCellInfo[ i ];
    return des;
}

/* [ref_desc] cRegionInfo */
Inline Descriptor( nTECSInfo_sRegionInfo )
nTECSInfo_tRegionInfo_cRegionInfo_refer_to_descriptor( nTECSInfo_tRegionInfo_CB  *p_that, int_t  i  )
{
    Descriptor( nTECSInfo_sRegionInfo )  des;
    nTECSInfo_tRegionInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    assert( 0 <= i && i < NCP_cRegionInfo );
    des.vdes = (struct tag_nTECSInfo_sRegionInfo_VDES *)p_that->cRegionInfo[ i ];
    return des;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tRegionInfo_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tRegionInfo_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nTECSInfo_tRegionInfo_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tRegionInfo_IDX

#define tRegionInfo_IDX  nTECSInfo_tRegionInfo_IDX

/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_name            nTECSInfo_tRegionInfo_ATTR_name( p_cellcb )


/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cCellInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tRegionInfo_cCellInfo_getName( p_cellcb, subscript, name, max_len )
#define cCellInfo_getCelltypeInfo( subscript, desc ) \
          nTECSInfo_tRegionInfo_cCellInfo_getCelltypeInfo( p_cellcb, subscript, desc )
#define cCellInfo_getCBP( subscript, cbp ) \
          nTECSInfo_tRegionInfo_cCellInfo_getCBP( p_cellcb, subscript, cbp )
#define cCellInfo_getINIBP( subscript, inibp ) \
          nTECSInfo_tRegionInfo_cCellInfo_getINIBP( p_cellcb, subscript, inibp )
#define cRegionInfo_getName( subscript, name, max_len ) \
          nTECSInfo_tRegionInfo_cRegionInfo_getName( p_cellcb, subscript, name, max_len )
#define cRegionInfo_getNameLength( subscript, len ) \
          nTECSInfo_tRegionInfo_cRegionInfo_getNameLength( p_cellcb, subscript, len )
#define cRegionInfo_getNCell( subscript, num ) \
          nTECSInfo_tRegionInfo_cRegionInfo_getNCell( p_cellcb, subscript, num )
#define cRegionInfo_getCellInfo( subscript, ith, des ) \
          nTECSInfo_tRegionInfo_cRegionInfo_getCellInfo( p_cellcb, subscript, ith, des )
#define cRegionInfo_getNRegion( subscript, num ) \
          nTECSInfo_tRegionInfo_cRegionInfo_getNRegion( p_cellcb, subscript, num )
#define cRegionInfo_getRegionInfo( subscript, ith, des ) \
          nTECSInfo_tRegionInfo_cRegionInfo_getRegionInfo( p_cellcb, subscript, ith, des )


/* �ǥ�������ץ����ȥޥ����û�̷��� #_CRDA_# */
#define cCellInfo_refer_to_descriptor( i )\
          nTECSInfo_tRegionInfo_cCellInfo_refer_to_descriptor( p_cellcb, i )
#define cCellInfo_ref_desc( i )\
          cCellInfo_refer_to_descriptor( i )
#define cRegionInfo_refer_to_descriptor( i )\
          nTECSInfo_tRegionInfo_cRegionInfo_refer_to_descriptor( p_cellcb, i )
#define cRegionInfo_ref_desc( i )\
          cRegionInfo_refer_to_descriptor( i )


/* optional �ƤӸ���ƥ��Ȥ���ޥ����û�̷��� #_TOCPA_# */
#define is_cCellInfo_joined(subscript)\
		nTECSInfo_tRegionInfo_is_cCellInfo_joined(p_cellcb,subscript)
#define is_cRegionInfo_joined(subscript)\
		nTECSInfo_tRegionInfo_is_cRegionInfo_joined(p_cellcb,subscript)

/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eRegionInfo_getName nTECSInfo_tRegionInfo_eRegionInfo_getName
#define eRegionInfo_getNameLength nTECSInfo_tRegionInfo_eRegionInfo_getNameLength
#define eRegionInfo_getNCell nTECSInfo_tRegionInfo_eRegionInfo_getNCell
#define eRegionInfo_getCellInfo nTECSInfo_tRegionInfo_eRegionInfo_getCellInfo
#define eRegionInfo_getNRegion nTECSInfo_tRegionInfo_eRegionInfo_getNRegion
#define eRegionInfo_getRegionInfo nTECSInfo_tRegionInfo_eRegionInfo_getRegionInfo

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tRegionInfo_N_CELL; (i)++ ){ \
       (p_cb) = &nTECSInfo_tRegionInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tRegionInfo_TECSGENH */
