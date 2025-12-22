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
   Checked in:       $Date: 2024/04/09 14:15:34CEST $
 */
/*****************************************************************************/
/******************************************************************************
 **  Filename:      OpsReAlg.h
 **  Date:          20-Mar-2024
 **
 **  Model Version: 1.481
 ******************************************************************************
 **/
#ifndef RTW_HEADER_OpsReAlg_h_
#define RTW_HEADER_OpsReAlg_h_
#include "rtwtypes.h"
#include "StdUtl.h"
#include "OpsCshMgr_AlgoSpecificTypes.h"
#include "OpsCshMgr.h"
#include "CalibLayoutTypeDef_OpsReAlg.h"
#ifndef OpsReAlg_COMMON_INCLUDES_
#define OpsReAlg_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "StdUtl.h"
#endif                                 /* OpsReAlg_COMMON_INCLUDES_ */

/* Model Code Variants */

/* Includes for objects with custom storage classes. */
#include "OpsReAlg_Process_Veh_Dyn.h"
#include "CalibLayoutInterface_OpsReAlg.h"
#include "OpsReAlg_IntMdl.h"
#include "Std_Types.h"

/* Macros for accessing real-time model data structure */

/* Exported data define */

/* Definition for custom storage class: Define */
#define RITA_CFG_NB_PATH               8U                        /* Referenced by: '<S26>/For Iterator' */

/* user code (top of header file) */
#define OPSREALG_INPUT_GET_RITA_FT_Threshold_Class() ((uint8)(OpsReAlg_Process_Veh_Dyn_Y.O_RITA_ST_Threshold_Class))/* LISA_ST_Threshold_Class From SlowTask */
#ifndef DEFINED_TYPEDEF_FOR_B_Memory_SIV_
#define DEFINED_TYPEDEF_FOR_B_Memory_SIV_

typedef struct {
  sint16 FIRBuffer[16];
  uint8_T CircBufIdx;
  sint32 SIV;
} B_Memory_SIV;

#endif

#ifndef DEFINED_TYPEDEF_FOR_B_SM_W_Time_Evaluation_
#define DEFINED_TYPEDEF_FOR_B_SM_W_Time_Evaluation_

typedef struct {
  boolean_T ActivationStatus;
  uint16_T RITA_TIME;
} B_SM_W_Time_Evaluation;

#endif

#ifndef DEFINED_TYPEDEF_FOR_B_SM_W_RSU_Failures_
#define DEFINED_TYPEDEF_FOR_B_SM_W_RSU_Failures_

typedef struct {
  boolean_T RSU1_X_Failure_Latched;
  boolean_T RSU2_X_Failure_Latched;
  boolean_T RSU3_X_Failure_Latched;
  boolean_T RSUs_X_Failure_Latched;
} B_SM_W_RSU_Failures;

#endif

#ifndef DEFINED_TYPEDEF_FOR_B_SM_W_Measures_
#define DEFINED_TYPEDEF_FOR_B_SM_W_Measures_

typedef struct {
  sint32 CentX_DV;
  uint32 CentX_DISP;
} B_SM_W_Measures;

#endif

#ifndef DEFINED_TYPEDEF_FOR_B_RSU_X_DV_
#define DEFINED_TYPEDEF_FOR_B_RSU_X_DV_

typedef struct {
  sint32 R_RSU1_X_DV;
  sint32 R_RSU2_X_DV;
  sint32 R_RSU3_X_DV;
  sint32 R_Min_RSU_X_DV;
  sint32 R_Max_RSU_X_DV;
} B_RSU_X_DV;

#endif

#ifndef DEFINED_TYPEDEF_FOR_B_SM_W_STATE_
#define DEFINED_TYPEDEF_FOR_B_SM_W_STATE_

typedef struct {
  B_SM_W_Time_Evaluation R_SM_W_Time_Evaluation;
  uint8_T RITA_Threshold_Class;
  B_SM_W_RSU_Failures R_SM_W_RSU_Failures;
  B_SM_W_Measures R_SM_W_Measures;
  B_RSU_X_DV R_RSU_DV;
} B_SM_W_STATE;

#endif

/* Block signals for system '<S19>/Check_Decision' */
typedef struct {
  uint64_T DecisionWord;               /* '<S26>/Bitwise Operator1' */
  uint16_T Severity;                   /* '<S26>/Bitwise Operator2' */
} rtB_Check_Decision_OpsReAlg_T;

/* Block signals for system '<S48>/RSU_X_Filtering' */
typedef struct {
  sint32 s32O_RSU_X_SIV[3];            /* '<S48>/RSU_X_Filtering' */
  sint16 s16O_RSU_X_LPF2[3];           /* '<S48>/RSU_X_Filtering' */
  sint16 s16O_Min_RSU_X_LPF2;          /* '<S48>/RSU_X_Filtering' */
  sint16 s16O_Max_RSU_X_LPF2;          /* '<S48>/RSU_X_Filtering' */
} rtB_RSU_X_Filtering_OpsReAlg_T;

