/*
 * ���Υե������ tecsgen �ˤ�꼫ư��������ޤ���
 * ���Υե�������Խ����ƻ��Ѥ��뤳�Ȥϡ��տޤ���Ƥ��ޤ���
 */
/* #[<PREAMBLE>]#
 * #[<...>]# ���� #[</...>]# �ǰϤޤ줿�����Ȥ��Խ����ʤ��Ǥ�������
 * tecsmerge �ˤ��ޡ����˻��Ѥ���ޤ�
 *
 * �ƤӸ��ؿ� #_TCPF_#
 * call port: cTECS signature: sColorSensor context:task
 *   colorid_t      cTECS_getColor( );
 *   uint8_t        cTECS_getReflect( );
 *   uint8_t        cTECS_getAmbient( );
 *   void           cTECS_initializePort( );
 *   void           cTECS_getRGBRaw( uint16_t* r, uint16_t* g, uint16_t* b );
 *
 * #[</PREAMBLE>]# */

/* �ץ�ȥ�����������ѿ�������򤳤��˽񤭤ޤ� #_PAC_# */
#include "nMruby_tsColorSensor_tecsgen.h"

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
extern nMruby_tsColorSensor_CB  rDomainEV3_BridgeColorSensor1_INIB;
extern nMruby_tsColorSensor_CB  rDomainEV3_BridgeColorSensor2_INIB;
extern nMruby_tsColorSensor_CB  rDomainEV3_BridgeColorSensor3_INIB;
extern nMruby_tsColorSensor_CB  rDomainEV3_BridgeColorSensor4_INIB;

/* RData MBP001 */
static void 
tsColorSensor_free( mrb_state *mrb, void *p )
{
	if( p )
		(void)mrb_free( mrb, p );
}

/* RData MBP002 */
struct mrb_data_type data_type_tsColorSensor =
{
	"tsColorSensor",
	tsColorSensor_free
};

/* RData MBP003 */
struct tecs_tsColorSensor {
    CELLCB  *cbp;
};

/* name_to_cbp MBP010 */
const struct name_to_cbp_tsColorSensor {
    char   *name;    /* Cell Name */
    CELLCB *cbp;
} Name_to_cbp_tsColorSensor[] = {
	{ "BridgeColorSensor1", &rDomainEV3_BridgeColorSensor1_INIB },
	{ "BridgeColorSensor2", &rDomainEV3_BridgeColorSensor2_INIB },
	{ "BridgeColorSensor3", &rDomainEV3_BridgeColorSensor3_INIB },
	{ "BridgeColorSensor4", &rDomainEV3_BridgeColorSensor4_INIB },
	{ 0, 0 },
};


/* MBP100 */
mrb_value
MrubyBridge_tsColorSensor_initialize( mrb_state *mrb, mrb_value self)
{
	mrb_value	name;
	struct tecs_tsColorSensor *tecs_cb;
	const struct name_to_cbp_tsColorSensor *ntc;

	/* set DATA_TYPE earlier to avoid SEGV */
	DATA_TYPE( self ) = &data_type_tsColorSensor;

	mrb_get_args(mrb, "o", &name );
	if( mrb_type( name ) != MRB_TT_STRING ){
		mrb_raise(mrb, E_NAME_ERROR, "cell name not string");
	}
	for( ntc = &Name_to_cbp_tsColorSensor[0]; ntc->name != NULL; ntc++ ){
		if( strcmp( ntc->name, RSTRING_PTR( name ) ) == 0 )
			break;
	}
	if( ntc->name == 0 ){
		mrb_raise(mrb, E_ARGUMENT_ERROR, "cell not found");
	}
	tecs_cb = (struct tecs_tsColorSensor *)mrb_malloc(mrb, sizeof(struct tecs_tsColorSensor) );
	tecs_cb->cbp = ntc->cbp;
	DATA_PTR( self ) = (void *)tecs_cb;

	return self;
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsColorSensor_getColor( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsColorSensor *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	colorid_t	ret_val;
	/* calling target (MBP120) */
	ret_val = cTECS_getColor(  );
	/* return (MBP130) */
	return mrb_fixnum_value( ret_val );
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsColorSensor_getReflect( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsColorSensor *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	uint8_t	ret_val;
	/* calling target (MBP120) */
	ret_val = cTECS_getReflect(  );
	/* return (MBP130) */
	return mrb_fixnum_value( ret_val );
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsColorSensor_getAmbient( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsColorSensor *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	uint8_t	ret_val;
	/* calling target (MBP120) */
	ret_val = cTECS_getAmbient(  );
	/* return (MBP130) */
	return mrb_fixnum_value( ret_val );
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsColorSensor_initializePort( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsColorSensor *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	/* calling target (MBP120) */
	cTECS_initializePort(  );
	/* return (MBP130) */
	return  mrb_nil_value();
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsColorSensor_getRGBRaw( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsColorSensor *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	mrb_value	mrb_r;
	uint16_t*	r;
	mrb_value	mrb_g;
	uint16_t*	g;
	mrb_value	mrb_b;
	uint16_t*	b;
	/* retrieve arguments (MBP111) */
	mrb_get_args(mrb, "ooo", &mrb_r, &mrb_g, &mrb_b );
	/* convert mrb to C for pointer types (MBP113) */
	r = CheckAndGetUInt16Pointer( mrb, mrb_r, 1 );
	g = CheckAndGetUInt16Pointer( mrb, mrb_g, 1 );
	b = CheckAndGetUInt16Pointer( mrb, mrb_b, 1 );
	/* calling target (MBP120) */
	cTECS_getRGBRaw( r, g, b );
	/* return (MBP130) */
	return  mrb_nil_value();
}
/* #[<POSTAMBLE>]#
 *   �����겼����������ؿ���񤭤ޤ�
 * #[</POSTAMBLE>]#*/
