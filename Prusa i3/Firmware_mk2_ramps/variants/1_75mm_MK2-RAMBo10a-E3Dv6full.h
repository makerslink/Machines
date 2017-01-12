#ifndef CONFIGURATION_PRUSA_H
#define CONFIGURATION_PRUSA_H

/*------------------------------------
GENERAL SETTINGS
*------------------------------------*/

// Printer revision
#define FILAMENT_SIZE "1_75mm_MK2"
#define NOZZLE_TYPE "E3Dv6full"

// Developer flag
#define DEVELOPER

// Printer name
#define CUSTOM_MENDEL_NAME "Prusa i3 MK2"

// Electronics
#define MOTHERBOARD BOARD_RAMBO_MINI_1_0


/*------------------------------------
AXIS SETTINGS
*------------------------------------*/

// Steps per unit {X,Y,Z,E}
#define DEFAULT_AXIS_STEPS_PER_UNIT   {100,100,3200/8,161.3}

// Endstop inverting
const bool X_MIN_ENDSTOP_INVERTING = false; // set to true to invert the logic of the endstop.
const bool Y_MIN_ENDSTOP_INVERTING = false; // set to true to invert the logic of the endstop.
const bool Z_MIN_ENDSTOP_INVERTING = false; // set to true to invert the logic of the endstop.

// Home position
#define MANUAL_X_HOME_POS 0
#define MANUAL_Y_HOME_POS -2.2
#define MANUAL_Z_HOME_POS 0.15

// Travel limits after homing
#define X_MAX_POS 255
#define X_MIN_POS 0
#define Y_MAX_POS 210
#define Y_MIN_POS -2.2
#define Z_MAX_POS 210
#define Z_MIN_POS 0.15

// Canceled home position
#define X_CANCEL_POS 50
#define Y_CANCEL_POS 190

#define NUM_AXIS 4 // The axis order in all axis related arrays is X, Y, Z, E
#define HOMING_FEEDRATE {3000, 3000, 800, 0}  // set the homing speeds (mm/min)

#define DEFAULT_MAX_FEEDRATE          {500, 500, 12, 120}    // (mm/sec)
#define DEFAULT_MAX_ACCELERATION      {9000,9000,500,10000}    // X, Y, Z, E maximum start speed for accelerated moves. E default values are good for Skeinforge 40+, for older versions raise them a lot.

#define DEFAULT_ACCELERATION          1500    // X, Y, Z and E max acceleration in mm/s^2 for printing moves
#define DEFAULT_RETRACT_ACCELERATION  1500   // X, Y, Z and E max acceleration in mm/s^2 for retracts


#define MANUAL_FEEDRATE {3000, 3000, 1000, 100}   // set the speeds for manual moves (mm/min)

#define Z_AXIS_ALWAYS_ON 1

/*------------------------------------
EXTRUDER SETTINGS
*------------------------------------*/

// Mintemps
#define HEATER_0_MINTEMP 15
#define HEATER_1_MINTEMP 5
#define HEATER_2_MINTEMP 5
#define BED_MINTEMP 15

// Maxtemps
#define HEATER_0_MAXTEMP 305
#define HEATER_1_MAXTEMP 305
#define HEATER_2_MAXTEMP 305
#define BED_MAXTEMP 150

// Define PID constants for extruder
#define  DEFAULT_Kp 40.925
#define  DEFAULT_Ki 4.875
#define  DEFAULT_Kd 86.085

// Extrude mintemp
#define EXTRUDE_MINTEMP 130

// Extruder cooling fans
#define EXTRUDER_0_AUTO_FAN_PIN   8
#define EXTRUDER_1_AUTO_FAN_PIN   -1
#define EXTRUDER_2_AUTO_FAN_PIN   -1
#define EXTRUDER_AUTO_FAN_TEMPERATURE 50
#define EXTRUDER_AUTO_FAN_SPEED   255  // == full speed



/*------------------------------------
LOAD/UNLOAD FILAMENT SETTINGS
*------------------------------------*/

// Load filament commands
#define LOAD_FILAMENT_0 "M83"
#define LOAD_FILAMENT_1 "G1 E70 F400"
#define LOAD_FILAMENT_2 "G1 E40 F100"

// Unload filament commands
#define UNLOAD_FILAMENT_0 "M83"
#define UNLOAD_FILAMENT_1 "G1 E-80 F7000"

/*------------------------------------
CHANGE FILAMENT SETTINGS
*------------------------------------*/

// Filament change configuration
#define FILAMENTCHANGEENABLE
#ifdef FILAMENTCHANGEENABLE
#define FILAMENTCHANGE_XPOS 211
#define FILAMENTCHANGE_YPOS 0
#define FILAMENTCHANGE_ZADD 2
#define FILAMENTCHANGE_FIRSTRETRACT -2
#define FILAMENTCHANGE_FINALRETRACT -80

