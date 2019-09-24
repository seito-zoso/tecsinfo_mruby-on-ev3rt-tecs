/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
#include "nTECSInfo_tEntryInfo_tecsgen.h"
#include "nTECSInfo_tEntryInfo_factory.h"

/* 受け口ディスクリプタ型 #_EDT_# */
/* eEntryInfo */
struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES {
    const struct tag_nTECSInfo_sEntryInfo_VMT *vmt;
    tEntryInfo_IDX  idx;
};

/* 受け口スケルトン関数 #_EPSF_# */
/* eEntryInfo */
ER             nTECSInfo_tEntryInfo_eEntryInfo_getName_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd, char_t* name, int_t max_len)
{
    struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *lepd
        = (struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *)epd;
    return nTECSInfo_tEntryInfo_eEntryInfo_getName( lepd->idx, name, max_len );
}
void           nTECSInfo_tEntryInfo_eEntryInfo_getNameLength_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd, uint16_t* len)
{
    struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *lepd
        = (struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *)epd;
    nTECSInfo_tEntryInfo_eEntryInfo_getNameLength( lepd->idx, len );
}
void           nTECSInfo_tEntryInfo_eEntryInfo_getSignatureInfo_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd, Descriptor( nTECSInfo_sSignatureInfo )* desc)
{
    struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *lepd
        = (struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *)epd;
    nTECSInfo_tEntryInfo_eEntryInfo_getSignatureInfo( lepd->idx, desc );
}
void           nTECSInfo_tEntryInfo_eEntryInfo_getArraySize_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd, uint32_t* array_size)
{
    struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *lepd
        = (struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *)epd;
    nTECSInfo_tEntryInfo_eEntryInfo_getArraySize( lepd->idx, array_size );
}
bool_t         nTECSInfo_tEntryInfo_eEntryInfo_isInline_skel( const struct tag_nTECSInfo_sEntryInfo_VDES *epd)
{
    struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *lepd
        = (struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES *)epd;
    return nTECSInfo_tEntryInfo_eEntryInfo_isInline( lepd->idx );
}

/* 受け口スケルトン関数テーブル #_EPSFT_# */
/* eEntryInfo */
const struct tag_nTECSInfo_sEntryInfo_VMT nTECSInfo_tEntryInfo_eEntryInfo_MT_ = {
    nTECSInfo_tEntryInfo_eEntryInfo_getName_skel,
    nTECSInfo_tEntryInfo_eEntryInfo_getNameLength_skel,
    nTECSInfo_tEntryInfo_eEntryInfo_getSignatureInfo_skel,
    nTECSInfo_tEntryInfo_eEntryInfo_getArraySize_skel,
    nTECSInfo_tEntryInfo_eEntryInfo_isInline_skel,
};

/* 呼び口の参照する受け口ディスクリプタ(実際の型と相違した定義) #_CPEPD_# */
extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTaskSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_siTaskSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_siKernelSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sUltrasonicSensorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sColorSensorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTouchSensorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sGyroSensorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sMotorSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sLEDSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sBatterySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sSpeakerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sBalancerSignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sSharedMemorySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des;

extern struct tag_nTECSInfo_sSignatureInfo_VDES rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des;

/* 呼び口配列 #_CPA_# */



