/* Block states (default storage) for system '<S48>/RSU_X_Filtering' */
typedef struct {
  uint8_T is_active_c3_OpsReAlg;       /* '<S48>/RSU_X_Filtering' */
  boolean_T bR_ActivationStatus_Previous_Prev;/* '<S48>/RSU_X_Filtering' */
} rtDW_RSU_X_Filtering_OpsReAlg_T;

/* Block signals for system '<S4>/Average_QF_Central_Y' */
typedef struct {
  boolean_T Signal_QF_averaged;        /* '<S85>/OR' */
} rtB_Average_QF_Central_Y_OpsReAlg_T;

/* Block states (default storage) for system '<S4>/Average_QF_Central_Y' */
typedef struct {
  boolean_T Signal_QF_Prev;            /* '<S85>/Unit Delay' */
} rtDW_Average_QF_Central_Y_OpsReAlg_T;

/* Block signals for system '<S4>/Average_data_Central_X' */
typedef struct {
  sint16 Signal_Data_averaged;         /* '<S92>/Data Type Conversion' */
} rtB_Average_data_Central_X_OpsReAlg_T;

/* Block states (default storage) for system '<S4>/Average_data_Central_X' */
typedef struct {
  sint16 Signal_Data_Prev;             /* '<S92>/Unit Delay' */
} rtDW_Average_data_Central_X_OpsReAlg_T;

