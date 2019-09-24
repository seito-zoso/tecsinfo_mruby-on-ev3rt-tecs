/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tVarDeclInfo_tecsgen.h"
#include "nTECSInfo_tVarDeclInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eVarDeclInfo */
struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES {
    const struct tag_nTECSInfo_sVarDeclInfo_VMT *vmt;
    tVarDeclInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eVarDeclInfo */
ER             nTECSInfo_tVarDeclInfo_eVarDeclInfo_getName_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    return nTECSInfo_tVarDeclInfo_eVarDeclInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getOffset_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, uint32_t* offset)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getOffset( lepd->idx, offset );
}
void           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getTypeInfo_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, Descriptor( nTECSInfo_sTypeInfo )* desc)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getTypeInfo( lepd->idx, desc );
}
void           nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIsExpr_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, uint32_t* expr_str, int32_t max_len)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIsExpr( lepd->idx, expr_str, max_len );
}
ER             nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIs_skel( const struct tag_nTECSInfo_sVarDeclInfo_VDES *epd, uint32_t* size, const void* p_cb)
{
    struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *lepd
        = (struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES *)epd;
    return nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIs( lepd->idx, size, p_cb );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eVarDeclInfo */
const struct tag_nTECSInfo_sVarDeclInfo_VMT nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_ = {
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getName_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getOffset_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getTypeInfo_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIsExpr_skel,
    nTECSInfo_tVarDeclInfo_eVarDeclInfo_getSizeIs_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ATRTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ATRTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ACPTN_Array4_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_ACPTN_Array4_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_lcdfont_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Array128__Array32_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Array128__Array32_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

extern struct tag_nTECSInfo_sTypeInfo_VDES rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des;

/* 呼び口配列 #_CPA_# */




























































/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tVarDeclInfo_INIB nTECSInfo_tVarDeclInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[0]:  tTask_idVarDeclInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_IDTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "id",                                    /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTask_id,                      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[1]:  tTask_taskAttributeVarDeclInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ATRTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "taskAttribute",                         /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTask_taskAttribute,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[2]:  tTask_exceptionAttributeVarDeclInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ATRTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "exceptionAttribute",                    /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTask_exceptionAttribute,      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[3]:  tTask_priorityVarDeclInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_PRITypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "priority",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTask_priority,                /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[4]:  tTask_stackSizeVarDeclInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "stackSize",                             /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTask_stackSize,               /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[5]:  tTask_systemStackSizeVarDeclInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "systemStackSize",                       /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTask_systemStackSize,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[6]:  tTask_userStackSizeVarDeclInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_SIZETypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "userStackSize",                         /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTask_userStackSize,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[7]:  tTask_accessPatternVarDeclInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ACPTN_Array4_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "accessPattern",                         /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTask_accessPattern,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[8]:  tKernel_accessPatternVarDeclInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_ACPTN_Array4_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "accessPattern",                         /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tKernel_accessPattern,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[9]:  tUltrasonicSensor_portVarDeclInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "port",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tUltrasonicSensor_port,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[10]:  tColorSensor_portVarDeclInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "port",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tColorSensor_port,             /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[11]:  tTouchSensor_portVarDeclInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "port",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTouchSensor_port,             /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[12]:  tGyroSensor_portVarDeclInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "port",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tGyroSensor_port,              /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[13]:  tMotor_portVarDeclInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "port",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tMotor_port,                   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[14]:  tLCD_currentFontVarDeclInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_lcdfont_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "currentFont",                           /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tLCD_currentFont,              /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[15]:  tSharedMemory_sizeVarDeclInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "size",                                  /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tSharedMemory_size,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[16]:  tSharedMemory_dataVarDeclInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int32_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "data",                                  /* name */
        "mikan",                                 /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tSharedMemory_data,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[17]:  tTaskMain_NAME_LENVarDeclInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "NAME_LEN",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTaskMain_NAME_LEN,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[18]:  tTaskMain_ARG_NAME_LENVarDeclInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ARG_NAME_LEN",                          /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTaskMain_ARG_NAME_LEN,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[19]:  tTaskMain_ARG_DIMVarDeclInfo id=20 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "ARG_DIM",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTaskMain_ARG_DIM,             /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[20]:  tTaskMain_TARGET_NUMVarDeclInfo id=21 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int16_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "TARGET_NUM",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTaskMain_TARGET_NUM,          /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[21]:  tTaskMain_cell_pathVarDeclInfo id=22 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "cell_path",                             /* name */
        "mikan",                                 /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTaskMain_cell_path,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[22]:  tTaskMain_celltype_pathVarDeclInfo id=23 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "celltype_path",                         /* name */
        "mikan",                                 /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTaskMain_celltype_path,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[23]:  tTaskMain_entry_pathVarDeclInfo id=24 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "entry_path",                            /* name */
        "mikan",                                 /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTaskMain_entry_path,          /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[24]:  tTaskMain_entry_path_tmpVarDeclInfo id=25 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "entry_path_tmp",                        /* name */
        "mikan",                                 /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTaskMain_entry_path_tmp,      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[25]:  tTaskMain_signature_pathVarDeclInfo id=26 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "signature_path",                        /* name */
        "mikan",                                 /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTaskMain_signature_path,      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[26]:  tTaskMain_function_pathVarDeclInfo id=27 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "function_path",                         /* name */
        "mikan",                                 /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTaskMain_function_path,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[27]:  tTaskMain_function_path_tmpVarDeclInfo id=28 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "function_path_tmp",                     /* name */
        "mikan",                                 /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTaskMain_function_path_tmp,   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[28]:  tTaskMain_arg_numVarDeclInfo id=29 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arg_num",                               /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTaskMain_arg_num,             /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[29]:  tTaskMain_exp_typeVarDeclInfo id=30 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "exp_type",                              /* name */
        "mikan",                                 /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTaskMain_exp_type,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[30]:  tTaskMain_argVarDeclInfo id=31 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Array128__Array32_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arg",                                   /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTaskMain_arg,                 /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[31]:  tTaskMain_arg_typeVarDeclInfo id=32 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Array128__Array32_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "arg_type",                              /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTaskMain_arg_type,            /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[32]:  tTaskMain_find_entryVarDeclInfo id=33 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "find_entry",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTaskMain_find_entry,          /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[33]:  tTaskMain_find_funcVarDeclInfo id=34 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_int8_tTypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "find_func",                             /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_tTaskMain_find_func,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[34]:  nMruby_tsKernel_VMnameVarDeclInfo id=35 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsKernel_VMname,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[35]:  nMruby_tsKernel_bridgeNameVarDeclInfo id=36 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsKernel_bridgeName,    /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[36]:  nMruby_tsMotor_VMnameVarDeclInfo id=37 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsMotor_VMname,         /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[37]:  nMruby_tsMotor_bridgeNameVarDeclInfo id=38 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsMotor_bridgeName,     /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[38]:  nMruby_tsLCD_VMnameVarDeclInfo id=39 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsLCD_VMname,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[39]:  nMruby_tsLCD_bridgeNameVarDeclInfo id=40 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsLCD_bridgeName,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[40]:  nMruby_tsLED_VMnameVarDeclInfo id=41 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsLED_VMname,           /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[41]:  nMruby_tsLED_bridgeNameVarDeclInfo id=42 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsLED_bridgeName,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[42]:  nMruby_tsButton_VMnameVarDeclInfo id=43 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsButton_VMname,        /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[43]:  nMruby_tsButton_bridgeNameVarDeclInfo id=44 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsButton_bridgeName,    /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[44]:  nMruby_tsBattery_VMnameVarDeclInfo id=45 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsBattery_VMname,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[45]:  nMruby_tsBattery_bridgeNameVarDeclInfo id=46 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsBattery_bridgeName,   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[46]:  nMruby_tsSpeaker_VMnameVarDeclInfo id=47 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsSpeaker_VMname,       /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[47]:  nMruby_tsSpeaker_bridgeNameVarDeclInfo id=48 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsSpeaker_bridgeName,   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[48]:  nMruby_tsUltrasonicSensor_VMnameVarDeclInfo id=49 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsUltrasonicSensor_VMname, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[49]:  nMruby_tsUltrasonicSensor_bridgeNameVarDeclInfo id=50 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsUltrasonicSensor_bridgeName, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[50]:  nMruby_tsGyroSensor_VMnameVarDeclInfo id=51 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsGyroSensor_VMname,    /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[51]:  nMruby_tsGyroSensor_bridgeNameVarDeclInfo id=52 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsGyroSensor_bridgeName, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[52]:  nMruby_tsColorSensor_VMnameVarDeclInfo id=53 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsColorSensor_VMname,   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[53]:  nMruby_tsColorSensor_bridgeNameVarDeclInfo id=54 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsColorSensor_bridgeName, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[54]:  nMruby_tsTouchSensor_VMnameVarDeclInfo id=55 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsTouchSensor_VMname,   /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[55]:  nMruby_tsTouchSensor_bridgeNameVarDeclInfo id=56 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsTouchSensor_bridgeName, /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[56]:  nMruby_tsBalancer_VMnameVarDeclInfo id=57 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsBalancer_VMname,      /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[57]:  nMruby_tsBalancer_bridgeNameVarDeclInfo id=58 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsBalancer_bridgeName,  /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[58]:  nMruby_tsSharedMemory_VMnameVarDeclInfo id=59 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "VMname",                                /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsSharedMemory_VMname,  /* offset */
    },
    /* cell: nTECSInfo_tVarDeclInfo_CB_tab[59]:  nMruby_tsSharedMemory_bridgeNameVarDeclInfo id=60 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_char_t_Ptr_TypeInfo_eTypeInfo_des, /* cTypeInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "bridgeName",                            /* name */
        (char_t*)0x0,                            /* sizeIsExpr */
        1,                                       /* declType */
        OFFSET_OF_nMruby_tsSharedMemory_bridgeName, /* offset */
    },
};