#define FILAMENTCHANGE_FIRSTFEED 70
#define FILAMENTCHANGE_FINALFEED 50
#define FILAMENTCHANGE_RECFEED 5

#define FILAMENTCHANGE_XYFEED 50
#define FILAMENTCHANGE_EFEED 20
#define FILAMENTCHANGE_RFEED 400
#define FILAMENTCHANGE_EXFEED 2
#define FILAMENTCHANGE_ZFEED 15

#endif

/*------------------------------------
ADDITIONAL FEATURES SETTINGS
*------------------------------------*/

// Define Prusa filament runout sensor
//#define FILAMENT_RUNOUT_SUPPORT

#ifdef FILAMENT_RUNOUT_SUPPORT
#define FILAMENT_RUNOUT_SENSOR 1
#endif

// temperature runaway
//#define TEMP_RUNAWAY_BED_HYSTERESIS 5
//#define TEMP_RUNAWAY_BED_TIMEOUT 360

#define TEMP_RUNAWAY_EXTRUDER_HYSTERESIS 15
#define TEMP_RUNAWAY_EXTRUDER_TIMEOUT 45

/*------------------------------------
MOTOR CURRENT SETTINGS
*------------------------------------*/

// Motor Current setting for BIG RAMBo
#define DIGIPOT_MOTOR_CURRENT {135,135,135,135,135} // Values 0-255 (RAMBO 135 = ~0.75A, 185 = ~1A)
#define DIGIPOT_MOTOR_CURRENT_LOUD {135,135,135,135,135}

// Motor Current settings for RAMBo mini PWM value = MotorCurrentSetting * 255 / range
#if MOTHERBOARD == 102 || MOTHERBOARD == 302
#define MOTOR_CURRENT_PWM_RANGE 2000
#define DEFAULT_PWM_MOTOR_CURRENT  {270, 830, 450} // {XY,Z,E}
#define DEFAULT_PWM_MOTOR_CURRENT_LOUD  {540, 830, 500} // {XY,Z,E}
#endif

/*------------------------------------
BED SETTINGS
*------------------------------------*/

// Define Mesh Bed Leveling system to enable it
#define MESH_BED_LEVELING
#ifdef MESH_BED_LEVELING

#define MBL_Z_STEP 0.01

// Mesh definitions
#define MESH_MIN_X 35
#define MESH_MAX_X 238
#define MESH_MIN_Y 6
#define MESH_MAX_Y 202

// Mesh upsample definition
#define MESH_NUM_X_POINTS 7
#define MESH_NUM_Y_POINTS 7
// Mesh measure definition
#define MESH_MEAS_NUM_X_POINTS 3
#define MESH_MEAS_NUM_Y_POINTS 3

#define MESH_HOME_Z_CALIB 0.2
#define MESH_HOME_Z_SEARCH 5

#define X_PROBE_OFFSET_FROM_EXTRUDER 23     // Z probe to nozzle X offset: -left  +right
#define Y_PROBE_OFFSET_FROM_EXTRUDER 9     // Z probe to nozzle Y offset: -front +behind
#define Z_PROBE_OFFSET_FROM_EXTRUDER -0.4  // Z probe to nozzle Z offset: -below (always!)
#endif

// Bed Temperature Control
// Select PID or bang-bang with PIDTEMPBED. If bang-bang, BED_LIMIT_SWITCHING will enable hysteresis
//
// Uncomment this to enable PID on the bed. It uses the same frequency PWM as the extruder.
// If your PID_dT above is the default, and correct for your hardware/configuration, that means 7.689Hz,
// which is fine for driving a square wave into a resistive load and does not significantly impact you FET heating.
// This also works fine on a Fotek SSR-10DA Solid State Relay into a 250W heater.
// If your configuration is significantly different than this and you don't understand the issues involved, you probably
// shouldn't use bed PID until someone else verifies your hardware works.
// If this is enabled, find your own PID constants below.
#define PIDTEMPBED
//
//#define BED_LIMIT_SWITCHING

// This sets the max power delivered to the bed, and replaces the HEATER_BED_DUTY_CYCLE_DIVIDER option.
// all forms of bed control obey this (PID, bang-bang, bang-bang with hysteresis)
// setting this to anything other than 255 enables a form of PWM to the bed just like HEATER_BED_DUTY_CYCLE_DIVIDER did,
// so you shouldn't use it unless you are OK with PWM on your bed.  (see the comment on enabling PIDTEMPBED)
#define MAX_BED_POWER 255 // limits duty cycle to bed; 255=full current

// Bed temperature compensation settings
#define BED_OFFSET 10
#define BED_OFFSET_START 40
#define BED_OFFSET_CENTER 50


