/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_sFunctionInfo_TECSGEN_H
#define nTECSInfo_sFunctionInfo_TECSGEN_H

/*
 * signature   :  sFunctionInfo
 * global name :  nTECSInfo_sFunctionInfo
 * context     :  task
 */

/* �����˥���ǥ�������ץ����ȥإå� #_SDI_# */
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sTypeInfo_Defined
#define  Descriptor_of_nTECSInfo_sTypeInfo_Defined
typedef struct { struct tag_nTECSInfo_sTypeInfo_VDES *vdes; } Descriptor( nTECSInfo_sTypeInfo );
#endif
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sParamInfo_Defined
#define  Descriptor_of_nTECSInfo_sParamInfo_Defined
typedef struct { struct tag_nTECSInfo_sParamInfo_VDES *vdes; } Descriptor( nTECSInfo_sParamInfo );
#endif

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_nTECSInfo_sFunctionInfo_VDES {
    struct tag_nTECSInfo_sFunctionInfo_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_nTECSInfo_sFunctionInfo_VMT {
    ER             (*getName__T)( const struct tag_nTECSInfo_sFunctionInfo_VDES *edp, char_t* name, int_t max_len );
    void           (*getNameLength__T)( const struct tag_nTECSInfo_sFunctionInfo_VDES *edp, uint16_t* len );
    void           (*getReturnTypeInfo__T)( const struct tag_nTECSInfo_sFunctionInfo_VDES *edp, Descriptor( nTECSInfo_sTypeInfo )* desc );
    void           (*getNParam__T)( const struct tag_nTECSInfo_sFunctionInfo_VDES *edp, int32_t* num );
    ER             (*getParamInfo__T)( const struct tag_nTECSInfo_sFunctionInfo_VDES *edp, int32_t ith, Descriptor( nTECSInfo_sParamInfo )* param );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_nTECSInfo_sFunctionInfo_Defined
#define  Descriptor_of_nTECSInfo_sFunctionInfo_Defined
typedef struct { struct tag_nTECSInfo_sFunctionInfo_VDES *vdes; } Descriptor( nTECSInfo_sFunctionInfo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NTECSINFO_SFUNCTIONINFO_GETNAME (1)
#define	FUNCID_NTECSINFO_SFUNCTIONINFO_GETNAMELENGTH (2)
#define	FUNCID_NTECSINFO_SFUNCTIONINFO_GETRETURNTYPEINFO (3)
#define	FUNCID_NTECSINFO_SFUNCTIONINFO_GETNPARAM (4)
#define	FUNCID_NTECSINFO_SFUNCTIONINFO_GETPARAMINFO (5)

#endif /* nTECSInfo_sFunctionInfo_TECSGEN_H */
