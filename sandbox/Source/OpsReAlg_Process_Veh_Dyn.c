/******************************************************************************
   VEONEER ELECTRONIC document.
   -------------------------------------
   DUPLICATION or DISCLOSURE PROHIBITED without prior written consent
   Copyright Veoneer US, Inc.
   All rights reserved. Property of Veoneer US, Inc.
   Restricted rights to use, duplicate or disclose of this code
   are granted through contract.
 *******************************************************************************
   C-File Template Version: SC3
 ******************************************************************************/
/*
   Current revision: $Revision: 1.4 $
   Checked in:       $Date: 2024/04/09 14:15:33CEST $
 */
/*******************************************************************************
 **  FILE INFORMATION:
 **  Filename:           OpsReAlg_Process_Veh_Dyn.c
 **  File Creation Date: 20-Mar-2024
 **
 **  ABSTRACT:
 **
 **
 **  NOTES:
 **
 **
 **  MODEL INFORMATION:
 **  Algorithm Version:  RITA_2.2 SlowTask
 **  Model Revision: 1.3
 **  Model Name:         OpsReAlg_Process_Veh_Dyn
 **  Model Description:
 **  Model Version:      1.18
 **  Model Author:       arnaud.devavry - Tue Mar 23 15:59:46 2021
 **
 **  MODIFICATION HISTORY:
 **  Model at Code Generation: samir.bouali - Wed Mar 20 14:17:26 2024
 **
 **  Last Saved Modification:   -
 **
 **
 *******************************************************************************
 **/
#include "OpsReAlg_Process_Veh_Dyn.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */
#define OpsReAlg_Process_Veh_Dyn_START_SEC_ALGO_CONST_AND_VAR
#include "OpsReAlg_Process_Veh_Dyn_MemMap.h"

/* Exported data definition */

/* Const memory section */
/* Definition for custom storage class: Const */
const boolean_T R_ST_CONFIG_QF_STATUS_MAP[5] = { 1, 0, 0, 1, 0 } ;/* Referenced by:
                                                                   * '<S2>/Constant1'
                                                                   * '<S3>/Constant1'
                                                                   */

/* Block signals (default storage) */
BlockIO_OpsReAlg_Process_Veh_Dyn_T OpsReAlg_Process_Veh_Dyn_B;

/* Block states (default storage) */
D_Work_OpsReAlg_Process_Veh_Dyn_T OpsReAlg_Process_Veh_Dyn_DWork;

/* External outputs (root outports fed by signals with default storage) */
ExternalOutputs_OpsReAlg_Process_Veh_Dyn_T OpsReAlg_Process_Veh_Dyn_Y;

#define OpsReAlg_Process_Veh_Dyn_STOP_SEC_ALGO_CONST_AND_VAR
#include "OpsReAlg_Process_Veh_Dyn_MemMap.h"

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/
#define OpsReAlg_Process_Veh_Dyn_START_SEC_CODE
#include "OpsReAlg_Process_Veh_Dyn_MemMap.h"

