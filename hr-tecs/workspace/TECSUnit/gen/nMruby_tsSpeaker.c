/*
 * このファイルは tecsgen により自動生成されました
 * このファイルを編集して使用することは、意図されていません
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 呼び口関数 #_TCPF_#
 * call port: cTECS signature: sSpeaker context:task
 *   ER             cTECS_setVolume( uint8_t volume );
 *   ER             cTECS_playTone( uint16_t frequency, int32_t duration );
 *   ER             cTECS_stop( );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "nMruby_tsSpeaker_tecsgen.h"

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
extern nMruby_tsSpeaker_CB  rDomainEV3_BridgeSpeaker_INIB;

/* RData MBP001 */
static void 
tsSpeaker_free( mrb_state *mrb, void *p )
{
	if( p )
		(void)mrb_free( mrb, p );
}

/* RData MBP002 */
struct mrb_data_type data_type_tsSpeaker =
{
	"tsSpeaker",
	tsSpeaker_free
};

/* RData MBP003 */
struct tecs_tsSpeaker {
    CELLCB  *cbp;
};

/* name_to_cbp MBP010 */
const struct name_to_cbp_tsSpeaker {
    char   *name;    /* Cell Name */
    CELLCB *cbp;
} Name_to_cbp_tsSpeaker[] = {
	{ "BridgeSpeaker", &rDomainEV3_BridgeSpeaker_INIB },
	{ 0, 0 },
};


/* MBP100 */
mrb_value
MrubyBridge_tsSpeaker_initialize( mrb_state *mrb, mrb_value self)
{
	mrb_value	name;
	struct tecs_tsSpeaker *tecs_cb;
	const struct name_to_cbp_tsSpeaker *ntc;

	/* set DATA_TYPE earlier to avoid SEGV */
	DATA_TYPE( self ) = &data_type_tsSpeaker;

	mrb_get_args(mrb, "o", &name );
	if( mrb_type( name ) != MRB_TT_STRING ){
		mrb_raise(mrb, E_NAME_ERROR, "cell name not string");
	}
	for( ntc = &Name_to_cbp_tsSpeaker[0]; ntc->name != NULL; ntc++ ){
		if( strcmp( ntc->name, RSTRING_PTR( name ) ) == 0 )
			break;
	}
	if( ntc->name == 0 ){
		mrb_raise(mrb, E_ARGUMENT_ERROR, "cell not found");
	}
	tecs_cb = (struct tecs_tsSpeaker *)mrb_malloc(mrb, sizeof(struct tecs_tsSpeaker) );
	tecs_cb->cbp = ntc->cbp;
	DATA_PTR( self ) = (void *)tecs_cb;

	return self;
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsSpeaker_setVolume( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsSpeaker *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	ER	ret_val;
	mrb_int	mrb_volume;
	uint8_t	volume;
	/* retrieve arguments (MBP111) */
	mrb_get_args(mrb, "i", &mrb_volume );
	/* convert mrb to C (MBP112) */
	VALCHECK_UInt8( mrb, mrb_volume );
	volume = (uint8_t)mrb_volume;
	/* calling target (MBP120) */
	ret_val = cTECS_setVolume( volume );
	/* return (MBP130) */
	return mrb_fixnum_value( ret_val );
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsSpeaker_playTone( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsSpeaker *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	ER	ret_val;
	mrb_int	mrb_frequency;
	uint16_t	frequency;
	mrb_int	mrb_duration;
	int32_t	duration;
	/* retrieve arguments (MBP111) */
	mrb_get_args(mrb, "ii", &mrb_frequency, &mrb_duration );
	/* convert mrb to C (MBP112) */
	VALCHECK_UInt16( mrb, mrb_frequency );
	frequency = (uint16_t)mrb_frequency;
	VALCHECK_Int32( mrb, mrb_duration );
	duration = (int32_t)mrb_duration;
	/* calling target (MBP120) */
	ret_val = cTECS_playTone( frequency, duration );
	/* return (MBP130) */
	return mrb_fixnum_value( ret_val );
}

/* bridge function (MBP101) */
mrb_value
MrubyBridge_tsSpeaker_stop( mrb_state *mrb, mrb_value self )
{
	/* cellcbp (MBP105) */
	CELLCB	*p_cellcb = ((struct tecs_tsSpeaker *)DATA_PTR(self))->cbp;
	/* variables for return & parameter (MBP110) */
	ER	ret_val;
	/* calling target (MBP120) */
	ret_val = cTECS_stop(  );
	/* return (MBP130) */
	return mrb_fixnum_value( ret_val );
}
/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
