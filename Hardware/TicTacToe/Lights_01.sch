EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 2 12
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Device:LED D101
U 1 1 6059E6C2
P 3750 2650
F 0 "D101" H 3743 2867 50  0000 C CNN
F 1 "RED" H 3743 2776 50  0000 C CNN
F 2 "CCC_Schematic_Footprints:Schematic_-_LED_5mm(2.56P)_004" H 3750 2650 50  0001 C CNN
F 3 "~" H 3750 2650 50  0001 C CNN
	1    3750 2650
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D102
U 1 1 6059F218
P 3750 3000
F 0 "D102" H 3743 3217 50  0000 C CNN
F 1 "RED" H 3743 3126 50  0000 C CNN
F 2 "CCC_Schematic_Footprints:Schematic_-_LED_5mm(2.56P)_004" H 3750 3000 50  0001 C CNN
F 3 "~" H 3750 3000 50  0001 C CNN
	1    3750 3000
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D103
U 1 1 6059F3B2
P 3750 3350
F 0 "D103" H 3743 3567 50  0000 C CNN
F 1 "RED" H 3743 3476 50  0000 C CNN
F 2 "CCC_Schematic_Footprints:Schematic_-_LED_5mm(2.56P)_004" H 3750 3350 50  0001 C CNN
F 3 "~" H 3750 3350 50  0001 C CNN
	1    3750 3350
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D104
U 1 1 6059F5FA
P 3750 3700
F 0 "D104" H 3743 3917 50  0000 C CNN
F 1 "RED" H 3743 3826 50  0000 C CNN
F 2 "CCC_Schematic_Footprints:Schematic_-_LED_5mm(2.56P)_004" H 3750 3700 50  0001 C CNN
F 3 "~" H 3750 3700 50  0001 C CNN
	1    3750 3700
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D105
U 1 1 6059F954
P 3750 4300
F 0 "D105" H 3743 4517 50  0000 C CNN
F 1 "BLUE" H 3743 4426 50  0000 C CNN
F 2 "CCC_Schematic_Footprints:Schematic_-_LED_5mm(2.56P)_004" H 3750 4300 50  0001 C CNN
F 3 "~" H 3750 4300 50  0001 C CNN
	1    3750 4300
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D106
U 1 1 6059FF01
P 3750 4650
F 0 "D106" H 3743 4867 50  0000 C CNN
F 1 "BLUE" H 3743 4776 50  0000 C CNN
F 2 "CCC_Schematic_Footprints:Schematic_-_LED_5mm(2.56P)_004" H 3750 4650 50  0001 C CNN
F 3 "~" H 3750 4650 50  0001 C CNN
	1    3750 4650
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D107
U 1 1 605A01E5
P 3750 5000
F 0 "D107" H 3743 5217 50  0000 C CNN
F 1 "BLUE" H 3743 5126 50  0000 C CNN
F 2 "CCC_Schematic_Footprints:Schematic_-_LED_5mm(2.56P)_004" H 3750 5000 50  0001 C CNN
F 3 "~" H 3750 5000 50  0001 C CNN
	1    3750 5000
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D108
U 1 1 605A07C3
P 3750 5350
F 0 "D108" H 3743 5567 50  0000 C CNN
F 1 "BLUE" H 3743 5476 50  0000 C CNN
F 2 "CCC_Schematic_Footprints:Schematic_-_LED_5mm(2.56P)_004" H 3750 5350 50  0001 C CNN
F 3 "~" H 3750 5350 50  0001 C CNN
	1    3750 5350
	1    0    0    -1  
$EndComp
Wire Wire Line
	3400 3700 3600 3700
Wire Wire Line
	3400 2650 3600 2650
Wire Wire Line
	3600 3350 3400 3350
Connection ~ 3400 3350
Wire Wire Line
	3400 3350 3400 3700
Wire Wire Line
	3600 3000 3400 3000
Wire Wire Line
	3400 2650 3400 3000
Wire Wire Line
	3400 3000 3400 3350
Connection ~ 3400 3000
Wire Wire Line
	3900 2650 4050 2650
Wire Wire Line
	4050 2650 4050 3000
Wire Wire Line
	4050 3700 3900 3700
Wire Wire Line
	3900 3350 4050 3350
Connection ~ 4050 3350
Wire Wire Line
	4050 3350 4050 3700
Wire Wire Line
	3900 3000 4050 3000
Connection ~ 4050 3000
Wire Wire Line
	4050 3000 4050 3350
Wire Wire Line
	3900 4300 4050 4300
Wire Wire Line
	4050 4300 4050 4650
Wire Wire Line
	4050 5350 3900 5350
Wire Wire Line
	3900 5000 4050 5000
Connection ~ 4050 5000
Wire Wire Line
	4050 5000 4050 5350
Wire Wire Line
	3900 4650 4050 4650
Connection ~ 4050 4650
Wire Wire Line
	4050 4650 4050 5000
Wire Wire Line
	3400 5350 3600 5350
Wire Wire Line
	3400 4300 3600 4300
Wire Wire Line
	3600 5000 3400 5000
Connection ~ 3400 5000
Wire Wire Line
	3400 5000 3400 5350
Wire Wire Line
	3600 4650 3400 4650
Wire Wire Line
	3400 4300 3400 4650
Wire Wire Line
	3400 4650 3400 5000
Connection ~ 3400 4650
Text GLabel 2650 2650 0    50   Input ~ 0
L1_RED
Wire Wire Line
	3150 2650 3400 2650
Connection ~ 3400 2650
Text GLabel 2650 4300 0    50   Input ~ 0
L1_BLUE
Wire Wire Line
	3150 4300 3400 4300
Text GLabel 4300 2650 2    50   Input ~ 0
5V
Wire Wire Line
	4300 2650 4050 2650
Connection ~ 4050 2650
Text GLabel 4300 4300 2    50   Input ~ 0
5V
Wire Wire Line
	4300 4300 4050 4300
$Comp
L Device:R R101
U 1 1 605E1B0B
P 3000 2650
F 0 "R101" V 2793 2650 50  0000 C CNN
F 1 "470" V 2884 2650 50  0000 C CNN
F 2 "CCC_Schematic_Footprints:Schematic - Resistor 10.00mm" V 2930 2650 50  0001 C CNN
F 3 "~" H 3000 2650 50  0001 C CNN
	1    3000 2650
	0    1    1    0   
$EndComp
Wire Wire Line
	2850 2650 2650 2650
$Comp
L Device:R R102
U 1 1 605E31ED
P 3000 4300
F 0 "R102" V 2793 4300 50  0000 C CNN
F 1 "470" V 2884 4300 50  0000 C CNN
F 2 "CCC_Schematic_Footprints:Schematic - Resistor 10.00mm" V 2930 4300 50  0001 C CNN
F 3 "~" H 3000 4300 50  0001 C CNN
	1    3000 4300
	0    1    1    0   
$EndComp
Wire Wire Line
	2850 4300 2650 4300
$EndSCHEMATC