/* Block signals (default storage) */
typedef struct {
  uint64_T VR_Additional_Protection;   /* '<S19>/Switch1' */
  uint64_T VirtualProtectionRequest;   /* '<S19>/Switch' */
  B_SM_W_Measures R_SM_W_Measures;
  B_SM_W_Measures R_SM_W_Measures_h;   /* '<S61>/Bus Creator' */
  sint32 R_RSU3_X_DV;
  sint32 R_Min_RSU_X_DV;
  sint32 R_Max_RSU_X_DV;
  sint32 R_RSU1_X_DV;
  sint32 R_RSU2_X_DV;
  sint32 R_RSU1_X_DV_m;                /* '<S66>/Merge' */
  sint32 R_RSU1_X_DV_n;
  sint32 R_RSU2_X_DV_l;                /* '<S66>/Merge' */
  sint32 R_RSU2_X_DV_e;
  sint32 R_RSU3_X_DV_f;                /* '<S66>/Merge' */
  sint32 R_RSU3_X_DV_a;
  sint32 R_Min_RSU_X_DV_h;             /* '<S66>/Merge' */
  sint32 R_Min_RSU_X_DV_o;
  sint32 R_Max_RSU_X_DV_b;             /* '<S66>/Merge' */
  sint32 R_Max_RSU_X_DV_c;
  sint32 OutportBufferForO_RSU_X_SIV[3];/* '<S14>/RSU_X_Filtering' */
  sint32 Y_Angle_abs;                  /* '<S30>/Abs' */
  sint32 s32O_RITA_IRC_Final[2];/* '<S34>/Intrusion_Rotation_Criteria_Module' */
  sint32 s32O_DV_Threshold[2];   /* '<S44>/Compute_and_Compare_DV_Thresholds' */
  sint32 s32O_DV_Threshold_k[4]; /* '<S32>/Compute_and_Compare_DV_Thresholds' */
  uint16_T RITA_TIME;
  uint16_T R_Severity_Output;          /* '<S19>/Switch5' */
  uint16_T SeverityFlags;              /* '<S19>/Bitwise Operator2' */
  sint16 Central_X_Acc_Raw;            /* '<S4>/Selector' */
  sint16 Central_Y_Acc_Raw;            /* '<S4>/Selector1' */
  sint16 RSU1_X_Acc_Raw;               /* '<S4>/Selector2' */
  sint16 RSU2_X_Acc_Raw;               /* '<S4>/Selector4' */
  sint16 RSU3_X_Acc_Raw;               /* '<S4>/Selector6' */
  sint16 Conf_RSU1_Acc_Raw;            /* '<S4>/Selector8' */
  sint16 Conf_RSU2_Acc_Raw;            /* '<S4>/Selector10' */
  sint16 Secondary_X_Acc_Raw;          /* '<S4>/Selector12' */
  sint16 Central_X_For_DV;             /* '<S47>/Central_X_For_DV_Filter' */
  sint16 RITA_Signals_Filtered[6];
  sint16 X_Angle;                      /* '<S30>/Max' */
  sint16 s16O_Acc_Threshold[2];
                          /* '<S43>/Compute_and_Compare_RSU_X_Acc_Thresholds' */
  sint16 s16O_Acc_Threshold_a[4];
                          /* '<S31>/Compute_and_Compare_CentX_Acc_Thresholds' */
  uint8_T RITA_Threshold_Class;
  uint8_T RITA_FT_Threshold_Class_Frozen;/* '<S60>/Signal Copy' */
  uint8_T RITA_Threshold_Class_a;      /* '<S60>/Switch' */
  uint8_T R_Sev_Word_AccDV;            /* '<S17>/Bitwise AND' */
  uint8_T R_Sev_Word_AccDV_IRC_Angle;  /* '<S30>/Bitwise AND1' */
  uint8_T R_Sev_Word_AccDV_IRC; /* '<S34>/Intrusion_Rotation_Criteria_Module' */
  uint8_T R_IRC_Met[2];         /* '<S34>/Intrusion_Rotation_Criteria_Module' */
  uint8_T u8O_DV_Sev_Word;       /* '<S44>/Compute_and_Compare_DV_Thresholds' */
  uint8_T u8O_Acc_Sev_Word;
                          /* '<S43>/Compute_and_Compare_RSU_X_Acc_Thresholds' */
  uint8_T u8O_DV_Sev_Word_o;     /* '<S32>/Compute_and_Compare_DV_Thresholds' */
  uint8_T u8O_Acc_Sev_Word_h;
                          /* '<S31>/Compute_and_Compare_CentX_Acc_Thresholds' */
  uint8_T u8O_RITA_INTRUSION_ROTATION_CRITERIA_CONFIG[6];/* '<S6>/RITA_Intrusion_Rotation_Cfg' */
  uint8_T u8O_RITA_IRC_Index_Config[2];/* '<S6>/RITA_Intrusion_Rotation_Cfg' */
  boolean_T ActivationStatus;
  boolean_T RSU1_X_Failure_Latched;
  boolean_T RSU2_X_Failure_Latched;
  boolean_T RSU3_X_Failure_Latched;
  boolean_T RSUs_X_Failure_Latched;
  boolean_T RSU1_X_Failure_Latched_n;  /* '<S65>/OR' */
  boolean_T RSU2_X_Failure_Latched_p;  /* '<S65>/OR2' */
  boolean_T RSU3_X_Failure_Latched_b;  /* '<S65>/OR3' */
  boolean_T RSUs_X_Failure_Latched_g;  /* '<S65>/OR1' */
  boolean_T RITAResetZoneON;           /* '<S53>/Relational Operator1' */
  boolean_T R_DeltaVelocityReset_Met;  /* '<S53>/Logical Operator3' */
  boolean_T R_Weak_Reset_Met;          /* '<S56>/Relational Operator3' */
  boolean_T R_TimeOut_Met;             /* '<S55>/Logical Operator' */
  boolean_T RITA_Reset_Met;            /* '<S51>/Logical Operator' */
  boolean_T R_Primary_Confirmation_Met;/* '<S21>/Compare' */
  boolean_T R_Secondary_Confirmation_Met;/* '<S18>/Logical Operator4' */
  boolean_T R_Confirmation_Met;        /* '<S18>/Logical Operator5' */
  boolean_T R_Angle_Level2_For_Deployment;/* '<S37>/Switch5' */
  boolean_T R_Angle_Level2_For_Immunity;/* '<S37>/Switch7' */
  boolean_T Side_Immunity_Mode;        /* '<S33>/OR' */
  boolean_T Rear_Unconfirmed_Event;    /* '<S19>/Logical Operator' */
  rtB_Average_data_Central_X_OpsReAlg_T Average_data_Secondary_X;/* '<S4>/Average_data_Secondary_X' */
  rtB_Average_data_Central_X_OpsReAlg_T Average_data_RSU3_X;/* '<S4>/Average_data_RSU3_X' */
  rtB_Average_data_Central_X_OpsReAlg_T Average_data_RSU2_X;/* '<S4>/Average_data_RSU2_X' */
  rtB_Average_data_Central_X_OpsReAlg_T Average_data_RSU1_X;/* '<S4>/Average_data_RSU1_X' */
  rtB_Average_data_Central_X_OpsReAlg_T Average_data_Conf_RSU2;/* '<S4>/Average_data_Conf_RSU2' */
  rtB_Average_data_Central_X_OpsReAlg_T Average_data_Conf_RSU1;/* '<S4>/Average_data_Conf_RSU1' */
  rtB_Average_data_Central_X_OpsReAlg_T Average_data_Central_Y;/* '<S4>/Average_data_Central_Y' */
  rtB_Average_data_Central_X_OpsReAlg_T Average_data_Central_X;/* '<S4>/Average_data_Central_X' */
  rtB_Average_QF_Central_Y_OpsReAlg_T Average_QF_Secondary_X;/* '<S4>/Average_QF_Secondary_X' */
  rtB_Average_QF_Central_Y_OpsReAlg_T Average_QF_RSU3_X;/* '<S4>/Average_QF_RSU3_X' */
  rtB_Average_QF_Central_Y_OpsReAlg_T Average_QF_RSU2_X;/* '<S4>/Average_QF_RSU2_X' */
  rtB_Average_QF_Central_Y_OpsReAlg_T Average_QF_RSU1_X;/* '<S4>/Average_QF_RSU1_X' */
  rtB_Average_QF_Central_Y_OpsReAlg_T Average_QF_Conf_RSU2;/* '<S4>/Average_QF_Conf_RSU2' */
  rtB_Average_QF_Central_Y_OpsReAlg_T Average_QF_Conf_RSU1;/* '<S4>/Average_QF_Conf_RSU1' */
  rtB_Average_QF_Central_Y_OpsReAlg_T Average_QF_Central_Y;/* '<S4>/Average_QF_Central_Y' */
  rtB_RSU_X_Filtering_OpsReAlg_T sf_RSU_X_Filtering;/* '<S48>/RSU_X_Filtering' */
  rtB_Check_Decision_OpsReAlg_T Check_Decision;/* '<S19>/Check_Decision' */
} BlockIO_OpsReAlg_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  B_Memory_SIV G_Memory_SIV[3];        /* '<S48>/DataStore_G_Memory_SIV' */
  StdUtl_ST_2ND_ORD_64BIT_FILT_DATA_T Central_X_Filter_work1;/* '<S47>/Central_X_Filter' */
  StdUtl_ST_2ND_ORD_64BIT_FILT_DATA_T G_Memory_LPF2[3];/* '<S48>/DataStore_G_Memory_LPF2' */
  uint64_T R_DecisionWord_VR_Prev;     /* '<S19>/Unit Delay2' */
  StdUtl_ST_1ST_ORD_64BIT_FILT_DATA_T Central_X_For_DV_Filter_work1;/* '<S47>/Central_X_For_DV_Filter' */
  sint32 DeltaVelocity_Previous;       /* '<S63>/Unit Delay1' */
  sint32 CentX_DISP_Previous;          /* '<S61>/Unit Delay3' */
  sint32 DeltaVelocity_Previous_j;     /* '<S77>/Unit Delay' */
  sint32 DeltaVelocity_Previous_jm;    /* '<S78>/Unit Delay' */
  sint32 DeltaVelocity_Previous_o;     /* '<S79>/Unit Delay' */
  sint32 DeltaVelocity_Previous_d;     /* '<S73>/Unit Delay' */
  sint32 DeltaVelocity_Previous_a;     /* '<S74>/Unit Delay' */
  sint32 DeltaVelocity_Previous_k;     /* '<S71>/Unit Delay' */
  sint32 LISAResetVelocity_Previous;   /* '<S53>/Unit Delay1' */
  uint16_T TIME_Previous;              /* '<S84>/Unit Delay2' */
  uint16_T DvReset_Clock_Previous;     /* '<S53>/Unit Delay2' */
  uint16_T Side_Severity_Flags;        /* '<S33>/Unit Delay' */
  uint16_T SeverityFlags_Previous;     /* '<S19>/Unit Delay1' */
  uint8_T SIV_Init;                    /* '<S66>/Unit Delay1' */
  uint8_T Weak_Reset_Time_Previous;    /* '<S56>/Unit Delay' */
  uint8_T RITA_Conf_Bits_Set_Previous; /* '<S18>/Unit Delay2' */
  uint8_T RITA_Conf_Bits_Faulty_Previous;/* '<S18>/Unit Delay3' */
  uint8_T RITA_Sev_Word_Previous;      /* '<S17>/Unit Delay' */
  uint8_T R_Rotation_Direction_Previous;/* '<S30>/Unit Delay2' */
  uint8_T InitialCondition;            /* '<S2>/Unit Delay' */
  boolean_T RITA_Deployment_Previous;  /* '<S3>/Unit Delay' */
  boolean_T ActivationStatus_State;    /* '<S3>/Unit Delay1' */
  boolean_T RITA_Clock_1kHz_Previous;  /* '<S12>/Unit Delay' */
  boolean_T R_Rear_Unconfirmed_Event_Previous;/* '<S5>/Unit Delay' */
  boolean_T RITA_Reset_Met_Previous;   /* '<S15>/Unit Delay3' */
  boolean_T Lgt_RSU1_Failure_Latched_Previous;/* '<S65>/Unit Delay1' */
  boolean_T Lgt_RSU2_Failure_Latched_Previous;/* '<S65>/Unit Delay2' */
  boolean_T Lgt_RSU3_Failure_Latched_Previous;/* '<S65>/Unit Delay3' */
  boolean_T DelayInput1_DSTATE;        /* '<S54>/Delay Input1' */
  boolean_T R_Angle_Level1_Previous;   /* '<S30>/Unit Delay' */
  boolean_T R_Angle_Level2_Previous;   /* '<S30>/Unit Delay1' */
  sint8 If4_ActiveSubsystem;           /* '<S52>/If4' */
  sint8 If_ActiveSubsystem;            /* '<S15>/If' */
  sint8 If_ActiveSubsystem_a;          /* '<S66>/If' */
  sint8 If_ActiveSubsystem_m;          /* '<S17>/If' */
  uint8_T is_active_c18_OpsReAlg;
                                /* '<S34>/Intrusion_Rotation_Criteria_Module' */
  uint8_T u8StopSensor_Condition[2];
                                /* '<S34>/Intrusion_Rotation_Criteria_Module' */
  uint8_T is_active_c1_svx8wKBNq2ajYnUJxivWXNF_RITA2_Library;
                                 /* '<S44>/Compute_and_Compare_DV_Thresholds' */
  uint8_T is_active_c10_sjH5I7zc0k4eS8DuUVkYY2F_RITA2_Library;
                          /* '<S43>/Compute_and_Compare_RSU_X_Acc_Thresholds' */
  uint8_T u8Acc_Latch_Counter[2];
                          /* '<S43>/Compute_and_Compare_RSU_X_Acc_Thresholds' */
  uint8_T is_active_c1_sIgR1AQg4K4xYCVrLLdVCgD_RITA2_Library;
                                 /* '<S32>/Compute_and_Compare_DV_Thresholds' */
  uint8_T is_active_c10_s4RB7X9Aqy8tjIx8lwkkzWC_RITA2_Library;
                          /* '<S31>/Compute_and_Compare_CentX_Acc_Thresholds' */
  uint8_T u8Acc_Latch_Counter_m[4];
                          /* '<S31>/Compute_and_Compare_CentX_Acc_Thresholds' */
  boolean_T bDV_Latch_Sev[2];    /* '<S44>/Compute_and_Compare_DV_Thresholds' */
  boolean_T bDV_Latch_Sev_j[4];  /* '<S32>/Compute_and_Compare_DV_Thresholds' */
  boolean_T RITA_Crash_1kHz_Raising_MODE;/* '<S3>/RITA_Crash_1kHz_Raising' */
  rtDW_Average_data_Central_X_OpsReAlg_T Average_data_Secondary_X;/* '<S4>/Average_data_Secondary_X' */
  rtDW_Average_data_Central_X_OpsReAlg_T Average_data_RSU3_X;/* '<S4>/Average_data_RSU3_X' */
  rtDW_Average_data_Central_X_OpsReAlg_T Average_data_RSU2_X;/* '<S4>/Average_data_RSU2_X' */
  rtDW_Average_data_Central_X_OpsReAlg_T Average_data_RSU1_X;/* '<S4>/Average_data_RSU1_X' */
  rtDW_Average_data_Central_X_OpsReAlg_T Average_data_Conf_RSU2;/* '<S4>/Average_data_Conf_RSU2' */
  rtDW_Average_data_Central_X_OpsReAlg_T Average_data_Conf_RSU1;/* '<S4>/Average_data_Conf_RSU1' */
  rtDW_Average_data_Central_X_OpsReAlg_T Average_data_Central_Y;/* '<S4>/Average_data_Central_Y' */
  rtDW_Average_data_Central_X_OpsReAlg_T Average_data_Central_X;/* '<S4>/Average_data_Central_X' */
  rtDW_Average_QF_Central_Y_OpsReAlg_T Average_QF_Secondary_X;/* '<S4>/Average_QF_Secondary_X' */
  rtDW_Average_QF_Central_Y_OpsReAlg_T Average_QF_RSU3_X;/* '<S4>/Average_QF_RSU3_X' */
  rtDW_Average_QF_Central_Y_OpsReAlg_T Average_QF_RSU2_X;/* '<S4>/Average_QF_RSU2_X' */
  rtDW_Average_QF_Central_Y_OpsReAlg_T Average_QF_RSU1_X;/* '<S4>/Average_QF_RSU1_X' */
  rtDW_Average_QF_Central_Y_OpsReAlg_T Average_QF_Conf_RSU2;/* '<S4>/Average_QF_Conf_RSU2' */
  rtDW_Average_QF_Central_Y_OpsReAlg_T Average_QF_Conf_RSU1;/* '<S4>/Average_QF_Conf_RSU1' */
  rtDW_Average_QF_Central_Y_OpsReAlg_T Average_QF_Central_Y;/* '<S4>/Average_QF_Central_Y' */
  rtDW_RSU_X_Filtering_OpsReAlg_T sf_RSU_X_Filtering;/* '<S48>/RSU_X_Filtering' */
} D_Work_OpsReAlg_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState State_Manager_1kHz_Failing_Trig_ZCE;/* '<S3>/State_Manager_1kHz_Failing' */
  ZCSigState Signal_Conditioning_1kHz_Failing_Trig_ZCE;
                                   /* '<S3>/Signal_Conditioning_1kHz_Failing' */
  ZCSigState RITA_Crash_1kHz_Raising_Trig_ZCE;/* '<S3>/RITA_Crash_1kHz_Raising' */
} PrevZCSigStates_OpsReAlg_T;

