/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_sVarDeclInfo_TECSGEN_H
#define nTECSInfo_sVarDeclInfo_TECSGEN_H

/*
 * signature   :  sVarDeclInfo
 * global name :  nTECSInfo_sVarDeclInfo
 * context     :  task
 */

/* �����˥���ǥ�������ץ����ȥإå� #_SDI_# */
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sTypeInfo_Defined
#define  Descriptor_of_nTECSInfo_sTypeInfo_Defined
typedef struct { struct tag_nTECSInfo_sTypeInfo_VDES *vdes; } Descriptor( nTECSInfo_sTypeInfo );
#endif

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_nTECSInfo_sVarDeclInfo_VDES {
    struct tag_nTECSInfo_sVarDeclInfo_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_nTECSInfo_sVarDeclInfo_VMT {
    ER             (*getName__T)( const struct tag_nTECSInfo_sVarDeclInfo_VDES *edp, char_t* name, int_t max_len );
    void           (*getOffset__T)( const struct tag_nTECSInfo_sVarDeclInfo_VDES *edp, uint32_t* offset );
    void           (*getTypeInfo__T)( const struct tag_nTECSInfo_sVarDeclInfo_VDES *edp, Descriptor( nTECSInfo_sTypeInfo )* desc );
    void           (*getSizeIsExpr__T)( const struct tag_nTECSInfo_sVarDeclInfo_VDES *edp, uint32_t* expr_str, int32_t max_len );
    ER             (*getSizeIs__T)( const struct tag_nTECSInfo_sVarDeclInfo_VDES *edp, uint32_t* size, const void* p_cb );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_nTECSInfo_sVarDeclInfo_Defined
#define  Descriptor_of_nTECSInfo_sVarDeclInfo_Defined
typedef struct { struct tag_nTECSInfo_sVarDeclInfo_VDES *vdes; } Descriptor( nTECSInfo_sVarDeclInfo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NTECSINFO_SVARDECLINFO_GETNAME  (1)
#define	FUNCID_NTECSINFO_SVARDECLINFO_GETOFFSET (2)
#define	FUNCID_NTECSINFO_SVARDECLINFO_GETTYPEINFO (3)
#define	FUNCID_NTECSINFO_SVARDECLINFO_GETSIZEISEXPR (4)
#define	FUNCID_NTECSINFO_SVARDECLINFO_GETSIZEIS (5)

#endif /* nTECSInfo_sVarDeclInfo_TECSGEN_H */
