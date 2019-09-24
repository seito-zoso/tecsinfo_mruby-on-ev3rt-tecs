#ifndef tCallInfo_FACTORY_H
#define tCallInfo_FACTORY_H
#include "include_all_signature_header.h"

/***** Offset of attr & var of celltype  *****/
#define TOPPERS_CB_TYPE_ONLY

/* In case a celltype has 'inline' entry,
 * some macros are temprally defined
 * even if TOPPERS_CB_TYPE_ONLY is defined.
 * To avoid redefinition warning, undef these macros.
 */
#undef VALID_IDX
#undef GET_CELLCB
#undef CELLCB
#undef CELLIDX
#undef tCallInfo_IDX
#undef ATTR_name
#undef ATTR_offset
#undef ATTR_b_inCB
#undef ATTR_b_optional
#undef ATTR_b_omit
#undef ATTR_b_dynamic
#undef ATTR_b_ref_desc
#undef ATTR_b_allocator_port
#undef ATTR_b_require_port
#undef ATTR_b_VMT_useless
#undef ATTR_b_skelton_useless
#undef ATTR_b_cell_unique
#undef cSignatureInfo_getName
#undef cSignatureInfo_getNameLength
#undef cSignatureInfo_getNFunction
#undef cSignatureInfo_getFunctionInfo
#undef cSignatureInfo_refer_to_descriptor
#undef cSignatureInfo_ref_desc
#undef eCallInfo_getName
#undef eCallInfo_getNameLength
#undef eCallInfo_getSignatureInfo
#undef eCallInfo_getArraySize
#undef eCallInfo_isOptional
#undef eCallInfo_isDynamic
#undef eCallInfo_isRefDesc
#undef eCallInfo_isOmit

#undef INITIALIZE_CB
#undef FOREACH_CELL
#undef END_FOREACH_CELL

#include "tTask_tecsgen.h"
#define tTask_cBody__offset                                ((uint32_t)(intptr_t)&((tTask_INIB*)0)->cBody)
#define tTask_cBody__place                                 (CALL_PLACE_INIB_DES)
#define tTask_cBody__b_VMT_useless                         (false)
#define tTask_cBody__b_skelton_useless                     (false)
#define tTask_cBody__b_cell_unique                         (false)
#define tTask_cExceptionBody__offset                       (0xffffffff)
#define tTask_cExceptionBody__place                        (CALL_PLACE_NON)
#define tTask_cExceptionBody__b_VMT_useless                (true)
#define tTask_cExceptionBody__b_skelton_useless            (true)
#define tTask_cExceptionBody__b_cell_unique                (true)

#include "tKernel_tecsgen.h"

#include "tUltrasonicSensor_tecsgen.h"

#include "tColorSensor_tecsgen.h"

#include "tTouchSensor_tecsgen.h"

#include "tGyroSensor_tecsgen.h"

#include "tMotor_tecsgen.h"

#include "tButton_tecsgen.h"

#include "tLCD_tecsgen.h"
#define tLCD_cButton__offset                               (0xffffffff)
#define tLCD_cButton__place                                (CALL_PLACE_NON)
#define tLCD_cButton__b_VMT_useless                        (true)
#define tLCD_cButton__b_skelton_useless                    (true)
#define tLCD_cButton__b_cell_unique                        (true)

#include "tLED_tecsgen.h"

#include "tBattery_tecsgen.h"

#include "tSpeaker_tecsgen.h"

#include "tEV3Platform_tecsgen.h"
#define tEV3Platform_cRiteVM__offset                       ((uint32_t)(intptr_t)&((tEV3Platform_INIB*)0)->cRiteVM)
#define tEV3Platform_cRiteVM__place                        (CALL_PLACE_INIB_DES)
#define tEV3Platform_cRiteVM__b_VMT_useless                (false)
#define tEV3Platform_cRiteVM__b_skelton_useless            (false)
#define tEV3Platform_cRiteVM__b_cell_unique                (false)
#define tEV3Platform_cTask__offset                         ((uint32_t)(intptr_t)&((tEV3Platform_INIB*)0)->cTask)
#define tEV3Platform_cTask__place                          (CALL_PLACE_INIB_DES)
#define tEV3Platform_cTask__b_VMT_useless                  (false)
#define tEV3Platform_cTask__b_skelton_useless              (false)
#define tEV3Platform_cTask__b_cell_unique                  (false)

