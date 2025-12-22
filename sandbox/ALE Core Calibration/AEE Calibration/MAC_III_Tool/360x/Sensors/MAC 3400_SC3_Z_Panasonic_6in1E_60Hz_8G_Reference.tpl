# MAC 3400_SC3_Z_Panasonic_6in1E_60Hz_8G_Reference.tpl
# 
# Simulation Tool Version:                     MAC 3400
# Target Module:                               SC3
# Sensor Name:                                 Z
# Sensor Manufacturer:                         Panasonic
# Sensor Part #:                               6in1E_60Hz
# Sensing Range:                               8
# Sensing Units:                               G
# Digital Resolution:                          0.0005
# Resolution Units:                            G/LSB
# Filter File (*.flt):                         6in1E_60Hz_AccZ.dft
# Data Format:                                 Reference
# MAC III SC3 Sensor Templates.xlsx MKS Rev:   1.3
# TPL PTC Revision:                            $Revision: 1.2 $
# Notes:                                       TPL updated for 1g Offset handling due to gravity and additional Clip Limit
#
/Template
	/Parameters List
		/Parameter
			Name:                            Data Sensitivity
			Description:                     Data Sensitivity m/s2 to g
			Default:                         0.1019716213
			Convertion Factor:               1
			Maximum Value:                   10000
			Minimum Value:                   0
			Float:                           1
			Default Minimum Value:           0
			Default Maximum Value:           1000
			Step:                            0
			User Rights:                     Calibration
			Unit:                            m/s2/G
			Symbol Registered:               1
			Registration Name:               @@ - Data Sensitivity
		\Parameter
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
			Default:                         115
			Convertion Factor:               1
			Maximum Value:                   32767
			Minimum Value:                   0
			Float:                           1
			Default Minimum Value:           115
			Default Maximum Value:           115
			Step:                            0
			User Rights:                     Calibration
			Unit:                            G
		\Parameter
		/Parameter
			Name:                            Lower Mech Clip
			Description:                     Sensor Lower Mechanical Clipping
			Default:                         -115
			Convertion Factor:               1
			Maximum Value:                   0
			Minimum Value:                   -32767
			Float:                           1
			Default Minimum Value:           -115
			Default Maximum Value:           -115
			Step:                            0
			User Rights:                     Calibration
			Unit:                            G
		\Parameter
		/Parameter
			Name:                            Sensor Sensitivity
			Description:                     Sensor Sensitivity
			Default:                         2000
			Convertion Factor:               1
			Maximum Value:                   10000
			Minimum Value:                   0
			Float:                           1
			Default Minimum Value:           0
			Default Maximum Value:           2000
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
			Default:                         10000
			Convertion Factor:               1
			Maximum Value:                   20000
			Minimum Value:                   500
			Default Minimum Value:           9500
			Default Maximum Value:           10500
			Step:                            500
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
			Name:                            Offset Addition (Gravity)
			Description:                     Sensor Offset due to gravity
			Default:                         -2000
			Convertion Factor:               1
			Maximum Value:                   2000
			Minimum Value:                   -2000
			Float:                           1
			Default Minimum Value:           -2000
			Default Maximum Value:           -2000
			Step:                            0
			User Rights:                     Calibration
			Unit:                            LSB
		\Parameter
		/Parameter
			Name:                            Offset Removal (Gravity)
			Description:                     Sensor Offset due to gravity
			Default:                         2000
			Convertion Factor:               1
			Maximum Value:                   2000
			Minimum Value:                   -2000
			Float:                           1
			Default Minimum Value:           2000
			Default Maximum Value:           2000
			Step:                            0
			User Rights:                     Calibration
			Unit:                            LSB
		\Parameter
		/Parameter
			Name:                            Clip Upper Limit
			Description:                     Upper Limit applied with 1g offset
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
			Name:                            Clip Lower Limit
			Description:                     Lower Limit applied with 1g offset
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
			Default:                         0.0005
			Convertion Factor:               1
			Maximum Value:                   10000
			Minimum Value:                   0.0001
			Float:                           1
			Default Minimum Value:           0.0005
			Default Maximum Value:           0.0005
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
			Name:                            Input Converted
			Description:                     Convert input data to g
			Convertion Factor:               1
			Unit:                            G
			Color:                           BLUE_5
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Input Gained
			Description:                     Gain impact on acquisition
			Convertion Factor:               1
			Unit:                            G
			Color:                           BLUE_3
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Sensor Mech Clipped
			Description:                     Sensor mechanically clipped pre-filter
			Convertion Factor:               1
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
			Name:                            Add Offset of 1g
			Description:                     Offset introduced due to gravity
			Convertion Factor:               1
			Unit:                            LSB
			Color:                           RED_5
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Sensor Clipped
			Description:                     Sensor clipped considering offset due to gravity
			Convertion Factor:               1
			Unit:                            LSB
			Color:                           0x0032CD32
			Crash Color:                     1
		\Criterion
		/Criterion
			Name:                            Remove Offset of 1g
			Description:                     Removal of offset due to gravity
			Convertion Factor:               1
			Unit:                            LSB
			Color:                           BLUE_3
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
			Criterion:                       Input Converted
			Criterion:                       Input Gained
			Criterion:                       Sensor Mech Clipped
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
			Criterion:                       Add Offset of 1g
			Criterion:                       Sensor Clipped
			Criterion:                       Remove Offset of 1g
			Criterion:                       Sensor Offset
			Criterion:                       Sensor Broadcast Output
		\Graph
	\Test
	/Preprocessors List
		/Preprocessor
			Name:                            Data Convertion - @@
			Type:                            AddGain
			/Starting Criteria
				Name:                        Input
			\Starting Criteria
			/Final Criteria
				Name:                        Input Converted
			\Final Criteria
			/Parameters List
				/Parameter
					Name:                    Data Sensitivity
				\Parameter
			\Parameters List
		\Preprocessor
		/Preprocessor
			Name:                            Sensor Gain - @@
			Type:                            AddGain
			/Starting Criteria
				Name:                        Input Converted
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
				Name:                        Sensor Mech Clipped
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
				Name:                        Sensor Mech Clipped
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
			Filter:                          Filters/6in1E_60Hz_AccZ.dft
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
				Name:                        Add Offset of 1g
			\Final Criteria
			/Parameters List
				/Parameter
					Name:                    Offset Addition (Gravity)
				\Parameter
			\Parameters List
		\Preprocessor
		/Preprocessor
			Name:                            Sensor Saturation - @@
			Type:                            Generic Saturation
			/Starting Criteria
				Name:                        Add Offset of 1g
			\Starting Criteria
			/Final Criteria
				Name:                        Sensor Clipped
			\Final Criteria
			/Parameters List
				/Parameter
					Name:                    Clip Upper Limit
				\Parameter
				/Parameter
					Name:                    Clip Lower Limit
				\Parameter
			\Parameters List
		\Preprocessor
		/Preprocessor
			Name:                            Sensor Offset - @@
			Type:                            AddOffset
			/Starting Criteria
				Name:                        Sensor Clipped
			\Starting Criteria
			/Final Criteria
				Name:                        Remove Offset of 1g
			\Final Criteria
			/Parameters List
				/Parameter
					Name:                    Offset Removal (Gravity)
				\Parameter
			\Parameters List
		\Preprocessor
		/Preprocessor
			Name:                            Sensor Offset - @@
			Type:                            AddOffset
			/Starting Criteria
				Name:                        Remove Offset of 1g
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
