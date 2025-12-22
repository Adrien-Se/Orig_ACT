# MAC 3400_SC2_Z_Bosch_SMI71x_5G_Reference.tpl
# 
# Simulation Tool Version:                     MAC 3400
# Target Module:                               SC2
# Sensor Name:                                 Z
# Sensor Manufacturer:                         Bosch
# Sensor Part #:                               SMI71x
# Sensing Range:                               5
# Sensing Units:                               G
# Digital Resolution:                          0.0002
# Resolution Units:                            G/LSB
# Filter File (*.flt):                         SMI71x_AccZ.dft
# Data Format:                                 Reference
# MAC III SC2 Sensor Templates.xlsx MKS Rev:   1.3
# Notes:                                       Designed to 20150123_TCD_SMI70x_2_2.pdf and tested (not validated)
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
			Default Minimum Value:           0.96
			Default Maximum Value:           1.04
			Step:                            0.04
			User Rights:                     Calibration
			Unit:                            %
		\Parameter
		/Parameter
			Name:                            Upper Mech Clip
			Description:                     Sensor Upper Mechanical Clipping
			Default:                         343.23275
			Convertion Factor:               INV_G
			Maximum Value:                   32767
			Minimum Value:                   0
			Float:                           1
			Default Minimum Value:           343.23275
			Default Maximum Value:           343.23275
			Step:                            0
			User Rights:                     Calibration
			Unit:                            G
		\Parameter
		/Parameter
			Name:                            Lower Mech Clip
			Description:                     Sensor Lower Mechanical Clipping
			Default:                         -343.23275
			Convertion Factor:               INV_G
			Maximum Value:                   0
			Minimum Value:                   -32767
			Float:                           1
			Default Minimum Value:           -343.23275
			Default Maximum Value:           -343.23275
			Step:                            0
			User Rights:                     Calibration
			Unit:                            G
		\Parameter
		/Parameter
			Name:                            Sensor Sensitivity
			Description:                     Sensor Sensitivity
			Default:                         509.858106489
			Convertion Factor:               G
			Maximum Value:                   10000
			Minimum Value:                   0
			Float:                           1
			Default Minimum Value:           0
			Default Maximum Value:           509.858106489
			Step:                            0
			User Rights:                     Calibration
			Unit:                            LSB/G
			Symbol Registered:               1
			Registration Name:               @@ - Sensor Sensitivity
		\Parameter
		/Parameter
			Name:                            DFT T0
			Description:                     T0 for DFT
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
			Name:                            DFT Sampling Rate
			Description:                     DFT Sampling Rate
			Default:                         8333
			Convertion Factor:               1
			Maximum Value:                   20000
			Minimum Value:                   500
			Default Minimum Value:           7433
			Default Maximum Value:           9233
			Step:                            900
			User Rights:                     Calibration
			Unit:                            Hz
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
			Default:                         1000
			Convertion Factor:               1
			Maximum Value:                   4000
			Minimum Value:                   500
			Default Minimum Value:           1000
			Default Maximum Value:           1000
			Step:                            0
			User Rights:                     Calibration
			Unit:                            Hz
		\Parameter
		/Parameter
			Name:                            Offset
			Description:                     Sensor Offset
			Default:                         0
			Convertion Factor:               1
			Maximum Value:                   16383
			Minimum Value:                   -16383
			Float:                           1
			Default Minimum Value:           -1
			Default Maximum Value:           1
			Step:                            1
			User Rights:                     Calibration
			Unit:                            LSB
		\Parameter
		/Parameter
			Name:                            Effective Resolution
			Description:                     Acquisition Resolution
			Default:                         0.0002
			Convertion Factor:               1
			Maximum Value:                   10000
			Minimum Value:                   0.0001
			Float:                           1
			Default Minimum Value:           0.0002
			Default Maximum Value:           0.0002
			Step:                            0
			User Rights:                     Calibration
			Unit:                            G/LSB
			Symbol Registered:               1
			Registration Name:               @@ - Effective Resolution
		\Parameter
		/Parameter
			Name:                            Broadcast Upper Limit
			Description:                     Broadcast Upper Limit
			Default:                         32767
			Convertion Factor:               1
			Maximum Value:                   32767
			Minimum Value:                   0
			Float:                           1
			Default Minimum Value:           32767
			Default Maximum Value:           32767
			Step:                            0
			User Rights:                     Calibration
			Unit:                            LSB
		\Parameter
		/Parameter
			Name:                            Broadcast Lower Limit
			Description:                     Broadcast Lower Limit
			Default:                         -32767
			Convertion Factor:               1
			Maximum Value:                   0
			Minimum Value:                   -32767
			Float:                           1
			Default Minimum Value:           -32767
			Default Maximum Value:           -32767
			Step:                            0
			User Rights:                     Calibration
			Unit:                            LSB
		\Parameter
	\Parameters List
	/Criteria List
		/Criterion
			Name:                            Input
			Description:                     Input for channel step
			Convertion Factor:               INV_G
			Unit:                            G
			Color:                           0x0032CD32
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Input Gained
			Description:                     Gain impact on acquisition
			Convertion Factor:               INV_G
			Unit:                            G
			Color:                           BLUE_3
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Sensor Clipped
			Description:                     Sensor mechanically clipped pre-filter
			Convertion Factor:               INV_G
			Unit:                            G
			Color:                           RED_3
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
			Name:                            Resampled for DFT
			Description:                     Resampling of data to filter sampling frequency
			Convertion Factor:               1
			Unit:                            LSB
			Color:                           RED_5
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Round To Nearest Pre Filter
			Description:                     Rounding of the data by Round To Nearest
			Convertion Factor:               1
			Unit:                            LSB
			Color:                           BLUE_5
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Sensor Filtered
			Description:                     Sensor filter impact on acquisition
			Convertion Factor:               1
			Unit:                            LSB
			Color:                           0x001199EE
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
			Name:                            Round to Nearest Output
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
			Y Title:                         Acceleration (G)
			Criterion:                       Input
			Criterion:                       Input Gained
			Criterion:                       Sensor Clipped
		\Graph
		/Graph
			Name:                            Sensor Filtering Panel
			Type:                            Scatter Graph
			X Title:                         Time (ms)
			Y Title:                         Acceleration (LSB)
			Criterion:                       Sensor Digitized
			Criterion:                       Resampled for DFT
			Criterion:                       Round To Nearest Pre Filter
			Criterion:                       Sensor Filtered
		\Graph
		/Graph
			Name:                            Sensor Simulation Output
			Type:                            Scatter Graph
			X Title:                         Time (ms)
			Y Title:                         Acceleration (LSB)
			Criterion:                       Sensor Filtered
			Criterion:                       Resampled for Output
			Criterion:                       Round to Nearest Output
			Criterion:                       Sensor Offset
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
			Name:                            Sensor Sensitivity Convertion - @@
			Type:                            AddGain
			/Starting Criteria
				Name:                        Sensor Clipped
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
			Name:                            Resampled for DFT - @@
			Type:                            Interpolated Resampling
			/Starting Criteria
				Name:                        Sensor Digitized
			\Starting Criteria
			/Final Criteria
				Name:                        Resampled for DFT
			\Final Criteria
			/Parameters List
				/Parameter
					Name:                    DFT Sampling Rate
				\Parameter
				/Parameter
					Name:                    DFT T0
				\Parameter
			\Parameters List
		\Preprocessor
		/Preprocessor
			Name:                            Round To Nearest - @@
			Type:                            Round
			/Starting Criteria
				Name:                        Resampled for DFT
			\Starting Criteria
			/Final Criteria
				Name:                        Round To Nearest Pre Filter
			\Final Criteria
			/Parameters List
			\Parameters List
		\Preprocessor
		/Preprocessor
			Name:                            Sensor Filtering - @@
			Type:                            Digital Filter
			Filter:                          Filters/SMI71x_AccZ.dft
			/Starting Criteria
				Name:                        Round To Nearest Pre Filter
			\Starting Criteria
			/Final Criteria
				Name:                        Sensor Filtered
			\Final Criteria
			/Parameters List
			\Parameters List
		\Preprocessor
		/Preprocessor
			Name:                            Resampling - @@
			Type:                            Interpolated Resampling
			/Starting Criteria
				Name:                        Sensor Filtered
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
			Name:                            Round To Nearest Downsample - @@
			Type:                            Round
			/Starting Criteria
				Name:                        Resampled for Output
			\Starting Criteria
			/Final Criteria
				Name:                        Round to Nearest Output
			\Final Criteria
			/Parameters List
			\Parameters List
		\Preprocessor
		/Preprocessor
			Name:                            Sensor Offset - @@
			Type:                            AddOffset
			/Starting Criteria
				Name:                        Round to Nearest Output
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
			Name:                            Sensor Saturation - @@
			Type:                            Generic Saturation
			/Starting Criteria
				Name:                        Sensor Offset
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