/* Model step function */
void OpsReAlg_Process_Veh_Dyn_step(void)
{
  sint32 rtb_Vehicle_Speed_Diff;
  sint16 rtb_Signed_Vehicle_Speed;
  uint8_T rtb_DataTypeConversion;
  boolean_T tmp;

  /* Selector: '<S1>/Selector6' incorporates:
   *  Constant: '<S1>/Constant_R_ST_CONFIG_VEHICLE_SPEED_INDEX'
   *  Inport: '<Root>/I_CshMgr_VehDyn_Data'
   */
  OpsReAlg_Process_Veh_Dyn_B.Vehicle_Speed = OPSCSHMGR_GET_VEHDYN_DATA
    ( (OPSREALG_PROCESS_VEH_DYN_CALIB_GET_u8R_ST_CONFIG_VEHICLE_SPEED_INDEX()) );

  /* Selector: '<S1>/Selector2' incorporates:
   *  Constant: '<S1>/Constant_R_ST_CONFIG_VEHICLE_BACKWARD_INDEX'
   *  Inport: '<Root>/I_CshMgr_VehDyn_Data'
   */
  OpsReAlg_Process_Veh_Dyn_B.Vehicle_Backward = OPSCSHMGR_GET_VEHDYN_DATA
    ( (OPSREALG_PROCESS_VEH_DYN_CALIB_GET_u8R_ST_CONFIG_VEHICLE_BACKWARD_INDEX())
     );

  /* If: '<S1>/Enable_Speed_Rate_Limiter' incorporates:
   *  Constant: '<S1>/Constant_R_ST_CONFIG_VEHICLE_SPEED_INDEX'
   */
  if (OPSREALG_PROCESS_VEH_DYN_CALIB_GET_u8R_ST_CONFIG_VEHICLE_SPEED_INDEX() !=
      0) {
    /* Outputs for IfAction SubSystem: '<S1>/Vehicle_Speed' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S1>/Constant_R_ST_CONFIG_VEHICLE_BACKWARD_INDEX'
     *  Constant: '<S2>/Constant1'
     *  Inport: '<Root>/I_CshMgr_VehDyn_Qf'
     *  Logic: '<S7>/NOT'
     *  Logic: '<S7>/NOT1'
     *  Selector: '<S1>/Selector1'
     *  Selector: '<S2>/Selector'
     *  UnaryMinus: '<S7>/Unary Minus'
     */
    if ((!R_ST_CONFIG_QF_STATUS_MAP[(OPSCSHMGR_GET_VEHDYN_QF
          ( (OPSREALG_PROCESS_VEH_DYN_CALIB_GET_u8R_ST_CONFIG_VEHICLE_BACKWARD_INDEX
             ()) ))]) && (OpsReAlg_Process_Veh_Dyn_B.Vehicle_Backward != 0)) {
      rtb_Signed_Vehicle_Speed = (sint16)
        (-OpsReAlg_Process_Veh_Dyn_B.Vehicle_Speed);
    } else {
      rtb_Signed_Vehicle_Speed = OpsReAlg_Process_Veh_Dyn_B.Vehicle_Speed;
    }

    /* End of Switch: '<S7>/Switch' */
    /* End of Outputs for SubSystem: '<S1>/Vehicle_Speed' */

    /* Selector: '<S3>/Selector' incorporates:
     *  Constant: '<S3>/Constant1'
     *  Inport: '<Root>/I_CshMgr_VehDyn_Qf'
     *  Selector: '<S1>/Selector14'
     */
    rtb_Vehicle_Speed_Diff = OPSCSHMGR_GET_VEHDYN_QF
      ( (OPSREALG_PROCESS_VEH_DYN_CALIB_GET_u8R_ST_CONFIG_VEHICLE_SPEED_INDEX())
       );
    tmp = R_ST_CONFIG_QF_STATUS_MAP[(rtb_Vehicle_Speed_Diff)];

    /* Outputs for IfAction SubSystem: '<S1>/Vehicle_Speed' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S3>/Constant1'
     *  RelationalOperator: '<S8>/FixPt Relational Operator'
     *  Selector: '<S3>/Selector'
     *  Switch: '<S5>/Switch'
     *  UnitDelay: '<S8>/Delay Input1'
     *
     * Block description for '<S8>/Delay Input1':
     *
     *  Store in Global RAM
     */
    if (((sint32)tmp) < ((sint32)
                         OpsReAlg_Process_Veh_Dyn_DWork.DelayInput1_DSTATE)) {
      /* Switch: '<S10>/Init' incorporates:
       *  DataTypeConversion: '<S5>/Data Type Conversion1'
       */
      OpsReAlg_Process_Veh_Dyn_DWork.FixPtUnitDelay1_DSTATE =
        rtb_Signed_Vehicle_Speed;
    } else {
      if (R_ST_CONFIG_QF_STATUS_MAP[(rtb_Vehicle_Speed_Diff)]) {
        /* Switch: '<S5>/Switch' incorporates:
         *  Constant: '<S5>/Constant_R_ST_SIC_VEHICLE_SPEED_DEFAULT'
         *  DataTypeConversion: '<S5>/Data Type Conversion2'
         */
        rtb_Vehicle_Speed_Diff =
          OPSREALG_PROCESS_VEH_DYN_CALIB_GET_s16R_ST_SIC_VEHICLE_SPEED_DEFAULT();
      } else {
        /* Switch: '<S5>/Switch' incorporates:
         *  DataTypeConversion: '<S5>/Data Type Conversion1'
         */
        rtb_Vehicle_Speed_Diff = rtb_Signed_Vehicle_Speed;
      }

      /* Switch: '<S10>/Init' incorporates:
       *  UnitDelay: '<S10>/FixPt Unit Delay2'
       */
      if (OpsReAlg_Process_Veh_Dyn_DWork.FixPtUnitDelay2_DSTATE != 0) {
        /* Switch: '<S10>/Init' */
        OpsReAlg_Process_Veh_Dyn_DWork.FixPtUnitDelay1_DSTATE =
          rtb_Vehicle_Speed_Diff;
      }

      /* End of Switch: '<S10>/Init' */

      /* Sum: '<S5>/Sum4' */
      rtb_Vehicle_Speed_Diff -=
        OpsReAlg_Process_Veh_Dyn_DWork.FixPtUnitDelay1_DSTATE;

      /* Switch: '<S9>/Switch2' incorporates:
       *  Constant: '<S5>/Constant_R_ST_SIC_VEHICLE_SPEED_RATE_LIMIT_NEG'
       *  Constant: '<S5>/Constant_R_ST_SIC_VEHICLE_SPEED_RATE_LIMIT_POS'
       *  RelationalOperator: '<S9>/LowerRelop1'
       *  RelationalOperator: '<S9>/UpperRelop'
       *  Switch: '<S9>/Switch'
       *  UnaryMinus: '<S5>/Unary Minus'
       */
      if (rtb_Vehicle_Speed_Diff >
          OPSREALG_PROCESS_VEH_DYN_CALIB_GET_s16R_ST_SIC_VEHICLE_SPEED_RATE_LIMIT_POS
          ()) {
        rtb_Vehicle_Speed_Diff =
          OPSREALG_PROCESS_VEH_DYN_CALIB_GET_s16R_ST_SIC_VEHICLE_SPEED_RATE_LIMIT_POS
          ();
      } else {
        if (rtb_Vehicle_Speed_Diff < ((sint16)
             (-OPSREALG_PROCESS_VEH_DYN_CALIB_GET_s16R_ST_SIC_VEHICLE_SPEED_RATE_LIMIT_NEG
              ()))) {
          /* Switch: '<S9>/Switch' incorporates:
           *  Constant: '<S5>/Constant_R_ST_SIC_VEHICLE_SPEED_RATE_LIMIT_NEG'
           *  UnaryMinus: '<S5>/Unary Minus'
           */
          rtb_Vehicle_Speed_Diff = (sint16)
            (-OPSREALG_PROCESS_VEH_DYN_CALIB_GET_s16R_ST_SIC_VEHICLE_SPEED_RATE_LIMIT_NEG
             ());
        }
      }

      /* End of Switch: '<S9>/Switch2' */

      /* Switch: '<S10>/Init' incorporates:
       *  Sum: '<S5>/Sum1'
       */
      OpsReAlg_Process_Veh_Dyn_DWork.FixPtUnitDelay1_DSTATE +=
        rtb_Vehicle_Speed_Diff;
    }

    /* End of Switch: '<S5>/Switch1' */

    /* Saturate: '<S5>/Saturation' incorporates:
     *  UnitDelay: '<S10>/FixPt Unit Delay1'
     */
    if (OpsReAlg_Process_Veh_Dyn_DWork.FixPtUnitDelay1_DSTATE > 32767) {
      /* DataTypeConversion: '<S5>/Data Type Conversion' */
      OpsReAlg_Process_Veh_Dyn_B.Vehicle_Speed_Filtered = MAX_int16_T;
    } else if (OpsReAlg_Process_Veh_Dyn_DWork.FixPtUnitDelay1_DSTATE < -32767) {
      /* DataTypeConversion: '<S5>/Data Type Conversion' */
      OpsReAlg_Process_Veh_Dyn_B.Vehicle_Speed_Filtered = -32767;
    } else {
      /* DataTypeConversion: '<S5>/Data Type Conversion' */
      OpsReAlg_Process_Veh_Dyn_B.Vehicle_Speed_Filtered = (sint16)
        OpsReAlg_Process_Veh_Dyn_DWork.FixPtUnitDelay1_DSTATE;
    }

    /* End of Saturate: '<S5>/Saturation' */

    /* RelationalOperator: '<S6>/Relational Operator' incorporates:
     *  Constant: '<S6>/Constant_R_ST_VEHICLE_SPEED_THR1'
     *  UnitDelay: '<S8>/Delay Input1'
     *
     * Block description for '<S8>/Delay Input1':
     *
     *  Store in Global RAM
     */
    OpsReAlg_Process_Veh_Dyn_DWork.DelayInput1_DSTATE =
      (OpsReAlg_Process_Veh_Dyn_B.Vehicle_Speed_Filtered <=
       OPSREALG_PROCESS_VEH_DYN_CALIB_GET_s16R_ST_VEHICLE_SPEED_THR1());

    /* DataTypeConversion: '<S6>/Data Type Conversion' incorporates:
     *  UnitDelay: '<S8>/Delay Input1'
     *
     * Block description for '<S8>/Delay Input1':
     *
     *  Store in Global RAM
     */
    rtb_DataTypeConversion = OpsReAlg_Process_Veh_Dyn_DWork.DelayInput1_DSTATE;

    /* RelationalOperator: '<S6>/Relational Operator1' incorporates:
     *  Constant: '<S6>/Constant_R_ST_VEHICLE_SPEED_THR2'
     *  UnitDelay: '<S8>/Delay Input1'
     *
     * Block description for '<S8>/Delay Input1':
     *
     *  Store in Global RAM
     */
    OpsReAlg_Process_Veh_Dyn_DWork.DelayInput1_DSTATE =
      (OpsReAlg_Process_Veh_Dyn_B.Vehicle_Speed_Filtered <=
       OPSREALG_PROCESS_VEH_DYN_CALIB_GET_s16R_ST_VEHICLE_SPEED_THR2());

    /* Outport: '<Root>/O_RITA_ST_Threshold_Class' incorporates:
     *  Constant: '<S6>/Constant_R_ST_VEHICLE_SPEED_MAPPING'
     *  DataTypeConversion: '<S6>/Data Type Conversion1'
     *  Selector: '<S6>/Selector2'
     *  Sum: '<S6>/Add'
     *  UnitDelay: '<S8>/Delay Input1'
     *
     * Block description for '<S8>/Delay Input1':
     *
     *  Store in Global RAM
     */
    OpsReAlg_Process_Veh_Dyn_Y.O_RITA_ST_Threshold_Class =
      OPSREALG_PROCESS_VEH_DYN_CALIB_GET_R_ST_VEHICLE_SPEED_MAPPING( (sint32)
      (((uint32)rtb_DataTypeConversion) +
       OpsReAlg_Process_Veh_Dyn_DWork.DelayInput1_DSTATE) );

    /* Update for UnitDelay: '<S8>/Delay Input1'
     *
     * Block description for '<S8>/Delay Input1':
     *
     *  Store in Global RAM
     */
    OpsReAlg_Process_Veh_Dyn_DWork.DelayInput1_DSTATE = tmp;

    /* Update for UnitDelay: '<S10>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S10>/FixPt Constant'
     */
    OpsReAlg_Process_Veh_Dyn_DWork.FixPtUnitDelay2_DSTATE = 0U;

    /* End of Outputs for SubSystem: '<S1>/Vehicle_Speed' */
  }

  /* End of If: '<S1>/Enable_Speed_Rate_Limiter' */
}