#include "tBalancer_tecsgen.h"

#include "tSharedMemory_tecsgen.h"

#include "tTaskMain_tecsgen.h"
#define tTaskMain_cLCD__offset                             (0xffffffff)
#define tTaskMain_cLCD__place                              (CALL_PLACE_NON)
#define tTaskMain_cLCD__b_VMT_useless                      (true)
#define tTaskMain_cLCD__b_skelton_useless                  (true)
#define tTaskMain_cLCD__b_cell_unique                      (true)
#define tTaskMain_cButton__offset                          (0xffffffff)
#define tTaskMain_cButton__place                           (CALL_PLACE_NON)
#define tTaskMain_cButton__b_VMT_useless                   (true)
#define tTaskMain_cButton__b_skelton_useless               (true)
#define tTaskMain_cButton__b_cell_unique                   (true)
#define tTaskMain_cTECSInfo__offset                        (0xffffffff)
#define tTaskMain_cTECSInfo__place                         (CALL_PLACE_NON)
#define tTaskMain_cTECSInfo__b_VMT_useless                 (true)
#define tTaskMain_cTECSInfo__b_skelton_useless             (true)
#define tTaskMain_cTECSInfo__b_cell_unique                 (true)
#define tTaskMain_cNSInfo__offset                          ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cNSInfo)
#define tTaskMain_cNSInfo__place                           (CALL_PLACE_CB_DES)
#define tTaskMain_cNSInfo__b_VMT_useless                   (false)
#define tTaskMain_cNSInfo__b_skelton_useless               (false)
#define tTaskMain_cNSInfo__b_cell_unique                   (false)
#define tTaskMain_cRegionInfo__offset                      ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cRegionInfo)
#define tTaskMain_cRegionInfo__place                       (CALL_PLACE_CB_DES)
#define tTaskMain_cRegionInfo__b_VMT_useless               (false)
#define tTaskMain_cRegionInfo__b_skelton_useless           (false)
#define tTaskMain_cRegionInfo__b_cell_unique               (false)
#define tTaskMain_cCellInfo__offset                        ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cCellInfo)
#define tTaskMain_cCellInfo__place                         (CALL_PLACE_CB_DES)
#define tTaskMain_cCellInfo__b_VMT_useless                 (false)
#define tTaskMain_cCellInfo__b_skelton_useless             (false)
#define tTaskMain_cCellInfo__b_cell_unique                 (false)
#define tTaskMain_cSignatureInfo__offset                   ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cSignatureInfo)
#define tTaskMain_cSignatureInfo__place                    (CALL_PLACE_CB_DES)
#define tTaskMain_cSignatureInfo__b_VMT_useless            (false)
#define tTaskMain_cSignatureInfo__b_skelton_useless        (false)
#define tTaskMain_cSignatureInfo__b_cell_unique            (false)
#define tTaskMain_cCelltypeInfo__offset                    ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cCelltypeInfo)
#define tTaskMain_cCelltypeInfo__place                     (CALL_PLACE_CB_DES)
#define tTaskMain_cCelltypeInfo__b_VMT_useless             (false)
#define tTaskMain_cCelltypeInfo__b_skelton_useless         (false)
#define tTaskMain_cCelltypeInfo__b_cell_unique             (false)
#define tTaskMain_cVarDeclInfo__offset                     ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cVarDeclInfo)
#define tTaskMain_cVarDeclInfo__place                      (CALL_PLACE_CB_DES)
#define tTaskMain_cVarDeclInfo__b_VMT_useless              (false)
#define tTaskMain_cVarDeclInfo__b_skelton_useless          (false)
#define tTaskMain_cVarDeclInfo__b_cell_unique              (false)
#define tTaskMain_cTypeInfo__offset                        ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cTypeInfo)
#define tTaskMain_cTypeInfo__place                         (CALL_PLACE_CB_DES)
#define tTaskMain_cTypeInfo__b_VMT_useless                 (false)
#define tTaskMain_cTypeInfo__b_skelton_useless             (false)
#define tTaskMain_cTypeInfo__b_cell_unique                 (false)
#define tTaskMain_cFunctionInfo__offset                    ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cFunctionInfo)
#define tTaskMain_cFunctionInfo__place                     (CALL_PLACE_CB_DES)
#define tTaskMain_cFunctionInfo__b_VMT_useless             (false)
#define tTaskMain_cFunctionInfo__b_skelton_useless         (false)
#define tTaskMain_cFunctionInfo__b_cell_unique             (false)
#define tTaskMain_cParamInfo__offset                       ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cParamInfo)
#define tTaskMain_cParamInfo__place                        (CALL_PLACE_CB_DES)
#define tTaskMain_cParamInfo__b_VMT_useless                (false)
#define tTaskMain_cParamInfo__b_skelton_useless            (false)
#define tTaskMain_cParamInfo__b_cell_unique                (false)
#define tTaskMain_cEntryInfo__offset                       ((uint32_t)(intptr_t)&((tTaskMain_CB*)0)->cEntryInfo)
#define tTaskMain_cEntryInfo__place                        (CALL_PLACE_CB_DES)
#define tTaskMain_cEntryInfo__b_VMT_useless                (false)
#define tTaskMain_cEntryInfo__b_skelton_useless            (false)
#define tTaskMain_cEntryInfo__b_cell_unique                (false)

