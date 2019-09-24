/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_tParamInfo_TECSGEN_H
#define nTECSInfo_tParamInfo_TECSGEN_H

/*
 * celltype          :  tParamInfo
 * global name       :  nTECSInfo_tParamInfo
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
#include "nTECSInfo_sParamInfo_tecsgen.h"
#include "nTECSInfo_sTypeInfo_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_nTECSInfo_tParamInfo_INIB {
    /* call port #_TCP_# */
    struct tag_nTECSInfo_sTypeInfo_VDES const*cTypeInfo;
    /* call port #_NEP_# */ 
    /* attribute(RO) #_ATO_# */ 
    char_t*        name;
    int8_t         dir;
    char_t*        sizeIsExpr;
    char_t*        countIsExpr;
    char_t*        stringExpr;
}  nTECSInfo_tParamInfo_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define nTECSInfo_tParamInfo_CB_tab           nTECSInfo_tParamInfo_INIB_tab
#define nTECSInfo_tParamInfo_SINGLE_CELL_CB   nTECSInfo_tParamInfo_SINGLE_CELL_INIB
#define nTECSInfo_tParamInfo_CB               nTECSInfo_tParamInfo_INIB
#define tag_nTECSInfo_tParamInfo_CB           tag_nTECSInfo_tParamInfo_INIB

extern nTECSInfo_tParamInfo_CB  nTECSInfo_tParamInfo_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_nTECSInfo_tParamInfo_INIB *nTECSInfo_tParamInfo_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* nTECSInfo_sParamInfo */
ER           nTECSInfo_tParamInfo_eParamInfo_getName(nTECSInfo_tParamInfo_IDX idx, char_t* name, int_t max_len);
void         nTECSInfo_tParamInfo_eParamInfo_getNameLength(nTECSInfo_tParamInfo_IDX idx, uint16_t* len);
ER           nTECSInfo_tParamInfo_eParamInfo_getTypeInfo(nTECSInfo_tParamInfo_IDX idx, Descriptor( nTECSInfo_sTypeInfo )* desc);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

#define nTECSInfo_tParamInfo_ID_BASE        (1)  /* ID �Υ١���  #_NIDB_# */
#define nTECSInfo_tParamInfo_N_CELL      (255)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define nTECSInfo_tParamInfo_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define nTECSInfo_tParamInfo_GET_CELLCB(idx) (idx)

/* °�����������ޥ��� #_AAM_# */
#define nTECSInfo_tParamInfo_ATTR_name( p_that )	((p_that)->name)
#define nTECSInfo_tParamInfo_ATTR_dir( p_that )	((p_that)->dir)
#define nTECSInfo_tParamInfo_ATTR_sizeIsExpr( p_that )	((p_that)->sizeIsExpr)
#define nTECSInfo_tParamInfo_ATTR_countIsExpr( p_that )	((p_that)->countIsExpr)
#define nTECSInfo_tParamInfo_ATTR_stringExpr( p_that )	((p_that)->stringExpr)

#define nTECSInfo_tParamInfo_GET_name(p_that)	((p_that)->name)
#define nTECSInfo_tParamInfo_GET_dir(p_that)	((p_that)->dir)
#define nTECSInfo_tParamInfo_GET_sizeIsExpr(p_that)	((p_that)->sizeIsExpr)
#define nTECSInfo_tParamInfo_GET_countIsExpr(p_that)	((p_that)->countIsExpr)
#define nTECSInfo_tParamInfo_GET_stringExpr(p_that)	((p_that)->stringExpr)



 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define nTECSInfo_tParamInfo_cTypeInfo_getName( p_that, name, max_len ) \
	  (p_that)->cTypeInfo->VMT->getName__T( \
	   (p_that)->cTypeInfo, (name), (max_len) )
#define nTECSInfo_tParamInfo_cTypeInfo_getNameLength( p_that, len ) \
	  (p_that)->cTypeInfo->VMT->getNameLength__T( \
	   (p_that)->cTypeInfo, (len) )
#define nTECSInfo_tParamInfo_cTypeInfo_getSize( p_that, size ) \
	  (p_that)->cTypeInfo->VMT->getSize__T( \
	   (p_that)->cTypeInfo, (size) )
#define nTECSInfo_tParamInfo_cTypeInfo_getKind( p_that, kind ) \
	  (p_that)->cTypeInfo->VMT->getKind__T( \
	   (p_that)->cTypeInfo, (kind) )