/* Model initialize function */
void OpsReAlg_Process_Veh_Dyn_initialize(void)
{
  /* Registration code */

  /* block I/O */
  (void) StdUtl_MemSet(((void *) &OpsReAlg_Process_Veh_Dyn_B), 0,
                       sizeof(BlockIO_OpsReAlg_Process_Veh_Dyn_T));

  /* states (dwork) */
  (void) StdUtl_MemSet((void *)&OpsReAlg_Process_Veh_Dyn_DWork, 0,
                       sizeof(D_Work_OpsReAlg_Process_Veh_Dyn_T));

  /* external outputs */
  OpsReAlg_Process_Veh_Dyn_Y.O_RITA_ST_Threshold_Class = 0U;

  /* SystemInitialize for IfAction SubSystem: '<S1>/Vehicle_Speed' */
  /* InitializeConditions for UnitDelay: '<S10>/FixPt Unit Delay2' */
  OpsReAlg_Process_Veh_Dyn_DWork.FixPtUnitDelay2_DSTATE = 1U;

  /* End of SystemInitialize for SubSystem: '<S1>/Vehicle_Speed' */
}

#define OpsReAlg_Process_Veh_Dyn_STOP_SEC_CODE
#include "OpsReAlg_Process_Veh_Dyn_MemMap.h"

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