/* Invariant block signals (default storage) */
typedef struct {
  const sint32 R_RSU3_X_DV;            /* '<S68>/Constant_0' */
  const sint32 R_RSU2_X_DV;            /* '<S67>/Constant_0' */
  const sint32 R_RSU3_X_DV_a;          /* '<S67>/Constant_0_1' */
} ConstBlockIO_OpsReAlg_T;

/* Block signals (default storage) */
extern BlockIO_OpsReAlg_T OpsReAlg_B;

/* Block states (default storage) */
extern D_Work_OpsReAlg_T OpsReAlg_DWork;

/* Zero-crossing (trigger) state */
extern PrevZCSigStates_OpsReAlg_T OpsReAlg_PrevZCSigState;

/* External data declarations for dependent source files */
extern const OpsCshMgr_AlgorithmOutput_StructType
  OpsReAlg_rtZOpsCshMgr_AlgorithmOutput_StructType;
                               /* OpsCshMgr_AlgorithmOutput_StructType ground */
extern const B_SM_W_Measures OpsReAlg_rtZB_SM_W_Measures;/* B_SM_W_Measures ground */
extern const ConstBlockIO_OpsReAlg_T OpsReAlg_ConstB;/* constant block i/o */

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern OpsCshMgr_AlgorithmOutput_StructType OpsReAlg_Outputs;/* '<S1>/Bus Creator' */

