/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef sCyclic_TECSGEN_H
#define sCyclic_TECSGEN_H

/*
 * signature   :  sCyclic
 * global name :  sCyclic
 * context     :  task
 */

#ifndef TOPPERS_MACRO_ONLY

/* �����˥���ǥ�������ץ� #_SD_# */
struct tag_sCyclic_VDES {
    struct tag_sCyclic_VMT *VMT;
};

/* �����˥���ؿ��ơ��֥� #_SFT_# */
struct tag_sCyclic_VMT {
    ER             (*start__T)( const struct tag_sCyclic_VDES *edp );
    ER             (*stop__T)( const struct tag_sCyclic_VDES *edp );
    ER             (*refer__T)( const struct tag_sCyclic_VDES *edp, T_RCYC* pk_cyclicHandlerStatus );
};

/* �����˥���ǥ�������ץ�(ưŪ�����) #_SDES_# */
#ifndef Descriptor_of_sCyclic_Defined
#define  Descriptor_of_sCyclic_Defined
typedef struct { struct tag_sCyclic_VDES *vdes; } Descriptor( sCyclic );
#endif
#endif /* TOPPERS_MACRO_ONLY */

/* function id */
#define	FUNCID_SCYCLIC_START                   (1)
#define	FUNCID_SCYCLIC_STOP                    (2)
#define	FUNCID_SCYCLIC_REFER                   (3)

#endif /* sCyclic_TECSGEN_H */
