/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nTECSInfo_sRegionInfo_TECSGEN_H
#define nTECSInfo_sRegionInfo_TECSGEN_H

/*
 * signature   :  sRegionInfo
 * global name :  nTECSInfo_sRegionInfo
 * context     :  task
 */

/* �����˥���ǥ�������ץ����ȥإå� #_SDI_# */
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sCellInfo_Defined
#define  Descriptor_of_nTECSInfo_sCellInfo_Defined
typedef struct { struct tag_nTECSInfo_sCellInfo_VDES *vdes; } Descriptor( nTECSInfo_sCellInfo );
#endif
/* pre-typedef incomplete-type to avoid error in case of mutual or cyclic reference */
#ifndef Descriptor_of_nTECSInfo_sRegionInfo_Defined
#define  Descriptor_of_nTECSInfo_sRegionInfo_Defined
typedef struct { struct tag_nTECSInfo_sRegionInfo_VDES *vdes; } Descriptor( nTECSInfo_sRegionInfo );
#endif

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_nTECSInfo_sRegionInfo_VDES {
    struct tag_nTECSInfo_sRegionInfo_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_nTECSInfo_sRegionInfo_VMT {
    ER             (*getName__T)( const struct tag_nTECSInfo_sRegionInfo_VDES *edp, char_t* name, int_t max_len );
    void           (*getNameLength__T)( const struct tag_nTECSInfo_sRegionInfo_VDES *edp, uint16_t* len );
    void           (*getNCell__T)( const struct tag_nTECSInfo_sRegionInfo_VDES *edp, int32_t* num );
    void           (*getCellInfo__T)( const struct tag_nTECSInfo_sRegionInfo_VDES *edp, int32_t ith, Descriptor( nTECSInfo_sCellInfo )* des );
    void           (*getNRegion__T)( const struct tag_nTECSInfo_sRegionInfo_VDES *edp, int32_t* num );
    void           (*getRegionInfo__T)( const struct tag_nTECSInfo_sRegionInfo_VDES *edp, int32_t ith, Descriptor( nTECSInfo_sRegionInfo )* des );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_nTECSInfo_sRegionInfo_Defined
#define  Descriptor_of_nTECSInfo_sRegionInfo_Defined
typedef struct { struct tag_nTECSInfo_sRegionInfo_VDES *vdes; } Descriptor( nTECSInfo_sRegionInfo );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NTECSINFO_SREGIONINFO_GETNAME   (1)
#define	FUNCID_NTECSINFO_SREGIONINFO_GETNAMELENGTH (2)
#define	FUNCID_NTECSINFO_SREGIONINFO_GETNCELL  (3)
#define	FUNCID_NTECSINFO_SREGIONINFO_GETCELLINFO (4)
#define	FUNCID_NTECSINFO_SREGIONINFO_GETNREGION (5)
#define	FUNCID_NTECSINFO_SREGIONINFO_GETREGIONINFO (6)

#endif /* nTECSInfo_sRegionInfo_TECSGEN_H */
