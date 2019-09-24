/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tCallInfo_tecsgen.h"
#include "nTECSInfo_tCallInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eCallInfo */
struct tag_nTECSInfo_tCallInfo_eCallInfo_DES {
    const struct tag_nTECSInfo_sCallInfo_VMT *vmt;
    tCallInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eCallInfo */
ER             nTECSInfo_tCallInfo_eCallInfo_getName_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    return nTECSInfo_tCallInfo_eCallInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tCallInfo_eCallInfo_getNameLength_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, uint16_t* len)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getNameLength( lepd->idx, len );
}
void           nTECSInfo_tCallInfo_eCallInfo_getSignatureInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, Descriptor( nTECSInfo_sSignatureInfo )* desc)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getSignatureInfo( lepd->idx, desc );
}
void           nTECSInfo_tCallInfo_eCallInfo_getArraySize_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, uint32_t* array_size)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getArraySize( lepd->idx, array_size );
}
void           nTECSInfo_tCallInfo_eCallInfo_getSpecifierInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, bool_t* b_optional, bool_t* b_dynamic, bool_t* b_ref_desc, bool_t* b_omit)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getSpecifierInfo( lepd->idx, b_optional, b_dynamic, b_ref_desc, b_omit );
}
void           nTECSInfo_tCallInfo_eCallInfo_getInternalInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, bool_t* b_allocator_port, bool_t* b_require_port)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getInternalInfo( lepd->idx, b_allocator_port, b_require_port );
}
void           nTECSInfo_tCallInfo_eCallInfo_getLocationInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, uint32_t* offset, uint8_t* place)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getLocationInfo( lepd->idx, offset, place );
}
void           nTECSInfo_tCallInfo_eCallInfo_getOptimizeInfo_skel( const struct tag_nTECSInfo_sCallInfo_VDES *epd, bool_t* b_VMT_useless, bool_t* b_skelton_useless, bool_t* b_cell_unique)
{
    struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *lepd
        = (struct tag_nTECSInfo_tCallInfo_eCallInfo_DES *)epd;
    nTECSInfo_tCallInfo_eCallInfo_getOptimizeInfo( lepd->idx, b_VMT_useless, b_skelton_useless, b_cell_unique );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eCallInfo */
const struct tag_nTECSInfo_sCallInfo_VMT nTECSInfo_tCallInfo_eCallInfo_MT_ = {
    nTECSInfo_tCallInfo_eCallInfo_getName_skel,
    nTECSInfo_tCallInfo_eCallInfo_getNameLength_skel,
    nTECSInfo_tCallInfo_eCallInfo_getSignatureInfo_skel,
    nTECSInfo_tCallInfo_eCallInfo_getArraySize_skel,
    nTECSInfo_tCallInfo_eCallInfo_getSpecifierInfo_skel,
    nTECSInfo_tCallInfo_eCallInfo_getInternalInfo_skel,
    nTECSInfo_tCallInfo_eCallInfo_getLocationInfo_skel,
    nTECSInfo_tCallInfo_eCallInfo_getOptimizeInfo_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTaskExceptionBodySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sRiteVMSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTaskSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sParamInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sMotorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sLEDSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sBatterySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sSpeakerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sUltrasonicSensorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sGyroSensorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sColorSensorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTouchSensorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sBalancerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sSharedMemorySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des;

/* 呼び口配列 #_CPA_# */
































/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tCallInfo_INIB nTECSInfo_tCallInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tCallInfo_CB_tab[0]:  tTask_cBodyCallInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cBody",                                 /* name */
        tTask_cBody__offset,                     /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTask_cBody__place,                      /* place */
        tTask_cBody__b_VMT_useless,              /* b_VMT_useless */
        tTask_cBody__b_skelton_useless,          /* b_skelton_useless */
        tTask_cBody__b_cell_unique,              /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[1]:  tTask_cExceptionBodyCallInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTaskExceptionBodySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cExceptionBody",                        /* name */
        tTask_cExceptionBody__offset,            /* offset */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTask_cExceptionBody__place,             /* place */
        tTask_cExceptionBody__b_VMT_useless,     /* b_VMT_useless */
        tTask_cExceptionBody__b_skelton_useless, /* b_skelton_useless */
        tTask_cExceptionBody__b_cell_unique,     /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[2]:  tLCD_cButtonCallInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cButton",                               /* name */
        tLCD_cButton__offset,                    /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tLCD_cButton__place,                     /* place */
        tLCD_cButton__b_VMT_useless,             /* b_VMT_useless */
        tLCD_cButton__b_skelton_useless,         /* b_skelton_useless */
        tLCD_cButton__b_cell_unique,             /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[3]:  tEV3Platform_cRiteVMCallInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sRiteVMSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cRiteVM",                               /* name */
        tEV3Platform_cRiteVM__offset,            /* offset */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tEV3Platform_cRiteVM__place,             /* place */
        tEV3Platform_cRiteVM__b_VMT_useless,     /* b_VMT_useless */
        tEV3Platform_cRiteVM__b_skelton_useless, /* b_skelton_useless */
        tEV3Platform_cRiteVM__b_cell_unique,     /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[4]:  tEV3Platform_cTaskCallInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTaskSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTask",                                 /* name */
        tEV3Platform_cTask__offset,              /* offset */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tEV3Platform_cTask__place,               /* place */
        tEV3Platform_cTask__b_VMT_useless,       /* b_VMT_useless */
        tEV3Platform_cTask__b_skelton_useless,   /* b_skelton_useless */
        tEV3Platform_cTask__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[5]:  tTaskMain_cLCDCallInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cLCD",                                  /* name */
        tTaskMain_cLCD__offset,                  /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cLCD__place,                   /* place */
        tTaskMain_cLCD__b_VMT_useless,           /* b_VMT_useless */
        tTaskMain_cLCD__b_skelton_useless,       /* b_skelton_useless */
        tTaskMain_cLCD__b_cell_unique,           /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[6]:  tTaskMain_cButtonCallInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cButton",                               /* name */
        tTaskMain_cButton__offset,               /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cButton__place,                /* place */
        tTaskMain_cButton__b_VMT_useless,        /* b_VMT_useless */
        tTaskMain_cButton__b_skelton_useless,    /* b_skelton_useless */
        tTaskMain_cButton__b_cell_unique,        /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[7]:  tTaskMain_cTECSInfoCallInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECSInfo",                             /* name */
        tTaskMain_cTECSInfo__offset,             /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cTECSInfo__place,              /* place */
        tTaskMain_cTECSInfo__b_VMT_useless,      /* b_VMT_useless */
        tTaskMain_cTECSInfo__b_skelton_useless,  /* b_skelton_useless */
        tTaskMain_cTECSInfo__b_cell_unique,      /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[8]:  tTaskMain_cNSInfoCallInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sNamespaceInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cNSInfo",                               /* name */
        tTaskMain_cNSInfo__offset,               /* offset */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cNSInfo__place,                /* place */
        tTaskMain_cNSInfo__b_VMT_useless,        /* b_VMT_useless */
        tTaskMain_cNSInfo__b_skelton_useless,    /* b_skelton_useless */
        tTaskMain_cNSInfo__b_cell_unique,        /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[9]:  tTaskMain_cRegionInfoCallInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sRegionInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cRegionInfo",                           /* name */
        tTaskMain_cRegionInfo__offset,           /* offset */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cRegionInfo__place,            /* place */
        tTaskMain_cRegionInfo__b_VMT_useless,    /* b_VMT_useless */
        tTaskMain_cRegionInfo__b_skelton_useless, /* b_skelton_useless */
        tTaskMain_cRegionInfo__b_cell_unique,    /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[10]:  tTaskMain_cCellInfoCallInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sCellInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCellInfo",                             /* name */
        tTaskMain_cCellInfo__offset,             /* offset */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cCellInfo__place,              /* place */
        tTaskMain_cCellInfo__b_VMT_useless,      /* b_VMT_useless */
        tTaskMain_cCellInfo__b_skelton_useless,  /* b_skelton_useless */
        tTaskMain_cCellInfo__b_cell_unique,      /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[11]:  tTaskMain_cSignatureInfoCallInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sSignatureInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cSignatureInfo",                        /* name */
        tTaskMain_cSignatureInfo__offset,        /* offset */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cSignatureInfo__place,         /* place */
        tTaskMain_cSignatureInfo__b_VMT_useless, /* b_VMT_useless */
        tTaskMain_cSignatureInfo__b_skelton_useless, /* b_skelton_useless */
        tTaskMain_cSignatureInfo__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[12]:  tTaskMain_cCelltypeInfoCallInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sCelltypeInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cCelltypeInfo",                         /* name */
        tTaskMain_cCelltypeInfo__offset,         /* offset */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cCelltypeInfo__place,          /* place */
        tTaskMain_cCelltypeInfo__b_VMT_useless,  /* b_VMT_useless */
        tTaskMain_cCelltypeInfo__b_skelton_useless, /* b_skelton_useless */
        tTaskMain_cCelltypeInfo__b_cell_unique,  /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[13]:  tTaskMain_cVarDeclInfoCallInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sVarDeclInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cVarDeclInfo",                          /* name */
        tTaskMain_cVarDeclInfo__offset,          /* offset */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cVarDeclInfo__place,           /* place */
        tTaskMain_cVarDeclInfo__b_VMT_useless,   /* b_VMT_useless */
        tTaskMain_cVarDeclInfo__b_skelton_useless, /* b_skelton_useless */
        tTaskMain_cVarDeclInfo__b_cell_unique,   /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[14]:  tTaskMain_cTypeInfoCallInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sTypeInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTypeInfo",                             /* name */
        tTaskMain_cTypeInfo__offset,             /* offset */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cTypeInfo__place,              /* place */
        tTaskMain_cTypeInfo__b_VMT_useless,      /* b_VMT_useless */
        tTaskMain_cTypeInfo__b_skelton_useless,  /* b_skelton_useless */
        tTaskMain_cTypeInfo__b_cell_unique,      /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[15]:  tTaskMain_cFunctionInfoCallInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sFunctionInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cFunctionInfo",                         /* name */
        tTaskMain_cFunctionInfo__offset,         /* offset */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cFunctionInfo__place,          /* place */
        tTaskMain_cFunctionInfo__b_VMT_useless,  /* b_VMT_useless */
        tTaskMain_cFunctionInfo__b_skelton_useless, /* b_skelton_useless */
        tTaskMain_cFunctionInfo__b_cell_unique,  /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[16]:  tTaskMain_cParamInfoCallInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sParamInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cParamInfo",                            /* name */
        tTaskMain_cParamInfo__offset,            /* offset */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cParamInfo__place,             /* place */
        tTaskMain_cParamInfo__b_VMT_useless,     /* b_VMT_useless */
        tTaskMain_cParamInfo__b_skelton_useless, /* b_skelton_useless */
        tTaskMain_cParamInfo__b_cell_unique,     /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[17]:  tTaskMain_cEntryInfoCallInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sEntryInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cEntryInfo",                            /* name */
        tTaskMain_cEntryInfo__offset,            /* offset */
        true,                                    /* b_optional */
        false,                                   /* b_omit */
        true,                                    /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        tTaskMain_cEntryInfo__place,             /* place */
        tTaskMain_cEntryInfo__b_VMT_useless,     /* b_VMT_useless */
        tTaskMain_cEntryInfo__b_skelton_useless, /* b_skelton_useless */
        tTaskMain_cEntryInfo__b_cell_unique,     /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[18]:  nMruby_tsKernel_cTECSCallInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsKernel_cTECS__offset,           /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsKernel_cTECS__place,            /* place */
        nMruby_tsKernel_cTECS__b_VMT_useless,    /* b_VMT_useless */
        nMruby_tsKernel_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsKernel_cTECS__b_cell_unique,    /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[19]:  nMruby_tsMotor_cTECSCallInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sMotorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsMotor_cTECS__offset,            /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsMotor_cTECS__place,             /* place */
        nMruby_tsMotor_cTECS__b_VMT_useless,     /* b_VMT_useless */
        nMruby_tsMotor_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsMotor_cTECS__b_cell_unique,     /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[20]:  nMruby_tsLCD_cTECSCallInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsLCD_cTECS__offset,              /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsLCD_cTECS__place,               /* place */
        nMruby_tsLCD_cTECS__b_VMT_useless,       /* b_VMT_useless */
        nMruby_tsLCD_cTECS__b_skelton_useless,   /* b_skelton_useless */
        nMruby_tsLCD_cTECS__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[21]:  nMruby_tsLED_cTECSCallInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLEDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsLED_cTECS__offset,              /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsLED_cTECS__place,               /* place */
        nMruby_tsLED_cTECS__b_VMT_useless,       /* b_VMT_useless */
        nMruby_tsLED_cTECS__b_skelton_useless,   /* b_skelton_useless */
        nMruby_tsLED_cTECS__b_cell_unique,       /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[22]:  nMruby_tsButton_cTECSCallInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsButton_cTECS__offset,           /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsButton_cTECS__place,            /* place */
        nMruby_tsButton_cTECS__b_VMT_useless,    /* b_VMT_useless */
        nMruby_tsButton_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsButton_cTECS__b_cell_unique,    /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[23]:  nMruby_tsBattery_cTECSCallInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sBatterySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsBattery_cTECS__offset,          /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsBattery_cTECS__place,           /* place */
        nMruby_tsBattery_cTECS__b_VMT_useless,   /* b_VMT_useless */
        nMruby_tsBattery_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsBattery_cTECS__b_cell_unique,   /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[24]:  nMruby_tsSpeaker_cTECSCallInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sSpeakerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsSpeaker_cTECS__offset,          /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsSpeaker_cTECS__place,           /* place */
        nMruby_tsSpeaker_cTECS__b_VMT_useless,   /* b_VMT_useless */
        nMruby_tsSpeaker_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsSpeaker_cTECS__b_cell_unique,   /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[25]:  nMruby_tsUltrasonicSensor_cTECSCallInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sUltrasonicSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsUltrasonicSensor_cTECS__offset, /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsUltrasonicSensor_cTECS__place,  /* place */
        nMruby_tsUltrasonicSensor_cTECS__b_VMT_useless, /* b_VMT_useless */
        nMruby_tsUltrasonicSensor_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsUltrasonicSensor_cTECS__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[26]:  nMruby_tsGyroSensor_cTECSCallInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sGyroSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsGyroSensor_cTECS__offset,       /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsGyroSensor_cTECS__place,        /* place */
        nMruby_tsGyroSensor_cTECS__b_VMT_useless, /* b_VMT_useless */
        nMruby_tsGyroSensor_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsGyroSensor_cTECS__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[27]:  nMruby_tsColorSensor_cTECSCallInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sColorSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsColorSensor_cTECS__offset,      /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsColorSensor_cTECS__place,       /* place */
        nMruby_tsColorSensor_cTECS__b_VMT_useless, /* b_VMT_useless */
        nMruby_tsColorSensor_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsColorSensor_cTECS__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[28]:  nMruby_tsTouchSensor_cTECSCallInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTouchSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsTouchSensor_cTECS__offset,      /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsTouchSensor_cTECS__place,       /* place */
        nMruby_tsTouchSensor_cTECS__b_VMT_useless, /* b_VMT_useless */
        nMruby_tsTouchSensor_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsTouchSensor_cTECS__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[29]:  nMruby_tsBalancer_cTECSCallInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sBalancerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsBalancer_cTECS__offset,         /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsBalancer_cTECS__place,          /* place */
        nMruby_tsBalancer_cTECS__b_VMT_useless,  /* b_VMT_useless */
        nMruby_tsBalancer_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsBalancer_cTECS__b_cell_unique,  /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[30]:  nMruby_tsSharedMemory_cTECSCallInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sSharedMemorySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECS",                                 /* name */
        nMruby_tsSharedMemory_cTECS__offset,     /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nMruby_tsSharedMemory_cTECS__place,      /* place */
        nMruby_tsSharedMemory_cTECS__b_VMT_useless, /* b_VMT_useless */
        nMruby_tsSharedMemory_cTECS__b_skelton_useless, /* b_skelton_useless */
        nMruby_tsSharedMemory_cTECS__b_cell_unique, /* b_cell_unique */
    },
    /* cell: nTECSInfo_tCallInfo_CB_tab[31]:  nTECSInfo_tTECSInfo_cTECSInfoCallInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cTECSInfo",                             /* name */
        nTECSInfo_tTECSInfo_cTECSInfo__offset,   /* offset */
        false,                                   /* b_optional */
        false,                                   /* b_omit */
        false,                                   /* b_dynamic */
        false,                                   /* b_ref_desc */
        false,                                   /* b_allocator_port */
        false,                                   /* b_require_port */
        nTECSInfo_tTECSInfo_cTECSInfo__place,    /* place */
        nTECSInfo_tTECSInfo_cTECSInfo__b_VMT_useless, /* b_VMT_useless */
        nTECSInfo_tTECSInfo_cTECSInfo__b_skelton_useless, /* b_skelton_useless */
        nTECSInfo_tTECSInfo_cTECSInfo__b_cell_unique, /* b_cell_unique */
    },
};