#include "nMruby_tTECSInitializer_tecsgen.h"
#define nMruby_tTECSInitializer_cInitialize__offset        ((uint32_t)(intptr_t)&((nMruby_tTECSInitializer_INIB*)0)->cInitialize)
#define nMruby_tTECSInitializer_cInitialize__place         (CALL_PLACE_INIB_DES)
#define nMruby_tTECSInitializer_cInitialize__b_VMT_useless (false)
#define nMruby_tTECSInitializer_cInitialize__b_skelton_useless (false)
#define nMruby_tTECSInitializer_cInitialize__b_cell_unique (false)

#include "nMruby_tCharPointer_tecsgen.h"

#include "nMruby_tInt8Pointer_tecsgen.h"

#include "nMruby_tInt32Pointer_tecsgen.h"

#include "nMruby_tUInt16Pointer_tecsgen.h"

#include "nMruby_tIntPointer_tecsgen.h"

#include "nMruby_tULongPointer_tecsgen.h"

#include "nMruby_tsKernel_tecsgen.h"
#define nMruby_tsKernel_cTECS__offset                      (0xffffffff)
#define nMruby_tsKernel_cTECS__place                       (CALL_PLACE_NON)
#define nMruby_tsKernel_cTECS__b_VMT_useless               (true)
#define nMruby_tsKernel_cTECS__b_skelton_useless           (true)
#define nMruby_tsKernel_cTECS__b_cell_unique               (true)

#include "nMruby_tsKernel_Initializer_tecsgen.h"

#include "nMruby_tsMotor_tecsgen.h"
#define nMruby_tsMotor_cTECS__offset                       ((uint32_t)(intptr_t)&((nMruby_tsMotor_INIB*)0)->cTECS)
#define nMruby_tsMotor_cTECS__place                        (CALL_PLACE_INIB_IDX)
#define nMruby_tsMotor_cTECS__b_VMT_useless                (true)
#define nMruby_tsMotor_cTECS__b_skelton_useless            (true)
#define nMruby_tsMotor_cTECS__b_cell_unique                (false)

#include "nMruby_tsMotor_Initializer_tecsgen.h"

#include "nMruby_tsLCD_tecsgen.h"
#define nMruby_tsLCD_cTECS__offset                         (0xffffffff)
#define nMruby_tsLCD_cTECS__place                          (CALL_PLACE_NON)
#define nMruby_tsLCD_cTECS__b_VMT_useless                  (true)
#define nMruby_tsLCD_cTECS__b_skelton_useless              (true)
#define nMruby_tsLCD_cTECS__b_cell_unique                  (true)

#include "nMruby_tsLCD_Initializer_tecsgen.h"

#include "nMruby_tsLED_tecsgen.h"
#define nMruby_tsLED_cTECS__offset                         (0xffffffff)
#define nMruby_tsLED_cTECS__place                          (CALL_PLACE_NON)
#define nMruby_tsLED_cTECS__b_VMT_useless                  (true)
#define nMruby_tsLED_cTECS__b_skelton_useless              (true)
#define nMruby_tsLED_cTECS__b_cell_unique                  (true)

