#ifdef _I_OpsReAlg_INTERFACE_CAL_H
#else
#define _I_OpsReAlg_INTERFACE_CAL_H 1

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
   Calibration layout 

******************************************************************************/
/*
Current revision: $Revision: 1.4 $
Checked in:       $Date: 2024/04/09 14:15:33CEST $
*/  
/*************************************************************************/ 

#include "CalibLayoutTypeDef_OpsReAlg.h"
#include <FixedCal.h>
#define OPSREALG_CALIB_GET_R_SIC_FLT_CENTRAL_X_DV(a)                 (CALHNDLR_REARALGO_CAL_PTR->stR_SIC_FLT_CENTRAL_X_DV) /* Filter Coefficients for RITA Central X DV */
#define OPSREALG_CALIB_GET_R_SIC_FLT_CENTRAL_X_DV_ADDR()            (&CALHNDLR_REARALGO_CAL_PTR->stR_SIC_FLT_CENTRAL_X_DV) /* Filter Coefficients for RITA Central X DV */
#define OPSREALG_CALIB_GET_R_SIC_FLT_CENTRAL_X(a)                    (CALHNDLR_REARALGO_CAL_PTR->stR_SIC_FLT_CENTRAL_X) /* Filter Coefficients for RITA Central X */
#define OPSREALG_CALIB_GET_R_SIC_FLT_CENTRAL_X_ADDR()               (&CALHNDLR_REARALGO_CAL_PTR->stR_SIC_FLT_CENTRAL_X) /* Filter Coefficients for RITA Central X */
#define OPSREALG_CALIB_GET_R_SIC_FLT_RSU_X(a)                        (CALHNDLR_REARALGO_CAL_PTR->stR_SIC_FLT_RSU_X[a]) /* Filter Coefficients for RITA RSU 3 */
#define OPSREALG_CALIB_GET_R_SIC_FLT_RSU_X_ADDR()                   (&CALHNDLR_REARALGO_CAL_PTR->stR_SIC_FLT_RSU_X[0]) /* Filter Coefficients for RITA RSU 3 */
#define OPSREALG_CALIB_GET_R_AH_PROT_REQUEST(a)                      (CALHNDLR_REARALGO_CAL_PTR->au64R_AH_PROT_REQUEST[a]) /* Protection Request associated to the bit 7 of the Rear decision word */
#define OPSREALG_CALIB_GET_R_AH_PROT_REQUEST_ADDR()                 (&CALHNDLR_REARALGO_CAL_PTR->au64R_AH_PROT_REQUEST[0]) /* Protection Request associated to the bit 7 of the Rear decision word */
#define OPSREALG_CALIB_GET_u64R_VR_LEFT_PROT_REQUEST()              (CALHNDLR_REARALGO_CAL_PTR->u64R_VR_LEFT_PROT_REQUEST) /* Protection Request associated to Rear decision word when Central Y is positive */
#define OPSREALG_CALIB_GET_u64R_VR_LEFT_PROT_REQUEST_ADDR()         (&CALHNDLR_REARALGO_CAL_PTR->u64R_VR_LEFT_PROT_REQUEST) /* Protection Request associated to Rear decision word when Central Y is positive */
#define OPSREALG_CALIB_GET_u64R_VR_RIGHT_PROT_REQUEST()             (CALHNDLR_REARALGO_CAL_PTR->u64R_VR_RIGHT_PROT_REQUEST) /* Protection Request associated to Rear decision word when Central Y is negative */
#define OPSREALG_CALIB_GET_u64R_VR_RIGHT_PROT_REQUEST_ADDR()        (&CALHNDLR_REARALGO_CAL_PTR->u64R_VR_RIGHT_PROT_REQUEST) /* Protection Request associated to Rear decision word when Central Y is negative */
#define OPSREALG_CALIB_GET_R_CentX_DV_Thr_ThrClass(a)                (CALHNDLR_REARALGO_CAL_PTR->as32R_CentX_DV_Thr_ThrClass[a]) /* Central X DV threshold 4 for Class2 */
#define OPSREALG_CALIB_GET_R_CentX_DV_Thr_ThrClass_ADDR()           (&CALHNDLR_REARALGO_CAL_PTR->as32R_CentX_DV_Thr_ThrClass[0]) /* Central X DV threshold 4 for Class2 */
#define OPSREALG_CALIB_GET_R_RSU_X_DV_Thr_ThrClass(a)                (CALHNDLR_REARALGO_CAL_PTR->as32R_RSU_X_DV_Thr_ThrClass[a]) /* Central X DV threshold 2 for Class2 */
#define OPSREALG_CALIB_GET_R_RSU_X_DV_Thr_ThrClass_ADDR()           (&CALHNDLR_REARALGO_CAL_PTR->as32R_RSU_X_DV_Thr_ThrClass[0]) /* Central X DV threshold 2 for Class2 */
#define OPSREALG_CALIB_GET_R_IRC_STOPSENSOR_THR(a)                   (CALHNDLR_REARALGO_CAL_PTR->as32R_IRC_STOPSENSOR_THR[a]) /* Velocity stop threshold for IRC2 */
#define OPSREALG_CALIB_GET_R_IRC_STOPSENSOR_THR_ADDR()              (&CALHNDLR_REARALGO_CAL_PTR->as32R_IRC_STOPSENSOR_THR[0]) /* Velocity stop threshold for IRC2 */
#define OPSREALG_CALIB_GET_R_IRC_THR(a)                              (CALHNDLR_REARALGO_CAL_PTR->as32R_IRC_THR[a]) /* Velocity / acceleration threshold for IRC2 */
#define OPSREALG_CALIB_GET_R_IRC_THR_ADDR()                         (&CALHNDLR_REARALGO_CAL_PTR->as32R_IRC_THR[0]) /* Velocity / acceleration threshold for IRC2 */
#define OPSREALG_CALIB_GET_s32R_SM_RESET_VELOCITY_THR()             (CALHNDLR_REARALGO_CAL_PTR->s32R_SM_RESET_VELOCITY_THR) /* Reset threshold for Velocity: Reset if CentX velocity is below threshold */
#define OPSREALG_CALIB_GET_s32R_SM_RESET_VELOCITY_THR_ADDR()        (&CALHNDLR_REARALGO_CAL_PTR->s32R_SM_RESET_VELOCITY_THR) /* Reset threshold for Velocity: Reset if CentX velocity is below threshold */
#define OPSREALG_CALIB_GET_R_CentX_Acc_Window_Thr(a)                 (CALHNDLR_REARALGO_CAL_PTR->au32R_CentX_Acc_Window_Thr[a]) /* Window for Central X Acceleration threshold 4 */
#define OPSREALG_CALIB_GET_R_CentX_Acc_Window_Thr_ADDR()            (&CALHNDLR_REARALGO_CAL_PTR->au32R_CentX_Acc_Window_Thr[0]) /* Window for Central X Acceleration threshold 4 */
#define OPSREALG_CALIB_GET_R_CentX_DV_Window_Thr(a)                  (CALHNDLR_REARALGO_CAL_PTR->au32R_CentX_DV_Window_Thr[a]) /* Window for Central X DV threshold 4 */
#define OPSREALG_CALIB_GET_R_CentX_DV_Window_Thr_ADDR()             (&CALHNDLR_REARALGO_CAL_PTR->au32R_CentX_DV_Window_Thr[0]) /* Window for Central X DV threshold 4 */
#define OPSREALG_CALIB_GET_R_RSU_X_Acc_Window_Thr(a)                 (CALHNDLR_REARALGO_CAL_PTR->au32R_RSU_X_Acc_Window_Thr[a]) /* Window for Central X Acceleration threshold 2 */
#define OPSREALG_CALIB_GET_R_RSU_X_Acc_Window_Thr_ADDR()            (&CALHNDLR_REARALGO_CAL_PTR->au32R_RSU_X_Acc_Window_Thr[0]) /* Window for Central X Acceleration threshold 2 */
#define OPSREALG_CALIB_GET_R_RSU_X_DV_Window_Thr(a)                  (CALHNDLR_REARALGO_CAL_PTR->au32R_RSU_X_DV_Window_Thr[a]) /* Window for Central X DV threshold 2 */
#define OPSREALG_CALIB_GET_R_RSU_X_DV_Window_Thr_ADDR()             (&CALHNDLR_REARALGO_CAL_PTR->au32R_RSU_X_DV_Window_Thr[0]) /* Window for Central X DV threshold 2 */
#define OPSREALG_CALIB_GET_u32R_ANGLE_THR1_WINDOW()                 (CALHNDLR_REARALGO_CAL_PTR->u32R_ANGLE_THR1_WINDOW) /* window that starts at algorithm start and, when it expires, disables angle threshold 1 */
#define OPSREALG_CALIB_GET_u32R_ANGLE_THR1_WINDOW_ADDR()            (&CALHNDLR_REARALGO_CAL_PTR->u32R_ANGLE_THR1_WINDOW) /* window that starts at algorithm start and, when it expires, disables angle threshold 1 */
#define OPSREALG_CALIB_GET_u32R_ANGLE_THR2_WINDOW()                 (CALHNDLR_REARALGO_CAL_PTR->u32R_ANGLE_THR2_WINDOW) /* window that starts at algorithm start and, when it expires, disables angle threshold 2 */
#define OPSREALG_CALIB_GET_u32R_ANGLE_THR2_WINDOW_ADDR()            (&CALHNDLR_REARALGO_CAL_PTR->u32R_ANGLE_THR2_WINDOW) /* window that starts at algorithm start and, when it expires, disables angle threshold 2 */
#define OPSREALG_CALIB_GET_R_CentX_Acc_Thr_ThrClass(a)               (CALHNDLR_REARALGO_CAL_PTR->as16R_CentX_Acc_Thr_ThrClass[a]) /* Central X Acceleration threshold 4 for Class2 */
#define OPSREALG_CALIB_GET_R_CentX_Acc_Thr_ThrClass_ADDR()          (&CALHNDLR_REARALGO_CAL_PTR->as16R_CentX_Acc_Thr_ThrClass[0]) /* Central X Acceleration threshold 4 for Class2 */
#define OPSREALG_CALIB_GET_R_RSU_X_Acc_Thr_ThrClass(a)               (CALHNDLR_REARALGO_CAL_PTR->as16R_RSU_X_Acc_Thr_ThrClass[a]) /* Central X Acceleration threshold 2 for Class2 */
#define OPSREALG_CALIB_GET_R_RSU_X_Acc_Thr_ThrClass_ADDR()          (&CALHNDLR_REARALGO_CAL_PTR->as16R_RSU_X_Acc_Thr_ThrClass[0]) /* Central X Acceleration threshold 2 for Class2 */
#define OPSREALG_CALIB_GET_s16R_SM_START_CENTRAL_X_ACC_THR()        (CALHNDLR_REARALGO_CAL_PTR->s16R_SM_START_CENTRAL_X_ACC_THR) /* Start threshold on low-pass filtered CentX acceleration */
#define OPSREALG_CALIB_GET_s16R_SM_START_CENTRAL_X_ACC_THR_ADDR()   (&CALHNDLR_REARALGO_CAL_PTR->s16R_SM_START_CENTRAL_X_ACC_THR) /* Start threshold on low-pass filtered CentX acceleration */
#define OPSREALG_CALIB_GET_s16R_SM_RESET_CENTRAL_X_ACC_THR()        (CALHNDLR_REARALGO_CAL_PTR->s16R_SM_RESET_CENTRAL_X_ACC_THR) /* Reset threshold on CentX acceleration signal */
#define OPSREALG_CALIB_GET_s16R_SM_RESET_CENTRAL_X_ACC_THR_ADDR()   (&CALHNDLR_REARALGO_CAL_PTR->s16R_SM_RESET_CENTRAL_X_ACC_THR) /* Reset threshold on CentX acceleration signal */
#define OPSREALG_CALIB_GET_s16R_SM_RESET_VELOCITY_BIAS()            (CALHNDLR_REARALGO_CAL_PTR->s16R_SM_RESET_VELOCITY_BIAS) /* Velocity Damping Factor */
#define OPSREALG_CALIB_GET_s16R_SM_RESET_VELOCITY_BIAS_ADDR()       (&CALHNDLR_REARALGO_CAL_PTR->s16R_SM_RESET_VELOCITY_BIAS) /* Velocity Damping Factor */
#define OPSREALG_CALIB_GET_s16R_CENTRAL_X_DV_BIAS()                 (CALHNDLR_REARALGO_CAL_PTR->s16R_CENTRAL_X_DV_BIAS) /* Central X Velocity Damping Factor */
#define OPSREALG_CALIB_GET_s16R_CENTRAL_X_DV_BIAS_ADDR()            (&CALHNDLR_REARALGO_CAL_PTR->s16R_CENTRAL_X_DV_BIAS) /* Central X Velocity Damping Factor */
#define OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS()                     (CALHNDLR_REARALGO_CAL_PTR->s16R_RSU_X_DV_BIAS) /* RSU-X Velocity Damping Factor */
#define OPSREALG_CALIB_GET_s16R_RSU_X_DV_BIAS_ADDR()                (&CALHNDLR_REARALGO_CAL_PTR->s16R_RSU_X_DV_BIAS) /* RSU-X Velocity Damping Factor */
#define OPSREALG_CALIB_GET_s16R_ANGLE_MIN_DENOMINATOR()             (CALHNDLR_REARALGO_CAL_PTR->s16R_ANGLE_MIN_DENOMINATOR) /* Minimum value of center X acceleration that is used in the denominator of the angle calculation */
#define OPSREALG_CALIB_GET_s16R_ANGLE_MIN_DENOMINATOR_ADDR()        (&CALHNDLR_REARALGO_CAL_PTR->s16R_ANGLE_MIN_DENOMINATOR) /* Minimum value of center X acceleration that is used in the denominator of the angle calculation */
#define OPSREALG_CALIB_GET_s16R_CONFIRMATION_CENTRAL_X_ACC_THR()    (CALHNDLR_REARALGO_CAL_PTR->s16R_CONFIRMATION_CENTRAL_X_ACC_THR) /* Central X Confirmation Threshold */
#define OPSREALG_CALIB_GET_s16R_CONFIRMATION_CENTRAL_X_ACC_THR_ADDR()(&CALHNDLR_REARALGO_CAL_PTR->s16R_CONFIRMATION_CENTRAL_X_ACC_THR) /* Central X Confirmation Threshold */
#define OPSREALG_CALIB_GET_s16R_CONFIRMATION_RSU_X_ACC_THR()        (CALHNDLR_REARALGO_CAL_PTR->s16R_CONFIRMATION_RSU_X_ACC_THR) /* RSU X Confirmation Threshold */
#define OPSREALG_CALIB_GET_s16R_CONFIRMATION_RSU_X_ACC_THR_ADDR()   (&CALHNDLR_REARALGO_CAL_PTR->s16R_CONFIRMATION_RSU_X_ACC_THR) /* RSU X Confirmation Threshold */
#define OPSREALG_CALIB_GET_s16R_CONFIRMATION_CENTRAL_Y_ACC_THR()    (CALHNDLR_REARALGO_CAL_PTR->s16R_CONFIRMATION_CENTRAL_Y_ACC_THR) /* Central Y Confirmation threshold */
#define OPSREALG_CALIB_GET_s16R_CONFIRMATION_CENTRAL_Y_ACC_THR_ADDR()(&CALHNDLR_REARALGO_CAL_PTR->s16R_CONFIRMATION_CENTRAL_Y_ACC_THR) /* Central Y Confirmation threshold */
#define OPSREALG_CALIB_GET_s16R_CONFIRMATION_RSU_ACC_THR()          (CALHNDLR_REARALGO_CAL_PTR->s16R_CONFIRMATION_RSU_ACC_THR) /* RSU X or Y Confirmation threshold */
#define OPSREALG_CALIB_GET_s16R_CONFIRMATION_RSU_ACC_THR_ADDR()     (&CALHNDLR_REARALGO_CAL_PTR->s16R_CONFIRMATION_RSU_ACC_THR) /* RSU X or Y Confirmation threshold */
#define OPSREALG_CALIB_GET_s16R_CONFIRMATION_SECONDARY_X_ACC_THR()  (CALHNDLR_REARALGO_CAL_PTR->s16R_CONFIRMATION_SECONDARY_X_ACC_THR) /* Secondary X Confirmation threshold */
#define OPSREALG_CALIB_GET_s16R_CONFIRMATION_SECONDARY_X_ACC_THR_ADDR()(&CALHNDLR_REARALGO_CAL_PTR->s16R_CONFIRMATION_SECONDARY_X_ACC_THR) /* Secondary X Confirmation threshold */
#define OPSREALG_CALIB_GET_R_AH_SEV_OUTPUT(a)                        (CALHNDLR_REARALGO_CAL_PTR->au16R_AH_SEV_OUTPUT[a]) /* Severity associated to the bit 7 of the Rear decision word */
#define OPSREALG_CALIB_GET_R_AH_SEV_OUTPUT_ADDR()                   (&CALHNDLR_REARALGO_CAL_PTR->au16R_AH_SEV_OUTPUT[0]) /* Severity associated to the bit 7 of the Rear decision word */
#define OPSREALG_CALIB_GET_u16R_SM_RESET_HARD_TIME()                (CALHNDLR_REARALGO_CAL_PTR->u16R_SM_RESET_HARD_TIME) /* RITA Hard Reset time (Maximum duration of an enabled state) */
#define OPSREALG_CALIB_GET_u16R_SM_RESET_HARD_TIME_ADDR()           (&CALHNDLR_REARALGO_CAL_PTR->u16R_SM_RESET_HARD_TIME) /* RITA Hard Reset time (Maximum duration of an enabled state) */
#define OPSREALG_CALIB_GET_u16R_SM_RESET_HARD_TIME_EXTENSION()      (CALHNDLR_REARALGO_CAL_PTR->u16R_SM_RESET_HARD_TIME_EXTENSION) /* RITA Hard Reset time extension when LISA Deployment > 0 */
#define OPSREALG_CALIB_GET_u16R_SM_RESET_HARD_TIME_EXTENSION_ADDR() (&CALHNDLR_REARALGO_CAL_PTR->u16R_SM_RESET_HARD_TIME_EXTENSION) /* RITA Hard Reset time extension when LISA Deployment > 0 */
#define OPSREALG_CALIB_GET_u16R_SM_RESET_VELOCITY_START()           (CALHNDLR_REARALGO_CAL_PTR->u16R_SM_RESET_VELOCITY_START) /* Time from RITA Start to have possible velocity reset */
#define OPSREALG_CALIB_GET_u16R_SM_RESET_VELOCITY_START_ADDR()      (&CALHNDLR_REARALGO_CAL_PTR->u16R_SM_RESET_VELOCITY_START) /* Time from RITA Start to have possible velocity reset */
#define OPSREALG_CALIB_GET_u16R_ANGLE_THR1()                        (CALHNDLR_REARALGO_CAL_PTR->u16R_ANGLE_THR1) /* Threshold 1 on Angle */
#define OPSREALG_CALIB_GET_u16R_ANGLE_THR1_ADDR()                   (&CALHNDLR_REARALGO_CAL_PTR->u16R_ANGLE_THR1) /* Threshold 1 on Angle */
#define OPSREALG_CALIB_GET_u16R_ANGLE_THR2()                        (CALHNDLR_REARALGO_CAL_PTR->u16R_ANGLE_THR2) /* Side Immunity mode Threshold */
#define OPSREALG_CALIB_GET_u16R_ANGLE_THR2_ADDR()                   (&CALHNDLR_REARALGO_CAL_PTR->u16R_ANGLE_THR2) /* Side Immunity mode Threshold */
#define OPSREALG_CALIB_GET_u16R_SIDE_IMMUNITY_SEV_MASK()            (CALHNDLR_REARALGO_CAL_PTR->u16R_SIDE_IMMUNITY_SEV_MASK) /* Side Immunity Severity Mask */
#define OPSREALG_CALIB_GET_u16R_SIDE_IMMUNITY_SEV_MASK_ADDR()       (&CALHNDLR_REARALGO_CAL_PTR->u16R_SIDE_IMMUNITY_SEV_MASK) /* Side Immunity Severity Mask */
#define OPSREALG_CALIB_GET_u16R_AH_SEV_OUTPUT_WO_CONFIRMATION()     (CALHNDLR_REARALGO_CAL_PTR->u16R_AH_SEV_OUTPUT_WO_CONFIRMATION) /* Severity associated to the Rear decision word when unconfirmed */
#define OPSREALG_CALIB_GET_u16R_AH_SEV_OUTPUT_WO_CONFIRMATION_ADDR()(&CALHNDLR_REARALGO_CAL_PTR->u16R_AH_SEV_OUTPUT_WO_CONFIRMATION) /* Severity associated to the Rear decision word when unconfirmed */
#define OPSREALG_CALIB_GET_R_CentX_Acc_Latch_Time_Thr(a)             (CALHNDLR_REARALGO_CAL_PTR->au8R_CentX_Acc_Latch_Time_Thr[a]) /* Latch for Central X Acceleration threshold 4 */
#define OPSREALG_CALIB_GET_R_CentX_Acc_Latch_Time_Thr_ADDR()        (&CALHNDLR_REARALGO_CAL_PTR->au8R_CentX_Acc_Latch_Time_Thr[0]) /* Latch for Central X Acceleration threshold 4 */
#define OPSREALG_CALIB_GET_R_CentX_Acc_Thr_bitword(a)                (CALHNDLR_REARALGO_CAL_PTR->au8R_CentX_Acc_Thr_bitword[a]) /* Bitword for Central X Acceleration threshold 4 */
#define OPSREALG_CALIB_GET_R_CentX_Acc_Thr_bitword_ADDR()           (&CALHNDLR_REARALGO_CAL_PTR->au8R_CentX_Acc_Thr_bitword[0]) /* Bitword for Central X Acceleration threshold 4 */
#define OPSREALG_CALIB_GET_R_CentX_DV_Thr_bitword(a)                 (CALHNDLR_REARALGO_CAL_PTR->au8R_CentX_DV_Thr_bitword[a]) /* Bitword for Central X DV threshold 4 */
#define OPSREALG_CALIB_GET_R_CentX_DV_Thr_bitword_ADDR()            (&CALHNDLR_REARALGO_CAL_PTR->au8R_CentX_DV_Thr_bitword[0]) /* Bitword for Central X DV threshold 4 */
#define OPSREALG_CALIB_GET_R_SM_FAILED_RSU_X_ThrClass(a)             (CALHNDLR_REARALGO_CAL_PTR->au8R_SM_FAILED_RSU_X_ThrClass[a]) /* Selects which of the THR_CLASS_0, 1, 2 to be used to replace THR_CLASS_0 mapping if any of 3 RSU_X is failed  */
#define OPSREALG_CALIB_GET_R_SM_FAILED_RSU_X_ThrClass_ADDR()        (&CALHNDLR_REARALGO_CAL_PTR->au8R_SM_FAILED_RSU_X_ThrClass[0]) /* Selects which of the THR_CLASS_0, 1, 2 to be used to replace THR_CLASS_0 mapping if any of 3 RSU_X is failed  */
#define OPSREALG_CALIB_GET_R_RSU_X_Acc_Latch_Time_Thr(a)             (CALHNDLR_REARALGO_CAL_PTR->au8R_RSU_X_Acc_Latch_Time_Thr[a]) /* Latch for Central X Acceleration threshold 2 */
#define OPSREALG_CALIB_GET_R_RSU_X_Acc_Latch_Time_Thr_ADDR()        (&CALHNDLR_REARALGO_CAL_PTR->au8R_RSU_X_Acc_Latch_Time_Thr[0]) /* Latch for Central X Acceleration threshold 2 */
#define OPSREALG_CALIB_GET_R_RSU_X_Acc_Thr_bitword(a)                (CALHNDLR_REARALGO_CAL_PTR->au8R_RSU_X_Acc_Thr_bitword[a]) /* Bitword for Central X Acceleration threshold 2 */
#define OPSREALG_CALIB_GET_R_RSU_X_Acc_Thr_bitword_ADDR()           (&CALHNDLR_REARALGO_CAL_PTR->au8R_RSU_X_Acc_Thr_bitword[0]) /* Bitword for Central X Acceleration threshold 2 */
#define OPSREALG_CALIB_GET_R_RSU_X_DV_Thr_bitword(a)                 (CALHNDLR_REARALGO_CAL_PTR->au8R_RSU_X_DV_Thr_bitword[a]) /* Bitword for Central X DV threshold 2 */
#define OPSREALG_CALIB_GET_R_RSU_X_DV_Thr_bitword_ADDR()            (&CALHNDLR_REARALGO_CAL_PTR->au8R_RSU_X_DV_Thr_bitword[0]) /* Bitword for Central X DV threshold 2 */
#define OPSREALG_CALIB_GET_R_IRC_TYPE(a)                             (CALHNDLR_REARALGO_CAL_PTR->au8R_IRC_TYPE[a]) /* Select the type of the Signal going into the computation of the Intrusion Rotation Criteria 2 */
#define OPSREALG_CALIB_GET_R_IRC_TYPE_ADDR()                        (&CALHNDLR_REARALGO_CAL_PTR->au8R_IRC_TYPE[0]) /* Select the type of the Signal going into the computation of the Intrusion Rotation Criteria 2 */
#define OPSREALG_CALIB_GET_R_IRC_SENSOR1_CHOICE(a)                   (CALHNDLR_REARALGO_CAL_PTR->au8R_IRC_SENSOR1_CHOICE[a]) /* Sensor 1 used to compute Intrusion Rotation Criteria 2 */
#define OPSREALG_CALIB_GET_R_IRC_SENSOR1_CHOICE_ADDR()              (&CALHNDLR_REARALGO_CAL_PTR->au8R_IRC_SENSOR1_CHOICE[0]) /* Sensor 1 used to compute Intrusion Rotation Criteria 2 */
#define OPSREALG_CALIB_GET_R_IRC_SENSOR2_CHOICE(a)                   (CALHNDLR_REARALGO_CAL_PTR->au8R_IRC_SENSOR2_CHOICE[a]) /* Sensor 2 used to compute Intrusion Rotation Criteria 2 */
#define OPSREALG_CALIB_GET_R_IRC_SENSOR2_CHOICE_ADDR()              (&CALHNDLR_REARALGO_CAL_PTR->au8R_IRC_SENSOR2_CHOICE[0]) /* Sensor 2 used to compute Intrusion Rotation Criteria 2 */
#define OPSREALG_CALIB_GET_R_IRC_STOPSENSOR_CHOICE(a)                (CALHNDLR_REARALGO_CAL_PTR->au8R_IRC_STOPSENSOR_CHOICE[a]) /* Sensor used to stop Intrusion Rotation Criteria 2 computation */
#define OPSREALG_CALIB_GET_R_IRC_STOPSENSOR_CHOICE_ADDR()           (&CALHNDLR_REARALGO_CAL_PTR->au8R_IRC_STOPSENSOR_CHOICE[0]) /* Sensor used to stop Intrusion Rotation Criteria 2 computation */
#define OPSREALG_CALIB_GET_R_IRC_PassThru_bitword(a)                 (CALHNDLR_REARALGO_CAL_PTR->au8R_IRC_PassThru_bitword[a]) /* Intrusion Rotation Criteria 2 PassThru bitword */
#define OPSREALG_CALIB_GET_R_IRC_PassThru_bitword_ADDR()            (&CALHNDLR_REARALGO_CAL_PTR->au8R_IRC_PassThru_bitword[0]) /* Intrusion Rotation Criteria 2 PassThru bitword */
#define OPSREALG_CALIB_GET_R_IRC_Severity_1_bitword(a)               (CALHNDLR_REARALGO_CAL_PTR->au8R_IRC_Severity_1_bitword[a]) /* Intrusion Rotation Criteria 2 bitword when IRC2 crosses the threshold before stop */
#define OPSREALG_CALIB_GET_R_IRC_Severity_1_bitword_ADDR()          (&CALHNDLR_REARALGO_CAL_PTR->au8R_IRC_Severity_1_bitword[0]) /* Intrusion Rotation Criteria 2 bitword when IRC2 crosses the threshold before stop */
#define OPSREALG_CALIB_GET_R_IRC_Severity_2_bitword(a)               (CALHNDLR_REARALGO_CAL_PTR->au8R_IRC_Severity_2_bitword[a]) /* Intrusion Rotation Criteria 2 bitword when IRC2 does not cross the threshold before stop */
#define OPSREALG_CALIB_GET_R_IRC_Severity_2_bitword_ADDR()          (&CALHNDLR_REARALGO_CAL_PTR->au8R_IRC_Severity_2_bitword[0]) /* Intrusion Rotation Criteria 2 bitword when IRC2 does not cross the threshold before stop */
#define OPSREALG_CALIB_GET_u8R_CONFIG_LGT_CENTRAL_SENSOR_INDEX()    (CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIG_LGT_CENTRAL_SENSOR_INDEX) /* Sensor Index at RTE of Central Tunnel X acceleration sensor */
#define OPSREALG_CALIB_GET_u8R_CONFIG_LGT_CENTRAL_SENSOR_INDEX_ADDR()(&CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIG_LGT_CENTRAL_SENSOR_INDEX) /* Sensor Index at RTE of Central Tunnel X acceleration sensor */
#define OPSREALG_CALIB_GET_u8R_CONFIG_LAT_CENTRAL_SENSOR_INDEX()    (CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIG_LAT_CENTRAL_SENSOR_INDEX) /* Sensor Index at RTE of Central Tunnel Y acceleration sensor */
#define OPSREALG_CALIB_GET_u8R_CONFIG_LAT_CENTRAL_SENSOR_INDEX_ADDR()(&CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIG_LAT_CENTRAL_SENSOR_INDEX) /* Sensor Index at RTE of Central Tunnel Y acceleration sensor */
#define OPSREALG_CALIB_GET_u8R_CONFIG_LGT_RSU1_SENSOR_INDEX()       (CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIG_LGT_RSU1_SENSOR_INDEX) /* Sensor Index at RTE of Longitunal RSU 1 acceleration sensor */
#define OPSREALG_CALIB_GET_u8R_CONFIG_LGT_RSU1_SENSOR_INDEX_ADDR()  (&CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIG_LGT_RSU1_SENSOR_INDEX) /* Sensor Index at RTE of Longitunal RSU 1 acceleration sensor */
#define OPSREALG_CALIB_GET_u8R_CONFIG_LGT_RSU2_SENSOR_INDEX()       (CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIG_LGT_RSU2_SENSOR_INDEX) /* Sensor Index at RTE of Longitunal RSU 2 acceleration sensor */
#define OPSREALG_CALIB_GET_u8R_CONFIG_LGT_RSU2_SENSOR_INDEX_ADDR()  (&CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIG_LGT_RSU2_SENSOR_INDEX) /* Sensor Index at RTE of Longitunal RSU 2 acceleration sensor */
#define OPSREALG_CALIB_GET_u8R_CONFIG_LGT_RSU3_SENSOR_INDEX()       (CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIG_LGT_RSU3_SENSOR_INDEX) /* Sensor Index at RTE of Longitunal RSU 3 acceleration sensor */
#define OPSREALG_CALIB_GET_u8R_CONFIG_LGT_RSU3_SENSOR_INDEX_ADDR()  (&CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIG_LGT_RSU3_SENSOR_INDEX) /* Sensor Index at RTE of Longitunal RSU 3 acceleration sensor */
#define OPSREALG_CALIB_GET_u8R_CONFIG_CONF_RSU1_SENSOR_INDEX()      (CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIG_CONF_RSU1_SENSOR_INDEX) /* Sensor Index at RTE of Conf RSU1 X or Y acceleration sensor */
#define OPSREALG_CALIB_GET_u8R_CONFIG_CONF_RSU1_SENSOR_INDEX_ADDR() (&CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIG_CONF_RSU1_SENSOR_INDEX) /* Sensor Index at RTE of Conf RSU1 X or Y acceleration sensor */
#define OPSREALG_CALIB_GET_u8R_CONFIG_CONF_RSU2_SENSOR_INDEX()      (CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIG_CONF_RSU2_SENSOR_INDEX) /* Sensor Index at RTE of Conf RSU2 X or Y acceleration sensor */
#define OPSREALG_CALIB_GET_u8R_CONFIG_CONF_RSU2_SENSOR_INDEX_ADDR() (&CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIG_CONF_RSU2_SENSOR_INDEX) /* Sensor Index at RTE of Conf RSU2 X or Y acceleration sensor */
#define OPSREALG_CALIB_GET_u8R_CONFIG_LGT_SECONDARY_SENSOR_INDEX()  (CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIG_LGT_SECONDARY_SENSOR_INDEX) /* Sensor Index at RTE of Secondary X acceleration sensor */
#define OPSREALG_CALIB_GET_u8R_CONFIG_LGT_SECONDARY_SENSOR_INDEX_ADDR()(&CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIG_LGT_SECONDARY_SENSOR_INDEX) /* Sensor Index at RTE of Secondary X acceleration sensor */
#define OPSREALG_CALIB_GET_u8R_SM_X_ACC_FILTER()                    (CALHNDLR_REARALGO_CAL_PTR->u8R_SM_X_ACC_FILTER) /* Choice between Cent_X (2nd order filter) and X_DV (1st order) filter for algo Start */
#define OPSREALG_CALIB_GET_u8R_SM_X_ACC_FILTER_ADDR()               (&CALHNDLR_REARALGO_CAL_PTR->u8R_SM_X_ACC_FILTER) /* Choice between Cent_X (2nd order filter) and X_DV (1st order) filter for algo Start */
#define OPSREALG_CALIB_GET_u8R_SM_RESET_WEAK_TIME()                 (CALHNDLR_REARALGO_CAL_PTR->u8R_SM_RESET_WEAK_TIME) /* Time below CentX and Max(RSU) thresholds after which reset occurs */
#define OPSREALG_CALIB_GET_u8R_SM_RESET_WEAK_TIME_ADDR()            (&CALHNDLR_REARALGO_CAL_PTR->u8R_SM_RESET_WEAK_TIME) /* Time below CentX and Max(RSU) thresholds after which reset occurs */
#define OPSREALG_CALIB_GET_u8R_CentX_Acc_PassThru_bitword()         (CALHNDLR_REARALGO_CAL_PTR->u8R_CentX_Acc_PassThru_bitword) /* Bitword for Central X Acceleration not needed */
#define OPSREALG_CALIB_GET_u8R_CentX_Acc_PassThru_bitword_ADDR()    (&CALHNDLR_REARALGO_CAL_PTR->u8R_CentX_Acc_PassThru_bitword) /* Bitword for Central X Acceleration not needed */
#define OPSREALG_CALIB_GET_u8R_CentX_DV_PassThru_bitword()          (CALHNDLR_REARALGO_CAL_PTR->u8R_CentX_DV_PassThru_bitword) /* Bitword for Central X DV not needed */
#define OPSREALG_CALIB_GET_u8R_CentX_DV_PassThru_bitword_ADDR()     (&CALHNDLR_REARALGO_CAL_PTR->u8R_CentX_DV_PassThru_bitword) /* Bitword for Central X DV not needed */
#define OPSREALG_CALIB_GET_u8R_RSU_X_Acc_PassThru_bitword()         (CALHNDLR_REARALGO_CAL_PTR->u8R_RSU_X_Acc_PassThru_bitword) /* Bitword for Central X Acceleration not needed */
#define OPSREALG_CALIB_GET_u8R_RSU_X_Acc_PassThru_bitword_ADDR()    (&CALHNDLR_REARALGO_CAL_PTR->u8R_RSU_X_Acc_PassThru_bitword) /* Bitword for Central X Acceleration not needed */
#define OPSREALG_CALIB_GET_u8R_SIC_DV_BUFFER_LENGTH()               (CALHNDLR_REARALGO_CAL_PTR->u8R_SIC_DV_BUFFER_LENGTH) /* Size of pre-Entry DV buffer for all Longitudinal RSU Sensors */
#define OPSREALG_CALIB_GET_u8R_SIC_DV_BUFFER_LENGTH_ADDR()          (&CALHNDLR_REARALGO_CAL_PTR->u8R_SIC_DV_BUFFER_LENGTH) /* Size of pre-Entry DV buffer for all Longitudinal RSU Sensors */
#define OPSREALG_CALIB_GET_u8R_RSU_X_DV_PassThru_bitword()          (CALHNDLR_REARALGO_CAL_PTR->u8R_RSU_X_DV_PassThru_bitword) /* Bitword for Central X DV not needed */
#define OPSREALG_CALIB_GET_u8R_RSU_X_DV_PassThru_bitword_ADDR()     (&CALHNDLR_REARALGO_CAL_PTR->u8R_RSU_X_DV_PassThru_bitword) /* Bitword for Central X DV not needed */
#define OPSREALG_CALIB_GET_u8R_Allowed_path_in_backup_bitword()     (CALHNDLR_REARALGO_CAL_PTR->u8R_Allowed_path_in_backup_bitword) /* Bitword for RSU X path allowed in Backup */
#define OPSREALG_CALIB_GET_u8R_Allowed_path_in_backup_bitword_ADDR()(&CALHNDLR_REARALGO_CAL_PTR->u8R_Allowed_path_in_backup_bitword) /* Bitword for RSU X path allowed in Backup */
#define OPSREALG_CALIB_GET_u8R_Backup_path_bitword()                (CALHNDLR_REARALGO_CAL_PTR->u8R_Backup_path_bitword) /* Bitword for RSU X Backup path */
#define OPSREALG_CALIB_GET_u8R_Backup_path_bitword_ADDR()           (&CALHNDLR_REARALGO_CAL_PTR->u8R_Backup_path_bitword) /* Bitword for RSU X Backup path */
#define OPSREALG_CALIB_GET_u8R_ANGLE_PassThru_bitword()             (CALHNDLR_REARALGO_CAL_PTR->u8R_ANGLE_PassThru_bitword) /* Bitword for Angle not needed */
#define OPSREALG_CALIB_GET_u8R_ANGLE_PassThru_bitword_ADDR()        (&CALHNDLR_REARALGO_CAL_PTR->u8R_ANGLE_PassThru_bitword) /* Bitword for Angle not needed */
#define OPSREALG_CALIB_GET_u8R_ANGLE_Thr1_bitword()                 (CALHNDLR_REARALGO_CAL_PTR->u8R_ANGLE_Thr1_bitword) /* Bitword for Angle threshold 1 */
#define OPSREALG_CALIB_GET_u8R_ANGLE_Thr1_bitword_ADDR()            (&CALHNDLR_REARALGO_CAL_PTR->u8R_ANGLE_Thr1_bitword) /* Bitword for Angle threshold 1 */
#define OPSREALG_CALIB_GET_u8R_ANGLE_Thr2_bitword()                 (CALHNDLR_REARALGO_CAL_PTR->u8R_ANGLE_Thr2_bitword) /* Bitword for Angle threshold 2 */
#define OPSREALG_CALIB_GET_u8R_ANGLE_Thr2_bitword_ADDR()            (&CALHNDLR_REARALGO_CAL_PTR->u8R_ANGLE_Thr2_bitword) /* Bitword for Angle threshold 2 */
#define OPSREALG_CALIB_GET_u8R_SIDE_IMMUNITY_LEFT_ALGO_INDEX()      (CALHNDLR_REARALGO_CAL_PTR->u8R_SIDE_IMMUNITY_LEFT_ALGO_INDEX) /* Configuration Index of the Side Left Severity Output */
#define OPSREALG_CALIB_GET_u8R_SIDE_IMMUNITY_LEFT_ALGO_INDEX_ADDR() (&CALHNDLR_REARALGO_CAL_PTR->u8R_SIDE_IMMUNITY_LEFT_ALGO_INDEX) /* Configuration Index of the Side Left Severity Output */
#define OPSREALG_CALIB_GET_u8R_SIDE_IMMUNITY_RIGHT_ALGO_INDEX()     (CALHNDLR_REARALGO_CAL_PTR->u8R_SIDE_IMMUNITY_RIGHT_ALGO_INDEX) /* Configuration Index of the Side Right Severity Output */
#define OPSREALG_CALIB_GET_u8R_SIDE_IMMUNITY_RIGHT_ALGO_INDEX_ADDR()(&CALHNDLR_REARALGO_CAL_PTR->u8R_SIDE_IMMUNITY_RIGHT_ALGO_INDEX) /* Configuration Index of the Side Right Severity Output */
#define OPSREALG_CALIB_GET_u8R_SIDE_IMMUNITY_bitword_0()            (CALHNDLR_REARALGO_CAL_PTR->u8R_SIDE_IMMUNITY_bitword_0) /* Side Immunity Pathword 0 */
#define OPSREALG_CALIB_GET_u8R_SIDE_IMMUNITY_bitword_0_ADDR()       (&CALHNDLR_REARALGO_CAL_PTR->u8R_SIDE_IMMUNITY_bitword_0) /* Side Immunity Pathword 0 */
#define OPSREALG_CALIB_GET_u8R_SIDE_IMMUNITY_bitword_1()            (CALHNDLR_REARALGO_CAL_PTR->u8R_SIDE_IMMUNITY_bitword_1) /* Side Immunity Pathword 1 */
#define OPSREALG_CALIB_GET_u8R_SIDE_IMMUNITY_bitword_1_ADDR()       (&CALHNDLR_REARALGO_CAL_PTR->u8R_SIDE_IMMUNITY_bitword_1) /* Side Immunity Pathword 1 */
#define OPSREALG_CALIB_GET_u8R_CONFIRMATION_MASK1()                 (CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIRMATION_MASK1) /* Secondary Confirmation Sensor Selection */
#define OPSREALG_CALIB_GET_u8R_CONFIRMATION_MASK1_ADDR()            (&CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIRMATION_MASK1) /* Secondary Confirmation Sensor Selection */
#define OPSREALG_CALIB_GET_u8R_CONFIRMATION_MASK2()                 (CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIRMATION_MASK2) /* Backup Confirmation Sensor Selection */
#define OPSREALG_CALIB_GET_u8R_CONFIRMATION_MASK2_ADDR()            (&CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIRMATION_MASK2) /* Backup Confirmation Sensor Selection */
#define OPSREALG_CALIB_GET_u8R_CONFIRMATION_MASK3()                 (CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIRMATION_MASK3) /* Second Backup Confirmation Sensor Selection */
#define OPSREALG_CALIB_GET_u8R_CONFIRMATION_MASK3_ADDR()            (&CALHNDLR_REARALGO_CAL_PTR->u8R_CONFIRMATION_MASK3) /* Second Backup Confirmation Sensor Selection */
#define OPSREALG_CALIB_GET_u8R_VR_USED_bitword()                    (CALHNDLR_REARALGO_CAL_PTR->u8R_VR_USED_bitword) /* Selection of path using Vehicle Rotation information */
#define OPSREALG_CALIB_GET_u8R_VR_USED_bitword_ADDR()               (&CALHNDLR_REARALGO_CAL_PTR->u8R_VR_USED_bitword) /* Selection of path using Vehicle Rotation information */
#define OPSREALG_CALIB_GET_bR_Select_MAX_RSU_X_or_RSU1_X_Acc_DV()   (CALHNDLR_REARALGO_CAL_PTR->bR_Select_MAX_RSU_X_or_RSU1_X_Acc_DV) /* Select to use Max RSU or RSU 1 signal for Acc and DV criteria */
#define OPSREALG_CALIB_GET_bR_Select_MAX_RSU_X_or_RSU1_X_Acc_DV_ADDR()(&CALHNDLR_REARALGO_CAL_PTR->bR_Select_MAX_RSU_X_or_RSU1_X_Acc_DV) /* Select to use Max RSU or RSU 1 signal for Acc and DV criteria */
#define OPSREALG_CALIB_GET_bR_CONFIG_ANGLE_VR()                     (CALHNDLR_REARALGO_CAL_PTR->bR_CONFIG_ANGLE_VR) /* Selection between LISA Angle or LISA Angle_VR */
#define OPSREALG_CALIB_GET_bR_CONFIG_ANGLE_VR_ADDR()                (&CALHNDLR_REARALGO_CAL_PTR->bR_CONFIG_ANGLE_VR) /* Selection between LISA Angle or LISA Angle_VR */
#define OPSREALG_CALIB_GET_bR_ANGLE_2_For_Immunity()                (CALHNDLR_REARALGO_CAL_PTR->bR_ANGLE_2_For_Immunity) /* Select if Angle 2 is used for Discrimination (0) or for Immunity (1) */
#define OPSREALG_CALIB_GET_bR_ANGLE_2_For_Immunity_ADDR()           (&CALHNDLR_REARALGO_CAL_PTR->bR_ANGLE_2_For_Immunity) /* Select if Angle 2 is used for Discrimination (0) or for Immunity (1) */


#endif /* _I_OpsReAlg_INTERFACE_CAL_H */