# MAC 3300_Generic_16bit_Sensor_Feedthrough_32767LSB_Digital.tpl
# 
# Simulation Tool Version:                     MAC 3300
# Target Module:                               Generic
# Sensor Name:                                 16bit
# Sensor Manufacturer:                         Sensor
# Sensor Part #:                               Feedthrough
# Sensing Range:                               32767
# Sensing Units:                               LSB
# Digital Resolution:                          1
# Resolution Units:                            LSB/LSB
# Filter File (*.flt):                         none
# Data Format:                                 Digital
# Sensor Templates MKS Revision:               1.4
# Notes:                                       New from template
#
/Template
	/Parameters List
		/Parameter
			Name:                            Gain
			Description:                     Sensor Gain
			Default:                         1
			Convertion Factor:               100.00
			Maximum Value:                   4.00
			Minimum Value:                   -4.00
			Precision:                       2
			Float:                           1
			Default Minimum Value:           0.9
			Default Maximum Value:           1.1
			Step:                            0.1
			User Rights:                     Calibration
			Unit:                            %
		\Parameter
		/Parameter
			Name:                            Upper Mech Clip
			Description:                     Sensor Upper Mechanical Clipping
			Default:                         32767
			Convertion Factor:               1
			Maximum Value:                   32767
			Minimum Value:                   0
			Precision:                       2
			Float:                           1
			Default Minimum Value:           32767
			Default Maximum Value:           32767
			Step:                            0
			User Rights:                     Calibration
			Unit:                            km/h
		\Parameter
		/Parameter
			Name:                            Lower Mech Clip
			Description:                     Sensor Lower Mechanical Clipping
			Default:                         -32767
			Convertion Factor:               1
			Maximum Value:                   0
			Minimum Value:                   -32767
			Precision:                       2
			Float:                           1
			Default Minimum Value:           -32767
			Default Maximum Value:           -32767
			Step:                            0
			User Rights:                     Calibration
			Unit:                            km/h
		\Parameter
		/Parameter
			Name:                            T0
			Description:                     T0
			Default:                         0
			Convertion Factor:               1
			Maximum Value:                   10.0
			Minimum Value:                   0.00
			Precision:                       2
			Float:                           1
			Default Minimum Value:           0.00
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
			Minimum Value:                   1
			Precision:                       0
			Default Minimum Value:           2000
			Default Maximum Value:           2000
			Step:                            0
			User Rights:                     Calibration
			Unit:                            Hz
		\Parameter
		/Parameter
			Name:                            Sensor Sensitivity
			Description:                     Sensor Sensitivity
			Default:                         1
			Maximum Value:                   10000
			Minimum Value:                   -10000
			Precision:                       1
			Float:                           1
			Default Minimum Value:           1
			Default Maximum Value:           1
			Step:                            0
			User Rights:                     Calibration
			Unit:                            LSB/LSB
		\Parameter
		/Parameter
			Name:                            Effective Resolution
			Description:                     Acquisition Resolution
			Default:                         1
			Convertion Factor:               1.00
			Maximum Value:                   10000
			Minimum Value:                   0.0001
			Precision:                       4
			Float:                           1
			Default Minimum Value:           1
			Default Maximum Value:           1
			Step:                            0
			User Rights:                     Integrator
			Unit:                            LSB/LSB
			Symbol Registered:               1
			Registration Name:               @@ - Effective Resolution
		\Parameter
	\Parameters List
	/Criteria List
		/Criterion
			Name:                            Input
			Description:                     Input for channel step
			Convertion Factor:               1
			Unit:                            km/h
			Color:                           0x0032CD32
		\Criterion
		/Criterion
			Name:                            Input Gained
			Description:                     Gain impact on acquisition
			Convertion Factor:               1
			Unit:                            km/h
			Color:                           BLUE_3
		\Criterion
		/Criterion
			Name:                            Sensor Clipped
			Description:                     Sensor mechanically clipped pre-filter
			Convertion Factor:               1
			Unit:                            km/h
			Color:                           RED_3
		\Criterion
		/Criterion
			Name:                            Sensor Digitized
			Description:                     Sensor sensitivity impact on acquisition
			Convertion Factor:               1
			Unit:                            LSB
			Color:                           0x0032CD32
		\Criterion
		/Criterion
			Name:                            Sensor Resampled
			Description:                     Sensor sensitivity impact on acquisition
			Convertion Factor:               1
			Unit:                            LSB
			Color:                           RED_3
		\Criterion
		/Criterion
			Name:                            Round To Nearest Output
			Description:                     Rounding of the signal by Round To Nearest computation
			Convertion Factor:               1
			Unit:                            LSB
			Color:                           BLUE_5
		\Criterion
	\Criteria List
	/Test
		Name:                                @@
		/Graph
			Name:                            Input Sample Rate Panel
			Type:                            Scatter Graph
			X Title:                         Time (ms)
			Y Title:                         Vehicle Speed (km/h)
			Criterion:                       Input
			Criterion:                       Input Gained
			Criterion:                       Sensor Clipped
		\Graph
		/Graph
			Name:                            Sensor Simulation Output
			Type:                            Scatter Graph
			X Title:                         Time (ms)
			Y Title:                         Vehicle Speed (LSB)
			Criterion:                       Sensor Digitized
			Criterion:                       Sensor Resampled
			Criterion:                       Round To Nearest Output
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
			Name:                            Resampling - @@
			Type:                            Linear Resampling
			/Starting Criteria
				Name:                        Sensor Digitized
			\Starting Criteria
			/Final Criteria
				Name:                        Sensor Resampled
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
				Name:                        Sensor Resampled
			\Starting Criteria
			/Final Criteria
				Name:                        Round To Nearest Output
			\Final Criteria
			/Parameters List
			\Parameters List
		\Preprocessor
	\Preprocessors List
\Template