#include "nMruby_tsLED_Initializer_tecsgen.h"

#include "nMruby_tsButton_tecsgen.h"
#define nMruby_tsButton_cTECS__offset                      (0xffffffff)
#define nMruby_tsButton_cTECS__place                       (CALL_PLACE_NON)
#define nMruby_tsButton_cTECS__b_VMT_useless               (true)
#define nMruby_tsButton_cTECS__b_skelton_useless           (true)
#define nMruby_tsButton_cTECS__b_cell_unique               (true)

#include "nMruby_tsButton_Initializer_tecsgen.h"

#include "nMruby_tsBattery_tecsgen.h"
#define nMruby_tsBattery_cTECS__offset                     (0xffffffff)
#define nMruby_tsBattery_cTECS__place                      (CALL_PLACE_NON)
#define nMruby_tsBattery_cTECS__b_VMT_useless              (true)
#define nMruby_tsBattery_cTECS__b_skelton_useless          (true)
#define nMruby_tsBattery_cTECS__b_cell_unique              (true)

#include "nMruby_tsBattery_Initializer_tecsgen.h"

#include "nMruby_tsSpeaker_tecsgen.h"
#define nMruby_tsSpeaker_cTECS__offset                     (0xffffffff)
#define nMruby_tsSpeaker_cTECS__place                      (CALL_PLACE_NON)
#define nMruby_tsSpeaker_cTECS__b_VMT_useless              (true)
#define nMruby_tsSpeaker_cTECS__b_skelton_useless          (true)
#define nMruby_tsSpeaker_cTECS__b_cell_unique              (true)

#include "nMruby_tsSpeaker_Initializer_tecsgen.h"

#include "nMruby_tsUltrasonicSensor_tecsgen.h"
#define nMruby_tsUltrasonicSensor_cTECS__offset            ((uint32_t)(intptr_t)&((nMruby_tsUltrasonicSensor_INIB*)0)->cTECS)
#define nMruby_tsUltrasonicSensor_cTECS__place             (CALL_PLACE_INIB_IDX)
#define nMruby_tsUltrasonicSensor_cTECS__b_VMT_useless     (true)
#define nMruby_tsUltrasonicSensor_cTECS__b_skelton_useless (true)
#define nMruby_tsUltrasonicSensor_cTECS__b_cell_unique     (false)

#include "nMruby_tsUltrasonicSensor_Initializer_tecsgen.h"

#include "nMruby_tsGyroSensor_tecsgen.h"
#define nMruby_tsGyroSensor_cTECS__offset                  ((uint32_t)(intptr_t)&((nMruby_tsGyroSensor_INIB*)0)->cTECS)
#define nMruby_tsGyroSensor_cTECS__place                   (CALL_PLACE_INIB_IDX)
#define nMruby_tsGyroSensor_cTECS__b_VMT_useless           (true)
#define nMruby_tsGyroSensor_cTECS__b_skelton_useless       (true)
#define nMruby_tsGyroSensor_cTECS__b_cell_unique           (false)

#include "nMruby_tsGyroSensor_Initializer_tecsgen.h"

#include "nMruby_tsColorSensor_tecsgen.h"
#define nMruby_tsColorSensor_cTECS__offset                 ((uint32_t)(intptr_t)&((nMruby_tsColorSensor_INIB*)0)->cTECS)
#define nMruby_tsColorSensor_cTECS__place                  (CALL_PLACE_INIB_IDX)
#define nMruby_tsColorSensor_cTECS__b_VMT_useless          (true)
#define nMruby_tsColorSensor_cTECS__b_skelton_useless      (true)
#define nMruby_tsColorSensor_cTECS__b_cell_unique          (false)

#include "nMruby_tsColorSensor_Initializer_tecsgen.h"