/* 属性・変数の配列 #_AVAI_# */
/* セル INIB #_INIB_# */
nTECSInfo_tEntryInfo_INIB nTECSInfo_tEntryInfo_INIB_tab[] = {
    /* cell: nTECSInfo_tEntryInfo_CB_tab[0]:  tTask_eTaskEntryInfo id=1 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTaskSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eTask",                                 /* name */
        true,                                    /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[1]:  tTask_eiTaskEntryInfo id=2 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_siTaskSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eiTask",                                /* name */
        true,                                    /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[2]:  tKernel_eKernelEntryInfo id=3 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sKernelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eKernel",                               /* name */
        true,                                    /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[3]:  tKernel_eiKernelEntryInfo id=4 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_siKernelSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eiKernel",                              /* name */
        true,                                    /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[4]:  tUltrasonicSensor_eUltrasonicSensorEntryInfo id=5 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sUltrasonicSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eUltrasonicSensor",                     /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[5]:  tColorSensor_eColorSensorEntryInfo id=6 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sColorSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eColorSensor",                          /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[6]:  tTouchSensor_eTouchSensorEntryInfo id=7 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTouchSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eTouchSensor",                          /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[7]:  tGyroSensor_eGyroSensorEntryInfo id=8 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sGyroSensorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eGyroSensor",                           /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[8]:  tMotor_eMotorEntryInfo id=9 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sMotorSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eMotor",                                /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[9]:  tButton_eButtonEntryInfo id=10 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sButtonSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eButton",                               /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[10]:  tLCD_eLCDEntryInfo id=11 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLCDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eLCD",                                  /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[11]:  tLED_eLEDEntryInfo id=12 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sLEDSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eLED",                                  /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[12]:  tBattery_eBatteryEntryInfo id=13 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sBatterySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eBattery",                              /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[13]:  tSpeaker_eSpeakerEntryInfo id=14 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sSpeakerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eSpeaker",                              /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[14]:  tEV3Platform_eTaskBodyEntryInfo id=15 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eTaskBody",                             /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[15]:  tBalancer_eBalancerEntryInfo id=16 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sBalancerSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eBalancer",                             /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[16]:  tSharedMemory_eSharedMemoryEntryInfo id=17 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sSharedMemorySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eSharedMemory",                         /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[17]:  tTaskMain_eBodyEntryInfo id=18 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_sTaskBodySignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eBody",                                 /* name */
        false,                                   /* b_inline */
    },
    /* cell: nTECSInfo_tEntryInfo_CB_tab[18]:  nTECSInfo_tTECSInfo_eTECSInfoEntryInfo id=19 */
    {
        /* call port (INIB) #_CP_# */ 
        &rDomainEV3_rTECSInfo_nTECSInfo_sTECSInfoSignatureInfo_eSignatureInfo_des, /* cSignatureInfo #_CCP1_# */
        /* entry port #_EP_# */ 
        /* attribute(RO) */ 
        "eTECSInfo",                             /* name */
        true,                                    /* b_inline */
    },
};

extern const struct tag_nTECSInfo_sEntryInfo_VMT nTECSInfo_tEntryInfo_eEntryInfo_MT_;
/* 受け口ディスクリプタ #_EPD_# */
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTask_eTaskEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTask_eTaskEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[0],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTask_eiTaskEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTask_eiTaskEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[1],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tKernel_eKernelEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tKernel_eKernelEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[2],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tKernel_eiKernelEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tKernel_eiKernelEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[3],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tUltrasonicSensor_eUltrasonicSensorEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tUltrasonicSensor_eUltrasonicSensorEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[4],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tColorSensor_eColorSensorEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tColorSensor_eColorSensorEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[5],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTouchSensor_eTouchSensorEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTouchSensor_eTouchSensorEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[6],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tGyroSensor_eGyroSensorEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tGyroSensor_eGyroSensorEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[7],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tMotor_eMotorEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tMotor_eMotorEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[8],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tButton_eButtonEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tButton_eButtonEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[9],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tLCD_eLCDEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tLCD_eLCDEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[10],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tLED_eLEDEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tLED_eLEDEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[11],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tBattery_eBatteryEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tBattery_eBatteryEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[12],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tSpeaker_eSpeakerEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tSpeaker_eSpeakerEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[13],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tEV3Platform_eTaskBodyEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tEV3Platform_eTaskBodyEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[14],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tBalancer_eBalancerEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tBalancer_eBalancerEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[15],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tSharedMemory_eSharedMemoryEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tSharedMemory_eSharedMemoryEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[16],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTaskMain_eBodyEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_tTaskMain_eBodyEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[17],   /* INIB */
};
extern const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfo_eTECSInfoEntryInfo_eEntryInfo_des;
const struct tag_nTECSInfo_tEntryInfo_eEntryInfo_DES rDomainEV3_rTECSInfo_nTECSInfo_tTECSInfo_eTECSInfoEntryInfo_eEntryInfo_des = {
    &nTECSInfo_tEntryInfo_eEntryInfo_MT_,
    &nTECSInfo_tEntryInfo_INIB_tab[18],   /* INIB */
};
/* CB 初期化コード #_CIC_# */
void
nTECSInfo_tEntryInfo_CB_initialize()
{
    nTECSInfo_tEntryInfo_CB	*p_cb;
    int		i;
    FOREACH_CELL(i,p_cb)
        SET_CB_INIB_POINTER(i,p_cb)
        INITIALIZE_CB(p_cb)
    END_FOREACH_CELL
}