extern const struct tag_nTECSInfo_sCallInfo_VMT nTECSInfo_tCallInfo_eCallInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTask_cBodyCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTask_cBodyCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTask_cExceptionBodyCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTask_cExceptionBodyCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[1],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tLCD_cButtonCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tLCD_cButtonCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[2],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tEV3Platform_cRiteVMCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tEV3Platform_cRiteVMCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[3],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tEV3Platform_cTaskCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tEV3Platform_cTaskCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[4],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cLCDCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cLCDCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[5],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cButtonCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cButtonCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[6],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cTECSInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cTECSInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[7],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cNSInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cNSInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[8],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cRegionInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cRegionInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[9],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cCellInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cCellInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[10],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cSignatureInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cSignatureInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[11],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cCelltypeInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cCelltypeInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[12],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cVarDeclInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cVarDeclInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[13],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cTypeInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cTypeInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[14],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cFunctionInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cFunctionInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[15],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cParamInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cParamInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[16],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cEntryInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cEntryInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[17],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[18],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[19],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[20],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[21],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[22],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[23],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[24],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[25],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[26],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[27],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[28],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[29],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_cTECSCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_cTECSCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[30],   /* INIB */
};
extern const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfo_cTECSInfoCallInfo_eCallInfo_des;
const struct tag_nTECSInfo_tCallInfo_eCallInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfo_cTECSInfoCallInfo_eCallInfo_des = {
    &nTECSInfo_tCallInfo_eCallInfo_MT_,
    &nTECSInfo_tCallInfo_INIB_tab[31],   /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tCallInfo_CB_initialize()
{
    nTECSInfo_tCallInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
