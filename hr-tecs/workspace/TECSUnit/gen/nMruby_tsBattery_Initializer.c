/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "nMruby_tsBattery_Initializer_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* MBP: MrubyBridgePlugin: MBP000 */
#include "mruby.h"
#include "mruby/class.h"
#include "mruby/data.h"
#include "mruby/string.h"
#include "TECSPointer.h"
#include "TECSStruct.h"

#if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT
#endif

#ifndef NULL
#define NULL 0
#endif
//  Prototype MBP400
mrb_value  MrubyBridge_tsBattery_initialize( mrb_state *mrb, mrb_value self);
mrb_value  MrubyBridge_tsBattery_current_mA( mrb_state *mrb, mrb_value self );
mrb_value  MrubyBridge_tsBattery_voltage_mV( mrb_state *mrb, mrb_value self );
/* �������ؿ� #_TEPF_# */
/* #[<ENTRY_PORT>]# eInitialize
 * entry port: eInitialize
 * signature:  nMruby_sInitializeTECSBridge
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eInitialize_initializeBridge
 * name:         eInitialize_initializeBridge
 * global_name:  nMruby_tsBattery_Initializer_eInitialize_initializeBridge
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eInitialize_initializeBridge(CELLIDX idx, mrb_state* mrb, struct RClass* TECS)
{
    // CELLCB *p_cellcb = GET_CELLCB( idx );  /* no error check */     /* MBP700 */
    struct RClass	*rc;

    rc = mrb_define_class_under( mrb, TECS, "TsBattery", mrb->object_class );
    mrb_define_method( mrb, rc, "initialize", MrubyBridge_tsBattery_initialize, MRB_ARGS_REQ(1) );
    MRB_SET_INSTANCE_TT(rc, MRB_TT_DATA);
	mrb_define_method( mrb, rc, "current_mA", MrubyBridge_tsBattery_current_mA, MRB_ARGS_NONE() );
	mrb_define_method( mrb, rc, "voltage_mV", MrubyBridge_tsBattery_voltage_mV, MRB_ARGS_NONE() );
}

/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