#include "nMruby_tsTouchSensor_tecsgen.h"
#define nMruby_tsTouchSensor_cTECS__offset                 ((uint32_t)(intptr_t)&((nMruby_tsTouchSensor_INIB*)0)->cTECS)
#define nMruby_tsTouchSensor_cTECS__place                  (CALL_PLACE_INIB_IDX)
#define nMruby_tsTouchSensor_cTECS__b_VMT_useless          (true)
#define nMruby_tsTouchSensor_cTECS__b_skelton_useless      (true)
#define nMruby_tsTouchSensor_cTECS__b_cell_unique          (false)

#include "nMruby_tsTouchSensor_Initializer_tecsgen.h"

#include "nMruby_tsBalancer_tecsgen.h"
#define nMruby_tsBalancer_cTECS__offset                    (0xffffffff)
#define nMruby_tsBalancer_cTECS__place                     (CALL_PLACE_NON)
#define nMruby_tsBalancer_cTECS__b_VMT_useless             (true)
#define nMruby_tsBalancer_cTECS__b_skelton_useless         (true)
#define nMruby_tsBalancer_cTECS__b_cell_unique             (true)

#include "nMruby_tsBalancer_Initializer_tecsgen.h"

#include "nMruby_tsSharedMemory_tecsgen.h"
#define nMruby_tsSharedMemory_cTECS__offset                (0xffffffff)
#define nMruby_tsSharedMemory_cTECS__place                 (CALL_PLACE_NON)
#define nMruby_tsSharedMemory_cTECS__b_VMT_useless         (true)
#define nMruby_tsSharedMemory_cTECS__b_skelton_useless     (true)
#define nMruby_tsSharedMemory_cTECS__b_cell_unique         (true)

#include "nMruby_tsSharedMemory_Initializer_tecsgen.h"

#include "nTECSInfo_tTECSInfo_tecsgen.h"
#define nTECSInfo_tTECSInfo_cTECSInfo__offset              (0xffffffff)
#define nTECSInfo_tTECSInfo_cTECSInfo__place               (CALL_PLACE_NON)
#define nTECSInfo_tTECSInfo_cTECSInfo__b_VMT_useless       (true)
#define nTECSInfo_tTECSInfo_cTECSInfo__b_skelton_useless   (true)
#define nTECSInfo_tTECSInfo_cTECSInfo__b_cell_unique       (true)

#include "nTECSInfo_tTECSInfoSub_tecsgen.h"
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo__offset      ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_INIB*)0)->cNamespaceInfo)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo__place       (CALL_PLACE_INIB_DES)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo__b_VMT_useless (false)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cNamespaceInfo__b_cell_unique (false)
#define nTECSInfo_tTECSInfoSub_cRegionInfo__offset         ((uint32_t)(intptr_t)&((nTECSInfo_tTECSInfoSub_INIB*)0)->cRegionInfo)
#define nTECSInfo_tTECSInfoSub_cRegionInfo__place          (CALL_PLACE_INIB_DES)
#define nTECSInfo_tTECSInfoSub_cRegionInfo__b_VMT_useless  (false)
#define nTECSInfo_tTECSInfoSub_cRegionInfo__b_skelton_useless (false)
#define nTECSInfo_tTECSInfoSub_cRegionInfo__b_cell_unique  (false)

#include "nTECSInfo_tNamespaceInfo_tecsgen.h"
#define nTECSInfo_tNamespaceInfo_cSignatureInfo__offset    ((uint32_t)(intptr_t)&((nTECSInfo_tNamespaceInfo_INIB*)0)->cSignatureInfo)
#define nTECSInfo_tNamespaceInfo_cSignatureInfo__place     (CALL_PLACE_INIB_DES)
#define nTECSInfo_tNamespaceInfo_cSignatureInfo__b_VMT_useless (false)
#define nTECSInfo_tNamespaceInfo_cSignatureInfo__b_skelton_useless (false)
#define nTECSInfo_tNamespaceInfo_cSignatureInfo__b_cell_unique (false)
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo__offset     ((uint32_t)(intptr_t)&((nTECSInfo_tNamespaceInfo_INIB*)0)->cCelltypeInfo)
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo__place      (CALL_PLACE_INIB_DES)
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo__b_VMT_useless (false)
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo__b_skelton_useless (false)
#define nTECSInfo_tNamespaceInfo_cCelltypeInfo__b_cell_unique (false)
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo__offset    ((uint32_t)(intptr_t)&((nTECSInfo_tNamespaceInfo_INIB*)0)->cNamespaceInfo)
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo__place     (CALL_PLACE_INIB_DES)
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo__b_VMT_useless (false)
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo__b_skelton_useless (false)
#define nTECSInfo_tNamespaceInfo_cNamespaceInfo__b_cell_unique (false)

