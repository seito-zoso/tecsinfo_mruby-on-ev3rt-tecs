/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tSpeaker_TECSGEN_H
#define tSpeaker_TECSGEN_H

/*
 * celltype          :  tSpeaker
 * global name       :  tSpeaker
 * idx_is_id(actual) :  no(no)
 * singleton         :  yes
 * has_CB            :  false
 * has_INIB          :  0
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sSpeaker_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tSpeaker_INIB {
    /* call port #_NEP_# */ 
}  tSpeaker_INIB;

/* CB ��¸�ߤ��ʤ���INIB �� CB ������˻��Ѥ��뤿��� define #_DCI_# */
#define tSpeaker_CB_tab           tSpeaker_INIB_tab
#define tSpeaker_SINGLE_CELL_CB   tSpeaker_SINGLE_CELL_INIB
#define tSpeaker_CB               tSpeaker_INIB
#define tag_tSpeaker_CB           tag_tSpeaker_INIB

/* ���󥰥�ȥ󥻥� CB �ץ�ȥ�������� #_SCP_# */
extern  tSpeaker_INIB  tSpeaker_SINGLE_CELL_INIB;


/* ���륿���פ�IDX�� #_CTIX_# */
typedef const struct tag_tSpeaker_INIB *tSpeaker_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sSpeaker */
ER           tSpeaker_eSpeaker_setVolume( uint8_t volume);
ER           tSpeaker_eSpeaker_playTone( uint16_t frequency, int32_t duration);
ER           tSpeaker_eSpeaker_stop();
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ��� #_GCB_# */
#define tSpeaker_GET_CELLCB(idx) ((void *)0)
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/* ������������ȥ�ؿ��ץ�ȥ����������VMT���׺�Ŭ���ˤ�껲�Ȥ����Ρ� #_EPSP_# */

#ifndef TOPPERS_CB_TYPE_ONLY

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

#ifndef TOPPERS_CB_TYPE_ONLY


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tSpeaker_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tSpeaker_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tSpeaker_IDX




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eSpeaker_setVolume tSpeaker_eSpeaker_setVolume
#define eSpeaker_playTone tSpeaker_eSpeaker_playTone
#define eSpeaker_stop    tSpeaker_eSpeaker_stop

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB()
#define SET_CB_INIB_POINTER(i,p_that)\
	/* empty */
#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tSpeaker_TECSGENH */
