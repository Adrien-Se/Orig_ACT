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
 **  Filename:           OpsReAlg.c
 **  File Creation Date: 20-Mar-2024
 **
 **  ABSTRACT:
 **
 **
 **  NOTES:
 **
 **
 **  MODEL INFORMATION:
 **  Algorithm Version:  RITA_2.2
 **  Model Revision: 1.9
 **  Model Name:         OpsReAlg
 **  Model Description:
 **  Model Version:      1.481
 **  Model Author:       arnaud.devavry - Thu Feb 04 13:32:44 2021
 **
 **  MODIFICATION HISTORY:
 **  Model at Code Generation: samir.bouali - Wed Mar 20 14:15:51 2024
 **
 **  Last Saved Modification:   -
 **
 **
 *******************************************************************************
 **/
#include "OpsReAlg.h"

/*  Defines */

/*
 * Check that imported macros with storage class "ImportedDefine" are defined
 */
#ifndef OPS_REAR_DEF_SEV_OUTPUT_CDR_CAPTURE
#error The variable for the parameter "OPS_REAR_DEF_SEV_OUTPUT_CDR_CAPTURE" is not defined
#endif

#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* Skipping ulong_long/long_long check: insufficient preprocessor integer range. */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */
#define OpsReAlg_START_SEC_ALGO_CONST_AND_VAR
#include "OpsReAlg_MemMap.h"

const OpsCshMgr_AlgorithmOutput_StructType
  OpsReAlg_rtZOpsCshMgr_AlgorithmOutput_StructType = {
  false,                               /* ActivationStatus */
  (0ULL),                              /* VirtualProtectionRequest */
  0U,                                  /* SeverityFlags */
  0U                                   /* DiagnosticFlags */
} ;                            /* OpsCshMgr_AlgorithmOutput_StructType ground */

const B_SM_W_Measures OpsReAlg_rtZB_SM_W_Measures = {
  0,                                   /* CentX_DV */
  0U                                   /* CentX_DISP */
} ;                                    /* B_SM_W_Measures ground */

/* Exported block signals */
OpsCshMgr_AlgorithmOutput_StructType OpsReAlg_Outputs;/* '<S1>/Bus Creator' */

/* Exported block states */
uint8_T RITA_INTRUSION_ROTATION_CRITERIA_CONFIG[6];
          /* Simulink.Signal object 'RITA_INTRUSION_ROTATION_CRITERIA_CONFIG' */
uint8_T RITA_INTRUSION_ROTATION_CRITERIA_NB;
              /* Simulink.Signal object 'RITA_INTRUSION_ROTATION_CRITERIA_NB' */
uint8_T RITA_IRC_INDEX_CONFIG[2];
                            /* Simulink.Signal object 'RITA_IRC_INDEX_CONFIG' */
uint8_T RITA_LGT_RSU_NB;          /* Simulink.Signal object 'RITA_LGT_RSU_NB' */

/* Exported data definition */

/* Const memory section */
/* Definition for custom storage class: Const */
const uint8_T RITA_CFG_MAX_INTRUSION_ROTATION_CRITERIA_NB = 2U;
/* Referenced by: '<S6>/Constant_RITA_CFG_MAX_INTRUSION_ROTATION_CRITERIA_NB' */
const uint8_T R_CONFIG_CENTRAL_X_ACC_MAP = 0U;/* Referenced by:
                                               * '<S50>/Constant_R_CONFIG_CENTRAL_X_ACC_MAP'
                                               * '<S18>/Constant_R_CONFIG_CENTRAL_X_ACC_MAP'
                                               * '<S31>/Constant_R_CONFIG_CENTRAL_X_ACC_MAP'
                                               */
const uint8_T R_CONFIG_MAX_RSU_X_ACC_MAP = 5U;/* Referenced by:
                                               * '<S18>/Constant_R_CONFIG_MAX_RSU_X_ACC_MAP'
                                               * '<S43>/Constant_R_CONFIG_MAX_RSU_X_ACC_MAP'
                                               */
const boolean_T R_CONFIG_QF_STATUS_MAP[5] = { 1, 0, 0, 1, 0 } ;/* Referenced by:
                                                                * '<S100>/Constant1'
                                                                * '<S101>/Constant1'
                                                                * '<S102>/Constant1'
                                                                * '<S103>/Constant1'
                                                                * '<S104>/Constant1'
                                                                * '<S105>/Constant1'
                                                                * '<S106>/Constant1'
                                                                */

const uint8_T R_CONFIG_RSU1_X_ACC_MAP = 1U;/* Referenced by:
                                            * '<S18>/Constant_R_CONFIG_RSU1_X_ACC_MAP'
                                            * '<S43>/Constant_R_CONFIG_RSU1_X_ACC_MAP'
                                            * '<S67>/Constant_R_CONFIG_RSU1_X_ACC_MAP'
                                            * '<S68>/Constant_R_CONFIG_RSU1_X_ACC_MAP'
                                            * '<S69>/Constant_R_CONFIG_RSU1_X_ACC_MAP'
                                            */
const uint8_T R_CONFIG_RSU2_X_ACC_MAP = 2U;/* Referenced by:
                                            * '<S68>/Constant_R_CONFIG_RSU2_X_ACC_MAP'
                                            * '<S69>/Constant_R_CONFIG_RSU2_X_ACC_MAP'
                                            */
const uint8_T R_CONFIG_RSU3_X_ACC_MAP = 3U;
                   /* Referenced by: '<S69>/Constant_R_CONFIG_RSU3_X_ACC_MAP' */

/* Invariant block signals (default storage) */
const ConstBlockIO_OpsReAlg_T OpsReAlg_ConstB = {
  0,                                   /* '<S68>/Constant_0' */
  0,                                   /* '<S67>/Constant_0' */
  0                                    /* '<S67>/Constant_0_1' */
};

/* Block signals (default storage) */
BlockIO_OpsReAlg_T OpsReAlg_B;

/* Block states (default storage) */
D_Work_OpsReAlg_T OpsReAlg_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_OpsReAlg_T OpsReAlg_PrevZCSigState;

#define OpsReAlg_STOP_SEC_ALGO_CONST_AND_VAR
#include "OpsReAlg_MemMap.h"

/*  Declarations  */
static void OpsReAlg_Check_Decision_Reset(uint16_T *PrevSeverity, uint64_T
  *PrevDecisionWord);
static void OpsReAlg_Check_Decision(uint8_T rtu_I_RITA_Sev_Word, const uint16_T
  rtu_I_Sev_Output[8], const uint64_T rtu_I_Prot_Request[8],
  rtB_Check_Decision_OpsReAlg_T *localB);
static void OpsReAlg_RSU_X_Filtering_Init(rtB_RSU_X_Filtering_OpsReAlg_T *localB,
  rtDW_RSU_X_Filtering_OpsReAlg_T *localDW);
static void OpsReAlg_RSU_X_Filtering(uint8_T rtu_u8I_N_Loop, const sint16
  rtu_s16I_Raw[3], const B_R_Sensor_Calib rtu_I_R_Sensor_Calib[3], uint8_T
  rtu_u8I_R_PreProc_DV_Buffer_Length, boolean_T
  rtu_bI_R_ActivationStatus_Previous, rtB_RSU_X_Filtering_OpsReAlg_T *localB,
  rtDW_RSU_X_Filtering_OpsReAlg_T *localDW, StdUtl_ST_2ND_ORD_64BIT_FILT_DATA_T
  rtd_G_Memory_LPF2[3], B_Memory_SIV rtd_G_Memory_SIV[3]);
static void OpsReAlg_Average_QF_Central_Y(boolean_T rtu_I_Signal_QF,
  rtB_Average_QF_Central_Y_OpsReAlg_T *localB,
  rtDW_Average_QF_Central_Y_OpsReAlg_T *localDW);
static void OpsReAlg_Average_data_Central_X(sint16 rtu_I_Signal_Data,
  rtB_Average_data_Central_X_OpsReAlg_T *localB,
  rtDW_Average_data_Central_X_OpsReAlg_T *localDW);

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/
#define OpsReAlg_START_SEC_CODE
#include "OpsReAlg_MemMap.h"

/* System reset for iterator system: '<S19>/Check_Decision' */
static void OpsReAlg_Check_Decision_Reset(uint16_T *PrevSeverity, uint64_T
  *PrevDecisionWord)
{
  /* InitializeConditions for Memory: '<S26>/Memory1' */
  *PrevDecisionWord = 0ULL;

  /* InitializeConditions for Memory: '<S26>/Memory' */
  *PrevSeverity = 0U;
}

/* Output and update for iterator system: '<S19>/Check_Decision' */
static void OpsReAlg_Check_Decision(uint8_T rtu_I_RITA_Sev_Word, const uint16_T
  rtu_I_Sev_Output[8], const uint64_T rtu_I_Prot_Request[8],
  rtB_Check_Decision_OpsReAlg_T *localB)
{
  uint64_T PrevDecisionWord;
  uint64_T rtb_Switch1_f;
  sint16 Index;
  uint16_T PrevSeverity;
  uint16_T rtb_Switch_j;
  boolean_T rtb_Compare_a;

  /* Outputs for Iterator SubSystem: '<S19>/Check_Decision' incorporates:
   *  ForIterator: '<S26>/For Iterator'
   */
  OpsReAlg_Check_Decision_Reset(&PrevSeverity, &PrevDecisionWord);
  for (Index = 0; Index < ((uint8_T)RITA_CFG_NB_PATH); Index++) {
    /* RelationalOperator: '<S29>/Compare' incorporates:
     *  ArithShift: '<S26>/Shift Arithmetic'
     *  Constant: '<S26>/Constant_1'
     *  Constant: '<S29>/Constant'
     *  S-Function (sfix_bitop): '<S26>/Bitwise Operator'
     */
    rtb_Compare_a = ((((uint8_T)(1 << Index)) & rtu_I_RITA_Sev_Word) != 0);

    /* Switch: '<S26>/Switch1' incorporates:
     *  Constant: '<S26>/Constant_0_1'
     *  Selector: '<S26>/Selector1'
     */
    if (rtb_Compare_a) {
      rtb_Switch1_f = rtu_I_Prot_Request[Index];
    } else {
      rtb_Switch1_f = 0ULL;
    }

    /* End of Switch: '<S26>/Switch1' */

    /* S-Function (sfix_bitop): '<S26>/Bitwise Operator1' incorporates:
     *  Memory: '<S26>/Memory1'
     *  Switch: '<S26>/Switch1'
     */
    localB->DecisionWord = PrevDecisionWord | rtb_Switch1_f;

    /* Switch: '<S26>/Switch' incorporates:
     *  Constant: '<S26>/Constant_0'
     *  Selector: '<S26>/Selector'
     */
    if (rtb_Compare_a) {
      rtb_Switch_j = rtu_I_Sev_Output[Index];
    } else {
      rtb_Switch_j = 0U;
    }

    /* End of Switch: '<S26>/Switch' */

    /* S-Function (sfix_bitop): '<S26>/Bitwise Operator2' incorporates:
     *  Memory: '<S26>/Memory'
     */
    localB->Severity = (uint16_T)(PrevSeverity | rtb_Switch_j);

    /* Update for Memory: '<S26>/Memory1' incorporates:
     *  S-Function (sfix_bitop): '<S26>/Bitwise Operator1'
     */
    PrevDecisionWord = localB->DecisionWord;

    /* Update for Memory: '<S26>/Memory' */
    PrevSeverity = localB->Severity;
  }

  /* End of Outputs for SubSystem: '<S19>/Check_Decision' */
}

/* System initialize for atomic system: '<S48>/RSU_X_Filtering' */
static void OpsReAlg_RSU_X_Filtering_Init(rtB_RSU_X_Filtering_OpsReAlg_T *localB,
  rtDW_RSU_X_Filtering_OpsReAlg_T *localDW)
{
  localDW->is_active_c3_OpsReAlg = 0U;
  localDW->bR_ActivationStatus_Previous_Prev = false;
  localB->s16O_Min_RSU_X_LPF2 = 0;
  localB->s16O_Max_RSU_X_LPF2 = 0;
  StdUtl_MemSet(&localB->s16O_RSU_X_LPF2[0], 0, 3U * (sizeof(sint16)));
  StdUtl_MemSet(&localB->s32O_RSU_X_SIV[0], 0, 3U * (sizeof(sint32)));
}

/* Output and update for atomic system: '<S48>/RSU_X_Filtering' */
static void OpsReAlg_RSU_X_Filtering(uint8_T rtu_u8I_N_Loop, const sint16
  rtu_s16I_Raw[3], const B_R_Sensor_Calib rtu_I_R_Sensor_Calib[3], uint8_T
  rtu_u8I_R_PreProc_DV_Buffer_Length, boolean_T
  rtu_bI_R_ActivationStatus_Previous, rtB_RSU_X_Filtering_OpsReAlg_T *localB,
  rtDW_RSU_X_Filtering_OpsReAlg_T *localDW, StdUtl_ST_2ND_ORD_64BIT_FILT_DATA_T
  rtd_G_Memory_LPF2[3], B_Memory_SIV rtd_G_Memory_SIV[3])
{
  sint32 s32SIV_data;
  sint16 u0_tmp;
  uint8_T u8Index;
  uint8_T u8idx;

  /* Chart: '<S48>/RSU_X_Filtering' */
  /* Gateway: OpsReAlg/RITA/Signal_Conditioning_1kHz_Failing/RSU_X_Filtering/RSU_X_Filtering */
  /* During: OpsReAlg/RITA/Signal_Conditioning_1kHz_Failing/RSU_X_Filtering/RSU_X_Filtering */
  if (localDW->is_active_c3_OpsReAlg == 0U) {
    /* Entry: OpsReAlg/RITA/Signal_Conditioning_1kHz_Failing/RSU_X_Filtering/RSU_X_Filtering */
    localDW->is_active_c3_OpsReAlg = 1U;

    /* Entry Internal: OpsReAlg/RITA/Signal_Conditioning_1kHz_Failing/RSU_X_Filtering/RSU_X_Filtering */
    /* Transition: '<S49>:4' */
    /* Entry 'Init': '<S49>:3' */
    localB->s16O_Min_RSU_X_LPF2 = 0;
    localB->s16O_Max_RSU_X_LPF2 = 0;
    for (s32SIV_data = 0; s32SIV_data < rtu_u8I_N_Loop; s32SIV_data++) {
      rtd_G_Memory_SIV[s32SIV_data].CircBufIdx = 1U;

      /* initial value */
    }
  } else {
    /* During 'Init': '<S49>:3' */
    /* Transition: '<S49>:8' */
    /* Transition: '<S49>:10' */
    for (u8Index = 1U; u8Index <= rtu_u8I_N_Loop; u8Index++) {
      /* Transition: '<S49>:12' */
      /* Transition: '<S49>:16' */
      /* C function call - Low Pass Filter order 2 */
      /* %Function name */
      /*  %Raw sensor data */
      /* %Coefficient LPF2 */
      localB->s16O_RSU_X_LPF2[u8Index - 1] = StdUtl_SecondOrder64BitFilter
        (rtu_s16I_Raw[u8Index - 1], &rtu_I_R_Sensor_Calib[u8Index - 1].
         LPF2_Coeff, &rtd_G_Memory_LPF2[u8Index - 1]);

      /* memory working */
      if (u8Index == 1) {
        /* Transition: '<S49>:148' */
        /* Transition: '<S49>:150' */
        localB->s16O_Min_RSU_X_LPF2 = localB->s16O_RSU_X_LPF2[0];
        localB->s16O_Max_RSU_X_LPF2 = localB->s16O_RSU_X_LPF2[0];

        /* Transition: '<S49>:160' */
      } else {
        /* Transition: '<S49>:146' */
        u0_tmp = localB->s16O_RSU_X_LPF2[u8Index - 1];
        if (u0_tmp < localB->s16O_Min_RSU_X_LPF2) {
          localB->s16O_Min_RSU_X_LPF2 = u0_tmp;
        }

        if (u0_tmp > localB->s16O_Max_RSU_X_LPF2) {
          localB->s16O_Max_RSU_X_LPF2 = u0_tmp;
        }
      }

      /* Transition: '<S49>:17' */
    }

    /* Transition: '<S49>:35' */
    if (!rtu_bI_R_ActivationStatus_Previous) {
      /* Transition: '<S49>:37' */
      if (!localDW->bR_ActivationStatus_Previous_Prev) {
        /* Transition: '<S49>:167' */
        /* Transition: '<S49>:39' */
        for (u8Index = 1U; u8Index <= rtu_u8I_N_Loop; u8Index++) {
          /* Transition: '<S49>:41' */
          /* Transition: '<S49>:47' */
          /* Stateflow function - SIV Calculation  */
          /* MATLAB Function 'SIV_Calculation': '<S49>:61' */
          /* Graphical Function 'SIV_Calculation': '<S49>:61' */
          /* Transition: '<S49>:68' */
          /* '<S49>:68:1' */
          /* Transition: '<S49>:70' */
          /* '<S49>:70:1' */
          s32SIV_data = rtd_G_Memory_SIV[u8Index - 1].CircBufIdx - 1;
          rtd_G_Memory_SIV[u8Index - 1].FIRBuffer[s32SIV_data] =
            localB->s16O_RSU_X_LPF2[u8Index - 1];

          /* '<S49>:70:3' */
          /* '<S49>:72:1' */
          if (rtd_G_Memory_SIV[u8Index - 1].CircBufIdx == ((uint8_T)
               (rtu_u8I_R_PreProc_DV_Buffer_Length + 1U))) {
            /* Transition: '<S49>:72' */
            /* Transition: '<S49>:74' */
            /* '<S49>:74:1' */
            u8idx = 1U;

            /* Transition: '<S49>:76' */
          } else {
            /* Transition: '<S49>:77' */
            /* '<S49>:77:1' */
            u8idx = (uint8_T)(rtd_G_Memory_SIV[u8Index - 1].CircBufIdx + 1U);
          }

          /* Transition: '<S49>:79' */
          /* '<S49>:79:1' */
          s32SIV_data = (rtd_G_Memory_SIV[u8Index - 1].FIRBuffer[s32SIV_data] +
                         rtd_G_Memory_SIV[u8Index - 1].SIV) -
            rtd_G_Memory_SIV[u8Index - 1].FIRBuffer[u8idx - 1];

          /* Transition: '<S49>:81' */
          /* '<S49>:81:1' */
          rtd_G_Memory_SIV[u8Index - 1].SIV = s32SIV_data;

          /* '<S49>:81:1' */
          rtd_G_Memory_SIV[u8Index - 1].CircBufIdx = u8idx;
          localB->s32O_RSU_X_SIV[u8Index - 1] = s32SIV_data;

          /* Transition: '<S49>:48' */
        }

        /* Transition: '<S49>:50' */
        /* Transition: '<S49>:52' */
      } else {
        /* Transition: '<S49>:181' */
        for (u8Index = 1U; u8Index <= rtu_u8I_N_Loop; u8Index++) {
          /* Transition: '<S49>:188' */
          /* Transition: '<S49>:190' */
          localB->s32O_RSU_X_SIV[u8Index - 1] = 0;
          rtd_G_Memory_SIV[u8Index - 1].SIV = 0;
          StdUtl_MemSet(&rtd_G_Memory_SIV[u8Index - 1].FIRBuffer[0], 0, (sizeof
            (sint16)) << 4U);

          /* Transition: '<S49>:191' */
        }

        /* Transition: '<S49>:186' */
      }

      /* Transition: '<S49>:171' */
    } else {
      /* Transition: '<S49>:53' */
    }

    /* Transition: '<S49>:19' */
    localDW->bR_ActivationStatus_Previous_Prev =
      rtu_bI_R_ActivationStatus_Previous;
  }

  /* End of Chart: '<S48>/RSU_X_Filtering' */
}

/*
 * Output and update for atomic system:
 *    '<S4>/Average_QF_Central_Y'
 *    '<S4>/Average_QF_Conf_RSU1'
 *    '<S4>/Average_QF_Conf_RSU2'
 *    '<S4>/Average_QF_RSU1_X'
 *    '<S4>/Average_QF_RSU2_X'
 *    '<S4>/Average_QF_RSU3_X'
 *    '<S4>/Average_QF_Secondary_X'
 */
static void OpsReAlg_Average_QF_Central_Y(boolean_T rtu_I_Signal_QF,
  rtB_Average_QF_Central_Y_OpsReAlg_T *localB,
  rtDW_Average_QF_Central_Y_OpsReAlg_T *localDW)
{
  /* Logic: '<S85>/OR' incorporates:
   *  UnitDelay: '<S85>/Unit Delay'
   */
  localB->Signal_QF_averaged = (rtu_I_Signal_QF || (localDW->Signal_QF_Prev));

  /* Update for UnitDelay: '<S85>/Unit Delay' */
  localDW->Signal_QF_Prev = rtu_I_Signal_QF;
}

/*
 * Output and update for atomic system:
 *    '<S4>/Average_data_Central_X'
 *    '<S4>/Average_data_Central_Y'
 *    '<S4>/Average_data_Conf_RSU1'
 *    '<S4>/Average_data_Conf_RSU2'
 *    '<S4>/Average_data_RSU1_X'
 *    '<S4>/Average_data_RSU2_X'
 *    '<S4>/Average_data_RSU3_X'
 *    '<S4>/Average_data_Secondary_X'
 */
static void OpsReAlg_Average_data_Central_X(sint16 rtu_I_Signal_Data,
  rtB_Average_data_Central_X_OpsReAlg_T *localB,
  rtDW_Average_data_Central_X_OpsReAlg_T *localDW)
{
  sint32 rtb_Sum_a;
  boolean_T rtb_Compare_ga;

  /* Sum: '<S92>/Sum' incorporates:
   *  UnitDelay: '<S92>/Unit Delay'
   */
  rtb_Sum_a = rtu_I_Signal_Data + localDW->Signal_Data_Prev;

  /* RelationalOperator: '<S108>/Compare' incorporates:
   *  Constant: '<S108>/Constant'
   */
  rtb_Compare_ga = (rtb_Sum_a >= 0);

  /* Switch: '<S107>/Switch1' incorporates:
   *  UnaryMinus: '<S107>/Unary Minus'
   */
  if (rtb_Compare_ga) {
  } else {
    rtb_Sum_a = -rtb_Sum_a;
  }

  /* End of Switch: '<S107>/Switch1' */

  /* Switch: '<S107>/Switch' incorporates:
   *  ArithShift: '<S107>/Shift Arithmetic'
   *  Constant: '<S92>/Constant_1'
   *  UnaryMinus: '<S107>/Unary Minus1'
   */
  if (rtb_Compare_ga) {
    rtb_Sum_a >>= 1U;
  } else {
    rtb_Sum_a = -(rtb_Sum_a >> 1U);
  }

  /* End of Switch: '<S107>/Switch' */

  /* DataTypeConversion: '<S92>/Data Type Conversion' */
  localB->Signal_Data_averaged = (sint16)rtb_Sum_a;

  /* Update for UnitDelay: '<S92>/Unit Delay' */
  localDW->Signal_Data_Prev = rtu_I_Signal_Data;
}