#ifdef PIDTEMPBED
//120v 250W silicone heater into 4mm borosilicate (MendelMax 1.5+)
//from FOPDT model - kp=.39 Tp=405 Tdead=66, Tc set to 79.2, aggressive factor of .15 (vs .1, 1, 10)
#define  DEFAULT_bedKp 126.13
#define  DEFAULT_bedKi 4.30
#define  DEFAULT_bedKd 924.76

//120v 250W silicone heater into 4mm borosilicate (MendelMax 1.5+)
//from pidautotune
//    #define  DEFAULT_bedKp 97.1
//    #define  DEFAULT_bedKi 1.41
//    #define  DEFAULT_bedKd 1675.16

// FIND YOUR OWN: "M303 E-1 C8 S90" to run autotune on the bed at 90 degreesC for 8 cycles.
#endif // PIDTEMPBED


/*-----------------------------------
PREHEAT SETTINGS
*------------------------------------*/

#define PLA_PREHEAT_HOTEND_TEMP 215
#define PLA_PREHEAT_HPB_TEMP 55
#define PLA_PREHEAT_FAN_SPEED 0  

#define ABS_PREHEAT_HOTEND_TEMP 255
#define ABS_PREHEAT_HPB_TEMP 100
#define ABS_PREHEAT_FAN_SPEED 0 

#define HIPS_PREHEAT_HOTEND_TEMP 220
#define HIPS_PREHEAT_HPB_TEMP 100
#define HIPS_PREHEAT_FAN_SPEED 0 

#define PP_PREHEAT_HOTEND_TEMP 254
#define PP_PREHEAT_HPB_TEMP 100
#define PP_PREHEAT_FAN_SPEED 0 

#define PET_PREHEAT_HOTEND_TEMP 240
#define PET_PREHEAT_HPB_TEMP 90
#define PET_PREHEAT_FAN_SPEED 0 

#define FLEX_PREHEAT_HOTEND_TEMP 230
#define FLEX_PREHEAT_HPB_TEMP 50
#define FLEX_PREHEAT_FAN_SPEED 0 

/*------------------------------------
THERMISTORS SETTINGS
*------------------------------------*/

//
//--NORMAL IS 4.7kohm PULLUP!-- 1kohm pullup can be used on hotend sensor, using correct resistor and table
//
//// Temperature sensor settings:
// -2 is thermocouple with MAX6675 (only for sensor 0)
// -1 is thermocouple with AD595
// 0 is not used
// 1 is 100k thermistor - best choice for EPCOS 100k (4.7k pullup)
// 2 is 200k thermistor - ATC Semitec 204GT-2 (4.7k pullup)
// 3 is Mendel-parts thermistor (4.7k pullup)
// 4 is 10k thermistor !! do not use it for a hotend. It gives bad resolution at high temp. !!
// 5 is 100K thermistor - ATC Semitec 104GT-2 (Used in ParCan & J-Head) (4.7k pullup)
// 6 is 100k EPCOS - Not as accurate as table 1 (created using a fluke thermocouple) (4.7k pullup)
// 7 is 100k Honeywell thermistor 135-104LAG-J01 (4.7k pullup)
// 71 is 100k Honeywell thermistor 135-104LAF-J01 (4.7k pullup)
// 8 is 100k 0603 SMD Vishay NTCS0603E3104FXT (4.7k pullup)
// 9 is 100k GE Sensing AL03006-58.2K-97-G1 (4.7k pullup)
// 10 is 100k RS thermistor 198-961 (4.7k pullup)
// 11 is 100k beta 3950 1% thermistor (4.7k pullup)
// 12 is 100k 0603 SMD Vishay NTCS0603E3104FXT (4.7k pullup) (calibrated for Makibox hot bed)
// 13 is 100k Hisens 3950  1% up to 300°C for hotend "Simple ONE " & "Hotend "All In ONE" 
// 20 is the PT100 circuit found in the Ultimainboard V2.x
// 60 is 100k Maker's Tool Works Kapton Bed Thermistor beta=3950
//
//    1k ohm pullup tables - This is not normal, you would have to have changed out your 4.7k for 1k
//                          (but gives greater accuracy and more stable PID)
// 51 is 100k thermistor - EPCOS (1k pullup)
// 52 is 200k thermistor - ATC Semitec 204GT-2 (1k pullup)
// 55 is 100k thermistor - ATC Semitec 104GT-2 (Used in ParCan & J-Head) (1k pullup)
//
// 1047 is Pt1000 with 4k7 pullup
// 1010 is Pt1000 with 1k pullup (non standard)
// 147 is Pt100 with 4k7 pullup
// 110 is Pt100 with 1k pullup (non standard)

#define TEMP_SENSOR_0 5
#define TEMP_SENSOR_1 0
#define TEMP_SENSOR_2 0
#define TEMP_SENSOR_BED 1


#endif //__CONFIGURATION_PRUSA_H