/*
 * Exported States
 *
 * Note: Exported states are block states with an exported global
 * storage class designation.  Code generation will declare the memory for these
 * states and exports their symbols.
 *
 */
extern uint8_T RITA_INTRUSION_ROTATION_CRITERIA_CONFIG[6];
          /* Simulink.Signal object 'RITA_INTRUSION_ROTATION_CRITERIA_CONFIG' */
extern uint8_T RITA_INTRUSION_ROTATION_CRITERIA_NB;
              /* Simulink.Signal object 'RITA_INTRUSION_ROTATION_CRITERIA_NB' */
extern uint8_T RITA_IRC_INDEX_CONFIG[2];
                            /* Simulink.Signal object 'RITA_IRC_INDEX_CONFIG' */
extern uint8_T RITA_LGT_RSU_NB;   /* Simulink.Signal object 'RITA_LGT_RSU_NB' */

/* Model entry point functions */
void OpsReAlg_initialize(void);
void OpsReAlg_step(void);

/* Exported data declaration */

/* Const memory section */
/* Declaration for custom storage class: Const */
extern const uint8_T RITA_CFG_MAX_INTRUSION_ROTATION_CRITERIA_NB;
/* Referenced by: '<S6>/Constant_RITA_CFG_MAX_INTRUSION_ROTATION_CRITERIA_NB' */
extern const uint8_T R_CONFIG_CENTRAL_X_ACC_MAP;/* Referenced by:
                                                 * '<S50>/Constant_R_CONFIG_CENTRAL_X_ACC_MAP'
                                                 * '<S18>/Constant_R_CONFIG_CENTRAL_X_ACC_MAP'
                                                 * '<S31>/Constant_R_CONFIG_CENTRAL_X_ACC_MAP'
                                                 */