#include "nTECSInfo_tSignatureInfo_tecsgen.h"
#define nTECSInfo_tSignatureInfo_cFunctionInfo__offset     ((uint32_t)(intptr_t)&((nTECSInfo_tSignatureInfo_INIB*)0)->cFunctionInfo)
#define nTECSInfo_tSignatureInfo_cFunctionInfo__place      (CALL_PLACE_INIB_DES)
#define nTECSInfo_tSignatureInfo_cFunctionInfo__b_VMT_useless (false)
#define nTECSInfo_tSignatureInfo_cFunctionInfo__b_skelton_useless (false)
#define nTECSInfo_tSignatureInfo_cFunctionInfo__b_cell_unique (false)

#include "nTECSInfo_tFunctionInfo_tecsgen.h"
#define nTECSInfo_tFunctionInfo_cParamInfo__offset         ((uint32_t)(intptr_t)&((nTECSInfo_tFunctionInfo_INIB*)0)->cParamInfo)
#define nTECSInfo_tFunctionInfo_cParamInfo__place          (CALL_PLACE_INIB_DES)
#define nTECSInfo_tFunctionInfo_cParamInfo__b_VMT_useless  (false)
#define nTECSInfo_tFunctionInfo_cParamInfo__b_skelton_useless (false)
#define nTECSInfo_tFunctionInfo_cParamInfo__b_cell_unique  (false)
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo__offset    ((uint32_t)(intptr_t)&((nTECSInfo_tFunctionInfo_INIB*)0)->cReturnTypeInfo)
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo__place     (CALL_PLACE_INIB_DES)
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo__b_VMT_useless (false)
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo__b_skelton_useless (false)
#define nTECSInfo_tFunctionInfo_cReturnTypeInfo__b_cell_unique (false)

#include "nTECSInfo_tParamInfo_tecsgen.h"
#define nTECSInfo_tParamInfo_cTypeInfo__offset             ((uint32_t)(intptr_t)&((nTECSInfo_tParamInfo_INIB*)0)->cTypeInfo)
#define nTECSInfo_tParamInfo_cTypeInfo__place              (CALL_PLACE_INIB_DES)
#define nTECSInfo_tParamInfo_cTypeInfo__b_VMT_useless      (false)
#define nTECSInfo_tParamInfo_cTypeInfo__b_skelton_useless  (false)
#define nTECSInfo_tParamInfo_cTypeInfo__b_cell_unique      (false)

#include "nTECSInfo_tCelltypeInfo_tecsgen.h"
#define nTECSInfo_tCelltypeInfo_cEntryInfo__offset         ((uint32_t)(intptr_t)&((nTECSInfo_tCelltypeInfo_INIB*)0)->cEntryInfo)
#define nTECSInfo_tCelltypeInfo_cEntryInfo__place          (CALL_PLACE_INIB_DES)
#define nTECSInfo_tCelltypeInfo_cEntryInfo__b_VMT_useless  (false)
#define nTECSInfo_tCelltypeInfo_cEntryInfo__b_skelton_useless (false)
#define nTECSInfo_tCelltypeInfo_cEntryInfo__b_cell_unique  (false)
#define nTECSInfo_tCelltypeInfo_cCallInfo__offset          ((uint32_t)(intptr_t)&((nTECSInfo_tCelltypeInfo_INIB*)0)->cCallInfo)
#define nTECSInfo_tCelltypeInfo_cCallInfo__place           (CALL_PLACE_INIB_DES)
#define nTECSInfo_tCelltypeInfo_cCallInfo__b_VMT_useless   (false)
#define nTECSInfo_tCelltypeInfo_cCallInfo__b_skelton_useless (false)
#define nTECSInfo_tCelltypeInfo_cCallInfo__b_cell_unique   (false)
#define nTECSInfo_tCelltypeInfo_cAttrInfo__offset          ((uint32_t)(intptr_t)&((nTECSInfo_tCelltypeInfo_INIB*)0)->cAttrInfo)
#define nTECSInfo_tCelltypeInfo_cAttrInfo__place           (CALL_PLACE_INIB_DES)
#define nTECSInfo_tCelltypeInfo_cAttrInfo__b_VMT_useless   (false)
#define nTECSInfo_tCelltypeInfo_cAttrInfo__b_skelton_useless (false)
#define nTECSInfo_tCelltypeInfo_cAttrInfo__b_cell_unique   (false)
#define nTECSInfo_tCelltypeInfo_cVarInfo__offset           ((uint32_t)(intptr_t)&((nTECSInfo_tCelltypeInfo_INIB*)0)->cVarInfo)
#define nTECSInfo_tCelltypeInfo_cVarInfo__place            (CALL_PLACE_INIB_DES)
#define nTECSInfo_tCelltypeInfo_cVarInfo__b_VMT_useless    (false)
#define nTECSInfo_tCelltypeInfo_cVarInfo__b_skelton_useless (false)
#define nTECSInfo_tCelltypeInfo_cVarInfo__b_cell_unique    (false)

