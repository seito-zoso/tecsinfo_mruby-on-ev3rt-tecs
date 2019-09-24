/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * �ƤӸ��ؿ� #_TCPF_#
 * call port: cTECS signature: sTouchSensor context:task
 *   bool_t         cTECS_isPressed( );
 *   void           cTECS_initializePort( );
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "nMruby_tsTouchSensor_tecsgen.h"

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
extern nMruby_tsTouchSensor_CB  rDomainEV3_BridgeTouchSensor1_INIB;
extern nMruby_tsTouchSensor_CB  rDomainEV3_BridgeTouchSensor2_INIB;
extern nMruby_tsTouchSensor_CB  rDomainEV3_BridgeTouchSensor3_INIB;
extern nMruby_tsTouchSensor_CB  rDomainEV3_BridgeTouchSensor4_INIB;

/* RData MBP001 */
static void 
tsTouchSensor_free( mrb_state *mrb, void *p )
{
	if( p )
		(void)mrb_free( mrb, p );
}

/* RData MBP002 */
struct mrb_data_type data_type_tsTouchSensor =
{
	"tsTouchSensor",
	tsTouchSensor_free
};

/* RData MBP003 */
struct tecs_tsTouchSensor {
    CELLCB  *cbp;
};

/* name_to_cbp MBP010 */
const struct name_to_cbp_tsTouchSensor {
    char   *name;    /* Cell Name */
    CELLCB *cbp;
} Name_to_cbp_tsTouchSensor[] = {
	{ "BridgeTouchSensor1", &rDomainEV3_BridgeTouchSensor1_INIB },
	{ "BridgeTouchSensor2", &rDomainEV3_BridgeTouchSensor2_INIB },
	{ "BridgeTouchSensor3", &rDomainEV3_BridgeTouchSensor3_INIB },
	{ "BridgeTouchSensor4", &rDomainEV3_BridgeTouchSensor4_INIB },
	{ 0, 0 },
};


/* MBP100 */
mrb_value
MrubyBridge_tsTouchSensor_initialize( mrb_state *mrb, mrb_value self)
{
	mrb_value	name;
	struct tecs_tsTouchSensor *tecs_cb;
	const struct name_to_cbp_tsTouchSensor *ntc;

	/* set DATA_TYPE earlier to avoid SEGV */
	DATA_TYPE( self ) = &data_type_tsTouchSensor;

	mrb_get_args(mrb, "o", &name );
	if( mrb_type( name ) != MRB_TT_STRING ){
		mrb_raise(mrb, E_NAME_ERROR, "cell name not string");
	}
	for( ntc = &Name_to_cbp_tsTouchSensor[0]; ntc->name != NULL; ntc++ ){
		if( strcmp( ntc->name, RSTRING_PTR( name ) ) == 0 )
			break;
	}
	if( ntc->name == 0 ){
		mrb_raise(mrb, E_ARGUMENT_ERROR, "cell not found");
	}
	tecs_cb = (struct tecs_tsTouchSensor *)mrb_malloc(mrb, sizeof(struct tecs_tsTouchSensor) );
	tecs_cb->cbp = ntc->cbp;
	DATA_PTR( self ) = (void *)tecs_cb;

	return self;
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsTouchSensor_isPressed( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsTouchSensor *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	bool_t	ret_val;
	/* calling target (MBP120) */
	ret_val = cTECS_isPressed(  );
	/* return (MBP130) */
	return ret_val ? mrb_true_value() : mrb_false_value();
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsTouchSensor_initializePort( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsTouchSensor *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	/* calling target (MBP120) */
	cTECS_initializePort(  );
	/* return (MBP130) */
	return  mrb_nil_value();
}
/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