extern const struct tag_nTECSInfo_sVarDeclInfo_VMT nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_idVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_idVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_taskAttributeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_taskAttributeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[1],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_exceptionAttributeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_exceptionAttributeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[2],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_priorityVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_priorityVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[3],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_stackSizeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_stackSizeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[4],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_systemStackSizeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_systemStackSizeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[5],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_userStackSizeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_userStackSizeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[6],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_accessPatternVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTask_accessPatternVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[7],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tKernel_accessPatternVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tKernel_accessPatternVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[8],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tUltrasonicSensor_portVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tUltrasonicSensor_portVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[9],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tColorSensor_portVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tColorSensor_portVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[10],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTouchSensor_portVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTouchSensor_portVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[11],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tGyroSensor_portVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tGyroSensor_portVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[12],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tMotor_portVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tMotor_portVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[13],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tLCD_currentFontVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tLCD_currentFontVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[14],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tSharedMemory_sizeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tSharedMemory_sizeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[15],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tSharedMemory_dataVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tSharedMemory_dataVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[16],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_NAME_LENVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_NAME_LENVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[17],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_ARG_NAME_LENVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_ARG_NAME_LENVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[18],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_ARG_DIMVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_ARG_DIMVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[19],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_TARGET_NUMVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_TARGET_NUMVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[20],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cell_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_cell_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[21],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_celltype_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_celltype_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[22],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_entry_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_entry_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[23],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_entry_path_tmpVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_entry_path_tmpVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[24],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_signature_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_signature_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[25],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_function_pathVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_function_pathVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[26],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_function_path_tmpVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_function_path_tmpVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[27],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_arg_numVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_arg_numVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[28],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_exp_typeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_exp_typeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[29],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_argVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_argVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[30],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_arg_typeVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_arg_typeVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[31],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_find_entryVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_find_entryVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[32],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_find_funcVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_tTaskMain_find_funcVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[33],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[34],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsKernel_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[35],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[36],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsMotor_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[37],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[38],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLCD_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[39],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[40],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsLED_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[41],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[42],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsButton_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[43],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[44],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBattery_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[45],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[46],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSpeaker_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[47],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[48],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsUltrasonicSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[49],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[50],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsGyroSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[51],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[52],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsColorSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[53],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[54],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsTouchSensor_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[55],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[56],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsBalancer_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[57],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_VMnameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_VMnameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[58],   /* INIB */
};
extern const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_bridgeNameVarDeclInfo_eVarDeclInfo_des;
const struct tag_nTECSInfo_tVarDeclInfo_eVarDeclInfo_DES rDomainEV3_rTECSInfo_nMruby_tsSharedMemory_bridgeNameVarDeclInfo_eVarDeclInfo_des = {
    &nTECSInfo_tVarDeclInfo_eVarDeclInfo_MT_,
    &nTECSInfo_tVarDeclInfo_INIB_tab[59],   /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tVarDeclInfo_CB_initialize()
{
    nTECSInfo_tVarDeclInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