#define nTECSInfo_tParamInfo_cTypeInfo_getNType( p_that, num ) \
	  (p_that)->cTypeInfo->VMT->getNType__T( \
	   (p_that)->cTypeInfo, (num) )
#define nTECSInfo_tParamInfo_cTypeInfo_getTypeInfo( p_that, ith, desc ) \
	  (p_that)->cTypeInfo->VMT->getTypeInfo__T( \
	   (p_that)->cTypeInfo, (ith), (desc) )

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */
/* eParamInfo */
ER             nTECSInfo_tParamInfo_eParamInfo_getName_skel( const struct tag_nTECSInfo_sParamInfo_VDES *epd, char_t* name, int_t max_len);
void           nTECSInfo_tParamInfo_eParamInfo_getNameLength_skel( const struct tag_nTECSInfo_sParamInfo_VDES *epd, uint16_t* len);
ER             nTECSInfo_tParamInfo_eParamInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sParamInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc);

#ifndef TOPPERS_CB_TYPE_ONLY

/* �ǥ�������ץ����ȴؿ� #_CRD_# */
/* [ref_desc] cTypeInfo */
Inline Descriptor( nTECSInfo_sTypeInfo )
nTECSInfo_tParamInfo_cTypeInfo_refer_to_descriptor( nTECSInfo_tParamInfo_CB  *p_that )
{
    Descriptor( nTECSInfo_sTypeInfo )  des;
    nTECSInfo_tParamInfo_CB *p_cellcb = p_that;
    /* cast is ncecessary for removing 'const'  */
    des.vdes = (struct tag_nTECSInfo_sTypeInfo_VDES *)p_that->cTypeInfo;
    return des;
}

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  nTECSInfo_tParamInfo_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  nTECSInfo_tParamInfo_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	nTECSInfo_tParamInfo_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	nTECSInfo_tParamInfo_IDX

#define tParamInfo_IDX  nTECSInfo_tParamInfo_IDX

/* °�����������ޥ���(û�̷�) #_AAMA_# */
#define ATTR_name            nTECSInfo_tParamInfo_ATTR_name( p_cellcb )
#define ATTR_dir             nTECSInfo_tParamInfo_ATTR_dir( p_cellcb )
#define ATTR_sizeIsExpr      nTECSInfo_tParamInfo_ATTR_sizeIsExpr( p_cellcb )
#define ATTR_countIsExpr     nTECSInfo_tParamInfo_ATTR_countIsExpr( p_cellcb )
#define ATTR_stringExpr      nTECSInfo_tParamInfo_ATTR_stringExpr( p_cellcb )


/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cTypeInfo_getName( name, max_len ) \
          nTECSInfo_tParamInfo_cTypeInfo_getName( p_cellcb, name, max_len )
#define cTypeInfo_getNameLength( len ) \
          nTECSInfo_tParamInfo_cTypeInfo_getNameLength( p_cellcb, len )
#define cTypeInfo_getSize( size ) \
          nTECSInfo_tParamInfo_cTypeInfo_getSize( p_cellcb, size )
#define cTypeInfo_getKind( kind ) \
          nTECSInfo_tParamInfo_cTypeInfo_getKind( p_cellcb, kind )
#define cTypeInfo_getNType( num ) \
          nTECSInfo_tParamInfo_cTypeInfo_getNType( p_cellcb, num )
#define cTypeInfo_getTypeInfo( ith, desc ) \
          nTECSInfo_tParamInfo_cTypeInfo_getTypeInfo( p_cellcb, ith, desc )


/* �ǥ�������ץ����ȥޥ����û�̷��� #_CRDA_# */
#define cTypeInfo_refer_to_descriptor()\
          nTECSInfo_tParamInfo_cTypeInfo_refer_to_descriptor( p_cellcb )
#define cTypeInfo_ref_desc()\
          cTypeInfo_refer_to_descriptor()



/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eParamInfo_getName nTECSInfo_tParamInfo_eParamInfo_getName
#define eParamInfo_getNameLength nTECSInfo_tParamInfo_eParamInfo_getNameLength
#define eParamInfo_getTypeInfo nTECSInfo_tParamInfo_eParamInfo_getTypeInfo

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < nTECSInfo_tParamInfo_N_CELL; (i)++ ){ \
       (p_cb) = &nTECSInfo_tParamInfo_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* nTECSInfo_tParamInfo_TECSGENH */
