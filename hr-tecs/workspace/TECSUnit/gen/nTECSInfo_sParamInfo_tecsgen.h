/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_sParamInfo_TECSGEN_H
#define nTECSInfo_sParamInfo_TECSGEN_H

/*
 * signature   :  sParamInfo
 * global name :  nTECSInfo_sParamInfo
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
struct tag_nTECSInfo_sParamInfo_VDES {
    struct tag_nTECSInfo_sParamInfo_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_nTECSInfo_sParamInfo_VMT {
    ER             (*getName__T)( const struct tag_nTECSInfo_sParamInfo_VDES *edp, char_t* name, int_t max_len );
    void           (*getNameLength__T)( const struct tag_nTECSInfo_sParamInfo_VDES *edp, uint16_t* len );
    ER             (*getTypeInfo__T)( const struct tag_nTECSInfo_sParamInfo_VDES *edp, Descriptor( nTECSInfo_sTypeInfo )* desc );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_nTECSInfo_sParamInfo_Defined
#define  Descriptor_of_nTECSInfo_sParamInfo_Defined
typedef struct { struct tag_nTECSInfo_sParamInfo_VDES *vdes; } Descriptor( nTECSInfo_sParamInfo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NTECSINFO_SPARAMINFO_GETNAME    (1)
#define	FUNCID_NTECSINFO_SPARAMINFO_GETNAMELENGTH (2)
#define	FUNCID_NTECSINFO_SPARAMINFO_GETTYPEINFO (3)

#endif /* nTECSInfo_sParamInfo_TECSGEN_H */
