/******************************************************************************
   VEONEER ELECTRONIC document.
   -------------------------------------------------------------------------------
   DUPLICATION or DISCLOSURE PROHIBITED without prior written consent
   Copyright Veoneer US, Inc.
   All rights reserved. Property of Veoneer US, Inc.
   Restricted rights to use, duplicate or disclose of this code
   are granted through contract.
 *******************************************************************************
   H-File Template Version: SC3
 *******************************************************************************
   Overview of the interfaces:
   Header file for Algorithms
 ******************************************************************************/
/*
   Current revision: $Revision: 1.4 $
   Checked in:       $Date: 2024/04/09 14:15:33CEST $
 */
/*****************************************************************************/
/******************************************************************************
 **  Filename:      OpsReAlg_Process_Veh_Dyn.h
 **  Date:          20-Mar-2024
 **
 **  Model Version: 1.18
 ******************************************************************************
 **/
#ifndef RTW_HEADER_OpsReAlg_Process_Veh_Dyn_h_
#define RTW_HEADER_OpsReAlg_Process_Veh_Dyn_h_
#ifndef OpsReAlg_Process_Veh_Dyn_COMMON_INCLUDES_
#define OpsReAlg_Process_Veh_Dyn_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                           /* OpsReAlg_Process_Veh_Dyn_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "OpsCshMgr.h"
#include "CalibLayoutInterface_OpsReAlg_Process_Veh_Dyn.h"
#include "Std_Types.h"

/* Macros for accessing real-time model data structure */

/* Block signals (default storage) */
typedef struct {
  sint16 Vehicle_Speed;                /* '<S1>/Selector6' */
  sint16 Vehicle_Backward;             /* '<S1>/Selector2' */
  sint16 Vehicle_Speed_Filtered;       /* '<S5>/Data Type Conversion' */
} BlockIO_OpsReAlg_Process_Veh_Dyn_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  sint32 FixPtUnitDelay1_DSTATE;       /* '<S10>/FixPt Unit Delay1' */
  uint8_T FixPtUnitDelay2_DSTATE;      /* '<S10>/FixPt Unit Delay2' */
  boolean_T DelayInput1_DSTATE;        /* '<S8>/Delay Input1' */
} D_Work_OpsReAlg_Process_Veh_Dyn_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T O_RITA_ST_Threshold_Class;   /* '<Root>/O_RITA_ST_Threshold_Class' */
} ExternalOutputs_OpsReAlg_Process_Veh_Dyn_T;

/* Block signals (default storage) */
extern BlockIO_OpsReAlg_Process_Veh_Dyn_T OpsReAlg_Process_Veh_Dyn_B;

/* Block states (default storage) */
extern D_Work_OpsReAlg_Process_Veh_Dyn_T OpsReAlg_Process_Veh_Dyn_DWork;

/* External outputs (root outports fed by signals with default storage) */
extern ExternalOutputs_OpsReAlg_Process_Veh_Dyn_T OpsReAlg_Process_Veh_Dyn_Y;

/* Model entry point functions */
void OpsReAlg_Process_Veh_Dyn_initialize(void);
void OpsReAlg_Process_Veh_Dyn_step(void);

/* Exported data declaration */

/* Const memory section */
/* Declaration for custom storage class: Const */
extern const boolean_T R_ST_CONFIG_QF_STATUS_MAP[5];/* Referenced by:
                                                     * '<S2>/Constant1'
                                                     * '<S3>/Constant1'
                                                     */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S9>/Data Type Duplicate' : Unused code path elimination
 * Block '<S9>/Data Type Propagation' : Unused code path elimination
 * Block '<S10>/FixPt Data Type Duplicate1' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('RITA2_x_SlowTask/OpsReAlg_Process_Veh_Dyn')    - opens subsystem RITA2_x_SlowTask/OpsReAlg_Process_Veh_Dyn
 * hilite_system('RITA2_x_SlowTask/OpsReAlg_Process_Veh_Dyn/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'RITA2_x_SlowTask'
 * '<S1>'   : 'RITA2_x_SlowTask/OpsReAlg_Process_Veh_Dyn'
 * '<S2>'   : 'RITA2_x_SlowTask/OpsReAlg_Process_Veh_Dyn/Qf_To_Status_Vehicle_Backward '
 * '<S3>'   : 'RITA2_x_SlowTask/OpsReAlg_Process_Veh_Dyn/Qf_To_Status_Vehicle_Speed'
 * '<S4>'   : 'RITA2_x_SlowTask/OpsReAlg_Process_Veh_Dyn/Vehicle_Speed'
 * '<S5>'   : 'RITA2_x_SlowTask/OpsReAlg_Process_Veh_Dyn/Vehicle_Speed/Speed_Rate_Limiter'
 * '<S6>'   : 'RITA2_x_SlowTask/OpsReAlg_Process_Veh_Dyn/Vehicle_Speed/Vehicle_Speed_Class'
 * '<S7>'   : 'RITA2_x_SlowTask/OpsReAlg_Process_Veh_Dyn/Vehicle_Speed/Vehicle_Speed_Sign'
 * '<S8>'   : 'RITA2_x_SlowTask/OpsReAlg_Process_Veh_Dyn/Vehicle_Speed/Speed_Rate_Limiter/Detect Decrease'
 * '<S9>'   : 'RITA2_x_SlowTask/OpsReAlg_Process_Veh_Dyn/Vehicle_Speed/Speed_Rate_Limiter/Saturation Dynamic'
 * '<S10>'  : 'RITA2_x_SlowTask/OpsReAlg_Process_Veh_Dyn/Vehicle_Speed/Speed_Rate_Limiter/Unit Delay External IC'
 */
#endif                              /* RTW_HEADER_OpsReAlg_Process_Veh_Dyn_h_ */

/*======================== TOOL VERSION INFORMATION ==========================*
 * MATLAB 9.9 (R2020b)29-Jul-2020                                             *
 * Simulink 10.2 (R2020b)29-Jul-2020                                          *
 * Simulink Coder 9.4 (R2020b)29-Jul-2020                                     *
 * Embedded Coder 7.5 (R2020b)29-Jul-2020                                     *
 * Stateflow 10.3 (R2020b)29-Jul-2020                                         *
 *============================================================================*/

/*======================= LICENSE IN USE INFORMATION =========================*
 * matlab                                                                     *
 * matlab_coder                                                               *
 * real-time_workshop                                                         *
 * rtw_embedded_coder                                                         *
 * simulink                                                                   *
 * stateflow                                                                  *
 *============================================================================*/