extern const uint8_T R_CONFIG_MAX_RSU_X_ACC_MAP;/* Referenced by:
                                                 * '<S18>/Constant_R_CONFIG_MAX_RSU_X_ACC_MAP'
                                                 * '<S43>/Constant_R_CONFIG_MAX_RSU_X_ACC_MAP'
                                                 */
extern const boolean_T R_CONFIG_QF_STATUS_MAP[5];/* Referenced by:
                                                  * '<S100>/Constant1'
                                                  * '<S101>/Constant1'
                                                  * '<S102>/Constant1'
                                                  * '<S103>/Constant1'
                                                  * '<S104>/Constant1'
                                                  * '<S105>/Constant1'
                                                  * '<S106>/Constant1'
                                                  */
extern const uint8_T R_CONFIG_RSU1_X_ACC_MAP;/* Referenced by:
                                              * '<S18>/Constant_R_CONFIG_RSU1_X_ACC_MAP'
                                              * '<S43>/Constant_R_CONFIG_RSU1_X_ACC_MAP'
                                              * '<S67>/Constant_R_CONFIG_RSU1_X_ACC_MAP'
                                              * '<S68>/Constant_R_CONFIG_RSU1_X_ACC_MAP'
                                              * '<S69>/Constant_R_CONFIG_RSU1_X_ACC_MAP'
                                              */
extern const uint8_T R_CONFIG_RSU2_X_ACC_MAP;/* Referenced by:
                                              * '<S68>/Constant_R_CONFIG_RSU2_X_ACC_MAP'
                                              * '<S69>/Constant_R_CONFIG_RSU2_X_ACC_MAP'
                                              */
