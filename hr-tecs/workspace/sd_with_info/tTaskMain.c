/*
 * このファイルは tecsgen によりテンプレートとして自動生成されました
 * このファイルを編集して使用することが意図されていますが
 * tecsgen の再実行により上書きされてしまうため、通常
 *   gen/tTaskMain_templ.c => src/tTaskMain.c
 * のように名前, フォルダを変更してから修正します
 */
/* #[<PREAMBLE>]#
 * #[<...>]# から #[</...>]# で囲まれたコメントは編集しないでください
 * tecsmerge によるマージに使用されます
 *
 * 属性アクセスマクロ #_CAAM_#
 * white            int16_t          VAR_white
 * black            int16_t          VAR_black
 * lasterror        float32_t        VAR_lasterror
 * integral         float32_t        VAR_integral
 * midpoint         float32_t        VAR_midpoint
 * error            float32_t        VAR_error
 * steer            float32_t        VAR_steer
 *
 * 呼び口関数 #_TCPF_#
 * call port: cLCD signature: sLCD context:task
 *   ER             cLCD_setFont( lcdfont_t font );
 *   ER             cLCD_getFontSize( lcdfont_t font, int32_t* p_width, int32_t* p_height );
 *   ER             cLCD_drawString( const char* str, int32_t x, int32_t y );
 *   ER             cLCD_fillRect( int32_t x, int32_t y, int32_t w, int32_t h, lcdcolor_t color );
 *   ER             cLCD_drawLine( int32_t x0, int32_t y0, int32_t x1, int32_t y1 );
 *   void           cLCD_print( const char* str );
 *   void           cLCD_puts( const char* str );
 *   void           cLCD_clear( );
 *   void           cLCD_showMessageBox( const char* title, const char* msg );
 * call port: cButton signature: sButton context:task
 *   bool_t         cButton_isPressed( button_t button );
 * call port: cKernel signature: sKernel context:task
 *   ER             cKernel_sleep( );
 *   ER             cKernel_sleepTimeout( TMO timeout );
 *   ER             cKernel_delay( RELTIM delayTime );
 *   ER             cKernel_exitTask( );
 *   ER             cKernel_getTaskId( ID* p_taskId );
 *   ER             cKernel_rotateReadyQueue( PRI taskPriority );
 *   ER             cKernel_getTime( SYSTIM* p_systemTime );
 *   ER             cKernel_getMicroTime( SYSUTM* p_systemMicroTime );
 *   ER             cKernel_lockCpu( );
 *   ER             cKernel_unlockCpu( );
 *   ER             cKernel_disableDispatch( );
 *   ER             cKernel_enableDispatch( );
 *   ER             cKernel_disableTaskException( );
 *   ER             cKernel_enableTaskException( );
 *   ER             cKernel_changeInterruptPriorityMask( PRI interruptPriority );
 *   ER             cKernel_getInterruptPriorityMask( PRI* p_interruptPriority );
 *   ER             cKernel_exitKernel( );
 *   bool_t         cKernel_senseContext( );
 *   bool_t         cKernel_senseLock( );
 *   bool_t         cKernel_senseDispatch( );
 *   bool_t         cKernel_senseDispatchPendingState( );
 *   bool_t         cKernel_senseKernel( );
 * call port: cLeftMotor signature: sMotor context:task
 *   ER_UINT        cLeftMotor_getType( );
 *   int32_t        cLeftMotor_getCounts( );
 *   int            cLeftMotor_getPower( );
 *   ER             cLeftMotor_resetCounts( );
 *   ER             cLeftMotor_setPower( int power );
 *   ER             cLeftMotor_stop( bool_t brake );
 *   ER             cLeftMotor_rotate( int degrees, uint32_t speed_abs, bool_t blocking );
 *   void           cLeftMotor_initializePort( int32_t type );
 * call port: cRightMotor signature: sMotor context:task
 *   ER_UINT        cRightMotor_getType( );
 *   int32_t        cRightMotor_getCounts( );
 *   int            cRightMotor_getPower( );
 *   ER             cRightMotor_resetCounts( );
 *   ER             cRightMotor_setPower( int power );
 *   ER             cRightMotor_stop( bool_t brake );
 *   ER             cRightMotor_rotate( int degrees, uint32_t speed_abs, bool_t blocking );
 *   void           cRightMotor_initializePort( int32_t type );
 * call port: cSpeaker signature: sSpeaker context:task
 *   ER             cSpeaker_setVolume( uint8_t volume );
 *   ER             cSpeaker_playTone( uint16_t frequency, int32_t duration );
 *   ER             cSpeaker_stop( );
 * call port: cTouchSensor signature: sTouchSensor context:task
 *   bool_t         cTouchSensor_isPressed( );
 *   void           cTouchSensor_initializePort( );
 * call port: cColorSensor signature: sColorSensor context:task
 *   colorid_t      cColorSensor_getColor( );
 *   uint8_t        cColorSensor_getReflect( );
 *   uint8_t        cColorSensor_getAmbient( );
 *   void           cColorSensor_initializePort( );
 *   void           cColorSensor_getRGBRaw( uint16_t* r, uint16_t* g, uint16_t* b );
 *
 * #[</PREAMBLE>]# */

