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
  for( VAR_num = 1; VAR_num < 6;  VAR_num++){
    VAR_num2 = VAR_num2 + 1.0;
    cLCD_drawString( "Task", 0, VAR_num + 5 );
    cKernel_delay(500);
    while(1){
      if( cButton_isPressed( ENTER_BUTTON ) ){
        break;
      }
    }
  }
  cLCD_clear();

}

/* #[<POSTAMBLE>]#
 *   これより下に非受け口関数を書きます
 * #[</POSTAMBLE>]#*/