/* Model step function */
void OpsReAlg_step(void)
{
  /* local block i/o variables */
  sint16 rtb_UnaryMinus_cf;
  sint32 rtb_TmpSignalConversionAtSFunctionInport10[6];
  sint32 q1;
  sint32 rtb_Sum2_c;
  sint32 rtb_Switch_n;
  sint32 tmp_2;
  uint32 qY;
  sint16 rtb_TmpSignalConversionAtRSU_X_FilteringInport2[3];
  sint16 Switch_m;
  sint16 rtb_Central_X_For_SM;
  sint16 tmp;
  uint16_T tmp_0;
  sint8 rtPrevAction;
  uint8_T tmp_1;
  uint8_T u8Index;
  boolean_T rtb_TmpSignalConversionAtSFunctionInport1[6];
  boolean_T rtb_AND;
  boolean_T rtb_FixPtRelationalOperator;

  /* Outputs for Atomic SubSystem: '<S1>/OpsReAlgConfiguration' */
  /* If: '<S2>/If' incorporates:
   *  UnitDelay: '<S2>/Unit Delay'
   */
  if (OpsReAlg_DWork.InitialCondition != 0) {
    /* Outputs for IfAction SubSystem: '<S2>/OpsReAlgConfiguration_at_Init' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* Sum: '<S6>/Sum' incorporates:
     *  Constant: '<S6>/Constant_R_CONFIG_LGT_RSU1_SENSOR_INDEX'
     *  Constant: '<S6>/Constant_R_CONFIG_LGT_RSU2_SENSOR_INDEX'
     *  Constant: '<S6>/Constant_R_CONFIG_LGT_RSU3_SENSOR_INDEX'
     *  Constant: '<S7>/Constant'
     *  Constant: '<S8>/Constant'
     *  Constant: '<S9>/Constant'
     *  DataStoreWrite: '<S6>/Data Store Write5'
     *  RelationalOperator: '<S7>/Compare'
     *  RelationalOperator: '<S8>/Compare'
     *  RelationalOperator: '<S9>/Compare'
     */
    RITA_LGT_RSU_NB = (uint8_T)((((uint32)
      (OPSREALG_CALIB_GET_u8R_CONFIG_LGT_RSU1_SENSOR_INDEX() != 0)) +
      (OPSREALG_CALIB_GET_u8R_CONFIG_LGT_RSU2_SENSOR_INDEX() != 0)) +
      (OPSREALG_CALIB_GET_u8R_CONFIG_LGT_RSU3_SENSOR_INDEX() != 0));

    /* Chart: '<S6>/RITA_Intrusion_Rotation_Cfg' incorporates:
     *  Constant: '<S6>/Constant_RITA_CFG_MAX_INTRUSION_ROTATION_CRITERIA_NB'
     *  Constant: '<S6>/Constant_R_IRC_SENSOR1_CHOICE'
     *  Constant: '<S6>/Constant_R_IRC_SENSOR2_CHOICE'
     *  Constant: '<S6>/Constant_R_IRC_STOPSENSOR_CHOICE'
     */
    /* Gateway: OpsReAlg/OpsReAlgConfiguration/OpsReAlgConfiguration_at_Init/RITA_Intrusion_Rotation_Cfg */
    /* During: OpsReAlg/OpsReAlgConfiguration/OpsReAlgConfiguration_at_Init/RITA_Intrusion_Rotation_Cfg */
    /* Entry Internal: OpsReAlg/OpsReAlgConfiguration/OpsReAlgConfiguration_at_Init/RITA_Intrusion_Rotation_Cfg */
    /* Transition: '<S10>:28' */
    /* Transition: '<S10>:31' */
    RITA_INTRUSION_ROTATION_CRITERIA_NB = 0U;
    for (u8Index = 1U; u8Index <= RITA_CFG_MAX_INTRUSION_ROTATION_CRITERIA_NB;
         u8Index++) {
      /* Transition: '<S10>:29' */
      if ((OPSREALG_CALIB_GET_R_IRC_SENSOR1_CHOICE( u8Index - 1 ) < 6) &&
          (OPSREALG_CALIB_GET_R_IRC_SENSOR2_CHOICE( u8Index - 1 ) < 6)) {
        /* Transition: '<S10>:40' */
        /* Transition: '<S10>:42' */
        RITA_INTRUSION_ROTATION_CRITERIA_NB++;
        rtb_Sum2_c = 3 * (RITA_INTRUSION_ROTATION_CRITERIA_NB - 1);
        OpsReAlg_B.u8O_RITA_INTRUSION_ROTATION_CRITERIA_CONFIG[rtb_Sum2_c] =
          (uint8_T)(OPSREALG_CALIB_GET_R_IRC_SENSOR1_CHOICE( u8Index - 1 ) + 1U);
        OpsReAlg_B.u8O_RITA_INTRUSION_ROTATION_CRITERIA_CONFIG[rtb_Sum2_c + 1] =
          (uint8_T)(OPSREALG_CALIB_GET_R_IRC_SENSOR2_CHOICE( u8Index - 1 ) + 1U);
        OpsReAlg_B.u8O_RITA_INTRUSION_ROTATION_CRITERIA_CONFIG[rtb_Sum2_c + 2] =
          (uint8_T)(OPSREALG_CALIB_GET_R_IRC_STOPSENSOR_CHOICE( u8Index - 1 ) +
                    1U);
        OpsReAlg_B.u8O_RITA_IRC_Index_Config[RITA_INTRUSION_ROTATION_CRITERIA_NB
          - 1] = u8Index;

        /* Transition: '<S10>:43' */
      } else {
        /* Transition: '<S10>:41' */
      }

      /* Transition: '<S10>:32' */
    }

    /* End of Chart: '<S6>/RITA_Intrusion_Rotation_Cfg' */

    /* DataStoreWrite: '<S6>/Data Store Write3' */
    /* Transition: '<S10>:33' */
    StdUtl_MemCopy(&RITA_INTRUSION_ROTATION_CRITERIA_CONFIG[0],
                   &OpsReAlg_B.u8O_RITA_INTRUSION_ROTATION_CRITERIA_CONFIG[0],
                   6U * (sizeof(uint8_T)));

    /* DataStoreWrite: '<S6>/Data Store Write4' */
    StdUtl_MemCopy(&RITA_IRC_INDEX_CONFIG[0],
                   &OpsReAlg_B.u8O_RITA_IRC_Index_Config[0], (sizeof(uint8_T)) <<
                   1U);

    /* SignalConversion generated from: '<S6>/O_Init' incorporates:
     *  Constant: '<S6>/Constant_0'
     */
    OpsReAlg_DWork.InitialCondition = 0U;

    /* End of Outputs for SubSystem: '<S2>/OpsReAlgConfiguration_at_Init' */
  }

  /* End of If: '<S2>/If' */
  /* End of Outputs for SubSystem: '<S1>/OpsReAlgConfiguration' */

  /* Selector: '<S4>/Selector' incorporates:
   *  Constant: '<S4>/Constant_R_CONFIG_LGT_CENTRAL_SENSOR_INDEX'
   *  Inport: '<Root>/I_CshMgr_Signals_Data'
   */
  OpsReAlg_B.Central_X_Acc_Raw = OPSCSHMGR_GET_OPS_SENSOR_CHANNEL_DATA
    ( (OPSREALG_CALIB_GET_u8R_CONFIG_LGT_CENTRAL_SENSOR_INDEX()) );

  /* Outputs for Atomic SubSystem: '<S4>/Average_data_Central_X' */
  OpsReAlg_Average_data_Central_X(OpsReAlg_B.Central_X_Acc_Raw,
    &OpsReAlg_B.Average_data_Central_X, &OpsReAlg_DWork.Average_data_Central_X);

  /* End of Outputs for SubSystem: '<S4>/Average_data_Central_X' */

  /* Selector: '<S4>/Selector1' incorporates:
   *  Constant: '<S4>/Constant_R_CONFIG_LAT_CENTRAL_SENSOR_INDEX'
   *  Inport: '<Root>/I_CshMgr_Signals_Data'
   */
  OpsReAlg_B.Central_Y_Acc_Raw = OPSCSHMGR_GET_OPS_SENSOR_CHANNEL_DATA
    ( (OPSREALG_CALIB_GET_u8R_CONFIG_LAT_CENTRAL_SENSOR_INDEX()) );

  /* Outputs for Atomic SubSystem: '<S4>/Average_data_Central_Y' */
  OpsReAlg_Average_data_Central_X(OpsReAlg_B.Central_Y_Acc_Raw,
    &OpsReAlg_B.Average_data_Central_Y, &OpsReAlg_DWork.Average_data_Central_Y);

  /* End of Outputs for SubSystem: '<S4>/Average_data_Central_Y' */

  /* Outputs for Atomic SubSystem: '<S4>/Average_QF_Central_Y' */
  /* Selector: '<S100>/Selector' incorporates:
   *  Constant: '<S100>/Constant1'
   *  Constant: '<S4>/Constant_R_CONFIG_LAT_CENTRAL_SENSOR_INDEX'
   *  Inport: '<Root>/I_CshMgr_Signals_Qf'
   *  Selector: '<S4>/Selector13'
   */
  OpsReAlg_Average_QF_Central_Y(R_CONFIG_QF_STATUS_MAP
    [(OPSCSHMGR_GET_OPS_SENSOR_CHANNEL_QF
      ( (OPSREALG_CALIB_GET_u8R_CONFIG_LAT_CENTRAL_SENSOR_INDEX()) ))],
    &OpsReAlg_B.Average_QF_Central_Y, &OpsReAlg_DWork.Average_QF_Central_Y);

  /* End of Outputs for SubSystem: '<S4>/Average_QF_Central_Y' */

  /* Selector: '<S4>/Selector2' incorporates:
   *  Constant: '<S4>/Constant_R_CONFIG_LGT_RSU1_SENSOR_INDEX'
   *  Inport: '<Root>/I_CshMgr_Signals_Data'
   */
  OpsReAlg_B.RSU1_X_Acc_Raw = OPSCSHMGR_GET_OPS_SENSOR_CHANNEL_DATA
    ( (OPSREALG_CALIB_GET_u8R_CONFIG_LGT_RSU1_SENSOR_INDEX()) );

  /* Outputs for Atomic SubSystem: '<S4>/Average_data_RSU1_X' */
  OpsReAlg_Average_data_Central_X(OpsReAlg_B.RSU1_X_Acc_Raw,
    &OpsReAlg_B.Average_data_RSU1_X, &OpsReAlg_DWork.Average_data_RSU1_X);

  /* End of Outputs for SubSystem: '<S4>/Average_data_RSU1_X' */

  /* Outputs for Atomic SubSystem: '<S4>/Average_QF_RSU1_X' */
  /* Selector: '<S103>/Selector' incorporates:
   *  Constant: '<S103>/Constant1'
   *  Constant: '<S4>/Constant_R_CONFIG_LGT_RSU1_SENSOR_INDEX'
   *  Inport: '<Root>/I_CshMgr_Signals_Qf'
   *  Selector: '<S4>/Selector3'
   */
  OpsReAlg_Average_QF_Central_Y(R_CONFIG_QF_STATUS_MAP
    [(OPSCSHMGR_GET_OPS_SENSOR_CHANNEL_QF
      ( (OPSREALG_CALIB_GET_u8R_CONFIG_LGT_RSU1_SENSOR_INDEX()) ))],
    &OpsReAlg_B.Average_QF_RSU1_X, &OpsReAlg_DWork.Average_QF_RSU1_X);

  /* End of Outputs for SubSystem: '<S4>/Average_QF_RSU1_X' */

  /* Selector: '<S4>/Selector4' incorporates:
   *  Constant: '<S4>/Constant_R_CONFIG_LGT_RSU2_SENSOR_INDEX'
   *  Inport: '<Root>/I_CshMgr_Signals_Data'
   */
  OpsReAlg_B.RSU2_X_Acc_Raw = OPSCSHMGR_GET_OPS_SENSOR_CHANNEL_DATA
    ( (OPSREALG_CALIB_GET_u8R_CONFIG_LGT_RSU2_SENSOR_INDEX()) );

  /* Outputs for Atomic SubSystem: '<S4>/Average_data_RSU2_X' */
  OpsReAlg_Average_data_Central_X(OpsReAlg_B.RSU2_X_Acc_Raw,
    &OpsReAlg_B.Average_data_RSU2_X, &OpsReAlg_DWork.Average_data_RSU2_X);

  /* End of Outputs for SubSystem: '<S4>/Average_data_RSU2_X' */

  /* Outputs for Atomic SubSystem: '<S4>/Average_QF_RSU2_X' */
  /* Selector: '<S104>/Selector' incorporates:
   *  Constant: '<S104>/Constant1'
   *  Constant: '<S4>/Constant_R_CONFIG_LGT_RSU2_SENSOR_INDEX'
   *  Inport: '<Root>/I_CshMgr_Signals_Qf'
   *  Selector: '<S4>/Selector5'
   */
  OpsReAlg_Average_QF_Central_Y(R_CONFIG_QF_STATUS_MAP
    [(OPSCSHMGR_GET_OPS_SENSOR_CHANNEL_QF
      ( (OPSREALG_CALIB_GET_u8R_CONFIG_LGT_RSU2_SENSOR_INDEX()) ))],
    &OpsReAlg_B.Average_QF_RSU2_X, &OpsReAlg_DWork.Average_QF_RSU2_X);

  /* End of Outputs for SubSystem: '<S4>/Average_QF_RSU2_X' */

  /* Selector: '<S4>/Selector6' incorporates:
   *  Constant: '<S4>/Constant_R_CONFIG_LGT_RSU3_SENSOR_INDEX'
   *  Inport: '<Root>/I_CshMgr_Signals_Data'
   */
  OpsReAlg_B.RSU3_X_Acc_Raw = OPSCSHMGR_GET_OPS_SENSOR_CHANNEL_DATA
    ( (OPSREALG_CALIB_GET_u8R_CONFIG_LGT_RSU3_SENSOR_INDEX()) );

  /* Outputs for Atomic SubSystem: '<S4>/Average_data_RSU3_X' */
  OpsReAlg_Average_data_Central_X(OpsReAlg_B.RSU3_X_Acc_Raw,
    &OpsReAlg_B.Average_data_RSU3_X, &OpsReAlg_DWork.Average_data_RSU3_X);

  /* End of Outputs for SubSystem: '<S4>/Average_data_RSU3_X' */

  /* Outputs for Atomic SubSystem: '<S4>/Average_QF_RSU3_X' */
  /* Selector: '<S105>/Selector' incorporates:
   *  Constant: '<S105>/Constant1'
   *  Constant: '<S4>/Constant_R_CONFIG_LGT_RSU3_SENSOR_INDEX'
   *  Inport: '<Root>/I_CshMgr_Signals_Qf'
   *  Selector: '<S4>/Selector7'
   */
  OpsReAlg_Average_QF_Central_Y(R_CONFIG_QF_STATUS_MAP
    [(OPSCSHMGR_GET_OPS_SENSOR_CHANNEL_QF
      ( (OPSREALG_CALIB_GET_u8R_CONFIG_LGT_RSU3_SENSOR_INDEX()) ))],
    &OpsReAlg_B.Average_QF_RSU3_X, &OpsReAlg_DWork.Average_QF_RSU3_X);

  /* End of Outputs for SubSystem: '<S4>/Average_QF_RSU3_X' */

  /* Selector: '<S4>/Selector8' incorporates:
   *  Constant: '<S4>/Constant_R_CONFIG_CONF_RSU1_SENSOR_INDEX'
   *  Inport: '<Root>/I_CshMgr_Signals_Data'
   */
  OpsReAlg_B.Conf_RSU1_Acc_Raw = OPSCSHMGR_GET_OPS_SENSOR_CHANNEL_DATA
    ( (OPSREALG_CALIB_GET_u8R_CONFIG_CONF_RSU1_SENSOR_INDEX()) );

  /* Outputs for Atomic SubSystem: '<S4>/Average_data_Conf_RSU1' */
  OpsReAlg_Average_data_Central_X(OpsReAlg_B.Conf_RSU1_Acc_Raw,
    &OpsReAlg_B.Average_data_Conf_RSU1, &OpsReAlg_DWork.Average_data_Conf_RSU1);

  /* End of Outputs for SubSystem: '<S4>/Average_data_Conf_RSU1' */

  /* Outputs for Atomic SubSystem: '<S4>/Average_QF_Conf_RSU1' */
  /* Selector: '<S101>/Selector' incorporates:
   *  Constant: '<S101>/Constant1'
   *  Constant: '<S4>/Constant_R_CONFIG_CONF_RSU1_SENSOR_INDEX'
   *  Inport: '<Root>/I_CshMgr_Signals_Qf'
   *  Selector: '<S4>/Selector9'
   */
  OpsReAlg_Average_QF_Central_Y(R_CONFIG_QF_STATUS_MAP
    [(OPSCSHMGR_GET_OPS_SENSOR_CHANNEL_QF
      ( (OPSREALG_CALIB_GET_u8R_CONFIG_CONF_RSU1_SENSOR_INDEX()) ))],
    &OpsReAlg_B.Average_QF_Conf_RSU1, &OpsReAlg_DWork.Average_QF_Conf_RSU1);

  /* End of Outputs for SubSystem: '<S4>/Average_QF_Conf_RSU1' */

  /* Selector: '<S4>/Selector10' incorporates:
   *  Constant: '<S4>/Constant_R_CONFIG_CONF_RSU2_SENSOR_INDEX'
   *  Inport: '<Root>/I_CshMgr_Signals_Data'
   */
  OpsReAlg_B.Conf_RSU2_Acc_Raw = OPSCSHMGR_GET_OPS_SENSOR_CHANNEL_DATA
    ( (OPSREALG_CALIB_GET_u8R_CONFIG_CONF_RSU2_SENSOR_INDEX()) );

  /* Outputs for Atomic SubSystem: '<S4>/Average_data_Conf_RSU2' */
  OpsReAlg_Average_data_Central_X(OpsReAlg_B.Conf_RSU2_Acc_Raw,
    &OpsReAlg_B.Average_data_Conf_RSU2, &OpsReAlg_DWork.Average_data_Conf_RSU2);

  /* End of Outputs for SubSystem: '<S4>/Average_data_Conf_RSU2' */

  /* Outputs for Atomic SubSystem: '<S4>/Average_QF_Conf_RSU2' */
  /* Selector: '<S102>/Selector' incorporates:
   *  Constant: '<S102>/Constant1'
   *  Constant: '<S4>/Constant_R_CONFIG_CONF_RSU2_SENSOR_INDEX'
   *  Inport: '<Root>/I_CshMgr_Signals_Qf'
   *  Selector: '<S4>/Selector11'
   */
  OpsReAlg_Average_QF_Central_Y(R_CONFIG_QF_STATUS_MAP
    [(OPSCSHMGR_GET_OPS_SENSOR_CHANNEL_QF
      ( (OPSREALG_CALIB_GET_u8R_CONFIG_CONF_RSU2_SENSOR_INDEX()) ))],
    &OpsReAlg_B.Average_QF_Conf_RSU2, &OpsReAlg_DWork.Average_QF_Conf_RSU2);

  /* End of Outputs for SubSystem: '<S4>/Average_QF_Conf_RSU2' */

  /* Selector: '<S4>/Selector12' incorporates:
   *  Constant: '<S4>/Constant_R_CONFIG_LGT_SECONDARY_SENSOR_INDEX'
   *  Inport: '<Root>/I_CshMgr_Signals_Data'
   */
  OpsReAlg_B.Secondary_X_Acc_Raw = OPSCSHMGR_GET_OPS_SENSOR_CHANNEL_DATA
    ( (OPSREALG_CALIB_GET_u8R_CONFIG_LGT_SECONDARY_SENSOR_INDEX()) );

  /* Outputs for Atomic SubSystem: '<S4>/Average_data_Secondary_X' */
  OpsReAlg_Average_data_Central_X(OpsReAlg_B.Secondary_X_Acc_Raw,
    &OpsReAlg_B.Average_data_Secondary_X,
    &OpsReAlg_DWork.Average_data_Secondary_X);

  /* End of Outputs for SubSystem: '<S4>/Average_data_Secondary_X' */

  /* Outputs for Atomic SubSystem: '<S4>/Average_QF_Secondary_X' */
  /* Selector: '<S106>/Selector' incorporates:
   *  Constant: '<S106>/Constant1'
   *  Constant: '<S4>/Constant_R_CONFIG_LGT_SECONDARY_SENSOR_INDEX'
   *  Inport: '<Root>/I_CshMgr_Signals_Qf'
   *  Selector: '<S4>/Selector14'
   */
  OpsReAlg_Average_QF_Central_Y(R_CONFIG_QF_STATUS_MAP
    [(OPSCSHMGR_GET_OPS_SENSOR_CHANNEL_QF
      ( (OPSREALG_CALIB_GET_u8R_CONFIG_LGT_SECONDARY_SENSOR_INDEX()) ))],
    &OpsReAlg_B.Average_QF_Secondary_X, &OpsReAlg_DWork.Average_QF_Secondary_X);

  /* End of Outputs for SubSystem: '<S4>/Average_QF_Secondary_X' */

  /* Logic: '<S12>/NOT' incorporates:
   *  UnitDelay: '<S12>/Unit Delay'
   */
  OpsReAlg_DWork.RITA_Clock_1kHz_Previous =
    !OpsReAlg_DWork.RITA_Clock_1kHz_Previous;

  /* Outputs for Triggered SubSystem: '<S3>/State_Manager_1kHz_Failing' incorporates:
   *  TriggerPort: '<S15>/Trigger'
   */
  /* Outputs for Triggered SubSystem: '<S3>/Signal_Conditioning_1kHz_Failing' incorporates:
   *  TriggerPort: '<S14>/Trigger'
   */
  rtb_FixPtRelationalOperator = !OpsReAlg_DWork.RITA_Clock_1kHz_Previous;

  /* End of Outputs for SubSystem: '<S3>/State_Manager_1kHz_Failing' */
  if (rtb_FixPtRelationalOperator &&
      (OpsReAlg_PrevZCSigState.Signal_Conditioning_1kHz_Failing_Trig_ZCE != 0))
  {
    /* S-Function (StdUtl_SecondOrder64BitFilter_ExtCoeff): '<S47>/Central_X_Filter' incorporates:
     *  Constant: '<S47>/Constant_R_SIC_FLT_CENTRAL_X'
     */
    rtb_UnaryMinus_cf = StdUtl_SecondOrder64BitFilter( (sint16)
      OpsReAlg_B.Average_data_Central_X.Signal_Data_averaged,
      (StdUtl_ST_2ND_ORDER_FILT_COEF_T*)
      OPSREALG_CALIB_GET_R_SIC_FLT_CENTRAL_X_ADDR(),
      &OpsReAlg_DWork.Central_X_Filter_work1);

    /* S-Function (StdUtl_FirstOrder64BitFilter_ExtCoeff): '<S47>/Central_X_For_DV_Filter' incorporates:
     *  Constant: '<S47>/Constant_R_SIC_FLT_CENTRAL_X_DV'
     */
    OpsReAlg_B.Central_X_For_DV = StdUtl_FirstOrder64BitFilter( (sint16)
      OpsReAlg_B.Average_data_Central_X.Signal_Data_averaged,
      (StdUtl_ST_1ST_ORDER_FILT_COEF_T*)
      OPSREALG_CALIB_GET_R_SIC_FLT_CENTRAL_X_DV_ADDR(),
      &OpsReAlg_DWork.Central_X_For_DV_Filter_work1);

    /* SignalConversion generated from: '<S48>/RSU_X_Filtering' */
    rtb_TmpSignalConversionAtRSU_X_FilteringInport2[0] =
      OpsReAlg_B.Average_data_RSU1_X.Signal_Data_averaged;
    rtb_TmpSignalConversionAtRSU_X_FilteringInport2[1] =
      OpsReAlg_B.Average_data_RSU2_X.Signal_Data_averaged;
    rtb_TmpSignalConversionAtRSU_X_FilteringInport2[2] =
      OpsReAlg_B.Average_data_RSU3_X.Signal_Data_averaged;

    /* Chart: '<S48>/RSU_X_Filtering' incorporates:
     *  Constant: '<S48>/Constant_R_SIC_DV_BUFFER_LENGTH'
     *  Constant: '<S48>/Constant_R_SIC_FLT_RSU_X'
     *  DataStoreRead: '<S48>/Data Store Read'
     *  UnitDelay: '<S3>/Unit Delay1'
     */
    OpsReAlg_RSU_X_Filtering(RITA_LGT_RSU_NB,
      rtb_TmpSignalConversionAtRSU_X_FilteringInport2,
      OPSREALG_CALIB_GET_R_SIC_FLT_RSU_X_ADDR(),
      OPSREALG_CALIB_GET_u8R_SIC_DV_BUFFER_LENGTH(),
      OpsReAlg_DWork.ActivationStatus_State, &OpsReAlg_B.sf_RSU_X_Filtering,
      &OpsReAlg_DWork.sf_RSU_X_Filtering, OpsReAlg_DWork.G_Memory_LPF2,
      OpsReAlg_DWork.G_Memory_SIV);

    /* SignalConversion generated from: '<S14>/O_RITA_Signals_Filtered' */
    OpsReAlg_B.RITA_Signals_Filtered[0] = rtb_UnaryMinus_cf;
    StdUtl_MemCopy(&OpsReAlg_B.RITA_Signals_Filtered[1],
                   &OpsReAlg_B.sf_RSU_X_Filtering.s16O_RSU_X_LPF2[0], 3U *
                   (sizeof(sint16)));
    OpsReAlg_B.RITA_Signals_Filtered[4] =
      OpsReAlg_B.sf_RSU_X_Filtering.s16O_Min_RSU_X_LPF2;
    OpsReAlg_B.RITA_Signals_Filtered[5] =
      OpsReAlg_B.sf_RSU_X_Filtering.s16O_Max_RSU_X_LPF2;

    /* SignalConversion generated from: '<S14>/O_RSU_X_SIV' */
    StdUtl_MemCopy(&OpsReAlg_B.OutportBufferForO_RSU_X_SIV[0],
                   &OpsReAlg_B.sf_RSU_X_Filtering.s32O_RSU_X_SIV[0], 3U *
                   (sizeof(sint32)));
  }

  OpsReAlg_PrevZCSigState.Signal_Conditioning_1kHz_Failing_Trig_ZCE =
    OpsReAlg_DWork.RITA_Clock_1kHz_Previous;

  /* End of Outputs for SubSystem: '<S3>/Signal_Conditioning_1kHz_Failing' */

  /* Outputs for Triggered SubSystem: '<S3>/State_Manager_1kHz_Failing' incorporates:
   *  TriggerPort: '<S15>/Trigger'
   */
  if (rtb_FixPtRelationalOperator &&
      (OpsReAlg_PrevZCSigState.State_Manager_1kHz_Failing_Trig_ZCE != 0)) {
    /* Switch: '<S50>/Switch' incorporates:
     *  Constant: '<S50>/Constant_R_CONFIG_CENTRAL_X_ACC_MAP'
     *  Constant: '<S50>/Constant_R_SM_X_ACC_FILTER'
     *  Selector: '<S50>/Selector'
     */
    if (OPSREALG_CALIB_GET_u8R_SM_X_ACC_FILTER() != 0) {
      rtb_Central_X_For_SM = OpsReAlg_B.Central_X_For_DV;
    } else {
      rtb_Central_X_For_SM =
        OpsReAlg_B.RITA_Signals_Filtered[R_CONFIG_CENTRAL_X_ACC_MAP];
    }

    /* End of Switch: '<S50>/Switch' */

    /* Switch: '<S84>/Switch' incorporates:
     *  Constant: '<S84>/Constant_0'
     *  Constant: '<S84>/Constant_R_SM_START_CENTRAL_X_ACC_THR'
     *  Logic: '<S84>/Logical Operator'
     *  Logic: '<S84>/Logical Operator1'
     *  Logic: '<S84>/Logical Operator2'
     *  RelationalOperator: '<S84>/Relational Operator'
     *  Sum: '<S84>/Sum1'
     *  UnitDelay: '<S15>/Unit Delay3'
     *  UnitDelay: '<S84>/Unit Delay2'
     */
    if (((OpsReAlg_DWork.TIME_Previous != 0) || (rtb_Central_X_For_SM >
          OPSREALG_CALIB_GET_s16R_SM_START_CENTRAL_X_ACC_THR())) &&
        (!OpsReAlg_DWork.RITA_Reset_Met_Previous)) {
      /* Sum: '<S84>/Sum1' incorporates:
       *  Constant: '<S84>/Constant_1'
       */
      qY = OpsReAlg_DWork.TIME_Previous + 1U;
      if ((OpsReAlg_DWork.TIME_Previous + 1U) > 65535U) {
        qY = 65535U;
      }

      OpsReAlg_DWork.TIME_Previous = (uint16_T)qY;
    } else {
      OpsReAlg_DWork.TIME_Previous = 0U;
    }

    /* End of Switch: '<S84>/Switch' */

    /* RelationalOperator: '<S83>/Compare' incorporates:
     *  Constant: '<S83>/Constant'
     *  UnitDelay: '<S84>/Unit Delay2'
     */
    rtb_AND = (OpsReAlg_DWork.TIME_Previous != 0);

    /* SignalConversion generated from: '<S15>/O_R_SM_W_STATE' */
    OpsReAlg_B.ActivationStatus = rtb_AND;

    /* SignalConversion generated from: '<S15>/O_R_SM_W_STATE' incorporates:
     *  UnitDelay: '<S84>/Unit Delay2'
     */
    OpsReAlg_B.RITA_TIME = OpsReAlg_DWork.TIME_Previous;

    /* If: '<S52>/If4' */
    rtPrevAction = OpsReAlg_DWork.If4_ActiveSubsystem;
    OpsReAlg_DWork.If4_ActiveSubsystem = -1;
    if (rtb_AND) {
      OpsReAlg_DWork.If4_ActiveSubsystem = 0;
    }

    if ((rtPrevAction != OpsReAlg_DWork.If4_ActiveSubsystem) && (rtPrevAction ==
         0)) {
      /* If: '<S66>/If' */
      OpsReAlg_DWork.If_ActiveSubsystem_a = -1;

      /* Disable for Logic: '<S65>/OR' incorporates:
       *  Outport: '<S58>/O_R_SM_W_RSU_Failures'
       */
      OpsReAlg_B.RSU1_X_Failure_Latched_n = false;

      /* Disable for Logic: '<S65>/OR2' incorporates:
       *  Outport: '<S58>/O_R_SM_W_RSU_Failures'
       */
      OpsReAlg_B.RSU2_X_Failure_Latched_p = false;

      /* Disable for Logic: '<S65>/OR3' incorporates:
       *  Outport: '<S58>/O_R_SM_W_RSU_Failures'
       */
      OpsReAlg_B.RSU3_X_Failure_Latched_b = false;

      /* Disable for Logic: '<S65>/OR1' incorporates:
       *  Outport: '<S58>/O_R_SM_W_RSU_Failures'
       */
      OpsReAlg_B.RSUs_X_Failure_Latched_g = false;

      /* Disable for BusCreator: '<S61>/Bus Creator' incorporates:
       *  Outport: '<S58>/O_R_SM_W_Measures'
       */
      OpsReAlg_B.R_SM_W_Measures_h = OpsReAlg_rtZB_SM_W_Measures;

      /* Disable for SignalConversion generated from: '<S58>/O_R_RSU_DV' incorporates:
       *  Outport: '<S58>/O_R_RSU_DV'
       */
      OpsReAlg_B.R_RSU1_X_DV_n = 0;

      /* Disable for SignalConversion generated from: '<S58>/O_R_RSU_DV' incorporates:
       *  Outport: '<S58>/O_R_RSU_DV'
       */
      OpsReAlg_B.R_RSU2_X_DV_e = 0;

      /* Disable for SignalConversion generated from: '<S58>/O_R_RSU_DV' incorporates:
       *  Outport: '<S58>/O_R_RSU_DV'
       */
      OpsReAlg_B.R_RSU3_X_DV_a = 0;

      /* Disable for SignalConversion generated from: '<S58>/O_R_RSU_DV' incorporates:
       *  Outport: '<S58>/O_R_RSU_DV'
       */
      OpsReAlg_B.R_Min_RSU_X_DV_o = 0;

      /* Disable for SignalConversion generated from: '<S58>/O_R_RSU_DV' incorporates:
       *  Outport: '<S58>/O_R_RSU_DV'
       */
      OpsReAlg_B.R_Max_RSU_X_DV_c = 0;
    }

    if (OpsReAlg_DWork.If4_ActiveSubsystem == 0) {
      if (0 != rtPrevAction) {
        /* InitializeConditions for IfAction SubSystem: '<S52>/RITA_Measures_and_Conditioning' incorporates:
         *  ActionPort: '<S58>/Action Port'
         */
        /* InitializeConditions for If: '<S52>/If4' incorporates:
         *  UnitDelay: '<S61>/Unit Delay3'
         *  UnitDelay: '<S63>/Unit Delay1'
         *  UnitDelay: '<S65>/Unit Delay1'
         *  UnitDelay: '<S65>/Unit Delay2'
         *  UnitDelay: '<S65>/Unit Delay3'
         *  UnitDelay: '<S66>/Unit Delay1'
         */
        OpsReAlg_DWork.SIV_Init = 1U;
        OpsReAlg_DWork.Lgt_RSU1_Failure_Latched_Previous = false;
        OpsReAlg_DWork.Lgt_RSU2_Failure_Latched_Previous = false;
        OpsReAlg_DWork.Lgt_RSU3_Failure_Latched_Previous = false;
        OpsReAlg_DWork.DeltaVelocity_Previous = 0;
        OpsReAlg_DWork.CentX_DISP_Previous = 0;

        /* End of InitializeConditions for SubSystem: '<S52>/RITA_Measures_and_Conditioning' */
      }

      /* Outputs for IfAction SubSystem: '<S52>/RITA_Measures_and_Conditioning' incorporates:
       *  ActionPort: '<S58>/Action Port'
       */
      /* If: '<S66>/If' incorporates:
       *  DataStoreRead: '<S66>/Data Store Read'
       */
      rtPrevAction = OpsReAlg_DWork.If_ActiveSubsystem_a;
      if (RITA_LGT_RSU_NB == 0) {
        OpsReAlg_DWork.If_ActiveSubsystem_a = 0;
      } else if (RITA_LGT_RSU_NB == 1) {
        OpsReAlg_DWork.If_ActiveSubsystem_a = 1;
      } else if (RITA_LGT_RSU_NB == 2) {
        OpsReAlg_DWork.If_ActiveSubsystem_a = 2;
      } else {
        OpsReAlg_DWork.If_ActiveSubsystem_a = 3;
      }

      switch (OpsReAlg_DWork.If_ActiveSubsystem_a) {
       case 0:
        /* Outputs for IfAction SubSystem: '<S66>/RSU_DV_No_RSU' incorporates:
         *  ActionPort: '<S70>/Action Port'
         */
        /* Merge generated from: '<S66>/Merge' incorporates:
         *  Constant: '<S70>/Constant_0'
         *  SignalConversion generated from: '<S70>/Constant_0'
         */
        OpsReAlg_B.R_RSU1_X_DV_m = 0;

        /* Merge generated from: '<S66>/Merge' incorporates:
         *  Constant: '<S70>/Constant_0_1'
         *  SignalConversion generated from: '<S70>/Constant_0_1'
         */
        OpsReAlg_B.R_RSU2_X_DV_l = 0;

        /* Merge generated from: '<S66>/Merge' incorporates:
         *  Constant: '<S70>/Constant_0_2'
         *  SignalConversion generated from: '<S70>/Constant_0_2'
         */
        OpsReAlg_B.R_RSU3_X_DV_f = 0;

        /* MinMax: '<S69>/Min' incorporates:
         *  Constant: '<S70>/Constant_0_3'
         *  Merge generated from: '<S66>/Merge'
         *  SignalConversion generated from: '<S70>/Constant_0_3'
         */
        OpsReAlg_B.R_Min_RSU_X_DV_h = 0;

        /* MinMax: '<S69>/Min1' incorporates:
         *  Constant: '<S70>/Constant_0_4'
         *  Merge generated from: '<S66>/Merge'
         *  SignalConversion generated from: '<S70>/Constant_0_4'
         */
        OpsReAlg_B.R_Max_RSU_X_DV_b = 0;

        /* End of Outputs for SubSystem: '<S66>/RSU_DV_No_RSU' */
        break;

       case 1:
        if (OpsReAlg_DWork.If_ActiveSubsystem_a != rtPrevAction) {
          /* InitializeConditions for IfAction SubSystem: '<S66>/RSU_DV_1RSU' incorporates:
           *  ActionPort: '<S67>/Action Port'
           */
          /* InitializeConditions for If: '<S66>/If' incorporates:
           *  UnitDelay: '<S71>/Unit Delay'
           */
          OpsReAlg_DWork.DeltaVelocity_Previous_k = 0;

          /* End of InitializeConditions for SubSystem: '<S66>/RSU_DV_1RSU' */
        }

        /* Outputs for IfAction SubSystem: '<S66>/RSU_DV_1RSU' incorporates:
         *  ActionPort: '<S67>/Action Port'
         */
        /* Switch: '<S71>/Switch' incorporates:
         *  Constant: '<S67>/Constant_R_CONFIG_RSU1_X_ACC_MAP'
         *  Selector: '<S71>/Selector2'
         *  Sum: '<S72>/Diff'
         *  UnitDelay: '<S66>/Unit Delay1'
         *  UnitDelay: '<S71>/Unit Delay'
         */
        if (OpsReAlg_DWork.SIV_Init != 0) {
          OpsReAlg_DWork.DeltaVelocity_Previous_k =
            OpsReAlg_B.OutportBufferForO_RSU_X_SIV[R_CONFIG_RSU1_X_ACC_MAP - 1];
        } else {
          /* Sum: '<S71>/Sum2' incorporates:
           *  Constant: '<S67>/Constant_R_CONFIG_RSU1_X_ACC_MAP'
           *  Selector: '<S71>/Selector1'
           *  UnitDelay: '<S71>/Unit Delay'
           */
          rtb_Sum2_c = OpsReAlg_B.RITA_Signals_Filtered[R_CONFIG_RSU1_X_ACC_MAP]
            + OpsReAlg_DWork.DeltaVelocity_Previous_k;

          /* Switch: '<S72>/Switch' incorporates:
           *  Constant: '<S71>/Constant_R_RSU_DV_BIAS'
           *  DataTypeConversion: '<S71>/Data Type Conversion'
           *  RelationalOperator: '<S72>/u_GTE_up'
           *  RelationalOperator: '<S72>/u_GT_lo'
           *  Switch: '<S72>/Switch1'
           *  UnaryMinus: '<S71>/Unary Minus'
           */
          if (rtb_Sum2_c >= OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS()) {
            rtb_Switch_n = OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS();
          } else if (rtb_Sum2_c > (-OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS())) {
            /* Switch: '<S72>/Switch1' */
            rtb_Switch_n = rtb_Sum2_c;
          } else {
            rtb_Switch_n = -OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS();
          }

          /* End of Switch: '<S72>/Switch' */
          OpsReAlg_DWork.DeltaVelocity_Previous_k = rtb_Sum2_c - rtb_Switch_n;
        }

        /* End of Switch: '<S71>/Switch' */

        /* Merge generated from: '<S66>/Merge' incorporates:
         *  SignalConversion generated from: '<S67>/O_R_RSU_X_DV'
         *  UnitDelay: '<S71>/Unit Delay'
         */
        OpsReAlg_B.R_RSU1_X_DV_m = OpsReAlg_DWork.DeltaVelocity_Previous_k;

        /* Merge generated from: '<S66>/Merge' incorporates:
         *  SignalConversion generated from: '<S67>/O_R_RSU_X_DV'
         */
        OpsReAlg_B.R_RSU2_X_DV_l = OpsReAlg_ConstB.R_RSU2_X_DV;

        /* Merge generated from: '<S66>/Merge' incorporates:
         *  SignalConversion generated from: '<S67>/O_R_RSU_X_DV'
         */
        OpsReAlg_B.R_RSU3_X_DV_f = OpsReAlg_ConstB.R_RSU3_X_DV_a;

        /* MinMax: '<S69>/Min' incorporates:
         *  Merge generated from: '<S66>/Merge'
         *  SignalConversion generated from: '<S67>/O_R_RSU_X_DV'
         *  UnitDelay: '<S71>/Unit Delay'
         */
        OpsReAlg_B.R_Min_RSU_X_DV_h = OpsReAlg_DWork.DeltaVelocity_Previous_k;

        /* MinMax: '<S69>/Min1' incorporates:
         *  Merge generated from: '<S66>/Merge'
         *  SignalConversion generated from: '<S67>/O_R_RSU_X_DV'
         *  UnitDelay: '<S71>/Unit Delay'
         */
        OpsReAlg_B.R_Max_RSU_X_DV_b = OpsReAlg_DWork.DeltaVelocity_Previous_k;

        /* End of Outputs for SubSystem: '<S66>/RSU_DV_1RSU' */
        break;

       case 2:
        if (OpsReAlg_DWork.If_ActiveSubsystem_a != rtPrevAction) {
          /* InitializeConditions for IfAction SubSystem: '<S66>/RSU_DV_2RSU' incorporates:
           *  ActionPort: '<S68>/Action Port'
           */
          /* InitializeConditions for If: '<S66>/If' incorporates:
           *  UnitDelay: '<S73>/Unit Delay'
           *  UnitDelay: '<S74>/Unit Delay'
           */
          OpsReAlg_DWork.DeltaVelocity_Previous_d = 0;
          OpsReAlg_DWork.DeltaVelocity_Previous_a = 0;

          /* End of InitializeConditions for SubSystem: '<S66>/RSU_DV_2RSU' */
        }

        /* Outputs for IfAction SubSystem: '<S66>/RSU_DV_2RSU' incorporates:
         *  ActionPort: '<S68>/Action Port'
         */
        /* Switch: '<S73>/Switch' incorporates:
         *  Constant: '<S68>/Constant_R_CONFIG_RSU1_X_ACC_MAP'
         *  Selector: '<S73>/Selector2'
         *  Sum: '<S75>/Diff'
         *  UnitDelay: '<S66>/Unit Delay1'
         *  UnitDelay: '<S73>/Unit Delay'
         */
        if (OpsReAlg_DWork.SIV_Init != 0) {
          OpsReAlg_DWork.DeltaVelocity_Previous_d =
            OpsReAlg_B.OutportBufferForO_RSU_X_SIV[R_CONFIG_RSU1_X_ACC_MAP - 1];
        } else {
          /* Sum: '<S73>/Sum2' incorporates:
           *  Constant: '<S68>/Constant_R_CONFIG_RSU1_X_ACC_MAP'
           *  Selector: '<S73>/Selector1'
           *  UnitDelay: '<S73>/Unit Delay'
           */
          rtb_Sum2_c = OpsReAlg_B.RITA_Signals_Filtered[R_CONFIG_RSU1_X_ACC_MAP]
            + OpsReAlg_DWork.DeltaVelocity_Previous_d;

          /* Switch: '<S75>/Switch' incorporates:
           *  Constant: '<S73>/Constant_R_RSU_DV_BIAS'
           *  DataTypeConversion: '<S73>/Data Type Conversion'
           *  RelationalOperator: '<S75>/u_GTE_up'
           *  RelationalOperator: '<S75>/u_GT_lo'
           *  Switch: '<S75>/Switch1'
           *  UnaryMinus: '<S73>/Unary Minus'
           */
          if (rtb_Sum2_c >= OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS()) {
            rtb_Switch_n = OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS();
          } else if (rtb_Sum2_c > (-OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS())) {
            /* Switch: '<S75>/Switch1' */
            rtb_Switch_n = rtb_Sum2_c;
          } else {
            rtb_Switch_n = -OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS();
          }

          /* End of Switch: '<S75>/Switch' */
          OpsReAlg_DWork.DeltaVelocity_Previous_d = rtb_Sum2_c - rtb_Switch_n;
        }

        /* End of Switch: '<S73>/Switch' */

        /* Merge generated from: '<S66>/Merge' incorporates:
         *  SignalConversion generated from: '<S68>/O_R_RSU_X_DV'
         *  UnitDelay: '<S73>/Unit Delay'
         */
        OpsReAlg_B.R_RSU1_X_DV_m = OpsReAlg_DWork.DeltaVelocity_Previous_d;

        /* Switch: '<S74>/Switch' incorporates:
         *  Constant: '<S68>/Constant_R_CONFIG_RSU2_X_ACC_MAP'
         *  Selector: '<S74>/Selector2'
         *  Sum: '<S76>/Diff'
         *  UnitDelay: '<S66>/Unit Delay1'
         *  UnitDelay: '<S74>/Unit Delay'
         */
        if (OpsReAlg_DWork.SIV_Init != 0) {
          OpsReAlg_DWork.DeltaVelocity_Previous_a =
            OpsReAlg_B.OutportBufferForO_RSU_X_SIV[R_CONFIG_RSU2_X_ACC_MAP - 1];
        } else {
          /* Sum: '<S74>/Sum2' incorporates:
           *  Constant: '<S68>/Constant_R_CONFIG_RSU2_X_ACC_MAP'
           *  Selector: '<S74>/Selector1'
           *  UnitDelay: '<S74>/Unit Delay'
           */
          rtb_Sum2_c = OpsReAlg_B.RITA_Signals_Filtered[R_CONFIG_RSU2_X_ACC_MAP]
            + OpsReAlg_DWork.DeltaVelocity_Previous_a;

          /* Switch: '<S76>/Switch' incorporates:
           *  Constant: '<S74>/Constant_R_RSU_DV_BIAS'
           *  DataTypeConversion: '<S74>/Data Type Conversion'
           *  RelationalOperator: '<S76>/u_GTE_up'
           *  RelationalOperator: '<S76>/u_GT_lo'
           *  Switch: '<S76>/Switch1'
           *  UnaryMinus: '<S74>/Unary Minus'
           */
          if (rtb_Sum2_c >= OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS()) {
            rtb_Switch_n = OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS();
          } else if (rtb_Sum2_c > (-OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS())) {
            /* Switch: '<S76>/Switch1' */
            rtb_Switch_n = rtb_Sum2_c;
          } else {
            rtb_Switch_n = -OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS();
          }

          /* End of Switch: '<S76>/Switch' */
          OpsReAlg_DWork.DeltaVelocity_Previous_a = rtb_Sum2_c - rtb_Switch_n;
        }

        /* End of Switch: '<S74>/Switch' */

        /* Merge generated from: '<S66>/Merge' incorporates:
         *  SignalConversion generated from: '<S68>/O_R_RSU_X_DV'
         *  UnitDelay: '<S74>/Unit Delay'
         */
        OpsReAlg_B.R_RSU2_X_DV_l = OpsReAlg_DWork.DeltaVelocity_Previous_a;

        /* Merge generated from: '<S66>/Merge' incorporates:
         *  SignalConversion generated from: '<S68>/O_R_RSU_X_DV'
         */
        OpsReAlg_B.R_RSU3_X_DV_f = OpsReAlg_ConstB.R_RSU3_X_DV;

        /* MinMax: '<S68>/Min' incorporates:
         *  UnitDelay: '<S73>/Unit Delay'
         *  UnitDelay: '<S74>/Unit Delay'
         */
        if (OpsReAlg_DWork.DeltaVelocity_Previous_d <
            OpsReAlg_DWork.DeltaVelocity_Previous_a) {
          /* MinMax: '<S69>/Min' incorporates:
           *  Merge generated from: '<S66>/Merge'
           *  SignalConversion generated from: '<S68>/O_R_RSU_X_DV'
           */
          OpsReAlg_B.R_Min_RSU_X_DV_h = OpsReAlg_DWork.DeltaVelocity_Previous_d;
        } else {
          /* MinMax: '<S69>/Min' incorporates:
           *  Merge generated from: '<S66>/Merge'
           *  SignalConversion generated from: '<S68>/O_R_RSU_X_DV'
           */
          OpsReAlg_B.R_Min_RSU_X_DV_h = OpsReAlg_DWork.DeltaVelocity_Previous_a;
        }

        /* End of MinMax: '<S68>/Min' */

        /* MinMax: '<S68>/Min1' incorporates:
         *  UnitDelay: '<S73>/Unit Delay'
         *  UnitDelay: '<S74>/Unit Delay'
         */
        if (OpsReAlg_DWork.DeltaVelocity_Previous_d >
            OpsReAlg_DWork.DeltaVelocity_Previous_a) {
          /* MinMax: '<S69>/Min1' incorporates:
           *  Merge generated from: '<S66>/Merge'
           *  SignalConversion generated from: '<S68>/O_R_RSU_X_DV'
           */
          OpsReAlg_B.R_Max_RSU_X_DV_b = OpsReAlg_DWork.DeltaVelocity_Previous_d;
        } else {
          /* MinMax: '<S69>/Min1' incorporates:
           *  Merge generated from: '<S66>/Merge'
           *  SignalConversion generated from: '<S68>/O_R_RSU_X_DV'
           */
          OpsReAlg_B.R_Max_RSU_X_DV_b = OpsReAlg_DWork.DeltaVelocity_Previous_a;
        }

        /* End of MinMax: '<S68>/Min1' */
        /* End of Outputs for SubSystem: '<S66>/RSU_DV_2RSU' */
        break;

       default:
        if (OpsReAlg_DWork.If_ActiveSubsystem_a != rtPrevAction) {
          /* InitializeConditions for IfAction SubSystem: '<S66>/RSU_DV_3RSU' incorporates:
           *  ActionPort: '<S69>/Action Port'
           */
          /* InitializeConditions for If: '<S66>/If' incorporates:
           *  UnitDelay: '<S77>/Unit Delay'
           *  UnitDelay: '<S78>/Unit Delay'
           *  UnitDelay: '<S79>/Unit Delay'
           */
          OpsReAlg_DWork.DeltaVelocity_Previous_j = 0;
          OpsReAlg_DWork.DeltaVelocity_Previous_jm = 0;
          OpsReAlg_DWork.DeltaVelocity_Previous_o = 0;

          /* End of InitializeConditions for SubSystem: '<S66>/RSU_DV_3RSU' */
        }

        /* Outputs for IfAction SubSystem: '<S66>/RSU_DV_3RSU' incorporates:
         *  ActionPort: '<S69>/Action Port'
         */
        /* Switch: '<S77>/Switch' incorporates:
         *  Constant: '<S69>/Constant_R_CONFIG_RSU1_X_ACC_MAP'
         *  Selector: '<S77>/Selector2'
         *  Sum: '<S80>/Diff'
         *  UnitDelay: '<S66>/Unit Delay1'
         *  UnitDelay: '<S77>/Unit Delay'
         */
        if (OpsReAlg_DWork.SIV_Init != 0) {
          OpsReAlg_DWork.DeltaVelocity_Previous_j =
            OpsReAlg_B.OutportBufferForO_RSU_X_SIV[R_CONFIG_RSU1_X_ACC_MAP - 1];
        } else {
          /* Sum: '<S77>/Sum2' incorporates:
           *  Constant: '<S69>/Constant_R_CONFIG_RSU1_X_ACC_MAP'
           *  Selector: '<S77>/Selector1'
           *  UnitDelay: '<S77>/Unit Delay'
           */
          rtb_Sum2_c = OpsReAlg_B.RITA_Signals_Filtered[R_CONFIG_RSU1_X_ACC_MAP]
            + OpsReAlg_DWork.DeltaVelocity_Previous_j;

          /* Switch: '<S80>/Switch' incorporates:
           *  Constant: '<S77>/Constant_R_RSU_DV_BIAS'
           *  DataTypeConversion: '<S77>/Data Type Conversion'
           *  RelationalOperator: '<S80>/u_GTE_up'
           *  RelationalOperator: '<S80>/u_GT_lo'
           *  Switch: '<S80>/Switch1'
           *  UnaryMinus: '<S77>/Unary Minus'
           */
          if (rtb_Sum2_c >= OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS()) {
            rtb_Switch_n = OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS();
          } else if (rtb_Sum2_c > (-OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS())) {
            /* Switch: '<S80>/Switch1' */
            rtb_Switch_n = rtb_Sum2_c;
          } else {
            rtb_Switch_n = -OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS();
          }

          /* End of Switch: '<S80>/Switch' */
          OpsReAlg_DWork.DeltaVelocity_Previous_j = rtb_Sum2_c - rtb_Switch_n;
        }

        /* End of Switch: '<S77>/Switch' */

        /* Merge generated from: '<S66>/Merge' incorporates:
         *  SignalConversion generated from: '<S69>/O_R_RSU_X_DV'
         *  UnitDelay: '<S77>/Unit Delay'
         */
        OpsReAlg_B.R_RSU1_X_DV_m = OpsReAlg_DWork.DeltaVelocity_Previous_j;

        /* Switch: '<S78>/Switch' incorporates:
         *  Constant: '<S69>/Constant_R_CONFIG_RSU2_X_ACC_MAP'
         *  Selector: '<S78>/Selector2'
         *  Sum: '<S81>/Diff'
         *  UnitDelay: '<S66>/Unit Delay1'
         *  UnitDelay: '<S78>/Unit Delay'
         */
        if (OpsReAlg_DWork.SIV_Init != 0) {
          OpsReAlg_DWork.DeltaVelocity_Previous_jm =
            OpsReAlg_B.OutportBufferForO_RSU_X_SIV[R_CONFIG_RSU2_X_ACC_MAP - 1];
        } else {
          /* Sum: '<S78>/Sum2' incorporates:
           *  Constant: '<S69>/Constant_R_CONFIG_RSU2_X_ACC_MAP'
           *  Selector: '<S78>/Selector1'
           *  UnitDelay: '<S78>/Unit Delay'
           */
          rtb_Sum2_c = OpsReAlg_B.RITA_Signals_Filtered[R_CONFIG_RSU2_X_ACC_MAP]
            + OpsReAlg_DWork.DeltaVelocity_Previous_jm;

          /* Switch: '<S81>/Switch' incorporates:
           *  Constant: '<S78>/Constant_R_RSU_DV_BIAS'
           *  DataTypeConversion: '<S78>/Data Type Conversion'
           *  RelationalOperator: '<S81>/u_GTE_up'
           *  RelationalOperator: '<S81>/u_GT_lo'
           *  Switch: '<S81>/Switch1'
           *  UnaryMinus: '<S78>/Unary Minus'
           */
          if (rtb_Sum2_c >= OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS()) {
            rtb_Switch_n = OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS();
          } else if (rtb_Sum2_c > (-OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS())) {
            /* Switch: '<S81>/Switch1' */
            rtb_Switch_n = rtb_Sum2_c;
          } else {
            rtb_Switch_n = -OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS();
          }

          /* End of Switch: '<S81>/Switch' */
          OpsReAlg_DWork.DeltaVelocity_Previous_jm = rtb_Sum2_c - rtb_Switch_n;
        }

        /* End of Switch: '<S78>/Switch' */

        /* Merge generated from: '<S66>/Merge' incorporates:
         *  SignalConversion generated from: '<S69>/O_R_RSU_X_DV'
         *  UnitDelay: '<S78>/Unit Delay'
         */
        OpsReAlg_B.R_RSU2_X_DV_l = OpsReAlg_DWork.DeltaVelocity_Previous_jm;

        /* Switch: '<S79>/Switch' incorporates:
         *  Constant: '<S69>/Constant_R_CONFIG_RSU3_X_ACC_MAP'
         *  Selector: '<S79>/Selector2'
         *  Sum: '<S82>/Diff'
         *  UnitDelay: '<S66>/Unit Delay1'
         *  UnitDelay: '<S79>/Unit Delay'
         */
        if (OpsReAlg_DWork.SIV_Init != 0) {
          OpsReAlg_DWork.DeltaVelocity_Previous_o =
            OpsReAlg_B.OutportBufferForO_RSU_X_SIV[R_CONFIG_RSU3_X_ACC_MAP - 1];
        } else {
          /* Sum: '<S79>/Sum2' incorporates:
           *  Constant: '<S69>/Constant_R_CONFIG_RSU3_X_ACC_MAP'
           *  Selector: '<S79>/Selector1'
           *  UnitDelay: '<S79>/Unit Delay'
           */
          rtb_Sum2_c = OpsReAlg_B.RITA_Signals_Filtered[R_CONFIG_RSU3_X_ACC_MAP]
            + OpsReAlg_DWork.DeltaVelocity_Previous_o;

          /* Switch: '<S82>/Switch' incorporates:
           *  Constant: '<S79>/Constant_R_RSU_DV_BIAS'
           *  DataTypeConversion: '<S79>/Data Type Conversion'
           *  RelationalOperator: '<S82>/u_GTE_up'
           *  RelationalOperator: '<S82>/u_GT_lo'
           *  Switch: '<S82>/Switch1'
           *  UnaryMinus: '<S79>/Unary Minus'
           */
          if (rtb_Sum2_c >= OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS()) {
            rtb_Switch_n = OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS();
          } else if (rtb_Sum2_c > (-OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS())) {
            /* Switch: '<S82>/Switch1' */
            rtb_Switch_n = rtb_Sum2_c;
          } else {
            rtb_Switch_n = -OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS();
          }

          /* End of Switch: '<S82>/Switch' */
          OpsReAlg_DWork.DeltaVelocity_Previous_o = rtb_Sum2_c - rtb_Switch_n;
        }

        /* End of Switch: '<S79>/Switch' */

        /* Merge generated from: '<S66>/Merge' incorporates:
         *  SignalConversion generated from: '<S69>/O_R_RSU_X_DV'
         *  UnitDelay: '<S79>/Unit Delay'
         */
        OpsReAlg_B.R_RSU3_X_DV_f = OpsReAlg_DWork.DeltaVelocity_Previous_o;

        /* MinMax: '<S69>/Min' incorporates:
         *  UnitDelay: '<S77>/Unit Delay'
         *  UnitDelay: '<S78>/Unit Delay'
         *  UnitDelay: '<S79>/Unit Delay'
         */
        if (OpsReAlg_DWork.DeltaVelocity_Previous_j <
            OpsReAlg_DWork.DeltaVelocity_Previous_jm) {
          OpsReAlg_B.R_Min_RSU_X_DV_h = OpsReAlg_DWork.DeltaVelocity_Previous_j;
        } else {
          OpsReAlg_B.R_Min_RSU_X_DV_h = OpsReAlg_DWork.DeltaVelocity_Previous_jm;
        }

        if (OpsReAlg_B.R_Min_RSU_X_DV_h <
            OpsReAlg_DWork.DeltaVelocity_Previous_o) {
        } else {
          /* Merge generated from: '<S66>/Merge' incorporates:
           *  SignalConversion generated from: '<S69>/O_R_RSU_X_DV'
           */
          OpsReAlg_B.R_Min_RSU_X_DV_h = OpsReAlg_DWork.DeltaVelocity_Previous_o;
        }

        /* MinMax: '<S69>/Min1' incorporates:
         *  UnitDelay: '<S77>/Unit Delay'
         *  UnitDelay: '<S78>/Unit Delay'
         *  UnitDelay: '<S79>/Unit Delay'
         */
        if (OpsReAlg_DWork.DeltaVelocity_Previous_j >
            OpsReAlg_DWork.DeltaVelocity_Previous_jm) {
          OpsReAlg_B.R_Max_RSU_X_DV_b = OpsReAlg_DWork.DeltaVelocity_Previous_j;
        } else {
          OpsReAlg_B.R_Max_RSU_X_DV_b = OpsReAlg_DWork.DeltaVelocity_Previous_jm;
        }

        if (OpsReAlg_B.R_Max_RSU_X_DV_b >
            OpsReAlg_DWork.DeltaVelocity_Previous_o) {
        } else {
          /* Merge generated from: '<S66>/Merge' incorporates:
           *  SignalConversion generated from: '<S69>/O_R_RSU_X_DV'
           */
          OpsReAlg_B.R_Max_RSU_X_DV_b = OpsReAlg_DWork.DeltaVelocity_Previous_o;
        }

        /* End of Outputs for SubSystem: '<S66>/RSU_DV_3RSU' */
        break;
      }

      /* SignalConversion generated from: '<S58>/O_R_RSU_DV' */
      OpsReAlg_B.R_RSU1_X_DV_n = OpsReAlg_B.R_RSU1_X_DV_m;

      /* SignalConversion generated from: '<S58>/O_R_RSU_DV' */
      OpsReAlg_B.R_RSU2_X_DV_e = OpsReAlg_B.R_RSU2_X_DV_l;

      /* SignalConversion generated from: '<S58>/O_R_RSU_DV' */
      OpsReAlg_B.R_RSU3_X_DV_a = OpsReAlg_B.R_RSU3_X_DV_f;

      /* SignalConversion generated from: '<S58>/O_R_RSU_DV' */
      OpsReAlg_B.R_Min_RSU_X_DV_o = OpsReAlg_B.R_Min_RSU_X_DV_h;

      /* SignalConversion generated from: '<S58>/O_R_RSU_DV' */
      OpsReAlg_B.R_Max_RSU_X_DV_c = OpsReAlg_B.R_Max_RSU_X_DV_b;

      /* Logic: '<S65>/OR' incorporates:
       *  UnitDelay: '<S65>/Unit Delay1'
       */
      OpsReAlg_B.RSU1_X_Failure_Latched_n =
        ((OpsReAlg_DWork.Lgt_RSU1_Failure_Latched_Previous) ||
         (OpsReAlg_B.Average_QF_RSU1_X.Signal_QF_averaged));

      /* UnitDelay: '<S65>/Unit Delay2' incorporates:
       *  UnitDelay: '<S65>/Unit Delay1'
       */
      OpsReAlg_DWork.Lgt_RSU1_Failure_Latched_Previous =
        OpsReAlg_DWork.Lgt_RSU2_Failure_Latched_Previous;

      /* Logic: '<S65>/OR2' incorporates:
       *  UnitDelay: '<S65>/Unit Delay1'
       */
      OpsReAlg_B.RSU2_X_Failure_Latched_p =
        ((OpsReAlg_DWork.Lgt_RSU1_Failure_Latched_Previous) ||
         (OpsReAlg_B.Average_QF_RSU2_X.Signal_QF_averaged));

      /* UnitDelay: '<S65>/Unit Delay3' incorporates:
       *  UnitDelay: '<S65>/Unit Delay1'
       */
      OpsReAlg_DWork.Lgt_RSU1_Failure_Latched_Previous =
        OpsReAlg_DWork.Lgt_RSU3_Failure_Latched_Previous;

      /* Logic: '<S65>/OR3' incorporates:
       *  UnitDelay: '<S65>/Unit Delay1'
       */
      OpsReAlg_B.RSU3_X_Failure_Latched_b =
        ((OpsReAlg_DWork.Lgt_RSU1_Failure_Latched_Previous) ||
         (OpsReAlg_B.Average_QF_RSU3_X.Signal_QF_averaged));

      /* Logic: '<S65>/OR1' */
      OpsReAlg_B.RSUs_X_Failure_Latched_g =
        (((OpsReAlg_B.RSU1_X_Failure_Latched_n) ||
          (OpsReAlg_B.RSU2_X_Failure_Latched_p)) ||
         (OpsReAlg_B.RSU3_X_Failure_Latched_b));

      /* Sum: '<S63>/Sum1' incorporates:
       *  UnitDelay: '<S63>/Unit Delay1'
       */
      rtb_Sum2_c = OpsReAlg_DWork.DeltaVelocity_Previous +
        OpsReAlg_B.Central_X_For_DV;

      /* Switch: '<S64>/Switch' incorporates:
       *  Constant: '<S63>/Constant_DV_BIAS'
       *  DataTypeConversion: '<S63>/Data Type Conversion'
       *  RelationalOperator: '<S64>/u_GTE_up'
       *  RelationalOperator: '<S64>/u_GT_lo'
       *  Switch: '<S64>/Switch1'
       *  UnaryMinus: '<S63>/Unary Minus'
       */
      if (rtb_Sum2_c >= OPSREALG_CALIB_GET_s16R_CENTRAL_X_DV_BIAS()) {
        rtb_Switch_n = OPSREALG_CALIB_GET_s16R_CENTRAL_X_DV_BIAS();
      } else if (rtb_Sum2_c > (-OPSREALG_CALIB_GET_s16R_CENTRAL_X_DV_BIAS())) {
        /* Switch: '<S64>/Switch1' */
        rtb_Switch_n = rtb_Sum2_c;
      } else {
        rtb_Switch_n = -OPSREALG_CALIB_GET_s16R_CENTRAL_X_DV_BIAS();
      }

      /* End of Switch: '<S64>/Switch' */

      /* Sum: '<S64>/Diff' incorporates:
       *  UnitDelay: '<S63>/Unit Delay1'
       */
      OpsReAlg_DWork.DeltaVelocity_Previous = rtb_Sum2_c - rtb_Switch_n;

      /* Sum: '<S61>/Sum3' incorporates:
       *  UnitDelay: '<S61>/Unit Delay3'
       *  UnitDelay: '<S63>/Unit Delay1'
       */
      if ((OpsReAlg_DWork.DeltaVelocity_Previous < 0) &&
          (OpsReAlg_DWork.CentX_DISP_Previous < (MIN_int32_T
            - OpsReAlg_DWork.DeltaVelocity_Previous))) {
        OpsReAlg_DWork.CentX_DISP_Previous = MIN_int32_T;
      } else if ((OpsReAlg_DWork.DeltaVelocity_Previous > 0) &&
                 (OpsReAlg_DWork.CentX_DISP_Previous > (MAX_int32_T
                   - OpsReAlg_DWork.DeltaVelocity_Previous))) {
        OpsReAlg_DWork.CentX_DISP_Previous = MAX_int32_T;
      } else {
        OpsReAlg_DWork.CentX_DISP_Previous +=
          OpsReAlg_DWork.DeltaVelocity_Previous;
      }

      /* End of Sum: '<S61>/Sum3' */

      /* BusCreator: '<S61>/Bus Creator' incorporates:
       *  UnitDelay: '<S63>/Unit Delay1'
       */
      OpsReAlg_B.R_SM_W_Measures_h.CentX_DV =
        OpsReAlg_DWork.DeltaVelocity_Previous;

      /* DataTypeConversion: '<S61>/Data Type Conversion' incorporates:
       *  UnitDelay: '<S61>/Unit Delay3'
       */
      rtb_Sum2_c = OpsReAlg_DWork.CentX_DISP_Previous;
      if (OpsReAlg_DWork.CentX_DISP_Previous < 0) {
        rtb_Sum2_c = 0;
      }

      /* BusCreator: '<S61>/Bus Creator' incorporates:
       *  DataTypeConversion: '<S61>/Data Type Conversion'
       */
      OpsReAlg_B.R_SM_W_Measures_h.CentX_DISP = (uint32)rtb_Sum2_c;

      /* Update for UnitDelay: '<S66>/Unit Delay1' incorporates:
       *  Constant: '<S66>/Constant_0'
       */
      OpsReAlg_DWork.SIV_Init = 0U;

      /* Update for UnitDelay: '<S65>/Unit Delay1' */
      OpsReAlg_DWork.Lgt_RSU1_Failure_Latched_Previous =
        OpsReAlg_B.RSU1_X_Failure_Latched_n;

      /* Update for UnitDelay: '<S65>/Unit Delay2' */
      OpsReAlg_DWork.Lgt_RSU2_Failure_Latched_Previous =
        OpsReAlg_B.RSU2_X_Failure_Latched_p;

      /* Update for UnitDelay: '<S65>/Unit Delay3' */
      OpsReAlg_DWork.Lgt_RSU3_Failure_Latched_Previous =
        OpsReAlg_B.RSU3_X_Failure_Latched_b;

      /* End of Outputs for SubSystem: '<S52>/RITA_Measures_and_Conditioning' */
    }

    /* End of If: '<S52>/If4' */

    /* SignalConversion generated from: '<S15>/O_R_SM_W_STATE' */
    OpsReAlg_B.R_RSU3_X_DV = OpsReAlg_B.R_RSU3_X_DV_a;

    /* SignalConversion generated from: '<S15>/O_R_SM_W_STATE' */
    OpsReAlg_B.R_Min_RSU_X_DV = OpsReAlg_B.R_Min_RSU_X_DV_o;

    /* SignalConversion generated from: '<S15>/O_R_SM_W_STATE' */
    OpsReAlg_B.R_Max_RSU_X_DV = OpsReAlg_B.R_Max_RSU_X_DV_c;

    /* If: '<S52>/If1' incorporates:
     *  UnitDelay: '<S84>/Unit Delay2'
     */
    if (OpsReAlg_DWork.TIME_Previous == 1) {
      /* Outputs for IfAction SubSystem: '<S52>/Vehicle_Status' incorporates:
       *  ActionPort: '<S60>/Action Port'
       */
      /* SignalConversion: '<S60>/Signal Copy' incorporates:
       *  Inport: '<Root>/I_RITA_FT_Threshold_Class'
       */
      OpsReAlg_B.RITA_FT_Threshold_Class_Frozen =
        OPSREALG_INPUT_GET_RITA_FT_Threshold_Class();

      /* Switch: '<S60>/Switch1' incorporates:
       *  Constant: '<S60>/Constant_R_Select_MAX_RSU_X_or_RSU1_X_Acc_DV'
       */
      if (OPSREALG_CALIB_GET_bR_Select_MAX_RSU_X_or_RSU1_X_Acc_DV()) {
        rtb_FixPtRelationalOperator = OpsReAlg_B.RSU1_X_Failure_Latched_n;
      } else {
        rtb_FixPtRelationalOperator = OpsReAlg_B.RSUs_X_Failure_Latched_g;
      }

      /* End of Switch: '<S60>/Switch1' */

      /* Switch: '<S60>/Switch' */
      if (rtb_FixPtRelationalOperator) {
        /* Switch: '<S60>/Switch' incorporates:
         *  Constant: '<S60>/Constant_R_SM_FAILED_RSU_X_ThrClass'
         *  Selector: '<S60>/Selector2'
         */
        OpsReAlg_B.RITA_Threshold_Class_a =
          OPSREALG_CALIB_GET_R_SM_FAILED_RSU_X_ThrClass
          ( (OpsReAlg_B.RITA_FT_Threshold_Class_Frozen) );
      } else {
        /* Switch: '<S60>/Switch' */
        OpsReAlg_B.RITA_Threshold_Class_a =
          OpsReAlg_B.RITA_FT_Threshold_Class_Frozen;
      }

      /* End of Switch: '<S60>/Switch' */
      /* End of Outputs for SubSystem: '<S52>/Vehicle_Status' */
    }

    /* End of If: '<S52>/If1' */

    /* SignalConversion generated from: '<S15>/O_R_SM_W_STATE' */
    OpsReAlg_B.RITA_Threshold_Class = OpsReAlg_B.RITA_Threshold_Class_a;

    /* SignalConversion generated from: '<S15>/O_R_SM_W_STATE' */
    OpsReAlg_B.RSU1_X_Failure_Latched = OpsReAlg_B.RSU1_X_Failure_Latched_n;

    /* SignalConversion generated from: '<S15>/O_R_SM_W_STATE' */
    OpsReAlg_B.RSU2_X_Failure_Latched = OpsReAlg_B.RSU2_X_Failure_Latched_p;

    /* SignalConversion generated from: '<S15>/O_R_SM_W_STATE' */
    OpsReAlg_B.RSU3_X_Failure_Latched = OpsReAlg_B.RSU3_X_Failure_Latched_b;

    /* SignalConversion generated from: '<S15>/O_R_SM_W_STATE' */
    OpsReAlg_B.RSUs_X_Failure_Latched = OpsReAlg_B.RSUs_X_Failure_Latched_g;

    /* SignalConversion generated from: '<S15>/O_R_SM_W_STATE' */
    OpsReAlg_B.R_SM_W_Measures = OpsReAlg_B.R_SM_W_Measures_h;

    /* SignalConversion generated from: '<S15>/O_R_SM_W_STATE' */
    OpsReAlg_B.R_RSU1_X_DV = OpsReAlg_B.R_RSU1_X_DV_n;

    /* SignalConversion generated from: '<S15>/O_R_SM_W_STATE' */
    OpsReAlg_B.R_RSU2_X_DV = OpsReAlg_B.R_RSU2_X_DV_e;

    /* If: '<S15>/If' */
    rtPrevAction = OpsReAlg_DWork.If_ActiveSubsystem;
    OpsReAlg_DWork.If_ActiveSubsystem = -1;
    if (rtb_AND) {
      OpsReAlg_DWork.If_ActiveSubsystem = 0;
    }

    if (rtPrevAction != OpsReAlg_DWork.If_ActiveSubsystem) {
      /* Disable for Logic: '<S51>/Logical Operator' incorporates:
       *  Outport: '<S51>/O_RITA_Reset_Met'
       */
      OpsReAlg_B.RITA_Reset_Met = ((rtPrevAction != 0) &&
        (OpsReAlg_B.RITA_Reset_Met));
    }

    if (OpsReAlg_DWork.If_ActiveSubsystem == 0) {
      if (0 != rtPrevAction) {
        /* InitializeConditions for IfAction SubSystem: '<S15>/Reset' incorporates:
         *  ActionPort: '<S51>/Action Port'
         */
        /* InitializeConditions for If: '<S15>/If' incorporates:
         *  Sum: '<S53>/Sum2'
         *  UnitDelay: '<S53>/Unit Delay1'
         *  UnitDelay: '<S53>/Unit Delay2'
         *  UnitDelay: '<S54>/Delay Input1'
         *  UnitDelay: '<S56>/Unit Delay'
         *
         * Block description for '<S54>/Delay Input1':
         *
         *  Store in Global RAM
         */
        OpsReAlg_DWork.DvReset_Clock_Previous = 0U;
        OpsReAlg_DWork.LISAResetVelocity_Previous = 0;
        OpsReAlg_DWork.DelayInput1_DSTATE = false;
        OpsReAlg_DWork.Weak_Reset_Time_Previous = 0U;

        /* End of InitializeConditions for SubSystem: '<S15>/Reset' */
      }

      /* Outputs for IfAction SubSystem: '<S15>/Reset' incorporates:
       *  ActionPort: '<S51>/Action Port'
       */
      /* RelationalOperator: '<S54>/FixPt Relational Operator' incorporates:
       *  UnitDelay: '<S3>/Unit Delay'
       *  UnitDelay: '<S54>/Delay Input1'
       *
       * Block description for '<S54>/Delay Input1':
       *
       *  Store in Global RAM
       */
      rtb_FixPtRelationalOperator = (((sint32)
        OpsReAlg_DWork.RITA_Deployment_Previous) > ((sint32)
        OpsReAlg_DWork.DelayInput1_DSTATE));

      /* Switch: '<S53>/Switch2' incorporates:
       *  Constant: '<S53>/Constant_0_2'
       *  Sum: '<S53>/Add'
       *  UnitDelay: '<S53>/Unit Delay2'
       */
      if (rtb_FixPtRelationalOperator) {
        OpsReAlg_DWork.DvReset_Clock_Previous = 0U;
      } else {
        /* Sum: '<S53>/Add' incorporates:
         *  Constant: '<S53>/Constant_1'
         *  UnitDelay: '<S53>/Unit Delay2'
         */
        qY = OpsReAlg_DWork.DvReset_Clock_Previous + 1U;
        if ((OpsReAlg_DWork.DvReset_Clock_Previous + 1U) > 65535U) {
          qY = 65535U;
        }

        OpsReAlg_DWork.DvReset_Clock_Previous = (uint16_T)qY;
      }

      /* End of Switch: '<S53>/Switch2' */

      /* RelationalOperator: '<S53>/Relational Operator1' incorporates:
       *  Constant: '<S53>/Constant_R_SM_RESET_VELOCITY_START'
       *  UnitDelay: '<S53>/Unit Delay2'
       */
      OpsReAlg_B.RITAResetZoneON = (OpsReAlg_DWork.DvReset_Clock_Previous >=
        OPSREALG_CALIB_GET_u16R_SM_RESET_VELOCITY_START());

      /* Switch: '<S53>/Switch1' incorporates:
       *  Constant: '<S53>/Constant_0'
       *  Constant: '<S53>/Constant_R_SM_RESET_VELOCITY_BIAS'
       */
      if (OpsReAlg_B.RITAResetZoneON) {
        Switch_m = OPSREALG_CALIB_GET_s16R_SM_RESET_VELOCITY_BIAS();
      } else {
        Switch_m = 0;
      }

      /* End of Switch: '<S53>/Switch1' */

      /* Sum: '<S53>/Sum2' incorporates:
       *  Sum: '<S53>/Sum1'
       *  UnitDelay: '<S53>/Unit Delay1'
       */
      OpsReAlg_DWork.LISAResetVelocity_Previous =
        (OpsReAlg_DWork.LISAResetVelocity_Previous + rtb_Central_X_For_SM) -
        Switch_m;

      /* Logic: '<S53>/Logical Operator3' incorporates:
       *  Constant: '<S53>/Constant_R_SM_RESET_VELOCITY_THR'
       *  RelationalOperator: '<S53>/Relational Operator4'
       */
      OpsReAlg_B.R_DeltaVelocityReset_Met =
        ((OpsReAlg_DWork.LISAResetVelocity_Previous <
          OPSREALG_CALIB_GET_s32R_SM_RESET_VELOCITY_THR()) &&
         (OpsReAlg_B.RITAResetZoneON));

      /* Switch: '<S53>/Switch' */
      if (rtb_FixPtRelationalOperator) {
        /* Sum: '<S53>/Sum2' incorporates:
         *  Constant: '<S53>/Constant_0_1'
         */
        OpsReAlg_DWork.LISAResetVelocity_Previous = 0;
      }

      /* End of Switch: '<S53>/Switch' */

      /* Switch: '<S56>/Switch' incorporates:
       *  Constant: '<S56>/Constant_0'
       *  Constant: '<S56>/Constant_R_SM_RESET_CENTRAL_X_ACC_THR'
       *  RelationalOperator: '<S56>/Relational Operator2'
       *  Sum: '<S56>/Sum'
       *  UnitDelay: '<S56>/Unit Delay'
       */
      if (rtb_Central_X_For_SM <=
          OPSREALG_CALIB_GET_s16R_SM_RESET_CENTRAL_X_ACC_THR()) {
        OpsReAlg_DWork.Weak_Reset_Time_Previous++;
      } else {
        OpsReAlg_DWork.Weak_Reset_Time_Previous = 0U;
      }

      /* End of Switch: '<S56>/Switch' */

      /* RelationalOperator: '<S56>/Relational Operator3' incorporates:
       *  Constant: '<S56>/Constant_R_SM_RESET_WEAK_TIME'
       *  UnitDelay: '<S56>/Unit Delay'
       */
      OpsReAlg_B.R_Weak_Reset_Met = (OpsReAlg_DWork.Weak_Reset_Time_Previous >
        OPSREALG_CALIB_GET_u8R_SM_RESET_WEAK_TIME());

      /* Switch: '<S55>/Switch' incorporates:
       *  Constant: '<S55>/Constant_R_SM_RESET_HARD_TIME'
       *  Constant: '<S55>/Constant_R_SM_RESET_HARD_TIME_EXTENSION'
       *  Sum: '<S55>/Add'
       *  UnitDelay: '<S3>/Unit Delay'
       */
      if (OpsReAlg_DWork.RITA_Deployment_Previous) {
        tmp_0 = (uint16_T)(((uint32)
                            OPSREALG_CALIB_GET_u16R_SM_RESET_HARD_TIME_EXTENSION
                            ()) + OPSREALG_CALIB_GET_u16R_SM_RESET_HARD_TIME());
      } else {
        tmp_0 = OPSREALG_CALIB_GET_u16R_SM_RESET_HARD_TIME();
      }

      /* End of Switch: '<S55>/Switch' */

      /* Logic: '<S55>/Logical Operator' incorporates:
       *  Constant: '<S55>/Constant_R_SM_RESET_HARD_TIME'
       *  Constant: '<S57>/Constant'
       *  RelationalOperator: '<S55>/Relational Operator'
       *  RelationalOperator: '<S57>/Compare'
       *  UnitDelay: '<S84>/Unit Delay2'
       */
      OpsReAlg_B.R_TimeOut_Met = ((OpsReAlg_DWork.TIME_Previous > tmp_0) &&
        (OPSREALG_CALIB_GET_u16R_SM_RESET_HARD_TIME() != 0));

      /* Logic: '<S51>/Logical Operator' */
      OpsReAlg_B.RITA_Reset_Met = (((OpsReAlg_B.R_Weak_Reset_Met) ||
        (OpsReAlg_B.R_DeltaVelocityReset_Met)) || (OpsReAlg_B.R_TimeOut_Met));

      /* Update for UnitDelay: '<S54>/Delay Input1' incorporates:
       *  UnitDelay: '<S3>/Unit Delay'
       *
       * Block description for '<S54>/Delay Input1':
       *
       *  Store in Global RAM
       */
      OpsReAlg_DWork.DelayInput1_DSTATE =
        OpsReAlg_DWork.RITA_Deployment_Previous;

      /* End of Outputs for SubSystem: '<S15>/Reset' */
    }

    /* End of If: '<S15>/If' */

    /* Update for UnitDelay: '<S15>/Unit Delay3' */
    OpsReAlg_DWork.RITA_Reset_Met_Previous = OpsReAlg_B.RITA_Reset_Met;
  }

  OpsReAlg_PrevZCSigState.State_Manager_1kHz_Failing_Trig_ZCE =
    OpsReAlg_DWork.RITA_Clock_1kHz_Previous;

  /* End of Outputs for SubSystem: '<S3>/State_Manager_1kHz_Failing' */

  /* Outputs for Enabled and Triggered SubSystem: '<S3>/RITA_Crash_1kHz_Raising' incorporates:
   *  EnablePort: '<S13>/Enable'
   *  TriggerPort: '<S13>/Trigger'
   */
  if (OpsReAlg_B.ActivationStatus) {
    if (!OpsReAlg_DWork.RITA_Crash_1kHz_Raising_MODE) {
      /* InitializeConditions for UnitDelay: '<S18>/Unit Delay2' */
      OpsReAlg_DWork.RITA_Conf_Bits_Set_Previous = 0U;

      /* InitializeConditions for UnitDelay: '<S18>/Unit Delay3' */
      OpsReAlg_DWork.RITA_Conf_Bits_Faulty_Previous = 0U;

      /* InitializeConditions for UnitDelay: '<S19>/Unit Delay2' */
      OpsReAlg_DWork.R_DecisionWord_VR_Prev = 0ULL;

      /* InitializeConditions for UnitDelay: '<S30>/Unit Delay' */
      OpsReAlg_DWork.R_Angle_Level1_Previous = false;

      /* InitializeConditions for UnitDelay: '<S30>/Unit Delay1' */
      OpsReAlg_DWork.R_Angle_Level2_Previous = false;

      /* InitializeConditions for UnitDelay: '<S33>/Unit Delay' */
      OpsReAlg_DWork.Side_Severity_Flags = 0U;

      /* InitializeConditions for UnitDelay: '<S17>/Unit Delay' */
      OpsReAlg_DWork.RITA_Sev_Word_Previous = 0U;

      /* InitializeConditions for UnitDelay: '<S30>/Unit Delay2' */
      OpsReAlg_DWork.R_Rotation_Direction_Previous = 0U;

      /* InitializeConditions for UnitDelay: '<S19>/Unit Delay1' */
      OpsReAlg_DWork.SeverityFlags_Previous = 0U;

      /* SystemReset for Chart: '<S31>/Compute_and_Compare_CentX_Acc_Thresholds' */
      OpsReAlg_DWork.is_active_c10_s4RB7X9Aqy8tjIx8lwkkzWC_RITA2_Library = 0U;
      OpsReAlg_B.u8O_Acc_Sev_Word_h = 0U;

      /* SystemReset for Chart: '<S32>/Compute_and_Compare_DV_Thresholds' */
      OpsReAlg_DWork.is_active_c1_sIgR1AQg4K4xYCVrLLdVCgD_RITA2_Library = 0U;
      OpsReAlg_B.u8O_DV_Sev_Word_o = 0U;

      /* SystemReset for Chart: '<S31>/Compute_and_Compare_CentX_Acc_Thresholds' */
      StdUtl_MemSet(&OpsReAlg_DWork.u8Acc_Latch_Counter_m[0], 0, (sizeof(uint8_T))
                    << 2U);
      StdUtl_MemSet(&OpsReAlg_B.s16O_Acc_Threshold_a[0], 0, (sizeof(sint16)) <<
                    2U);

      /* SystemReset for Chart: '<S32>/Compute_and_Compare_DV_Thresholds' */
      StdUtl_MemSet(&OpsReAlg_DWork.bDV_Latch_Sev_j[0], 0, (sizeof(boolean_T)) <<
                    2U);
      StdUtl_MemSet(&OpsReAlg_B.s32O_DV_Threshold_k[0], 0, (sizeof(sint32)) <<
                    2U);

      /* SystemReset for Chart: '<S34>/Intrusion_Rotation_Criteria_Module' */
      OpsReAlg_DWork.is_active_c18_OpsReAlg = 0U;
      OpsReAlg_B.R_Sev_Word_AccDV_IRC = 0U;
      StdUtl_MemSet(&OpsReAlg_DWork.u8StopSensor_Condition[0], 1, (sizeof
        (uint8_T)) << 1U);
      StdUtl_MemSet(&OpsReAlg_B.R_IRC_Met[0], 0, (sizeof(uint8_T)) << 1U);
      StdUtl_MemSet(&OpsReAlg_B.s32O_RITA_IRC_Final[0], 0, (sizeof(sint32)) <<
                    1U);
      OpsReAlg_DWork.RITA_Crash_1kHz_Raising_MODE = true;
    }

    if ((OpsReAlg_DWork.RITA_Clock_1kHz_Previous) &&
        (OpsReAlg_PrevZCSigState.RITA_Crash_1kHz_Raising_Trig_ZCE != 1)) {
      /* Switch: '<S18>/Switch' incorporates:
       *  Constant: '<S18>/Constant_R_Select_MAX_RSU_X_or_RSU1_X_Acc_DV'
       */
      if (OPSREALG_CALIB_GET_bR_Select_MAX_RSU_X_or_RSU1_X_Acc_DV()) {
        /* UnaryMinus: '<S30>/Unary Minus' incorporates:
         *  Constant: '<S18>/Constant_R_CONFIG_RSU1_X_ACC_MAP'
         *  Selector: '<S18>/Selector3'
         */
        rtb_UnaryMinus_cf =
          OpsReAlg_B.RITA_Signals_Filtered[R_CONFIG_RSU1_X_ACC_MAP];
      } else {
        /* UnaryMinus: '<S30>/Unary Minus' incorporates:
         *  Constant: '<S18>/Constant_R_CONFIG_MAX_RSU_X_ACC_MAP'
         *  Selector: '<S18>/Selector1'
         */
        rtb_UnaryMinus_cf =
          OpsReAlg_B.RITA_Signals_Filtered[R_CONFIG_MAX_RSU_X_ACC_MAP];
      }

      /* End of Switch: '<S18>/Switch' */

      /* Abs: '<S4>/Abs' */
      if (OpsReAlg_B.Average_data_Central_Y.Signal_Data_averaged < 0) {
        Switch_m = (sint16)
          (-OpsReAlg_B.Average_data_Central_Y.Signal_Data_averaged);
      } else {
        Switch_m = OpsReAlg_B.Average_data_Central_Y.Signal_Data_averaged;
      }

      /* End of Abs: '<S4>/Abs' */

      /* Abs: '<S4>/Abs1' */
      if (OpsReAlg_B.Average_data_Conf_RSU1.Signal_Data_averaged < 0) {
        rtb_Central_X_For_SM = (sint16)
          (-OpsReAlg_B.Average_data_Conf_RSU1.Signal_Data_averaged);
      } else {
        rtb_Central_X_For_SM =
          OpsReAlg_B.Average_data_Conf_RSU1.Signal_Data_averaged;
      }

      /* End of Abs: '<S4>/Abs1' */

      /* Abs: '<S4>/Abs2' */
      if (OpsReAlg_B.Average_data_Conf_RSU2.Signal_Data_averaged < 0) {
        tmp = (sint16)(-OpsReAlg_B.Average_data_Conf_RSU2.Signal_Data_averaged);
      } else {
        tmp = OpsReAlg_B.Average_data_Conf_RSU2.Signal_Data_averaged;
      }

      /* End of Abs: '<S4>/Abs2' */

      /* RelationalOperator: '<S18>/Relational Operator' incorporates:
       *  Chart: '<S31>/Compute_and_Compare_CentX_Acc_Thresholds'
       *  Constant: '<S18>/Constant_R_CONFIG_CENTRAL_X_ACC_MAP'
       *  Selector: '<S18>/Selector'
       */
      rtb_Sum2_c = OpsReAlg_B.RITA_Signals_Filtered[R_CONFIG_CENTRAL_X_ACC_MAP];

      /* S-Function (sfix_bitop): '<S18>/Bitwise Operator2' incorporates:
       *  ArithShift: '<S18>/Shift Arithmetic1'
       *  ArithShift: '<S18>/Shift Arithmetic11'
       *  ArithShift: '<S18>/Shift Arithmetic5'
       *  ArithShift: '<S18>/Shift Arithmetic9'
       *  Constant: '<S18>/Constant_R_CONFIRMATION_CENTRAL_X_ACC_THR'
       *  Constant: '<S18>/Constant_R_CONFIRMATION_CENTRAL_Y_ACC_THR'
       *  Constant: '<S18>/Constant_R_CONFIRMATION_RSU_ACC_THR'
       *  Constant: '<S18>/Constant_R_CONFIRMATION_RSU_X_ACC_THR'
       *  Constant: '<S18>/Constant_R_CONFIRMATION_SECONDARY_X_ACC_THR'
       *  Logic: '<S18>/Logical Operator10'
       *  RelationalOperator: '<S18>/Relational Operator'
       *  RelationalOperator: '<S18>/Relational Operator1'
       *  RelationalOperator: '<S18>/Relational Operator4'
       *  RelationalOperator: '<S18>/Relational Operator5'
       *  RelationalOperator: '<S18>/Relational Operator6'
       *  RelationalOperator: '<S18>/Relational Operator7'
       *  UnitDelay: '<S18>/Unit Delay2'
       */
      OpsReAlg_DWork.RITA_Conf_Bits_Set_Previous = (uint8_T)
        (((((((rtb_UnaryMinus_cf >
               OPSREALG_CALIB_GET_s16R_CONFIRMATION_RSU_X_ACC_THR()) << 1) |
             (rtb_Sum2_c >
              OPSREALG_CALIB_GET_s16R_CONFIRMATION_CENTRAL_X_ACC_THR())) |
            ((Switch_m > OPSREALG_CALIB_GET_s16R_CONFIRMATION_CENTRAL_Y_ACC_THR())
             << 2)) | (((rtb_Central_X_For_SM >
                         OPSREALG_CALIB_GET_s16R_CONFIRMATION_RSU_ACC_THR()) ||
                        (tmp > OPSREALG_CALIB_GET_s16R_CONFIRMATION_RSU_ACC_THR()))
                       << 3)) |
          ((OpsReAlg_B.Average_data_Secondary_X.Signal_Data_averaged >
            OPSREALG_CALIB_GET_s16R_CONFIRMATION_SECONDARY_X_ACC_THR()) << 4)) |
         OpsReAlg_DWork.RITA_Conf_Bits_Set_Previous);

      /* Switch: '<S18>/Switch1' incorporates:
       *  Constant: '<S18>/Constant_R_Select_MAX_RSU_X_or_RSU1_X_Acc_DV1'
       *  Logic: '<S18>/OR'
       */
      if (OPSREALG_CALIB_GET_bR_Select_MAX_RSU_X_or_RSU1_X_Acc_DV()) {
        rtb_FixPtRelationalOperator =
          OpsReAlg_B.Average_QF_RSU1_X.Signal_QF_averaged;
      } else {
        rtb_FixPtRelationalOperator =
          (((OpsReAlg_B.Average_QF_RSU1_X.Signal_QF_averaged) ||
            (OpsReAlg_B.Average_QF_RSU2_X.Signal_QF_averaged)) ||
           (OpsReAlg_B.Average_QF_RSU3_X.Signal_QF_averaged));
      }

      /* End of Switch: '<S18>/Switch1' */

      /* S-Function (sfix_bitop): '<S18>/Bitwise Operator3' incorporates:
       *  ArithShift: '<S18>/Shift Arithmetic2'
       *  ArithShift: '<S18>/Shift Arithmetic3'
       *  ArithShift: '<S18>/Shift Arithmetic4'
       *  ArithShift: '<S18>/Shift Arithmetic6'
       *  DataTypeConversion: '<S18>/Data Type Conversion5'
       *  DataTypeConversion: '<S18>/Data Type Conversion7'
       *  DataTypeConversion: '<S18>/Data Type Conversion8'
       *  Logic: '<S18>/Logical Operator1'
       *  UnitDelay: '<S18>/Unit Delay3'
       */
      OpsReAlg_DWork.RITA_Conf_Bits_Faulty_Previous = (uint8_T)
        (((((rtb_FixPtRelationalOperator << 1) |
            (OpsReAlg_B.Average_QF_Central_Y.Signal_QF_averaged << 2)) |
           (((OpsReAlg_B.Average_QF_Conf_RSU1.Signal_QF_averaged) ||
             (OpsReAlg_B.Average_QF_Conf_RSU2.Signal_QF_averaged)) << 3)) |
          (OpsReAlg_B.Average_QF_Secondary_X.Signal_QF_averaged << 4)) |
         OpsReAlg_DWork.RITA_Conf_Bits_Faulty_Previous);

      /* RelationalOperator: '<S20>/Compare' incorporates:
       *  Constant: '<S18>/Constant_R_CONFIRMATION_MASK1_1'
       *  Constant: '<S20>/Constant'
       *  S-Function (sfix_bitop): '<S18>/FB & L_CONF_MASK1'
       *  UnitDelay: '<S18>/Unit Delay3'
       */
      rtb_AND = ((OpsReAlg_DWork.RITA_Conf_Bits_Faulty_Previous &
                  OPSREALG_CALIB_GET_u8R_CONFIRMATION_MASK1()) != 0);

      /* RelationalOperator: '<S21>/Compare' incorporates:
       *  Constant: '<S21>/Constant'
       *  S-Function (sfix_bitop): '<S18>/CB & X'
       *  UnitDelay: '<S18>/Unit Delay2'
       */
      OpsReAlg_B.R_Primary_Confirmation_Met =
        ((OpsReAlg_DWork.RITA_Conf_Bits_Set_Previous & 1U) != 0U);

      /* Logic: '<S18>/Logical Operator4' incorporates:
       *  Constant: '<S18>/Constant_R_CONFIRMATION_MASK1'
       *  Constant: '<S18>/Constant_R_CONFIRMATION_MASK2'
       *  Constant: '<S18>/Constant_R_CONFIRMATION_MASK2_1'
       *  Constant: '<S18>/Constant_R_CONFIRMATION_MASK3'
       *  Constant: '<S22>/Constant'
       *  Constant: '<S23>/Constant'
       *  Constant: '<S24>/Constant'
       *  Constant: '<S25>/Constant'
       *  Logic: '<S18>/Logical Operator6'
       *  Logic: '<S18>/Logical Operator7'
       *  RelationalOperator: '<S22>/Compare'
       *  RelationalOperator: '<S23>/Compare'
       *  RelationalOperator: '<S24>/Compare'
       *  RelationalOperator: '<S25>/Compare'
       *  S-Function (sfix_bitop): '<S18>/CB & L_CONF_MASK1'
       *  S-Function (sfix_bitop): '<S18>/CB & L_CONF_MASK2'
       *  S-Function (sfix_bitop): '<S18>/FB & L_CONF_MASK2n1'
       *  S-Function (sfix_bitop): '<S18>/FB & L_CONF_MASK2n2'
       *  UnitDelay: '<S18>/Unit Delay2'
       *  UnitDelay: '<S18>/Unit Delay3'
       */
      OpsReAlg_B.R_Secondary_Confirmation_Met =
        ((((OpsReAlg_DWork.RITA_Conf_Bits_Set_Previous &
            OPSREALG_CALIB_GET_u8R_CONFIRMATION_MASK1()) != 0) ||
          (((OpsReAlg_DWork.RITA_Conf_Bits_Set_Previous &
             OPSREALG_CALIB_GET_u8R_CONFIRMATION_MASK2()) != 0) && rtb_AND)) ||
         ((rtb_AND && ((OpsReAlg_DWork.RITA_Conf_Bits_Faulty_Previous &
                        OPSREALG_CALIB_GET_u8R_CONFIRMATION_MASK2()) != 0)) &&
          ((OpsReAlg_DWork.RITA_Conf_Bits_Set_Previous &
            OPSREALG_CALIB_GET_u8R_CONFIRMATION_MASK3()) != 0)));

      /* Logic: '<S18>/Logical Operator5' */
      OpsReAlg_B.R_Confirmation_Met = ((OpsReAlg_B.R_Primary_Confirmation_Met) &&
        (OpsReAlg_B.R_Secondary_Confirmation_Met));

      /* Chart: '<S31>/Compute_and_Compare_CentX_Acc_Thresholds' incorporates:
       *  Constant: '<S31>/Constant_R_CentX_Acc_Latch_Time_Thr'
       *  Constant: '<S31>/Constant_R_CentX_Acc_PassThru_bitword'
       *  Constant: '<S31>/Constant_R_CentX_Acc_Thr_bitword'
       *  Constant: '<S31>/Constant_R_CentX_Acc_Window_Thr'
       *  DataTypeConversion: '<S31>/Data Type Conversion1'
       */
      /* Gateway: Compute_and_Compare_Acc_Thresholds */
      /* During: Compute_and_Compare_Acc_Thresholds */
      if (OpsReAlg_DWork.is_active_c10_s4RB7X9Aqy8tjIx8lwkkzWC_RITA2_Library ==
          0U) {
        /* Entry: Compute_and_Compare_Acc_Thresholds */
        OpsReAlg_DWork.is_active_c10_s4RB7X9Aqy8tjIx8lwkkzWC_RITA2_Library = 1U;

        /* Entry Internal: Compute_and_Compare_Acc_Thresholds */
        /* Transition: '<S39>:101' */
        /* Entry 'Init': '<S39>:61' */
        rtb_Sum2_c = (sint32)(OpsReAlg_B.RITA_Threshold_Class + 1U);
        if ((OpsReAlg_B.RITA_Threshold_Class + 1U) > 255U) {
          rtb_Sum2_c = 255;
        }

        rtb_Sum2_c = ((rtb_Sum2_c - 1) << 2);
        OpsReAlg_B.s16O_Acc_Threshold_a[0] =
          OPSREALG_CALIB_GET_R_CentX_Acc_Thr_ThrClass( (rtb_Sum2_c) );
        OpsReAlg_B.s16O_Acc_Threshold_a[1] =
          OPSREALG_CALIB_GET_R_CentX_Acc_Thr_ThrClass( rtb_Sum2_c + 1 );
        OpsReAlg_B.s16O_Acc_Threshold_a[2] =
          OPSREALG_CALIB_GET_R_CentX_Acc_Thr_ThrClass( rtb_Sum2_c + 2 );
        OpsReAlg_B.s16O_Acc_Threshold_a[3] =
          OPSREALG_CALIB_GET_R_CentX_Acc_Thr_ThrClass( rtb_Sum2_c + 3 );

        /* Select the right Threshold_Class in the Acc_Threshold Vector */
      } else {
        /* During 'Init': '<S39>:61' */
        /* Transition: '<S39>:97' */
        /* Transition: '<S39>:6' */
        OpsReAlg_B.u8O_Acc_Sev_Word_h =
          OPSREALG_CALIB_GET_u8R_CentX_Acc_PassThru_bitword();

        /* For first level not needing to meet a Thr */
        /* Threshold 1 */
        for (rtPrevAction = 1; rtPrevAction < 5; rtPrevAction++) {
          /* Transition: '<S39>:35' */
          if ((OpsReAlg_B.RITA_TIME < OPSREALG_CALIB_GET_R_CentX_Acc_Window_Thr(
                rtPrevAction - 1 )) && (rtb_Sum2_c >
               OpsReAlg_B.s16O_Acc_Threshold_a[rtPrevAction - 1])) {
            /* Transition: '<S39>:85' */
            /* If Acc Threshold is met inside the window */
            /* Transition: '<S39>:86' */
            /* Set latch counter to its parameter value and apply corresponding Severity */
            OpsReAlg_DWork.u8Acc_Latch_Counter_m[rtPrevAction - 1] =
              OPSREALG_CALIB_GET_R_CentX_Acc_Latch_Time_Thr( rtPrevAction - 1 );
            OpsReAlg_B.u8O_Acc_Sev_Word_h |=
              OPSREALG_CALIB_GET_R_CentX_Acc_Thr_bitword( rtPrevAction - 1 );

            /* Transition: '<S39>:151' */
            /* Transition: '<S39>:122' */
          } else {
            /* Transition: '<S39>:108' */
            if (OpsReAlg_DWork.u8Acc_Latch_Counter_m[rtPrevAction - 1] != 0) {
              /* Transition: '<S39>:110' */
              /* If threshold has been met and latch counter ~= 0 */
              /* Transition: '<S39>:117' */
              /* Decrease counter and latch the Severity */
              rtb_Switch_n = OpsReAlg_DWork.u8Acc_Latch_Counter_m[rtPrevAction -
                1];
              qY = rtb_Switch_n - 1U;
              if ((rtb_Switch_n - 1U) > ((uint32)rtb_Switch_n)) {
                qY = 0U;
              }

              OpsReAlg_DWork.u8Acc_Latch_Counter_m[rtPrevAction - 1] = (uint8_T)
                qY;
              OpsReAlg_B.u8O_Acc_Sev_Word_h |=
                OPSREALG_CALIB_GET_R_CentX_Acc_Thr_bitword( rtPrevAction - 1 );

              /* Transition: '<S39>:122' */
            } else {
              /* Transition: '<S39>:87' */
            }
          }

          /* Transition: '<S39>:46' */
        }

        /* Transition: '<S39>:27' */
      }

      /* Chart: '<S32>/Compute_and_Compare_DV_Thresholds' incorporates:
       *  Constant: '<S32>/Constant_R_CentX_DV_PassThru_bitword'
       *  Constant: '<S32>/Constant_R_CentX_DV_Thr_bitword'
       *  Constant: '<S32>/Constant_R_CentX_DV_Window_Thr'
       *  DataTypeConversion: '<S32>/Data Type Conversion1'
       */
      /* Gateway: Compute_and_Compare_DV_Thresholds */
      /* During: Compute_and_Compare_DV_Thresholds */
      if (OpsReAlg_DWork.is_active_c1_sIgR1AQg4K4xYCVrLLdVCgD_RITA2_Library ==
          0U) {
        /* Entry: Compute_and_Compare_DV_Thresholds */
        OpsReAlg_DWork.is_active_c1_sIgR1AQg4K4xYCVrLLdVCgD_RITA2_Library = 1U;

        /* Entry Internal: Compute_and_Compare_DV_Thresholds */
        /* Transition: '<S40>:101' */
        /* Entry 'Init': '<S40>:61' */
        rtb_Sum2_c = (sint32)(OpsReAlg_B.RITA_Threshold_Class + 1U);
        if ((OpsReAlg_B.RITA_Threshold_Class + 1U) > 255U) {
          rtb_Sum2_c = 255;
        }

        rtb_Sum2_c = ((rtb_Sum2_c - 1) << 2);
        OpsReAlg_B.s32O_DV_Threshold_k[0] =
          OPSREALG_CALIB_GET_R_CentX_DV_Thr_ThrClass( (rtb_Sum2_c) );
        OpsReAlg_B.s32O_DV_Threshold_k[1] =
          OPSREALG_CALIB_GET_R_CentX_DV_Thr_ThrClass( rtb_Sum2_c + 1 );
        OpsReAlg_B.s32O_DV_Threshold_k[2] =
          OPSREALG_CALIB_GET_R_CentX_DV_Thr_ThrClass( rtb_Sum2_c + 2 );
        OpsReAlg_B.s32O_DV_Threshold_k[3] =
          OPSREALG_CALIB_GET_R_CentX_DV_Thr_ThrClass( rtb_Sum2_c + 3 );

        /* Select the right Threshold_Class in the DV_Threshold Vector */
      } else {
        /* During 'Init': '<S40>:61' */
        /* Transition: '<S40>:97' */
        /* Transition: '<S40>:6' */
        OpsReAlg_B.u8O_DV_Sev_Word_o =
          OPSREALG_CALIB_GET_u8R_CentX_DV_PassThru_bitword();

        /* For first level not needing to meet a Thr */
        /* Threshold 1 */
        for (rtPrevAction = 1; rtPrevAction < 5; rtPrevAction++) {
          /* Transition: '<S40>:35' */
          if ((OpsReAlg_B.RITA_TIME < OPSREALG_CALIB_GET_R_CentX_DV_Window_Thr
               ( rtPrevAction - 1 )) && (OpsReAlg_B.R_SM_W_Measures.CentX_DV >
               OpsReAlg_B.s32O_DV_Threshold_k[rtPrevAction - 1])) {
            /* Transition: '<S40>:85' */
            /* If DV Threshold is met inside the window */
            /* Transition: '<S40>:86' */
            /* Set internal variable to true and apply corresponding Severity */
            OpsReAlg_DWork.bDV_Latch_Sev_j[rtPrevAction - 1] = true;
            OpsReAlg_B.u8O_DV_Sev_Word_o |=
              OPSREALG_CALIB_GET_R_CentX_DV_Thr_bitword( rtPrevAction - 1 );

            /* Transition: '<S40>:151' */
            /* Transition: '<S40>:122' */
          } else {
            /* Transition: '<S40>:108' */
            if (OpsReAlg_B.R_SM_W_Measures.CentX_DV >
                OpsReAlg_B.s32O_DV_Threshold_k[rtPrevAction - 1]) {
              if (OpsReAlg_DWork.bDV_Latch_Sev_j[rtPrevAction - 1]) {
                /* Transition: '<S40>:110' */
                /* If threshold has been met and signal is still above it */
                /* Transition: '<S40>:117' */
                /* Latch the Severity */
                OpsReAlg_B.u8O_DV_Sev_Word_o |=
                  OPSREALG_CALIB_GET_R_CentX_DV_Thr_bitword( rtPrevAction - 1 );

                /* Transition: '<S40>:122' */
              } else {
                /* Transition: '<S40>:87' */
                /* Reset internal variable */
                OpsReAlg_DWork.bDV_Latch_Sev_j[rtPrevAction - 1] = false;
              }
            } else {
              /* Transition: '<S40>:87' */
              /* Reset internal variable */
              OpsReAlg_DWork.bDV_Latch_Sev_j[rtPrevAction - 1] = false;
            }
          }

          /* Transition: '<S40>:46' */
        }

        /* Transition: '<S40>:27' */
      }

      /* End of Chart: '<S32>/Compute_and_Compare_DV_Thresholds' */

      /* If: '<S17>/If' incorporates:
       *  DataStoreRead: '<S17>/Data Store Read'
       */
      rtPrevAction = OpsReAlg_DWork.If_ActiveSubsystem_m;
      OpsReAlg_DWork.If_ActiveSubsystem_m = (sint8)(RITA_LGT_RSU_NB != 0);
      if (OpsReAlg_DWork.If_ActiveSubsystem_m == 0) {
        /* Outputs for IfAction SubSystem: '<S17>/No_RSU_X' incorporates:
         *  ActionPort: '<S35>/Action Port'
         */
        /* SignalConversion generated from: '<S35>/O_RSU_X_Acc_DV_Sev_Word' incorporates:
         *  Constant: '<S35>/Constant_255'
         */
        u8Index = MAX_uint8_T;

        /* End of Outputs for SubSystem: '<S17>/No_RSU_X' */
      } else {
        if (1 != rtPrevAction) {
          /* SystemReset for IfAction SubSystem: '<S17>/RSU_X' incorporates:
           *  ActionPort: '<S36>/Action Port'
           */
          /* SystemReset for If: '<S17>/If' incorporates:
           *  Chart: '<S43>/Compute_and_Compare_RSU_X_Acc_Thresholds'
           *  Chart: '<S44>/Compute_and_Compare_DV_Thresholds'
           */
          OpsReAlg_DWork.is_active_c10_sjH5I7zc0k4eS8DuUVkYY2F_RITA2_Library =
            0U;
          OpsReAlg_B.u8O_Acc_Sev_Word = 0U;
          OpsReAlg_DWork.is_active_c1_svx8wKBNq2ajYnUJxivWXNF_RITA2_Library = 0U;
          OpsReAlg_B.u8O_DV_Sev_Word = 0U;
          StdUtl_MemSet(&OpsReAlg_DWork.u8Acc_Latch_Counter[0], 0, (sizeof
            (uint8_T)) << 1U);
          StdUtl_MemSet(&OpsReAlg_B.s16O_Acc_Threshold[0], 0, (sizeof(sint16)) <<
                        1U);
          StdUtl_MemSet(&OpsReAlg_DWork.bDV_Latch_Sev[0], 0, (sizeof(boolean_T))
                        << 1U);
          StdUtl_MemSet(&OpsReAlg_B.s32O_DV_Threshold[0], 0, (sizeof(sint32)) <<
                        1U);

          /* End of SystemReset for SubSystem: '<S17>/RSU_X' */
        }

        /* Outputs for IfAction SubSystem: '<S17>/RSU_X' incorporates:
         *  ActionPort: '<S36>/Action Port'
         */
        /* Switch: '<S43>/Switch' incorporates:
         *  Constant: '<S43>/Constant_R_Select_MAX_RSU_X_or_RSU1_X_Acc_DV'
         */
        if (OPSREALG_CALIB_GET_bR_Select_MAX_RSU_X_or_RSU1_X_Acc_DV()) {
          /* Switch: '<S43>/Switch' incorporates:
           *  Constant: '<S43>/Constant_R_CONFIG_RSU1_X_ACC_MAP'
           *  Selector: '<S43>/Selector2'
           */
          Switch_m = OpsReAlg_B.RITA_Signals_Filtered[R_CONFIG_RSU1_X_ACC_MAP];
        } else {
          /* Switch: '<S43>/Switch' incorporates:
           *  Constant: '<S43>/Constant_R_CONFIG_MAX_RSU_X_ACC_MAP'
           *  Selector: '<S43>/Selector1'
           */
          Switch_m = OpsReAlg_B.RITA_Signals_Filtered[R_CONFIG_MAX_RSU_X_ACC_MAP];
        }

        /* End of Switch: '<S43>/Switch' */

        /* Chart: '<S43>/Compute_and_Compare_RSU_X_Acc_Thresholds' incorporates:
         *  Constant: '<S43>/Constant_R_RSU_X_Acc_Latch_Time_Thr'
         *  Constant: '<S43>/Constant_R_RSU_X_Acc_PassThru_bitword'
         *  Constant: '<S43>/Constant_R_RSU_X_Acc_Thr_bitword'
         *  Constant: '<S43>/Constant_R_RSU_X_Acc_Window_Thr'
         *  DataTypeConversion: '<S43>/Data Type Conversion1'
         */
        /* Gateway: Compute_and_Compare_Acc_Thresholds */
        /* During: Compute_and_Compare_Acc_Thresholds */
        if (OpsReAlg_DWork.is_active_c10_sjH5I7zc0k4eS8DuUVkYY2F_RITA2_Library ==
            0U) {
          /* Entry: Compute_and_Compare_Acc_Thresholds */
          OpsReAlg_DWork.is_active_c10_sjH5I7zc0k4eS8DuUVkYY2F_RITA2_Library =
            1U;

          /* Entry Internal: Compute_and_Compare_Acc_Thresholds */
          /* Transition: '<S45>:101' */
          /* Entry 'Init': '<S45>:61' */
          rtb_Sum2_c = (sint32)(OpsReAlg_B.RITA_Threshold_Class + 1U);
          if ((OpsReAlg_B.RITA_Threshold_Class + 1U) > 255U) {
            rtb_Sum2_c = 255;
          }

          rtb_Sum2_c = ((rtb_Sum2_c - 1) << 1);
          OpsReAlg_B.s16O_Acc_Threshold[0] =
            OPSREALG_CALIB_GET_R_RSU_X_Acc_Thr_ThrClass( (rtb_Sum2_c) );
          OpsReAlg_B.s16O_Acc_Threshold[1] =
            OPSREALG_CALIB_GET_R_RSU_X_Acc_Thr_ThrClass( rtb_Sum2_c + 1 );

          /* Select the right Threshold_Class in the Acc_Threshold Vector */
        } else {
          /* During 'Init': '<S45>:61' */
          /* Transition: '<S45>:97' */
          /* Transition: '<S45>:6' */
          OpsReAlg_B.u8O_Acc_Sev_Word =
            OPSREALG_CALIB_GET_u8R_RSU_X_Acc_PassThru_bitword();

          /* For first level not needing to meet a Thr */
          /* Threshold 1 */
          for (rtPrevAction = 1; rtPrevAction < 3; rtPrevAction++) {
            /* Transition: '<S45>:35' */
            if ((OpsReAlg_B.RITA_TIME <
                 OPSREALG_CALIB_GET_R_RSU_X_Acc_Window_Thr( rtPrevAction - 1 )) &&
                (Switch_m > OpsReAlg_B.s16O_Acc_Threshold[rtPrevAction - 1])) {
              /* Transition: '<S45>:85' */
              /* If Acc Threshold is met inside the window */
              /* Transition: '<S45>:86' */
              /* Set latch counter to its parameter value and apply corresponding Severity */
              OpsReAlg_DWork.u8Acc_Latch_Counter[rtPrevAction - 1] =
                OPSREALG_CALIB_GET_R_RSU_X_Acc_Latch_Time_Thr( rtPrevAction - 1 );
              OpsReAlg_B.u8O_Acc_Sev_Word |=
                OPSREALG_CALIB_GET_R_RSU_X_Acc_Thr_bitword( rtPrevAction - 1 );

              /* Transition: '<S45>:151' */
              /* Transition: '<S45>:122' */
            } else {
              /* Transition: '<S45>:108' */
              if (OpsReAlg_DWork.u8Acc_Latch_Counter[rtPrevAction - 1] != 0) {
                /* Transition: '<S45>:110' */
                /* If threshold has been met and latch counter ~= 0 */
                /* Transition: '<S45>:117' */
                /* Decrease counter and latch the Severity */
                rtb_Switch_n = OpsReAlg_DWork.u8Acc_Latch_Counter[rtPrevAction -
                  1];
                qY = rtb_Switch_n - 1U;
                if ((rtb_Switch_n - 1U) > ((uint32)rtb_Switch_n)) {
                  qY = 0U;
                }

                OpsReAlg_DWork.u8Acc_Latch_Counter[rtPrevAction - 1] = (uint8_T)
                  qY;
                OpsReAlg_B.u8O_Acc_Sev_Word |=
                  OPSREALG_CALIB_GET_R_RSU_X_Acc_Thr_bitword( rtPrevAction - 1 );

                /* Transition: '<S45>:122' */
              } else {
                /* Transition: '<S45>:87' */
              }
            }

            /* Transition: '<S45>:46' */
          }

          /* Transition: '<S45>:27' */
        }

        /* End of Chart: '<S43>/Compute_and_Compare_RSU_X_Acc_Thresholds' */

        /* Switch: '<S44>/Switch' incorporates:
         *  Constant: '<S44>/Constant_R_Select_MAX_RSU_X_or_RSU1_X_Acc_DV'
         */
        if (OPSREALG_CALIB_GET_bR_Select_MAX_RSU_X_or_RSU1_X_Acc_DV()) {
          /* Switch: '<S44>/Switch' */
          rtb_Sum2_c = OpsReAlg_B.R_RSU1_X_DV;
        } else {
          /* Switch: '<S44>/Switch' */
          rtb_Sum2_c = OpsReAlg_B.R_Max_RSU_X_DV;
        }

        /* End of Switch: '<S44>/Switch' */

        /* Chart: '<S44>/Compute_and_Compare_DV_Thresholds' incorporates:
         *  Constant: '<S44>/Constant_R_RSU_X_DV_PassThru_bitword'
         *  Constant: '<S44>/Constant_R_RSU_X_DV_Thr_bitword'
         *  Constant: '<S44>/Constant_R_RSU_X_DV_Window_Thr'
         *  DataTypeConversion: '<S44>/Data Type Conversion1'
         */
        /* Gateway: Compute_and_Compare_DV_Thresholds */
        /* During: Compute_and_Compare_DV_Thresholds */
        if (OpsReAlg_DWork.is_active_c1_svx8wKBNq2ajYnUJxivWXNF_RITA2_Library ==
            0U) {
          /* Entry: Compute_and_Compare_DV_Thresholds */
          OpsReAlg_DWork.is_active_c1_svx8wKBNq2ajYnUJxivWXNF_RITA2_Library = 1U;

          /* Entry Internal: Compute_and_Compare_DV_Thresholds */
          /* Transition: '<S46>:101' */
          /* Entry 'Init': '<S46>:61' */
          rtb_Sum2_c = (sint32)(OpsReAlg_B.RITA_Threshold_Class + 1U);
          if ((OpsReAlg_B.RITA_Threshold_Class + 1U) > 255U) {
            rtb_Sum2_c = 255;
          }

          rtb_Sum2_c = ((rtb_Sum2_c - 1) << 1);
          OpsReAlg_B.s32O_DV_Threshold[0] =
            OPSREALG_CALIB_GET_R_RSU_X_DV_Thr_ThrClass( (rtb_Sum2_c) );
          OpsReAlg_B.s32O_DV_Threshold[1] =
            OPSREALG_CALIB_GET_R_RSU_X_DV_Thr_ThrClass( rtb_Sum2_c + 1 );

          /* Select the right Threshold_Class in the DV_Threshold Vector */
        } else {
          /* During 'Init': '<S46>:61' */
          /* Transition: '<S46>:97' */
          /* Transition: '<S46>:6' */
          OpsReAlg_B.u8O_DV_Sev_Word =
            OPSREALG_CALIB_GET_u8R_RSU_X_DV_PassThru_bitword();

          /* For first level not needing to meet a Thr */
          /* Threshold 1 */
          for (rtPrevAction = 1; rtPrevAction < 3; rtPrevAction++) {
            /* Transition: '<S46>:35' */
            if ((OpsReAlg_B.RITA_TIME < OPSREALG_CALIB_GET_R_RSU_X_DV_Window_Thr
                 ( rtPrevAction - 1 )) && (rtb_Sum2_c >
                 OpsReAlg_B.s32O_DV_Threshold[rtPrevAction - 1])) {
              /* Transition: '<S46>:85' */
              /* If DV Threshold is met inside the window */
              /* Transition: '<S46>:86' */
              /* Set internal variable to true and apply corresponding Severity */
              OpsReAlg_DWork.bDV_Latch_Sev[rtPrevAction - 1] = true;
              OpsReAlg_B.u8O_DV_Sev_Word |=
                OPSREALG_CALIB_GET_R_RSU_X_DV_Thr_bitword( rtPrevAction - 1 );

              /* Transition: '<S46>:151' */
              /* Transition: '<S46>:122' */
            } else {
              /* Transition: '<S46>:108' */
              if (rtb_Sum2_c > OpsReAlg_B.s32O_DV_Threshold[rtPrevAction - 1]) {
                if (OpsReAlg_DWork.bDV_Latch_Sev[rtPrevAction - 1]) {
                  /* Transition: '<S46>:110' */
                  /* If threshold has been met and signal is still above it */
                  /* Transition: '<S46>:117' */
                  /* Latch the Severity */
                  OpsReAlg_B.u8O_DV_Sev_Word |=
                    OPSREALG_CALIB_GET_R_RSU_X_DV_Thr_bitword( rtPrevAction - 1 );

                  /* Transition: '<S46>:122' */
                } else {
                  /* Transition: '<S46>:87' */
                  /* Reset internal variable */
                  OpsReAlg_DWork.bDV_Latch_Sev[rtPrevAction - 1] = false;
                }
              } else {
                /* Transition: '<S46>:87' */
                /* Reset internal variable */
                OpsReAlg_DWork.bDV_Latch_Sev[rtPrevAction - 1] = false;
              }
            }

            /* Transition: '<S46>:46' */
          }

          /* Transition: '<S46>:27' */
        }

        /* End of Chart: '<S44>/Compute_and_Compare_DV_Thresholds' */

        /* Switch: '<S36>/Switch' incorporates:
         *  Constant: '<S36>/Constant_R_Select_MAX_RSU_X_or_RSU1_X_Acc_DV'
         */
        if (OPSREALG_CALIB_GET_bR_Select_MAX_RSU_X_or_RSU1_X_Acc_DV()) {
          rtb_FixPtRelationalOperator = OpsReAlg_B.RSU1_X_Failure_Latched;
        } else {
          rtb_FixPtRelationalOperator = OpsReAlg_B.RSUs_X_Failure_Latched;
        }

        /* End of Switch: '<S36>/Switch' */

        /* Switch: '<S36>/Switch2' incorporates:
         *  Constant: '<S36>/Constant_R_Allowed_path_in_backup_bitword'
         *  Constant: '<S36>/Constant_R_Backup_path_bitword'
         *  S-Function (sfix_bitop): '<S36>/Bitwise AND'
         *  S-Function (sfix_bitop): '<S36>/Bitwise AND1'
         *  S-Function (sfix_bitop): '<S36>/Bitwise AND2'
         */
        if (rtb_FixPtRelationalOperator) {
          u8Index = (uint8_T)(((OpsReAlg_B.u8O_Acc_Sev_Word &
                                OpsReAlg_B.u8O_DV_Sev_Word) &
                               OPSREALG_CALIB_GET_u8R_Allowed_path_in_backup_bitword
                               ()) | OPSREALG_CALIB_GET_u8R_Backup_path_bitword());
        } else {
          u8Index = (uint8_T)(OpsReAlg_B.u8O_Acc_Sev_Word &
                              OpsReAlg_B.u8O_DV_Sev_Word);
        }

        /* End of Switch: '<S36>/Switch2' */
        /* End of Outputs for SubSystem: '<S17>/RSU_X' */
      }

      /* End of If: '<S17>/If' */

      /* S-Function (sfix_bitop): '<S17>/Bitwise AND' */
      OpsReAlg_B.R_Sev_Word_AccDV = (uint8_T)((OpsReAlg_B.u8O_Acc_Sev_Word_h &
        OpsReAlg_B.u8O_DV_Sev_Word_o) & u8Index);

      /* SignalConversion generated from: '<S42>/ SFunction ' incorporates:
       *  Chart: '<S34>/Intrusion_Rotation_Criteria_Module'
       *  Constant: '<S34>/Constant_0'
       */
      rtb_TmpSignalConversionAtSFunctionInport1[0] = false;
      rtb_TmpSignalConversionAtSFunctionInport1[1] =
        OpsReAlg_B.RSU1_X_Failure_Latched;
      rtb_TmpSignalConversionAtSFunctionInport1[2] =
        OpsReAlg_B.RSU2_X_Failure_Latched;
      rtb_TmpSignalConversionAtSFunctionInport1[3] =
        OpsReAlg_B.RSU3_X_Failure_Latched;
      rtb_TmpSignalConversionAtSFunctionInport1[4] =
        OpsReAlg_B.RSUs_X_Failure_Latched;
      rtb_TmpSignalConversionAtSFunctionInport1[5] =
        OpsReAlg_B.RSUs_X_Failure_Latched;

      /* SignalConversion generated from: '<S42>/ SFunction ' incorporates:
       *  Chart: '<S34>/Intrusion_Rotation_Criteria_Module'
       */
      rtb_TmpSignalConversionAtSFunctionInport10[0] =
        OpsReAlg_B.R_SM_W_Measures.CentX_DV;
      rtb_TmpSignalConversionAtSFunctionInport10[1] = OpsReAlg_B.R_RSU1_X_DV;
      rtb_TmpSignalConversionAtSFunctionInport10[2] = OpsReAlg_B.R_RSU2_X_DV;
      rtb_TmpSignalConversionAtSFunctionInport10[3] = OpsReAlg_B.R_RSU3_X_DV;
      rtb_TmpSignalConversionAtSFunctionInport10[4] = OpsReAlg_B.R_Min_RSU_X_DV;
      rtb_TmpSignalConversionAtSFunctionInport10[5] = OpsReAlg_B.R_Max_RSU_X_DV;

      /* Chart: '<S34>/Intrusion_Rotation_Criteria_Module' incorporates:
       *  Constant: '<S34>/Constant_R_IRC_SEVERITY_0'
       *  Constant: '<S34>/Constant_R_IRC_SEVERITY_1'
       *  Constant: '<S34>/Constant_R_IRC_SEVERITY_2'
       *  Constant: '<S34>/Constant_R_IRC_STOPSENSOR_THR'
       *  Constant: '<S34>/Constant_R_IRC_THR'
       *  Constant: '<S34>/Constant_R_IRC_TYPE'
       *  DataStoreRead: '<S34>/Data Store Read1'
       */
      /* Gateway: OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/Intrusion_Rotation_Criteria/Intrusion_Rotation_Criteria_Module */
      /* During: OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/Intrusion_Rotation_Criteria/Intrusion_Rotation_Criteria_Module */
      if (OpsReAlg_DWork.is_active_c18_OpsReAlg == 0U) {
        /* Entry: OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/Intrusion_Rotation_Criteria/Intrusion_Rotation_Criteria_Module */
        OpsReAlg_DWork.is_active_c18_OpsReAlg = 1U;

        /* Entry Internal: OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/Intrusion_Rotation_Criteria/Intrusion_Rotation_Criteria_Module */
        /* Transition: '<S42>:79' */
        /* Entry 'init': '<S42>:78' */
        OpsReAlg_B.R_Sev_Word_AccDV_IRC = 0U;
        StdUtl_MemSet(&OpsReAlg_DWork.u8StopSensor_Condition[0], 1, (sizeof
          (uint8_T)) << 1U);
        StdUtl_MemSet(&OpsReAlg_B.s32O_RITA_IRC_Final[0], 0, (sizeof(sint32)) <<
                      1U);
        StdUtl_MemSet(&OpsReAlg_B.R_IRC_Met[0], 0, (sizeof(uint8_T)) << 1U);
      } else {
        /* During 'init': '<S42>:78' */
        /* Transition: '<S42>:63' */
        /* Transition: '<S42>:66' */
        u8Index = 1U;
        OpsReAlg_B.R_Sev_Word_AccDV_IRC = OpsReAlg_B.R_Sev_Word_AccDV;
        while (u8Index <= RITA_INTRUSION_ROTATION_CRITERIA_NB) {
          /* Transition: '<S42>:64' */
          /* Transition: '<S42>:65' */
          rtb_Sum2_c = (u8Index - 1) * 3;
          rtb_Switch_n = RITA_INTRUSION_ROTATION_CRITERIA_CONFIG[rtb_Sum2_c] - 1;
          q1 = RITA_INTRUSION_ROTATION_CRITERIA_CONFIG[rtb_Sum2_c + 1] - 1;
          if ((!rtb_TmpSignalConversionAtSFunctionInport1[rtb_Switch_n]) &&
              (!rtb_TmpSignalConversionAtSFunctionInport1[q1])) {
            tmp_2 = RITA_IRC_INDEX_CONFIG[u8Index - 1] - 1;
            if (OpsReAlg_B.R_IRC_Met[tmp_2] == 0) {
              /* Transition: '<S42>:74' */
              /* Transition: '<S42>:13' */
              if (rtb_TmpSignalConversionAtSFunctionInport10[RITA_INTRUSION_ROTATION_CRITERIA_CONFIG
                  [rtb_Sum2_c + 2] - 1] >
                  OPSREALG_CALIB_GET_R_IRC_STOPSENSOR_THR( (tmp_2) )) {
                /* Transition: '<S42>:14' */
                /* Transition: '<S42>:16' */
                OpsReAlg_DWork.u8StopSensor_Condition[tmp_2] = 0U;

                /* Transition: '<S42>:17' */
              } else {
                /* Transition: '<S42>:15' */
              }

              /* Transition: '<S42>:18' */
              rtb_Sum2_c = OpsReAlg_DWork.u8StopSensor_Condition[tmp_2];
              if (rtb_Sum2_c != 0) {
                /* Transition: '<S42>:32' */
                /* Transition: '<S42>:27' */
                if (OPSREALG_CALIB_GET_R_IRC_TYPE( (tmp_2) ) != 0) {
                  /* Transition: '<S42>:47' */
                  /* Transition: '<S42>:48' */
                  OpsReAlg_B.s32O_RITA_IRC_Final[tmp_2] =
                    OpsReAlg_B.RITA_Signals_Filtered[rtb_Switch_n] -
                    OpsReAlg_B.RITA_Signals_Filtered[q1];

                  /* Transition: '<S42>:50' */
                } else {
                  /* Transition: '<S42>:51' */
                  rtb_Switch_n =
                    rtb_TmpSignalConversionAtSFunctionInport10[rtb_Switch_n];
                  q1 = rtb_TmpSignalConversionAtSFunctionInport10[q1];
                  if ((rtb_Switch_n >= 0) && (q1 < (rtb_Switch_n - MAX_int32_T)))
                  {
                    OpsReAlg_B.s32O_RITA_IRC_Final[tmp_2] = MAX_int32_T;
                  } else if ((rtb_Switch_n < 0) && (q1 > (rtb_Switch_n -
                               MIN_int32_T))) {
                    OpsReAlg_B.s32O_RITA_IRC_Final[tmp_2] = MIN_int32_T;
                  } else {
                    OpsReAlg_B.s32O_RITA_IRC_Final[tmp_2] = rtb_Switch_n - q1;
                  }
                }

                /* Transition: '<S42>:52' */
              } else {
                /* Transition: '<S42>:33' */
                /* Transition: '<S42>:26' */
              }

              /* Transition: '<S42>:61' */
              if (OpsReAlg_B.s32O_RITA_IRC_Final[tmp_2] >
                  OPSREALG_CALIB_GET_R_IRC_THR( (tmp_2) )) {
                /* Transition: '<S42>:54' */
                /* Transition: '<S42>:55' */
                /* Threshold met before stop (severity 1) */
                OpsReAlg_B.R_IRC_Met[tmp_2] = 1U;

                /* Transition: '<S42>:57' */
                /* Transition: '<S42>:157' */
              } else {
                /* Transition: '<S42>:152' */
                if (rtb_Sum2_c == 0) {
                  /* Transition: '<S42>:154' */
                  /* Transition: '<S42>:156' */
                  /* Threshold not met before stop (severity 2) */
                  OpsReAlg_B.R_IRC_Met[tmp_2] = 2U;

                  /* Transition: '<S42>:157' */
                } else {
                  /* Transition: '<S42>:60' */
                  /* Threshold and stop not met (PassThru) */
                  OpsReAlg_B.R_IRC_Met[tmp_2] = 0U;
                }
              }

              /* Transition: '<S42>:77' */
            } else {
              /* Transition: '<S42>:76' */
            }
          } else {
            /* Transition: '<S42>:76' */
          }

          /* Transition: '<S42>:129' */
          switch (OpsReAlg_B.R_IRC_Met[RITA_IRC_INDEX_CONFIG[u8Index - 1] - 1])
          {
           case 1:
            /* Transition: '<S42>:135' */
            /* Transition: '<S42>:146' */
            rtb_Sum2_c = RITA_IRC_INDEX_CONFIG[u8Index - 1] - 1;
            OpsReAlg_B.R_Sev_Word_AccDV_IRC = (uint8_T)
              ((OPSREALG_CALIB_GET_R_IRC_PassThru_bitword( (rtb_Sum2_c) ) |
                OPSREALG_CALIB_GET_R_IRC_Severity_1_bitword( (rtb_Sum2_c) )) &
               OpsReAlg_B.R_Sev_Word_AccDV_IRC);

            /* Transition: '<S42>:147' */
            /* Transition: '<S42>:143' */
            break;

           case 2:
            /* Transition: '<S42>:149' */
            /* Transition: '<S42>:139' */
            /* Transition: '<S42>:141' */
            rtb_Sum2_c = RITA_IRC_INDEX_CONFIG[u8Index - 1] - 1;
            OpsReAlg_B.R_Sev_Word_AccDV_IRC = (uint8_T)
              ((OPSREALG_CALIB_GET_R_IRC_PassThru_bitword( (rtb_Sum2_c) ) |
                OPSREALG_CALIB_GET_R_IRC_Severity_2_bitword( (rtb_Sum2_c) )) &
               OpsReAlg_B.R_Sev_Word_AccDV_IRC);

            /* Transition: '<S42>:143' */
            break;

           default:
            /* Transition: '<S42>:144' */
            OpsReAlg_B.R_Sev_Word_AccDV_IRC &=
              OPSREALG_CALIB_GET_R_IRC_PassThru_bitword
              ( RITA_IRC_INDEX_CONFIG[u8Index - 1] - 1 );
            break;
          }

          /* Transition: '<S42>:67' */
          rtb_Sum2_c = (sint32)(u8Index + 1U);
          if ((u8Index + 1U) > 255U) {
            rtb_Sum2_c = 255;
          }

          u8Index = (uint8_T)rtb_Sum2_c;
        }

        /* Transition: '<S42>:68' */
      }

      /* UnitDelay: '<S30>/Unit Delay' */
      rtb_FixPtRelationalOperator = OpsReAlg_DWork.R_Angle_Level1_Previous;

      /* Switch: '<S30>/Switch' incorporates:
       *  Constant: '<S30>/Constant_R_CONFIG_ANGLE_VR'
       *  Inport: '<Root>/I_OpsFrntAlg_AngleAcc_Data'
       */
      if (OPSREALG_CALIB_GET_bR_CONFIG_ANGLE_VR()) {
        Switch_m = OPSCSHMGR_GET_FRNTALG_ANGLE_ACC_CentY_VR_Angle();
      } else {
        Switch_m = OPSCSHMGR_GET_FRNTALG_ANGLE_ACC_CentY_Angle();
      }

      /* End of Switch: '<S30>/Switch' */

      /* Product: '<S30>/Divide2' */
      OpsReAlg_B.Y_Angle_abs = (Switch_m << 14);

      /* Abs: '<S30>/Abs' */
      if (OpsReAlg_B.Y_Angle_abs < 0) {
        /* Product: '<S30>/Divide2' incorporates:
         *  Abs: '<S30>/Abs'
         */
        OpsReAlg_B.Y_Angle_abs = -OpsReAlg_B.Y_Angle_abs;
      }

      /* End of Abs: '<S30>/Abs' */

      /* Switch: '<S30>/Switch1' incorporates:
       *  Constant: '<S30>/Constant_R_CONFIG_ANGLE_VR'
       */
      if (OPSREALG_CALIB_GET_bR_CONFIG_ANGLE_VR()) {
        /* UnaryMinus: '<S30>/Unary Minus' incorporates:
         *  Inport: '<Root>/I_OpsFrntAlg_AngleAcc_Data'
         */
        rtb_UnaryMinus_cf = OPSCSHMGR_GET_FRNTALG_ANGLE_ACC_CentX_VR_Angle();
      } else {
        /* UnaryMinus: '<S30>/Unary Minus' incorporates:
         *  Inport: '<Root>/I_OpsFrntAlg_AngleAcc_Data'
         */
        rtb_UnaryMinus_cf = OPSCSHMGR_GET_FRNTALG_ANGLE_ACC_CentX_Angle();
      }

      /* End of Switch: '<S30>/Switch1' */

      /* UnaryMinus: '<S30>/Unary Minus' */
      rtb_UnaryMinus_cf = (sint16)(-rtb_UnaryMinus_cf);

      /* MinMax: '<S30>/Max' incorporates:
       *  Constant: '<S30>/Constant_R_ANGLE_MIN_DENOMINATOR'
       */
      if (rtb_UnaryMinus_cf > OPSREALG_CALIB_GET_s16R_ANGLE_MIN_DENOMINATOR()) {
        /* MinMax: '<S30>/Max' */
        OpsReAlg_B.X_Angle = rtb_UnaryMinus_cf;
      } else {
        /* MinMax: '<S30>/Max' */
        OpsReAlg_B.X_Angle = OPSREALG_CALIB_GET_s16R_ANGLE_MIN_DENOMINATOR();
      }

      /* End of MinMax: '<S30>/Max' */

      /* Logic: '<S30>/OR' incorporates:
       *  Constant: '<S30>/Constant_R_ANGLE_THR1'
       *  Constant: '<S30>/Constant_R_ANGLE_THR1_WINDOW'
       *  DataTypeConversion: '<S30>/Data Type Conversion1'
       *  Logic: '<S30>/Logical Operator'
       *  Product: '<S30>/Divide'
       *  RelationalOperator: '<S30>/Relational Operator'
       *  RelationalOperator: '<S30>/Relational Operator1'
       *  UnitDelay: '<S30>/Unit Delay'
       */
      OpsReAlg_DWork.R_Angle_Level1_Previous =
        ((OpsReAlg_DWork.R_Angle_Level1_Previous) || ((OpsReAlg_B.RITA_TIME <=
           OPSREALG_CALIB_GET_u32R_ANGLE_THR1_WINDOW()) &&
          (OpsReAlg_B.Y_Angle_abs > (OpsReAlg_B.X_Angle *
            OPSREALG_CALIB_GET_u16R_ANGLE_THR1()))));

      /* Logic: '<S30>/OR1' incorporates:
       *  Constant: '<S30>/Constant_R_ANGLE_THR2'
       *  Constant: '<S30>/Constant_R_ANGLE_THR2_WINDOW'
       *  DataTypeConversion: '<S30>/Data Type Conversion1'
       *  Logic: '<S30>/Logical Operator1'
       *  Product: '<S30>/Divide1'
       *  RelationalOperator: '<S30>/Relational Operator2'
       *  RelationalOperator: '<S30>/Relational Operator3'
       *  UnitDelay: '<S30>/Unit Delay1'
       */
      OpsReAlg_DWork.R_Angle_Level2_Previous = (((OpsReAlg_B.RITA_TIME <=
        OPSREALG_CALIB_GET_u32R_ANGLE_THR2_WINDOW()) && (OpsReAlg_B.Y_Angle_abs >
        (OpsReAlg_B.X_Angle * OPSREALG_CALIB_GET_u16R_ANGLE_THR2()))) ||
        (OpsReAlg_DWork.R_Angle_Level2_Previous));

      /* Switch: '<S37>/Switch5' incorporates:
       *  Constant: '<S37>/Constant_R_ANGLE_2_For_Immunity'
       *  UnitDelay: '<S30>/Unit Delay1'
       */
      OpsReAlg_B.R_Angle_Level2_For_Deployment =
        ((!OPSREALG_CALIB_GET_bR_ANGLE_2_For_Immunity()) &&
         (OpsReAlg_DWork.R_Angle_Level2_Previous));

      /* Switch: '<S30>/Switch2' incorporates:
       *  Constant: '<S30>/Constant_3'
       *  Constant: '<S30>/Constant_R_ANGLE_Thr1_bitword'
       *  UnitDelay: '<S30>/Unit Delay'
       */
      if (OpsReAlg_DWork.R_Angle_Level1_Previous) {
        u8Index = OPSREALG_CALIB_GET_u8R_ANGLE_Thr1_bitword();
      } else {
        u8Index = 0U;
      }

      /* End of Switch: '<S30>/Switch2' */

      /* Switch: '<S30>/Switch3' incorporates:
       *  Constant: '<S30>/Constant_4'
       *  Constant: '<S30>/Constant_R_ANGLE_Thr2_bitword'
       */
      if (OpsReAlg_B.R_Angle_Level2_For_Deployment) {
        tmp_1 = OPSREALG_CALIB_GET_u8R_ANGLE_Thr2_bitword();
      } else {
        tmp_1 = 0U;
      }

      /* End of Switch: '<S30>/Switch3' */

      /* S-Function (sfix_bitop): '<S30>/Bitwise AND1' incorporates:
       *  Constant: '<S30>/Constant_R_ANGLE_PassThru_bitword'
       *  S-Function (sfix_bitop): '<S30>/Bitwise AND'
       */
      OpsReAlg_B.R_Sev_Word_AccDV_IRC_Angle = (uint8_T)(((u8Index | tmp_1) |
        OPSREALG_CALIB_GET_u8R_ANGLE_PassThru_bitword()) &
        OpsReAlg_B.R_Sev_Word_AccDV_IRC);

      /* S-Function (sfix_bitop): '<S33>/Bitwise OR' incorporates:
       *  Constant: '<S33>/Constant_R_SIDE_IMMUNITY_LEFT_ALGO_INDEX'
       *  Constant: '<S33>/Constant_R_SIDE_IMMUNITY_RIGHT_ALGO_INDEX'
       *  Inport: '<Root>/I_OpsAlg_Outputs_SeverityFlags'
       *  Selector: '<S33>/Selector'
       *  Selector: '<S33>/Selector1'
       *  UnitDelay: '<S33>/Unit Delay'
       */
      OpsReAlg_DWork.Side_Severity_Flags = (uint16_T)
        ((OPSCSHMGR_GET_ALGDATA_SEVERITYFLAGS
          ( (OPSREALG_CALIB_GET_u8R_SIDE_IMMUNITY_LEFT_ALGO_INDEX()) ) |
          OPSCSHMGR_GET_ALGDATA_SEVERITYFLAGS
          ( (OPSREALG_CALIB_GET_u8R_SIDE_IMMUNITY_RIGHT_ALGO_INDEX()) )) |
         OpsReAlg_DWork.Side_Severity_Flags);

      /* Switch: '<S37>/Switch7' incorporates:
       *  Constant: '<S37>/Constant_R_ANGLE_2_For_Immunity'
       *  UnitDelay: '<S30>/Unit Delay1'
       */
      OpsReAlg_B.R_Angle_Level2_For_Immunity =
        ((OPSREALG_CALIB_GET_bR_ANGLE_2_For_Immunity()) &&
         (OpsReAlg_DWork.R_Angle_Level2_Previous));

      /* Logic: '<S33>/OR' incorporates:
       *  Constant: '<S33>/Constant_R_SIDE_IMMUNITY_SEV_MASK'
       *  Constant: '<S41>/Constant'
       *  RelationalOperator: '<S41>/Compare'
       *  S-Function (sfix_bitop): '<S33>/Bitwise AND'
       *  UnitDelay: '<S33>/Unit Delay'
       */
      OpsReAlg_B.Side_Immunity_Mode = (((OpsReAlg_DWork.Side_Severity_Flags &
        OPSREALG_CALIB_GET_u16R_SIDE_IMMUNITY_SEV_MASK()) != 0) ||
        (OpsReAlg_B.R_Angle_Level2_For_Immunity));

      /* Switch: '<S33>/Switch' incorporates:
       *  Constant: '<S33>/Constant_R_CROSS_IMMUNITY_bitword_0'
       *  Constant: '<S33>/Constant_R_CROSS_IMMUNITY_bitword_1'
       */
      if (OpsReAlg_B.Side_Immunity_Mode) {
        u8Index = OPSREALG_CALIB_GET_u8R_SIDE_IMMUNITY_bitword_1();
      } else {
        u8Index = OPSREALG_CALIB_GET_u8R_SIDE_IMMUNITY_bitword_0();
      }

      /* End of Switch: '<S33>/Switch' */

      /* S-Function (sfix_bitop): '<S17>/Bitwise AND2' incorporates:
       *  S-Function (sfix_bitop): '<S17>/Bitwise AND1'
       *  UnitDelay: '<S17>/Unit Delay'
       */
      OpsReAlg_DWork.RITA_Sev_Word_Previous = (uint8_T)
        ((OpsReAlg_B.R_Sev_Word_AccDV_IRC_Angle & u8Index) |
         OpsReAlg_DWork.RITA_Sev_Word_Previous);

      /* Outputs for Iterator SubSystem: '<S19>/Check_Decision' */
      /* UnitDelay: '<S17>/Unit Delay' incorporates:
       *  Constant: '<S19>/Constant_R_AH_PROT_REQUEST'
       *  Constant: '<S19>/Constant_R_AH_SEV_OUTPUT'
       */
      OpsReAlg_Check_Decision(OpsReAlg_DWork.RITA_Sev_Word_Previous,
        OPSREALG_CALIB_GET_R_AH_SEV_OUTPUT_ADDR(),
        OPSREALG_CALIB_GET_R_AH_PROT_REQUEST_ADDR(), &OpsReAlg_B.Check_Decision);

      /* End of Outputs for SubSystem: '<S19>/Check_Decision' */

      /* Switch: '<S30>/Switch6' incorporates:
       *  RelationalOperator: '<S30>/Relational Operator4'
       *  UnitDelay: '<S30>/Unit Delay'
       */
      if (((sint32)OpsReAlg_DWork.R_Angle_Level1_Previous) > ((sint32)
           rtb_FixPtRelationalOperator)) {
        /* Switch: '<S30>/Switch4' incorporates:
         *  Constant: '<S30>/Constant_1'
         *  Constant: '<S30>/Constant_2'
         *  Constant: '<S38>/Constant'
         *  RelationalOperator: '<S38>/Compare'
         *  UnitDelay: '<S30>/Unit Delay2'
         */
        if (Switch_m > 0) {
          OpsReAlg_DWork.R_Rotation_Direction_Previous = 1U;
        } else {
          OpsReAlg_DWork.R_Rotation_Direction_Previous = 2U;
        }

        /* End of Switch: '<S30>/Switch4' */
      }

      /* End of Switch: '<S30>/Switch6' */

      /* Switch: '<S19>/Switch1' incorporates:
       *  Constant: '<S19>/Constant_R_VR_USED_bitword'
       *  Constant: '<S28>/Constant'
       *  RelationalOperator: '<S28>/Compare'
       *  S-Function (sfix_bitop): '<S19>/Bitwise AND1'
       *  UnitDelay: '<S17>/Unit Delay'
       */
      if ((OpsReAlg_DWork.RITA_Sev_Word_Previous &
           OPSREALG_CALIB_GET_u8R_VR_USED_bitword()) != 0) {
        /* MultiPortSwitch: '<S19>/Multiport Switch' incorporates:
         *  UnitDelay: '<S30>/Unit Delay2'
         */
        switch (OpsReAlg_DWork.R_Rotation_Direction_Previous) {
         case 0:
          /* Switch: '<S19>/Switch1' incorporates:
           *  Constant: '<S19>/Constant_0_1'
           */
          OpsReAlg_B.VR_Additional_Protection = 0ULL;
          break;

         case 1:
          /* Switch: '<S19>/Switch1' incorporates:
           *  Constant: '<S19>/Constant_R_VR_LEFT_PROT_REQUEST'
           */
          OpsReAlg_B.VR_Additional_Protection =
            OPSREALG_CALIB_GET_u64R_VR_LEFT_PROT_REQUEST();
          break;

         default:
          /* Switch: '<S19>/Switch1' incorporates:
           *  Constant: '<S19>/Constant_R_VR_RIGHT_PROT_REQUEST'
           */
          OpsReAlg_B.VR_Additional_Protection =
            OPSREALG_CALIB_GET_u64R_VR_RIGHT_PROT_REQUEST();
          break;
        }

        /* End of MultiPortSwitch: '<S19>/Multiport Switch' */
      } else {
        /* Switch: '<S19>/Switch1' incorporates:
         *  Constant: '<S19>/Constant_0_1'
         */
        OpsReAlg_B.VR_Additional_Protection = 0ULL;
      }

      /* End of Switch: '<S19>/Switch1' */

      /* S-Function (sfix_bitop): '<S19>/Bitwise Operator1' incorporates:
       *  S-Function (sfix_bitop): '<S19>/Bitwise Operator3'
       *  S-Function (sfix_bitop): '<S26>/Bitwise Operator1'
       *  Switch: '<S19>/Switch1'
       *  UnitDelay: '<S19>/Unit Delay2'
       */
      OpsReAlg_DWork.R_DecisionWord_VR_Prev |=
        OpsReAlg_B.Check_Decision.DecisionWord |
        OpsReAlg_B.VR_Additional_Protection;

      /* RelationalOperator: '<S27>/Compare' incorporates:
       *  Constant: '<S27>/Constant'
       *  UnitDelay: '<S17>/Unit Delay'
       */
      rtb_AND = (OpsReAlg_DWork.RITA_Sev_Word_Previous != 0);

      /* Switch: '<S19>/Switch5' */
      if (rtb_AND) {
        /* Switch: '<S19>/Switch5' incorporates:
         *  Constant: '<S19>/Constant_OPS_REAR_DEF_SEV_OUTPUT_CDR_CAPTURE'
         *  S-Function (sfix_bitop): '<S19>/Bitwise OR2'
         */
        OpsReAlg_B.R_Severity_Output = (uint16_T)(((uint16_T)
          OPS_REAR_DEF_SEV_OUTPUT_CDR_CAPTURE) |
          OpsReAlg_B.Check_Decision.Severity);
      } else {
        /* Switch: '<S19>/Switch5' */
        OpsReAlg_B.R_Severity_Output = OpsReAlg_B.Check_Decision.Severity;
      }

      /* End of Switch: '<S19>/Switch5' */

      /* Switch: '<S19>/Switch4' incorporates:
       *  Constant: '<S19>/Constant_R_AH_SEV_OUTPUT_WO_CONFIRMATION'
       *  S-Function (sfix_bitop): '<S19>/Bitwise AND'
       */
      if (OpsReAlg_B.R_Confirmation_Met) {
        tmp_0 = OpsReAlg_B.R_Severity_Output;
      } else {
        tmp_0 = (uint16_T)(OpsReAlg_B.R_Severity_Output &
                           OPSREALG_CALIB_GET_u16R_AH_SEV_OUTPUT_WO_CONFIRMATION
                           ());
      }

      /* End of Switch: '<S19>/Switch4' */

      /* S-Function (sfix_bitop): '<S19>/Bitwise Operator2' incorporates:
       *  UnitDelay: '<S19>/Unit Delay1'
       */
      OpsReAlg_B.SeverityFlags = (uint16_T)
        (OpsReAlg_DWork.SeverityFlags_Previous | tmp_0);

      /* Logic: '<S19>/Logical Operator' incorporates:
       *  Logic: '<S19>/Logical Operator1'
       */
      OpsReAlg_B.Rear_Unconfirmed_Event = (rtb_AND &&
        (!OpsReAlg_B.R_Confirmation_Met));

      /* Switch: '<S19>/Switch' */
      if (OpsReAlg_B.R_Confirmation_Met) {
        /* Switch: '<S19>/Switch' incorporates:
         *  S-Function (sfix_bitop): '<S19>/Bitwise Operator1'
         *  UnitDelay: '<S19>/Unit Delay2'
         */
        OpsReAlg_B.VirtualProtectionRequest =
          OpsReAlg_DWork.R_DecisionWord_VR_Prev;
      } else {
        /* Switch: '<S19>/Switch' incorporates:
         *  Constant: '<S19>/Constant_0'
         */
        OpsReAlg_B.VirtualProtectionRequest = 0ULL;
      }

      /* End of Switch: '<S19>/Switch' */

      /* Update for UnitDelay: '<S19>/Unit Delay1' */
      OpsReAlg_DWork.SeverityFlags_Previous = OpsReAlg_B.SeverityFlags;
    }

    OpsReAlg_PrevZCSigState.RITA_Crash_1kHz_Raising_Trig_ZCE =
      OpsReAlg_DWork.RITA_Clock_1kHz_Previous;
  } else {
    if (OpsReAlg_DWork.RITA_Crash_1kHz_Raising_MODE) {
      /* Disable for If: '<S17>/If' */
      OpsReAlg_DWork.If_ActiveSubsystem_m = -1;

      /* Disable for Switch: '<S19>/Switch' incorporates:
       *  Outport: '<S13>/O_VirtualProtectionRequest'
       */
      OpsReAlg_B.VirtualProtectionRequest = 0ULL;

      /* Disable for S-Function (sfix_bitop): '<S19>/Bitwise Operator2' incorporates:
       *  Outport: '<S13>/O_SeverityFlags'
       */
      OpsReAlg_B.SeverityFlags = 0U;

      /* Disable for Logic: '<S19>/Logical Operator' incorporates:
       *  Outport: '<S13>/O_Rear_Unconfirmed_Event'
       */
      OpsReAlg_B.Rear_Unconfirmed_Event = false;
      OpsReAlg_DWork.RITA_Crash_1kHz_Raising_MODE = false;
    }

    OpsReAlg_PrevZCSigState.RITA_Crash_1kHz_Raising_Trig_ZCE =
      OpsReAlg_DWork.RITA_Clock_1kHz_Previous;
  }

  /* End of Outputs for SubSystem: '<S3>/RITA_Crash_1kHz_Raising' */

  /* ArithShift: '<S5>/Shift Arithmetic' incorporates:
   *  DataTypeConversion: '<S5>/Data Type Conversion'
   *  Logic: '<S5>/AND'
   *  Logic: '<S5>/AND1'
   *  UnitDelay: '<S5>/Unit Delay'
   */
  OpsReAlg_Outputs.DiagnosticFlags = (uint8_T)((!OpsReAlg_B.ActivationStatus) &&
    (OpsReAlg_DWork.R_Rear_Unconfirmed_Event_Previous));

  /* BusCreator: '<S1>/Bus Creator' incorporates:
   *  Switch: '<S19>/Switch'
   */
  OpsReAlg_Outputs.ActivationStatus = OpsReAlg_B.ActivationStatus;
  OpsReAlg_Outputs.VirtualProtectionRequest =
    OpsReAlg_B.VirtualProtectionRequest;
  OpsReAlg_Outputs.SeverityFlags = OpsReAlg_B.SeverityFlags;

  /* RelationalOperator: '<S11>/Compare' incorporates:
   *  Constant: '<S11>/Constant'
   *  Switch: '<S19>/Switch'
   *  UnitDelay: '<S3>/Unit Delay'
   */
  OpsReAlg_DWork.RITA_Deployment_Previous = (OpsReAlg_B.VirtualProtectionRequest
    != 0ULL);

  /* Update for UnitDelay: '<S3>/Unit Delay1' */
  OpsReAlg_DWork.ActivationStatus_State = OpsReAlg_B.ActivationStatus;

  /* Update for UnitDelay: '<S5>/Unit Delay' */
  OpsReAlg_DWork.R_Rear_Unconfirmed_Event_Previous =
    OpsReAlg_B.Rear_Unconfirmed_Event;
}