/* プロトタイプ宣言や変数の定義をここに書きます #_PAC_# */
#include "tTaskMain_tecsgen.h"

#ifndef E_OK
#define	E_OK	0		/* success */
#define	E_ID	(-18)	/* illegal ID */
#endif

/* 受け口関数 #_TEPF_# */
/* #[<ENTRY_PORT>]# eBody
 * entry port: eBody
 * signature:  sTaskBody
 * context:    task
 * #[</ENTRY_PORT>]# */

/* #[<ENTRY_FUNC>]# eBody_main
 * name:         eBody_main
 * global_name:  tTaskMain_eBody_main
 * oneway:       false
 * #[</ENTRY_FUNC>]# */
void
eBody_main(CELLIDX idx)
{
	CELLCB	*p_cellcb;
	if (VALID_IDX(idx)) {
		p_cellcb = GET_CELLCB(idx);
	}
	else {
		/* エラー処理コードをここに記述します */
	} /* end if VALID_IDX(idx) */

	/* ここに処理本体を記述します #_TEFB_# */

  /*
   * C:\cygwin64\home\Shirata\ev3rt-beta7-3-release\hrp2\sdk\workspace\linetrace
   * を参考にライントレースを実行してみる
   */
  cLCD_setFont( EV3_FONT_SMALL );

  cLeftMotor_initializePort( LARGE_MOTOR );
  cRightMotor_initializePort( LARGE_MOTOR );

  cTouchSensor_initializePort();
  cColorSensor_initializePort();

  cSpeaker_playTone( NOTE_C4, 100 );
  cKernel_sleepTimeout(100);
  cSpeaker_playTone( NOTE_C4, 100 );

  cLCD_drawString( "Press the touch sensor to measure light intensity of WHITE.", 0, 0);
  while( !cTouchSensor_isPressed() );
  while( cTouchSensor_isPressed() );
  VAR_white = cColorSensor_getReflect();

  cSpeaker_playTone( NOTE_C4, 100 );
  cKernel_sleepTimeout(100);
  cSpeaker_playTone( NOTE_C4, 100 );

  cLCD_drawString( "Press the touch sensor to measure light intensity of WHITE.", 0, 0);
  while( !cTouchSensor_isPressed() );
  while( cTouchSensor_isPressed() );
  VAR_black = cColorSensor_getReflect();

  VAR_midpoint = (VAR_white - VAR_black) / 2 + black;
  while(1){
    VAR_error = VAR_midpoint - cColorSensor_getReflect();
    VAR_integral = VAR_error + VAR_integral * 0.5;
    VAR_steer = 0.07 * VAR_error + 0.3 * VAR_integral + 1 * (VAR_error - VAR_lasterror);
    ev3_motor_steer( EV3_PORT_B, EV3_PORT_C, 10, steer ); /* TECS未対応関数 */
    VAR_lasterror = VAR_error;
    cKernel_sleepTimeout(1);
  }
}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
