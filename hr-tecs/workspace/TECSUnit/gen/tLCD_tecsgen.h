/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
#ifndef tLCD_TECSGEN_H
#define tLCD_TECSGEN_H

/*
 * celltype          :  tLCD
 * global name       :  tLCD
 * idx_is_id(actual) :  no(no)
 * singleton         :  no
 * has_CB            :  true
 * has_INIB          :  0
 * rom               :  yes
 * CB initializer    :  yes
 */

/* �����Х�إå� #_IGH_# */
#include "global_tecsgen.h"

/* �����˥���إå� #_ISH_# */
#include "sLCD_tecsgen.h"
#include "sButton_tecsgen.h"

#ifndef TOPPERS_MACRO_ONLY

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
/* ���� INIB ����� #_CIP_# */
typedef const struct tag_tLCD_INIB {
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
}  tLCD_INIB;
/* ���� CB ����� #_CCTPA_# */
typedef struct tag_tLCD_CB {
    tLCD_INIB  *_inib;
    /* call port #_TCP_# */
    /* call port #_NEP_# */ 
    /* var #_VA_# */ 
    lcdfont_t      currentFont;
}  tLCD_CB;
extern tLCD_CB  tLCD_CB_tab[];

/* ���륿���פ�IDX�� #_CTIX_# */
typedef struct tag_tLCD_CB *tLCD_IDX;

/* �������ؿ��ץ�ȥ�������� #_EPP_# */
/* sLCD */
ER           tLCD_eLCD_setFont(tLCD_IDX idx, lcdfont_t font);
ER           tLCD_eLCD_getFontSize(tLCD_IDX idx, lcdfont_t font, int32_t* p_width, int32_t* p_height);
ER           tLCD_eLCD_drawString(tLCD_IDX idx, const char* str, int32_t x, int32_t y);
ER           tLCD_eLCD_fillRect(tLCD_IDX idx, int32_t x, int32_t y, int32_t w, int32_t h, lcdcolor_t color);
ER           tLCD_eLCD_drawLine(tLCD_IDX idx, int32_t x0, int32_t y0, int32_t x1, int32_t y1);
void         tLCD_eLCD_print(tLCD_IDX idx, const char* str);
void         tLCD_eLCD_puts(tLCD_IDX idx, const char* str);
void         tLCD_eLCD_clear(tLCD_IDX idx);
void         tLCD_eLCD_showMessageBox(tLCD_IDX idx, const char* title, const char* msg);
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* TOPPERS_MACRO_ONLY */

/* ��Ŭ���Τ��Ỳ�Ȥ��륻�륿���פ� CB ������������� #_ICT_# */
#ifndef  TOPPERS_CB_TYPE_ONLY
#define  tLCD_CB_TYPE_ONLY
#define TOPPERS_CB_TYPE_ONLY
#endif  /* TOPPERS_CB_TYPE_ONLY */
#include "tButton_tecsgen.h"
#ifdef  tLCD_CB_TYPE_ONLY
#undef TOPPERS_CB_TYPE_ONLY
#endif /* tLCD_CB_TYPE_ONLY */
#ifndef TOPPERS_CB_TYPE_ONLY

#define tLCD_ID_BASE                (1)  /* ID �Υ١���  #_NIDB_# */
#define tLCD_N_CELL                 (1)  /* ����θĿ�  #_NCEL_# */

/* IDX�������������å��ޥ��� #_CVI_# */
#define tLCD_VALID_IDX(IDX) (1)


/* ����CB������ޥ��� #_GCB_# */
#define tLCD_GET_CELLCB(idx) (idx)



/* var ���������ޥ��� #_VAM_# */
#define tLCD_VAR_currentFont(p_that)	((p_that)->currentFont)

#define tLCD_GET_currentFont(p_that)	((p_that)->currentFont)
#define tLCD_SET_currentFont(p_that,val)	((p_that)->currentFont=(val))

 /* �ƤӸ��ؿ��ޥ��� #_CPM_# */
#define tLCD_cButton_isPressed( p_that, button ) \
	  tButton_eButton_isPressed( \
	   &tButton_CB_tab[0], (button) )

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

/* IDX�������������å��ޥ����û�̷��� #_CVIA_# */
#define VALID_IDX(IDX)  tLCD_VALID_IDX(IDX)


/* ����CB������ޥ���(û�̷�) #_GCBA_# */
#define GET_CELLCB(idx)  tLCD_GET_CELLCB(idx)

/* CELLCB ��(û�̷�) #_CCT_# */
#define CELLCB	tLCD_CB

/* ���륿���פ�IDX��(û�̷�) #_CTIXA_# */
#define CELLIDX	tLCD_IDX



/* var ���������ޥ���(û�̷�) #_VAMA_# */
#define VAR_currentFont      tLCD_VAR_currentFont( p_cellcb )

/* �ƤӸ��ؿ��ޥ����û�̷���#_CPMA_# */
#define cButton_isPressed( button ) \
          ((void)p_cellcb, tLCD_cButton_isPressed( p_cellcb, button ))




/* �������ؿ��ޥ����û�̷��� #_EPM_# */
#define eLCD_setFont     tLCD_eLCD_setFont
#define eLCD_getFontSize tLCD_eLCD_getFontSize
#define eLCD_drawString  tLCD_eLCD_drawString
#define eLCD_fillRect    tLCD_eLCD_fillRect
#define eLCD_drawLine    tLCD_eLCD_drawLine
#define eLCD_print       tLCD_eLCD_print
#define eLCD_puts        tLCD_eLCD_puts
#define eLCD_clear       tLCD_eLCD_clear
#define eLCD_showMessageBox tLCD_eLCD_showMessageBox

/* ���ƥ졼�������� (FOREACH_CELL)������ #_FEC_# */
#define FOREACH_CELL(i,p_cb)   \
    for( (i) = 0; (i) < tLCD_N_CELL; (i)++ ){ \
       (p_cb) = &tLCD_CB_tab[i];

#define END_FOREACH_CELL   }

/* CB ������ޥ��� #_CIM_# */
#define INITIALIZE_CB(p_that)	(void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)\
	(p_that)->_inib = &tLCD_INIB_tab[(i)];

#endif /* TOPPERS_CB_TYPE_ONLY */

#ifndef TOPPERS_MACRO_ONLY

#endif /* TOPPERS_MACRO_ONLY */

#endif /* tLCD_TECSGENH */
