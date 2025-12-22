# MAC 3400_SC2_Temperature_AutoSar_CAN_125deg_Reference.tpl
# 
# Simulation Tool Version:                     MAC 3400
# Target Module:                               SC2
# Sensor Name:                                 Temperature
# Sensor Manufacturer:                         AutoSar
# Sensor Part #:                               CAN
# Sensing Range:                               125
# Sensing Units:                               deg
# Digital Resolution:                          0.5
# Resolution Units:                            degC/LSB
# Filter File (*.flt):                         none
# Data Format:                                 Reference
# MAC III SC2 Sensor Templates.xlsx MKS Rev:   1.26
# TPL PTC Revision:                            $Revision: 1.3 $
# Notes:                                       Designed to AUTOSAR_ApplicationInterfaces.xls and tested (not validated)
#
/Template
	/Parameters List
		/Parameter
			Name:                            Gain
			Description:                     Sensor Gain
			Default:                         1
			Convertion Factor:               100
			Maximum Value:                   4
			Minimum Value:                   -4
			Float:                           1
			Default Minimum Value:           0.9
			Default Maximum Value:           1.1
			Step:                            0.1
			User Rights:                     Calibration
			Unit:                            %
		\Parameter
		/Parameter
			Name:                            Sensor Sensitivity
			Description:                     Sensor Sensitivity
			Default:                         2
			Maximum Value:                   10000
			Minimum Value:                   0
			Float:                           1
			Default Minimum Value:           0
			Default Maximum Value:           10000
			Step:                            0
			User Rights:                     Calibration
			Unit:                            LSB/degC
			Symbol Registered:               1
			Registration Name:               @@ - Sensor Sensitivity
		\Parameter
		/Parameter
			Name:                            T0
			Description:                     T0
			Default:                         0
			Convertion Factor:               1
			Maximum Value:                   10
			Minimum Value:                   0
			Float:                           1
			Default Minimum Value:           0
			Default Maximum Value:           0.4
			Step:                            0.1
			User Rights:                     Calibration
			Unit:                            ms
			Symbol Registered:               1
			Registration Name:               @@ - T0
		\Parameter
		/Parameter
			Name:                            LSR Sampling Rate
			Description:                     LSR Sampling Rate
			Default:                         100
			Convertion Factor:               1
			Maximum Value:                   4000
			Minimum Value:                   1
			Default Minimum Value:           100
			Default Maximum Value:           100
			Step:                            0
			User Rights:                     Calibration
			Unit:                            Hz
		\Parameter
		/Parameter
			Name:                            Effective Resolution
			Description:                     Acquisition Resolution
			Default:                         0.5
			Convertion Factor:               1
			Maximum Value:                   10000
			Minimum Value:                   0.0001
			Float:                           1
			Default Minimum Value:           0.5
			Default Maximum Value:           0.5
			Step:                            0
			User Rights:                     Calibration
			Unit:                            degC/LSB
			Symbol Registered:               1
			Registration Name:               @@ - Effective Resolution
		\Parameter
		/Parameter
			Name:                            Broadcast Upper Limit
			Description:                     Broadcast Upper Limit
			Default:                         250
			Convertion Factor:               1
			Maximum Value:                   32767
			Minimum Value:                   0
			Float:                           1
			Default Minimum Value:           250
			Default Maximum Value:           250
			Step:                            0
			User Rights:                     Calibration
			Unit:                            LSB
		\Parameter
		/Parameter
			Name:                            Broadcast Lower Limit
			Description:                     Broadcast Lower Limit
			Default:                         -140
			Convertion Factor:               1
			Maximum Value:                   0
			Minimum Value:                   -32767
			Float:                           1
			Default Minimum Value:           -140
			Default Maximum Value:           -140
			Step:                            0
			User Rights:                     Calibration
			Unit:                            LSB
		\Parameter
	\Parameters List
	/Criteria List
		/Criterion
			Name:                            Input
			Description:                     Input for channel step
			Convertion Factor:               1
			Unit:                            degC
			Color:                           0x0032CD32
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Input Gained
			Description:                     Gain impact on acquisition
			Convertion Factor:               1
			Unit:                            degC
			Color:                           BLUE_3
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Sensor Digitized
			Description:                     Sensor sensitivity impact on acquisition
			Convertion Factor:               1
			Unit:                            LSB
			Color:                           0x0032CD32
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Resampled for Output
			Description:                     Resampling to sensor output sampling frequency
			Convertion Factor:               1
			Unit:                            LSB
			Color:                           RED_3
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Round To Nearest Output
			Description:                     Rounding of the data by Round To Nearest
			Convertion Factor:               1
			Unit:                            LSB
			Color:                           BLUE_5
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Sensor Broadcast Output
			Description:                     Sensor output
			Convertion Factor:               1
			Unit:                            LSB
			Color:                           0x001199EE
			Crash Color:                     1
		\Criterion
	\Criteria List
	/Test
		Name:                                @@
		/Graph
			Name:                            Input Sample Rate Panel
			Type:                            Scatter Graph
			X Title:                         Time (ms)
			Y Title:                         Temperature (degC)
			Criterion:                       Input
			Criterion:                       Input Gained
		\Graph
		/Graph
			Name:                            Sensor Simulation Output
			Type:                            Scatter Graph
			X Title:                         Time (ms)
			Y Title:                         Temperature (LSB)
			Criterion:                       Sensor Digitized
			Criterion:                       Resampled for Output
			Criterion:                       Round To Nearest Output
			Criterion:                       Sensor Broadcast Output
		\Graph
	\Test
	/Preprocessors List
		/Preprocessor
			Name:                            Sensor Gain - @@
			Type:                            AddGain
			/Starting Criteria
				Name:                        Input
			\Starting Criteria
			/Final Criteria
				Name:                        Input Gained
			\Final Criteria
			/Parameters List
				/Parameter
					Name:                    Gain
				\Parameter
			\Parameters List
		\Preprocessor
		/Preprocessor
			Name:                            Sensor Sensitivity Convertion - @@
			Type:                            AddGain
			/Starting Criteria
				Name:                        Input Gained
			\Starting Criteria
			/Final Criteria
				Name:                        Sensor Digitized
			\Final Criteria
			/Parameters List
				/Parameter
					Name:                    Sensor Sensitivity
				\Parameter
			\Parameters List
		\Preprocessor
		/Preprocessor
			Name:                            Resampling - @@
			Type:                            Linear Resampling
			/Starting Criteria
				Name:                        Sensor Digitized
			\Starting Criteria
			/Final Criteria
				Name:                        Resampled for Output
			\Final Criteria
			/Parameters List
				/Parameter
					Name:                    LSR Sampling Rate
				\Parameter
				/Parameter
					Name:                    T0
				\Parameter
			\Parameters List
		\Preprocessor
		/Preprocessor
			Name:                            Round To Nearest - @@
			Type:                            Round
			/Starting Criteria
				Name:                        Resampled for Output
			\Starting Criteria
			/Final Criteria
				Name:                        Round To Nearest Output
			\Final Criteria
			/Parameters List
			\Parameters List
		\Preprocessor
		/Preprocessor
			Name:                            Sensor Saturation - @@
			Type:                            Generic Saturation
			/Starting Criteria
				Name:                        Round To Nearest Output
			\Starting Criteria
			/Final Criteria
				Name:                        Sensor Broadcast Output
			\Final Criteria
			/Parameters List
				/Parameter
					Name:                    Broadcast Upper Limit
				\Parameter
				/Parameter
					Name:                    Broadcast Lower Limit
				\Parameter
			\Parameters List
		\Preprocessor
	\Preprocessors List
\Template
