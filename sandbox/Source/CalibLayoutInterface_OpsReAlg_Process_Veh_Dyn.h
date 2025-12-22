#ifdef _I_OpsReAlg_Process_Veh_Dyn_INTERFACE_CAL_H
#else
#define _I_OpsReAlg_Process_Veh_Dyn_INTERFACE_CAL_H 1

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

#include "CalibLayoutTypeDef_OpsReAlg_Process_Veh_Dyn.h"
#include <FixedCal.h>
#define OPSREALG_PROCESS_VEH_DYN_CALIB_GET_s16R_ST_SIC_VEHICLE_SPEED_DEFAULT()(CALHNDLR_REARALGO_CAL_PTR->SlowTaskCalibArea.s16R_ST_SIC_VEHICLE_SPEED_DEFAULT) /* Default value of Vehicle Speed to use in RITA */
#define OPSREALG_PROCESS_VEH_DYN_CALIB_GET_s16R_ST_SIC_VEHICLE_SPEED_DEFAULT_ADDR()(&CALHNDLR_REARALGO_CAL_PTR->SlowTaskCalibArea.s16R_ST_SIC_VEHICLE_SPEED_DEFAULT) /* Default value of Vehicle Speed to use in RITA */
#define OPSREALG_PROCESS_VEH_DYN_CALIB_GET_s16R_ST_SIC_VEHICLE_SPEED_RATE_LIMIT_POS()(CALHNDLR_REARALGO_CAL_PTR->SlowTaskCalibArea.s16R_ST_SIC_VEHICLE_SPEED_RATE_LIMIT_POS) /* Largest increase useable of Vehicle Speed per adjustment in RITA */
#define OPSREALG_PROCESS_VEH_DYN_CALIB_GET_s16R_ST_SIC_VEHICLE_SPEED_RATE_LIMIT_POS_ADDR()(&CALHNDLR_REARALGO_CAL_PTR->SlowTaskCalibArea.s16R_ST_SIC_VEHICLE_SPEED_RATE_LIMIT_POS) /* Largest increase useable of Vehicle Speed per adjustment in RITA */
#define OPSREALG_PROCESS_VEH_DYN_CALIB_GET_s16R_ST_SIC_VEHICLE_SPEED_RATE_LIMIT_NEG()(CALHNDLR_REARALGO_CAL_PTR->SlowTaskCalibArea.s16R_ST_SIC_VEHICLE_SPEED_RATE_LIMIT_NEG) /* Largest decrease useable of Vehicle Speed per adjustment in RITA */
#define OPSREALG_PROCESS_VEH_DYN_CALIB_GET_s16R_ST_SIC_VEHICLE_SPEED_RATE_LIMIT_NEG_ADDR()(&CALHNDLR_REARALGO_CAL_PTR->SlowTaskCalibArea.s16R_ST_SIC_VEHICLE_SPEED_RATE_LIMIT_NEG) /* Largest decrease useable of Vehicle Speed per adjustment in RITA */
#define OPSREALG_PROCESS_VEH_DYN_CALIB_GET_s16R_ST_VEHICLE_SPEED_THR1()(CALHNDLR_REARALGO_CAL_PTR->SlowTaskCalibArea.s16R_ST_VEHICLE_SPEED_THR1) /* Threshold to separate Zone 0 vehicle speed events from Zone 1 or higher vehicle speed events */
#define OPSREALG_PROCESS_VEH_DYN_CALIB_GET_s16R_ST_VEHICLE_SPEED_THR1_ADDR()(&CALHNDLR_REARALGO_CAL_PTR->SlowTaskCalibArea.s16R_ST_VEHICLE_SPEED_THR1) /* Threshold to separate Zone 0 vehicle speed events from Zone 1 or higher vehicle speed events */
#define OPSREALG_PROCESS_VEH_DYN_CALIB_GET_s16R_ST_VEHICLE_SPEED_THR2()(CALHNDLR_REARALGO_CAL_PTR->SlowTaskCalibArea.s16R_ST_VEHICLE_SPEED_THR2) /* Threshold to separate Zone 1 or lower vehicle speed events from Zone 2 or higher vehicle speed events */
#define OPSREALG_PROCESS_VEH_DYN_CALIB_GET_s16R_ST_VEHICLE_SPEED_THR2_ADDR()(&CALHNDLR_REARALGO_CAL_PTR->SlowTaskCalibArea.s16R_ST_VEHICLE_SPEED_THR2) /* Threshold to separate Zone 1 or lower vehicle speed events from Zone 2 or higher vehicle speed events */
#define OPSREALG_PROCESS_VEH_DYN_CALIB_GET_R_ST_VEHICLE_SPEED_MAPPING(a)(CALHNDLR_REARALGO_CAL_PTR->SlowTaskCalibArea.au8R_ST_VEHICLE_SPEED_MAPPING[a]) /* Selects which of the Threshold Class 0, Threshold Class 1, Threshold Class 2 to be used for events classified within Vehicle Speed zone 2 */
#define OPSREALG_PROCESS_VEH_DYN_CALIB_GET_R_ST_VEHICLE_SPEED_MAPPING_ADDR()(&CALHNDLR_REARALGO_CAL_PTR->SlowTaskCalibArea.au8R_ST_VEHICLE_SPEED_MAPPING[0]) /* Selects which of the Threshold Class 0, Threshold Class 1, Threshold Class 2 to be used for events classified within Vehicle Speed zone 2 */
#define OPSREALG_PROCESS_VEH_DYN_CALIB_GET_u8R_ST_CONFIG_VEHICLE_SPEED_INDEX()(CALHNDLR_REARALGO_CAL_PTR->SlowTaskCalibArea.u8R_ST_CONFIG_VEHICLE_SPEED_INDEX) /* Configuration index at RTE of Vehicle Speed Input (Slow Task) */
#define OPSREALG_PROCESS_VEH_DYN_CALIB_GET_u8R_ST_CONFIG_VEHICLE_SPEED_INDEX_ADDR()(&CALHNDLR_REARALGO_CAL_PTR->SlowTaskCalibArea.u8R_ST_CONFIG_VEHICLE_SPEED_INDEX) /* Configuration index at RTE of Vehicle Speed Input (Slow Task) */
#define OPSREALG_PROCESS_VEH_DYN_CALIB_GET_u8R_ST_CONFIG_VEHICLE_BACKWARD_INDEX()(CALHNDLR_REARALGO_CAL_PTR->SlowTaskCalibArea.u8R_ST_CONFIG_VEHICLE_BACKWARD_INDEX) /* Configuration Index at RTE of Vehicle Backward Input (Slow Task) */
#define OPSREALG_PROCESS_VEH_DYN_CALIB_GET_u8R_ST_CONFIG_VEHICLE_BACKWARD_INDEX_ADDR()(&CALHNDLR_REARALGO_CAL_PTR->SlowTaskCalibArea.u8R_ST_CONFIG_VEHICLE_BACKWARD_INDEX) /* Configuration Index at RTE of Vehicle Backward Input (Slow Task) */


#endif /* _I_OpsReAlg_Process_Veh_Dyn_INTERFACE_CAL_H */