/* Model initialize function */
void OpsReAlg_initialize(void)
{
  /* Registration code */

  /* block I/O */
  (void) StdUtl_MemSet(((void *) &OpsReAlg_B), 0,
                       sizeof(BlockIO_OpsReAlg_T));

  {
    OpsReAlg_B.VR_Additional_Protection = (0ULL);
    OpsReAlg_B.VirtualProtectionRequest = (0ULL);
    OpsReAlg_B.Check_Decision.DecisionWord = (0ULL);
  }

  /* exported global signals */
  OpsReAlg_Outputs = OpsReAlg_rtZOpsCshMgr_AlgorithmOutput_StructType;

  /* states (dwork) */
  (void) StdUtl_MemSet((void *)&OpsReAlg_DWork, 0,
                       sizeof(D_Work_OpsReAlg_T));

  /* exported global states */
  (void) StdUtl_MemSet(&RITA_INTRUSION_ROTATION_CRITERIA_CONFIG, 0,
                       6U*sizeof(uint8_T));
  RITA_INTRUSION_ROTATION_CRITERIA_NB = 0U;
  (void) StdUtl_MemSet(&RITA_IRC_INDEX_CONFIG, 0,
                       2U*sizeof(uint8_T));
  RITA_LGT_RSU_NB = 0U;
  OpsReAlg_PrevZCSigState.RITA_Crash_1kHz_Raising_Trig_ZCE = POS_ZCSIG;
  OpsReAlg_PrevZCSigState.Signal_Conditioning_1kHz_Failing_Trig_ZCE = ZERO_ZCSIG;
  OpsReAlg_PrevZCSigState.State_Manager_1kHz_Failing_Trig_ZCE = ZERO_ZCSIG;

  /* SystemInitialize for Atomic SubSystem: '<S1>/OpsReAlgConfiguration' */
  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay' */
  OpsReAlg_DWork.InitialCondition = 1U;

  /* SystemInitialize for IfAction SubSystem: '<S2>/OpsReAlgConfiguration_at_Init' */
  /* SystemInitialize for Chart: '<S6>/RITA_Intrusion_Rotation_Cfg' */
  StdUtl_MemSet(&OpsReAlg_B.u8O_RITA_INTRUSION_ROTATION_CRITERIA_CONFIG[0], 0,
                6U * (sizeof(uint8_T)));
  StdUtl_MemSet(&OpsReAlg_B.u8O_RITA_IRC_Index_Config[0], 0, (sizeof(uint8_T)) <<
                1U);

  /* End of SystemInitialize for SubSystem: '<S2>/OpsReAlgConfiguration_at_Init' */
  /* End of SystemInitialize for SubSystem: '<S1>/OpsReAlgConfiguration' */

  /* SystemInitialize for Triggered SubSystem: '<S3>/Signal_Conditioning_1kHz_Failing' */
  /* InitializeConditions for S-Function (StdUtl_SecondOrder64BitFilter_ExtCoeff): '<S47>/Central_X_Filter' incorporates:
   *  Constant: '<S47>/Constant_R_SIC_FLT_CENTRAL_X'
   */

  /* S-Function (StdUtl_SecondOrder64BitFilter_ExtCoeff): <S47>/Central_X_Filter */
  StdUtl_SecondOrder64BitFilter_Ini_Ext( &OpsReAlg_DWork.Central_X_Filter_work1);

  /* InitializeConditions for S-Function (StdUtl_FirstOrder64BitFilter_ExtCoeff): '<S47>/Central_X_For_DV_Filter' incorporates:
   *  Constant: '<S47>/Constant_R_SIC_FLT_CENTRAL_X_DV'
   */

  /* S-Function (StdUtl_FirstOrder64BitFilter_ExtCoeff): <S47>/Central_X_For_DV_Filter */
  StdUtl_FirstOrder64BitFilter_Ini_Ext
    ( &OpsReAlg_DWork.Central_X_For_DV_Filter_work1);

  /* SystemInitialize for Chart: '<S48>/RSU_X_Filtering' */
  OpsReAlg_RSU_X_Filtering_Init(&OpsReAlg_B.sf_RSU_X_Filtering,
    &OpsReAlg_DWork.sf_RSU_X_Filtering);

  /* End of SystemInitialize for SubSystem: '<S3>/Signal_Conditioning_1kHz_Failing' */

  /* SystemInitialize for Triggered SubSystem: '<S3>/State_Manager_1kHz_Failing' */
  /* Start for If: '<S52>/If4' */
  OpsReAlg_DWork.If4_ActiveSubsystem = -1;

  /* Start for If: '<S15>/If' */
  OpsReAlg_DWork.If_ActiveSubsystem = -1;

  /* SystemInitialize for IfAction SubSystem: '<S52>/RITA_Measures_and_Conditioning' */
  /* Start for If: '<S66>/If' */
  OpsReAlg_DWork.If_ActiveSubsystem_a = -1;

  /* InitializeConditions for UnitDelay: '<S66>/Unit Delay1' */
  OpsReAlg_DWork.SIV_Init = 1U;

  /* InitializeConditions for UnitDelay: '<S65>/Unit Delay1' */
  OpsReAlg_DWork.Lgt_RSU1_Failure_Latched_Previous = false;

  /* InitializeConditions for UnitDelay: '<S65>/Unit Delay2' */
  OpsReAlg_DWork.Lgt_RSU2_Failure_Latched_Previous = false;

  /* InitializeConditions for UnitDelay: '<S65>/Unit Delay3' */
  OpsReAlg_DWork.Lgt_RSU3_Failure_Latched_Previous = false;

  /* InitializeConditions for UnitDelay: '<S63>/Unit Delay1' */
  OpsReAlg_DWork.DeltaVelocity_Previous = 0;

  /* InitializeConditions for UnitDelay: '<S61>/Unit Delay3' */
  OpsReAlg_DWork.CentX_DISP_Previous = 0;

  /* SystemInitialize for IfAction SubSystem: '<S66>/RSU_DV_1RSU' */
  /* InitializeConditions for UnitDelay: '<S71>/Unit Delay' */
  OpsReAlg_DWork.DeltaVelocity_Previous_k = 0;

  /* End of SystemInitialize for SubSystem: '<S66>/RSU_DV_1RSU' */

  /* SystemInitialize for IfAction SubSystem: '<S66>/RSU_DV_2RSU' */
  /* InitializeConditions for UnitDelay: '<S73>/Unit Delay' */
  OpsReAlg_DWork.DeltaVelocity_Previous_d = 0;

  /* InitializeConditions for UnitDelay: '<S74>/Unit Delay' */
  OpsReAlg_DWork.DeltaVelocity_Previous_a = 0;

  /* End of SystemInitialize for SubSystem: '<S66>/RSU_DV_2RSU' */

  /* SystemInitialize for IfAction SubSystem: '<S66>/RSU_DV_3RSU' */
  /* InitializeConditions for UnitDelay: '<S77>/Unit Delay' */
  OpsReAlg_DWork.DeltaVelocity_Previous_j = 0;

  /* InitializeConditions for UnitDelay: '<S78>/Unit Delay' */
  OpsReAlg_DWork.DeltaVelocity_Previous_jm = 0;

  /* InitializeConditions for UnitDelay: '<S79>/Unit Delay' */
  OpsReAlg_DWork.DeltaVelocity_Previous_o = 0;

  /* End of SystemInitialize for SubSystem: '<S66>/RSU_DV_3RSU' */

  /* SystemInitialize for Merge generated from: '<S66>/Merge' */
  OpsReAlg_B.R_RSU1_X_DV_m = 0;

  /* SystemInitialize for Merge generated from: '<S66>/Merge' */
  OpsReAlg_B.R_RSU2_X_DV_l = 0;

  /* SystemInitialize for Merge generated from: '<S66>/Merge' */
  OpsReAlg_B.R_RSU3_X_DV_f = 0;

  /* SystemInitialize for MinMax: '<S69>/Min' incorporates:
   *  Merge generated from: '<S66>/Merge'
   */
  OpsReAlg_B.R_Min_RSU_X_DV_h = 0;

  /* SystemInitialize for MinMax: '<S69>/Min1' incorporates:
   *  Merge generated from: '<S66>/Merge'
   */
  OpsReAlg_B.R_Max_RSU_X_DV_b = 0;

  /* End of SystemInitialize for SubSystem: '<S52>/RITA_Measures_and_Conditioning' */

  /* SystemInitialize for IfAction SubSystem: '<S15>/Reset' */
  /* InitializeConditions for UnitDelay: '<S53>/Unit Delay2' */
  OpsReAlg_DWork.DvReset_Clock_Previous = 0U;

  /* InitializeConditions for Sum: '<S53>/Sum2' incorporates:
   *  UnitDelay: '<S53>/Unit Delay1'
   */
  OpsReAlg_DWork.LISAResetVelocity_Previous = 0;

  /* InitializeConditions for UnitDelay: '<S54>/Delay Input1'
   *
   * Block description for '<S54>/Delay Input1':
   *
   *  Store in Global RAM
   */
  OpsReAlg_DWork.DelayInput1_DSTATE = false;

  /* InitializeConditions for UnitDelay: '<S56>/Unit Delay' */
  OpsReAlg_DWork.Weak_Reset_Time_Previous = 0U;

  /* End of SystemInitialize for SubSystem: '<S15>/Reset' */
  /* End of SystemInitialize for SubSystem: '<S3>/State_Manager_1kHz_Failing' */

  /* SystemInitialize for Enabled and Triggered SubSystem: '<S3>/RITA_Crash_1kHz_Raising' */
  /* Start for If: '<S17>/If' */
  OpsReAlg_DWork.If_ActiveSubsystem_m = -1;

  /* InitializeConditions for UnitDelay: '<S18>/Unit Delay2' */
  OpsReAlg_DWork.RITA_Conf_Bits_Set_Previous = 0U;

  /* InitializeConditions for UnitDelay: '<S18>/Unit Delay3' */
  OpsReAlg_DWork.RITA_Conf_Bits_Faulty_Previous = 0U;

  /* InitializeConditions for UnitDelay: '<S19>/Unit Delay2' */
  OpsReAlg_DWork.R_DecisionWord_VR_Prev = 0ULL;

  /* InitializeConditions for UnitDelay: '<S30>/Unit Delay' */
  OpsReAlg_DWork.R_Angle_Level1_Previous = false;

  /* InitializeConditions for UnitDelay: '<S30>/Unit Delay1' */
  OpsReAlg_DWork.R_Angle_Level2_Previous = false;

  /* InitializeConditions for UnitDelay: '<S33>/Unit Delay' */
  OpsReAlg_DWork.Side_Severity_Flags = 0U;

  /* InitializeConditions for UnitDelay: '<S17>/Unit Delay' */
  OpsReAlg_DWork.RITA_Sev_Word_Previous = 0U;

  /* InitializeConditions for UnitDelay: '<S30>/Unit Delay2' */
  OpsReAlg_DWork.R_Rotation_Direction_Previous = 0U;

  /* InitializeConditions for UnitDelay: '<S19>/Unit Delay1' */
  OpsReAlg_DWork.SeverityFlags_Previous = 0U;

  /* SystemInitialize for Chart: '<S31>/Compute_and_Compare_CentX_Acc_Thresholds' */
  OpsReAlg_DWork.is_active_c10_s4RB7X9Aqy8tjIx8lwkkzWC_RITA2_Library = 0U;
  OpsReAlg_B.u8O_Acc_Sev_Word_h = 0U;

  /* SystemInitialize for Chart: '<S32>/Compute_and_Compare_DV_Thresholds' */
  OpsReAlg_DWork.is_active_c1_sIgR1AQg4K4xYCVrLLdVCgD_RITA2_Library = 0U;
  OpsReAlg_B.u8O_DV_Sev_Word_o = 0U;

  /* SystemInitialize for Chart: '<S31>/Compute_and_Compare_CentX_Acc_Thresholds' */
  StdUtl_MemSet(&OpsReAlg_DWork.u8Acc_Latch_Counter_m[0], 0, (sizeof(uint8_T)) <<
                2U);
  StdUtl_MemSet(&OpsReAlg_B.s16O_Acc_Threshold_a[0], 0, (sizeof(sint16)) << 2U);

  /* SystemInitialize for Chart: '<S32>/Compute_and_Compare_DV_Thresholds' */
  StdUtl_MemSet(&OpsReAlg_DWork.bDV_Latch_Sev_j[0], 0, (sizeof(boolean_T)) << 2U);
  StdUtl_MemSet(&OpsReAlg_B.s32O_DV_Threshold_k[0], 0, (sizeof(sint32)) << 2U);

  /* SystemInitialize for IfAction SubSystem: '<S17>/RSU_X' */
  /* SystemInitialize for Chart: '<S43>/Compute_and_Compare_RSU_X_Acc_Thresholds' */
  OpsReAlg_DWork.is_active_c10_sjH5I7zc0k4eS8DuUVkYY2F_RITA2_Library = 0U;
  OpsReAlg_B.u8O_Acc_Sev_Word = 0U;

  /* SystemInitialize for Chart: '<S44>/Compute_and_Compare_DV_Thresholds' */
  OpsReAlg_DWork.is_active_c1_svx8wKBNq2ajYnUJxivWXNF_RITA2_Library = 0U;
  OpsReAlg_B.u8O_DV_Sev_Word = 0U;

  /* End of SystemInitialize for SubSystem: '<S17>/RSU_X' */

  /* SystemInitialize for Chart: '<S34>/Intrusion_Rotation_Criteria_Module' */
  OpsReAlg_DWork.is_active_c18_OpsReAlg = 0U;
  OpsReAlg_B.R_Sev_Word_AccDV_IRC = 0U;

  /* SystemInitialize for IfAction SubSystem: '<S17>/RSU_X' */
  /* SystemInitialize for Chart: '<S43>/Compute_and_Compare_RSU_X_Acc_Thresholds' */
  StdUtl_MemSet(&OpsReAlg_DWork.u8Acc_Latch_Counter[0], 0, (sizeof(uint8_T)) <<
                1U);
  StdUtl_MemSet(&OpsReAlg_B.s16O_Acc_Threshold[0], 0, (sizeof(sint16)) << 1U);

  /* SystemInitialize for Chart: '<S44>/Compute_and_Compare_DV_Thresholds' */
  StdUtl_MemSet(&OpsReAlg_DWork.bDV_Latch_Sev[0], 0, (sizeof(boolean_T)) << 1U);
  StdUtl_MemSet(&OpsReAlg_B.s32O_DV_Threshold[0], 0, (sizeof(sint32)) << 1U);

  /* End of SystemInitialize for SubSystem: '<S17>/RSU_X' */

  /* SystemInitialize for Chart: '<S34>/Intrusion_Rotation_Criteria_Module' */
  StdUtl_MemSet(&OpsReAlg_DWork.u8StopSensor_Condition[0], 1, (sizeof(uint8_T)) <<
                1U);
  StdUtl_MemSet(&OpsReAlg_B.R_IRC_Met[0], 0, (sizeof(uint8_T)) << 1U);
  StdUtl_MemSet(&OpsReAlg_B.s32O_RITA_IRC_Final[0], 0, (sizeof(sint32)) << 1U);

  /* End of SystemInitialize for SubSystem: '<S3>/RITA_Crash_1kHz_Raising' */
}

#define OpsReAlg_STOP_SEC_CODE
#include "OpsReAlg_MemMap.h"

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