#include "nTECSInfo_tCallInfo_tecsgen.h"
#define nTECSInfo_tCallInfo_cSignatureInfo__offset         ((uint32_t)(intptr_t)&((nTECSInfo_tCallInfo_INIB*)0)->cSignatureInfo)
#define nTECSInfo_tCallInfo_cSignatureInfo__place          (CALL_PLACE_INIB_DES)
#define nTECSInfo_tCallInfo_cSignatureInfo__b_VMT_useless  (false)
#define nTECSInfo_tCallInfo_cSignatureInfo__b_skelton_useless (false)
#define nTECSInfo_tCallInfo_cSignatureInfo__b_cell_unique  (false)

#include "nTECSInfo_tEntryInfo_tecsgen.h"
#define nTECSInfo_tEntryInfo_cSignatureInfo__offset        ((uint32_t)(intptr_t)&((nTECSInfo_tEntryInfo_INIB*)0)->cSignatureInfo)
#define nTECSInfo_tEntryInfo_cSignatureInfo__place         (CALL_PLACE_INIB_DES)
#define nTECSInfo_tEntryInfo_cSignatureInfo__b_VMT_useless (false)
#define nTECSInfo_tEntryInfo_cSignatureInfo__b_skelton_useless (false)
#define nTECSInfo_tEntryInfo_cSignatureInfo__b_cell_unique (false)

#include "nTECSInfo_tVarDeclInfo_tecsgen.h"
#define nTECSInfo_tVarDeclInfo_cTypeInfo__offset           ((uint32_t)(intptr_t)&((nTECSInfo_tVarDeclInfo_INIB*)0)->cTypeInfo)
#define nTECSInfo_tVarDeclInfo_cTypeInfo__place            (CALL_PLACE_INIB_DES)
#define nTECSInfo_tVarDeclInfo_cTypeInfo__b_VMT_useless    (false)
#define nTECSInfo_tVarDeclInfo_cTypeInfo__b_skelton_useless (false)
#define nTECSInfo_tVarDeclInfo_cTypeInfo__b_cell_unique    (false)

#include "nTECSInfo_tRegionInfo_tecsgen.h"
#define nTECSInfo_tRegionInfo_cCellInfo__offset            ((uint32_t)(intptr_t)&((nTECSInfo_tRegionInfo_INIB*)0)->cCellInfo)
#define nTECSInfo_tRegionInfo_cCellInfo__place             (CALL_PLACE_INIB_DES)
#define nTECSInfo_tRegionInfo_cCellInfo__b_VMT_useless     (false)
#define nTECSInfo_tRegionInfo_cCellInfo__b_skelton_useless (false)
#define nTECSInfo_tRegionInfo_cCellInfo__b_cell_unique     (false)
#define nTECSInfo_tRegionInfo_cRegionInfo__offset          ((uint32_t)(intptr_t)&((nTECSInfo_tRegionInfo_INIB*)0)->cRegionInfo)
#define nTECSInfo_tRegionInfo_cRegionInfo__place           (CALL_PLACE_INIB_DES)
#define nTECSInfo_tRegionInfo_cRegionInfo__b_VMT_useless   (false)
#define nTECSInfo_tRegionInfo_cRegionInfo__b_skelton_useless (false)
#define nTECSInfo_tRegionInfo_cRegionInfo__b_cell_unique   (false)