extern const uint8_T R_CONFIG_RSU3_X_ACC_MAP;
                   /* Referenced by: '<S69>/Constant_R_CONFIG_RSU3_X_ACC_MAP' */

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S18>/Shift Arithmetic10' : Eliminated trivial shift
 * Block '<S3>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S67>/Signal Copy' : Eliminate redundant signal conversion block
 * Block '<S67>/Signal Copy1' : Eliminate redundant signal conversion block
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
 * hilite_system('RITA2_x/OpsReAlg')    - opens subsystem RITA2_x/OpsReAlg
 * hilite_system('RITA2_x/OpsReAlg/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'RITA2_x'
 * '<S1>'   : 'RITA2_x/OpsReAlg'
 * '<S2>'   : 'RITA2_x/OpsReAlg/OpsReAlgConfiguration'
 * '<S3>'   : 'RITA2_x/OpsReAlg/RITA'
 * '<S4>'   : 'RITA2_x/OpsReAlg/Sensor_selection_average'
 * '<S5>'   : 'RITA2_x/OpsReAlg/Unconf_Event_Logic'
 * '<S6>'   : 'RITA2_x/OpsReAlg/OpsReAlgConfiguration/OpsReAlgConfiguration_at_Init'
 * '<S7>'   : 'RITA2_x/OpsReAlg/OpsReAlgConfiguration/OpsReAlgConfiguration_at_Init/Compare To Zero'
 * '<S8>'   : 'RITA2_x/OpsReAlg/OpsReAlgConfiguration/OpsReAlgConfiguration_at_Init/Compare To Zero1'
 * '<S9>'   : 'RITA2_x/OpsReAlg/OpsReAlgConfiguration/OpsReAlgConfiguration_at_Init/Compare To Zero2'
 * '<S10>'  : 'RITA2_x/OpsReAlg/OpsReAlgConfiguration/OpsReAlgConfiguration_at_Init/RITA_Intrusion_Rotation_Cfg'
 * '<S11>'  : 'RITA2_x/OpsReAlg/RITA/Compare To Zero'
 * '<S12>'  : 'RITA2_x/OpsReAlg/RITA/Compute_Clock_1kHz'
 * '<S13>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising'
 * '<S14>'  : 'RITA2_x/OpsReAlg/RITA/Signal_Conditioning_1kHz_Failing'
 * '<S15>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing'
 * '<S16>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Activation_Handler'
 * '<S17>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core'
 * '<S18>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Activation_Handler/Confirmation'
 * '<S19>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Activation_Handler/SeverityFlags'
 * '<S20>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Activation_Handler/Confirmation/Compare To Constant2'
 * '<S21>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Activation_Handler/Confirmation/Compare To Constant3'
 * '<S22>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Activation_Handler/Confirmation/Compare To Constant4'
 * '<S23>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Activation_Handler/Confirmation/Compare To Constant6'
 * '<S24>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Activation_Handler/Confirmation/Compare To Constant7'
 * '<S25>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Activation_Handler/Confirmation/Compare To Constant8'
 * '<S26>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Activation_Handler/SeverityFlags/Check_Decision'
 * '<S27>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Activation_Handler/SeverityFlags/Compare To Zero1'
 * '<S28>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Activation_Handler/SeverityFlags/Compare To Zero2'
 * '<S29>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Activation_Handler/SeverityFlags/Check_Decision/Compare To Zero'
 * '<S30>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/Angle'
 * '<S31>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/Central_X_Acceleration'
 * '<S32>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/Central_X_DV'
 * '<S33>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/Cross_Immunity'
 * '<S34>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/Intrusion_Rotation_Criteria'
 * '<S35>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/No_RSU_X'
 * '<S36>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/RSU_X'
 * '<S37>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/Angle/Angle_2_For_Immunity'
 * '<S38>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/Angle/Compare To Zero'
 * '<S39>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/Central_X_Acceleration/Compute_and_Compare_CentX_Acc_Thresholds'
 * '<S40>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/Central_X_DV/Compute_and_Compare_DV_Thresholds'
 * '<S41>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/Cross_Immunity/Compare To Zero'
 * '<S42>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/Intrusion_Rotation_Criteria/Intrusion_Rotation_Criteria_Module'
 * '<S43>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/RSU_X/RSU_Acceleration'
 * '<S44>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/RSU_X/RSU_X_DV'
 * '<S45>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/RSU_X/RSU_Acceleration/Compute_and_Compare_RSU_X_Acc_Thresholds'
 * '<S46>'  : 'RITA2_x/OpsReAlg/RITA/RITA_Crash_1kHz_Raising/Core/RSU_X/RSU_X_DV/Compute_and_Compare_DV_Thresholds'
 * '<S47>'  : 'RITA2_x/OpsReAlg/RITA/Signal_Conditioning_1kHz_Failing/Central_X_Filtering'
 * '<S48>'  : 'RITA2_x/OpsReAlg/RITA/Signal_Conditioning_1kHz_Failing/RSU_X_Filtering'
 * '<S49>'  : 'RITA2_x/OpsReAlg/RITA/Signal_Conditioning_1kHz_Failing/RSU_X_Filtering/RSU_X_Filtering'
 * '<S50>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Central_X_For_SM'
 * '<S51>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Reset'
 * '<S52>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup'
 * '<S53>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Reset/DeltaVelocity_Reset'
 * '<S54>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Reset/Detect Increase2'
 * '<S55>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Reset/TimeOut'
 * '<S56>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Reset/Weak_Reset'
 * '<S57>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Reset/TimeOut/Compare To Constant'
 * '<S58>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning'
 * '<S59>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/Time_Clock_Computation'
 * '<S60>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/Vehicle_Status'
 * '<S61>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_Measures'
 * '<S62>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_RSU_Measures_and_Conditioning'
 * '<S63>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_Measures/DeltaVelocity_Offset'
 * '<S64>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_Measures/DeltaVelocity_Offset/Dead Zone Dynamic'
 * '<S65>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_RSU_Measures_and_Conditioning/RITA_Failure_Latch'
 * '<S66>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_RSU_Measures_and_Conditioning/RITA_RSU_Measures'
 * '<S67>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_RSU_Measures_and_Conditioning/RITA_RSU_Measures/RSU_DV_1RSU'
 * '<S68>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_RSU_Measures_and_Conditioning/RITA_RSU_Measures/RSU_DV_2RSU'
 * '<S69>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_RSU_Measures_and_Conditioning/RITA_RSU_Measures/RSU_DV_3RSU'
 * '<S70>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_RSU_Measures_and_Conditioning/RITA_RSU_Measures/RSU_DV_No_RSU'
 * '<S71>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_RSU_Measures_and_Conditioning/RITA_RSU_Measures/RSU_DV_1RSU/RSU1_DV_Computation1'
 * '<S72>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_RSU_Measures_and_Conditioning/RITA_RSU_Measures/RSU_DV_1RSU/RSU1_DV_Computation1/Dead Zone Dynamic'
 * '<S73>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_RSU_Measures_and_Conditioning/RITA_RSU_Measures/RSU_DV_2RSU/RSU1_DV_Computation2'
 * '<S74>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_RSU_Measures_and_Conditioning/RITA_RSU_Measures/RSU_DV_2RSU/RSU2_DV_Computation2'
 * '<S75>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_RSU_Measures_and_Conditioning/RITA_RSU_Measures/RSU_DV_2RSU/RSU1_DV_Computation2/Dead Zone Dynamic'
 * '<S76>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_RSU_Measures_and_Conditioning/RITA_RSU_Measures/RSU_DV_2RSU/RSU2_DV_Computation2/Dead Zone Dynamic'
 * '<S77>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_RSU_Measures_and_Conditioning/RITA_RSU_Measures/RSU_DV_3RSU/RSU1_DV_Computation3'
 * '<S78>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_RSU_Measures_and_Conditioning/RITA_RSU_Measures/RSU_DV_3RSU/RSU2_DV_Computation3'
 * '<S79>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_RSU_Measures_and_Conditioning/RITA_RSU_Measures/RSU_DV_3RSU/RSU3_DV_Computation3'
 * '<S80>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_RSU_Measures_and_Conditioning/RITA_RSU_Measures/RSU_DV_3RSU/RSU1_DV_Computation3/Dead Zone Dynamic'
 * '<S81>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_RSU_Measures_and_Conditioning/RITA_RSU_Measures/RSU_DV_3RSU/RSU2_DV_Computation3/Dead Zone Dynamic'
 * '<S82>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/RITA_Measures_and_Conditioning/RITA_RSU_Measures_and_Conditioning/RITA_RSU_Measures/RSU_DV_3RSU/RSU3_DV_Computation3/Dead Zone Dynamic'
 * '<S83>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/Time_Clock_Computation/Compare To Zero1'
 * '<S84>'  : 'RITA2_x/OpsReAlg/RITA/State_Manager_1kHz_Failing/Wakeup/Time_Clock_Computation/RITA_Wakeup'
 * '<S85>'  : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_QF_Central_Y'
 * '<S86>'  : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_QF_Conf_RSU1'
 * '<S87>'  : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_QF_Conf_RSU2'
 * '<S88>'  : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_QF_RSU1_X'
 * '<S89>'  : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_QF_RSU2_X'
 * '<S90>'  : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_QF_RSU3_X'
 * '<S91>'  : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_QF_Secondary_X'
 * '<S92>'  : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_Central_X'
 * '<S93>'  : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_Central_Y'
 * '<S94>'  : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_Conf_RSU1'
 * '<S95>'  : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_Conf_RSU2'
 * '<S96>'  : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_RSU1_X'
 * '<S97>'  : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_RSU2_X'
 * '<S98>'  : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_RSU3_X'
 * '<S99>'  : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_Secondary_X'
 * '<S100>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Qf_To_Status_Central_Y'
 * '<S101>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Qf_To_Status_Conf_RSU1'
 * '<S102>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Qf_To_Status_Conf_RSU2'
 * '<S103>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Qf_To_Status_RSU1_X'
 * '<S104>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Qf_To_Status_RSU2_X'
 * '<S105>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Qf_To_Status_RSU3_X'
 * '<S106>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Qf_To_Status_Secondary_X'
 * '<S107>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_Central_X/Symmetric_shift'
 * '<S108>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_Central_X/Symmetric_shift/Compare To Zero'
 * '<S109>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_Central_Y/Symmetric_shift'
 * '<S110>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_Central_Y/Symmetric_shift/Compare To Zero'
 * '<S111>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_Conf_RSU1/Symmetric_shift'
 * '<S112>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_Conf_RSU1/Symmetric_shift/Compare To Zero'
 * '<S113>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_Conf_RSU2/Symmetric_shift'
 * '<S114>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_Conf_RSU2/Symmetric_shift/Compare To Zero'
 * '<S115>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_RSU1_X/Symmetric_shift'
 * '<S116>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_RSU1_X/Symmetric_shift/Compare To Zero'
 * '<S117>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_RSU2_X/Symmetric_shift'
 * '<S118>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_RSU2_X/Symmetric_shift/Compare To Zero'
 * '<S119>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_RSU3_X/Symmetric_shift'
 * '<S120>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_RSU3_X/Symmetric_shift/Compare To Zero'
 * '<S121>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_Secondary_X/Symmetric_shift'
 * '<S122>' : 'RITA2_x/OpsReAlg/Sensor_selection_average/Average_data_Secondary_X/Symmetric_shift/Compare To Zero'
 */
#endif                                 /* RTW_HEADER_OpsReAlg_h_ */

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
