# MAC 3400_SC2_PRSU3_Infineon_KP200_15Pct_Reference.tpl
# 
# Simulation Tool Version:                     MAC 3400
# Target Module:                               SC2
# Sensor Name:                                 PRSU3
# Sensor Manufacturer:                         Infineon
# Sensor Part #:                               KP200
# Sensing Range:                               15
# Sensing Units:                               Pct
# Digital Resolution:                          0.048828
# Resolution Units:                            %/LSB
# Filter File (*.flt):                         KP200.flt
# Data Format:                                 Reference
# MAC III SC2 Sensor Templates.xlsx MKS Rev:   1.3
# Notes:                                       Designed to KP200_DS_Rev_1.1.pdf and tested (not validated)
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
			Default Minimum Value:           0.92
			Default Maximum Value:           1.08
			Step:                            0.08
			User Rights:                     Calibration
			Unit:                            %
		\Parameter
		/Parameter
			Name:                            Upper Mech Clip
			Description:                     Sensor Upper Mechanical Clipping
			Default:                         136.0075
			Convertion Factor:               1
			Maximum Value:                   32767
			Minimum Value:                   0
			Float:                           1
			Default Minimum Value:           136.0075
			Default Maximum Value:           136.0075
			Step:                            0
			User Rights:                     Calibration
			Unit:                            %
		\Parameter
		/Parameter
			Name:                            Lower Mech Clip
			Description:                     Sensor Lower Mechanical Clipping
			Default:                         -53.7273
			Convertion Factor:               1
			Maximum Value:                   0
			Minimum Value:                   -32767
			Float:                           1
			Default Minimum Value:           -53.7273
			Default Maximum Value:           -53.7273
			Step:                            0
			User Rights:                     Calibration
			Unit:                            %
		\Parameter
		/Parameter
			Name:                            HSR T0
			Description:                     T0 for HSR
			Default:                         0
			Convertion Factor:               1
			Maximum Value:                   0
			Minimum Value:                   0
			Float:                           1
			Default Minimum Value:           0
			Default Maximum Value:           0
			Step:                            0
			User Rights:                     Calibration
			Unit:                            ms
		\Parameter
		/Parameter
			Name:                            HSR Sampling Rate
			Description:                     HSR Sampling Rate
			Default:                         10000
			Convertion Factor:               1
			Maximum Value:                   20000
			Minimum Value:                   500
			Default Minimum Value:           9000
			Default Maximum Value:           11000
			Step:                            1000
			User Rights:                     Calibration
			Unit:                            Hz
		\Parameter
		/Parameter
			Name:                            COF Sensor Filter
			Description:                     Cut-Off Frequency Factor
			Default:                         1
			Convertion Factor:               1
			Maximum Value:                   1.5
			Minimum Value:                   0.5
			Float:                           1
			Default Minimum Value:           0.95
			Default Maximum Value:           1.05
			Step:                            0.05
			User Rights:                     Calibration
			Unit:                            %
		\Parameter
		/Parameter
			Name:                            Sensor Processing Delay
			Description:                     Sensor Processing Delay
			Default:                         0.028
			Convertion Factor:               1
			Maximum Value:                   5
			Minimum Value:                   0
			Float:                           1
			Default Minimum Value:           0
			Default Maximum Value:           0
			Step:                            0
			User Rights:                     Calibration
			Unit:                            ms
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
			Default:                         2000
			Convertion Factor:               1
			Maximum Value:                   4000
			Minimum Value:                   500
			Default Minimum Value:           2000
			Default Maximum Value:           2000
			Step:                            0
			User Rights:                     Calibration
			Unit:                            Hz
		\Parameter
		/Parameter
			Name:                            Sensor Sensitivity
			Description:                     Sensor Sensitivity
			Default:                         20.48
			Maximum Value:                   10000
			Minimum Value:                   0
			Float:                           1
			Default Minimum Value:           20.48
			Default Maximum Value:           20.48
			Step:                            0
			User Rights:                     Calibration
			Unit:                            LSB/%
			Symbol Registered:               1
			Registration Name:               @@ - Sensor Sensitivity
		\Parameter
		/Parameter
			Name:                            Effective Resolution
			Description:                     Acquisition Resolution
			Default:                         0.048828125
			Convertion Factor:               1
			Maximum Value:                   10000
			Minimum Value:                   0.0001
			Float:                           1
			Default Minimum Value:           0.048828125
			Default Maximum Value:           0.048828125
			Step:                            0
			User Rights:                     Calibration
			Unit:                            %/LSB
			Symbol Registered:               1
			Registration Name:               @@ - Effective Resolution
		\Parameter
		/Parameter
			Name:                            Offset
			Description:                     Sensor Offset
			Default:                         0
			Convertion Factor:               1
			Maximum Value:                   153
			Minimum Value:                   -51
			Float:                           1
			Default Minimum Value:           -1
			Default Maximum Value:           1
			Step:                            1
			User Rights:                     Calibration
			Unit:                            LSB
		\Parameter
		/Parameter
			Name:                            Comm Delay
			Description:                     Communication delay
			Default:                         0.5
			Convertion Factor:               1
			Maximum Value:                   5
			Minimum Value:                   0
			Float:                           1
			Default Minimum Value:           0
			Default Maximum Value:           0
			Step:                            0
			User Rights:                     Calibration
			Unit:                            ms
		\Parameter
		/Parameter
			Name:                            Broadcast Upper Limit
			Description:                     Broadcast Upper Limit
			Default:                         307
			Convertion Factor:               1
			Maximum Value:                   32767
			Minimum Value:                   0
			Float:                           1
			Default Minimum Value:           307
			Default Maximum Value:           307
			Step:                            0
			User Rights:                     Calibration
			Unit:                            LSB
		\Parameter
		/Parameter
			Name:                            Broadcast Lower Limit
			Description:                     Broadcast Lower Limit
			Default:                         -102
			Convertion Factor:               1
			Maximum Value:                   0
			Minimum Value:                   -32767
			Float:                           1
			Default Minimum Value:           -102
			Default Maximum Value:           -102
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
			Unit:                            %
			Color:                           0x0032CD32
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Input Gained
			Description:                     Gain impact on acquisition
			Convertion Factor:               1
			Unit:                            %
			Color:                           BLUE_3
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Sensor Clipped
			Description:                     Sensor mechanically clipped pre-filter
			Convertion Factor:               1
			Unit:                            %
			Color:                           RED_3
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Resampled for Filter
			Description:                     Forced resample for 10k simulated analog filter
			Convertion Factor:               1
			Unit:                            %
			Color:                           RED_5
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Sensor Filtered
			Description:                     Sensor filter impact on acquisition
			Convertion Factor:               1
			Unit:                            %
			Color:                           0x001199EE
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Sensor Delayed
			Description:                     Additional signal processing delay
			Convertion Factor:               1
			Unit:                            %
			Color:                           GREEN_2
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
			Color:                           0x00ABCDEF
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
			Name:                            Sensor Offset
			Description:                     Offset impact on acquisition
			Convertion Factor:               1
			Unit:                            LSB
			Color:                           VIOLET_2
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Comm Delay
			Description:                     Communication delay
			Convertion Factor:               1
			Unit:                            LSB
			Color:                           GREEN_2
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Sensor Broadcast Output
			Description:                     Sensor sensitivity output
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
			Y Title:                         Pressure (%)
			Criterion:                       Input
			Criterion:                       Input Gained
			Criterion:                       Sensor Clipped
			Criterion:                       Resampled for Filter
			Criterion:                       Sensor Filtered
			Criterion:                       Sensor Delayed
		\Graph
		/Graph
			Name:                            Sensor Simulation Output
			Type:                            Scatter Graph
			X Title:                         Time (ms)
			Y Title:                         Pressure (LSB)
			Criterion:                       Sensor Digitized
			Criterion:                       Resampled for Output
			Criterion:                       Round To Nearest Output
			Criterion:                       Sensor Offset
			Criterion:                       Comm Delay
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
			Name:                            Mechanical Clipping - @@
			Type:                            Generic Saturation
			/Starting Criteria
				Name:                        Input Gained
			\Starting Criteria
			/Final Criteria
				Name:                        Sensor Clipped
			\Final Criteria
			/Parameters List
				/Parameter
					Name:                    Upper Mech Clip
				\Parameter
				/Parameter
					Name:                    Lower Mech Clip
				\Parameter
			\Parameters List
		\Preprocessor
		/Preprocessor
			Name:                            Resampled for Filter - @@
			Type:                            Interpolated Resampling
			/Starting Criteria
				Name:                        Sensor Clipped
			\Starting Criteria
			/Final Criteria
				Name:                        Resampled for Filter
			\Final Criteria
			/Parameters List
				/Parameter
					Name:                    HSR Sampling Rate
				\Parameter
				/Parameter
					Name:                    HSR T0
				\Parameter
			\Parameters List
		\Preprocessor
		/Preprocessor
			Name:                            Sensor Filtering - @@
			Type:                            Auto Stabilized Pole Filter
			Filter:                          Filters/KP200.flt
			/Starting Criteria
				Name:                        Resampled for Filter
			\Starting Criteria
			/Final Criteria
				Name:                        Sensor Filtered
			\Final Criteria
			/Parameters List
				/Parameter
					Name:                    COF Sensor Filter
				\Parameter
			\Parameters List
		\Preprocessor
		/Preprocessor
			Name:                            Sensor Delay - @@
			Type:                            Delay
			/Starting Criteria
				Name:                        Sensor Filtered
			\Starting Criteria
			/Final Criteria
				Name:                        Sensor Delayed
			\Final Criteria
			/Parameters List
				/Parameter
					Name:                    Sensor Processing Delay
				\Parameter
			\Parameters List
		\Preprocessor
		/Preprocessor
			Name:                            Sensor Sensitivity Convertion - @@
			Type:                            AddGain
			/Starting Criteria
				Name:                        Sensor Delayed
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
			Type:                            Interpolated Resampling
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
			Name:                            Sensor Offset - @@
			Type:                            AddOffset
			/Starting Criteria
				Name:                        Round To Nearest Output
			\Starting Criteria
			/Final Criteria
				Name:                        Sensor Offset
			\Final Criteria
			/Parameters List
				/Parameter
					Name:                    Offset
				\Parameter
			\Parameters List
		\Preprocessor
		/Preprocessor
			Name:                            Communication Delay - @@
			Type:                            Delay
			/Starting Criteria
				Name:                        Sensor Offset
			\Starting Criteria
			/Final Criteria
				Name:                        Comm Delay
			\Final Criteria
			/Parameters List
				/Parameter
					Name:                    Comm Delay
				\Parameter
			\Parameters List
		\Preprocessor
		/Preprocessor
			Name:                            Sensor Saturation - @@
			Type:                            Generic Saturation
			/Starting Criteria
				Name:                        Comm Delay
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