#include "nTECSInfo_tVoidTypeInfo_tecsgen.h"

#include "nTECSInfo_tIntTypeInfo_tecsgen.h"

#include "nTECSInfo_tFloatTypeInfo_tecsgen.h"

#include "nTECSInfo_tStructTypeInfo_tecsgen.h"
#define nTECSInfo_tStructTypeInfo_cTypeInfo__offset        ((uint32_t)(intptr_t)&((nTECSInfo_tStructTypeInfo_INIB*)0)->cTypeInfo)
#define nTECSInfo_tStructTypeInfo_cTypeInfo__place         (CALL_PLACE_INIB_DES)
#define nTECSInfo_tStructTypeInfo_cTypeInfo__b_VMT_useless (false)
#define nTECSInfo_tStructTypeInfo_cTypeInfo__b_skelton_useless (false)
#define nTECSInfo_tStructTypeInfo_cTypeInfo__b_cell_unique (false)

#include "nTECSInfo_tPtrTypeInfo_tecsgen.h"
#define nTECSInfo_tPtrTypeInfo_cTypeInfo__offset           ((uint32_t)(intptr_t)&((nTECSInfo_tPtrTypeInfo_INIB*)0)->cTypeInfo)
#define nTECSInfo_tPtrTypeInfo_cTypeInfo__place            (CALL_PLACE_INIB_DES)
#define nTECSInfo_tPtrTypeInfo_cTypeInfo__b_VMT_useless    (false)
#define nTECSInfo_tPtrTypeInfo_cTypeInfo__b_skelton_useless (false)
#define nTECSInfo_tPtrTypeInfo_cTypeInfo__b_cell_unique    (false)

#include "nTECSInfo_tArrayTypeInfo_tecsgen.h"
#define nTECSInfo_tArrayTypeInfo_cTypeInfo__offset         ((uint32_t)(intptr_t)&((nTECSInfo_tArrayTypeInfo_INIB*)0)->cTypeInfo)
#define nTECSInfo_tArrayTypeInfo_cTypeInfo__place          (CALL_PLACE_INIB_DES)
#define nTECSInfo_tArrayTypeInfo_cTypeInfo__b_VMT_useless  (false)
#define nTECSInfo_tArrayTypeInfo_cTypeInfo__b_skelton_useless (false)
#define nTECSInfo_tArrayTypeInfo_cTypeInfo__b_cell_unique  (false)

#include "nTECSInfo_tDefinedTypeInfo_tecsgen.h"
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo__offset       ((uint32_t)(intptr_t)&((nTECSInfo_tDefinedTypeInfo_INIB*)0)->cTypeInfo)
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo__place        (CALL_PLACE_INIB_DES)
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo__b_VMT_useless (false)
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo__b_skelton_useless (false)
#define nTECSInfo_tDefinedTypeInfo_cTypeInfo__b_cell_unique (false)

#include "nTECSInfo_tDescriptorTypeInfo_tecsgen.h"
#define nTECSInfo_tDescriptorTypeInfo_cSignatureInfo__offset ((uint32_t)(intptr_t)&((nTECSInfo_tDescriptorTypeInfo_INIB*)0)->cSignatureInfo)
#define nTECSInfo_tDescriptorTypeInfo_cSignatureInfo__place (CALL_PLACE_INIB_DES)
#define nTECSInfo_tDescriptorTypeInfo_cSignatureInfo__b_VMT_useless (false)
#define nTECSInfo_tDescriptorTypeInfo_cSignatureInfo__b_skelton_useless (false)
#define nTECSInfo_tDescriptorTypeInfo_cSignatureInfo__b_cell_unique (false)

/* redefine macros */
#define tCallInfo_IDX  nTECSInfo_tCallInfo_IDX

#define FOREACH_CELL(i,p_cb)   { (void)(i);
#define END_FOREACH_CELL   }
#define INITIALIZE_CB(p_that)   (void)(p_that);
#define SET_CB_INIB_POINTER(i,p_that)

#endif /* tCallInfo_FACTORY_H */
