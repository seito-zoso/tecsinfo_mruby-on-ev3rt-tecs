/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef nPosix_sMain_TECSGEN_H
#define nPosix_sMain_TECSGEN_H

/*
 * signature   :  sMain
 * global name :  nPosix_sMain
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_nPosix_sMain_VDES {
    struct tag_nPosix_sMain_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_nPosix_sMain_VMT {
    int            (*main__T)( const struct tag_nPosix_sMain_VDES *edp, int argc, const char** argv );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_nPosix_sMain_Defined
#define  Descriptor_of_nPosix_sMain_Defined
typedef struct { struct tag_nPosix_sMain_VDES *vdes; } Descriptor( nPosix_sMain );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_NPOSIX_SMAIN_MAIN               (1)

#endif /* nPosix_sMain_TECSGEN_H */
