#define PROTOCOL_VERSION "1.0"

#if defined(WITBOX)
	#define MACHINE_NAME "Witbox 2"
	#define FIRMWARE_URL "http://www.bqreaders.com/descargas-witbox.html"
	#define FIRMWARE_VER "2.0.0"
	#define BUILD_VER ""
#elif defined(CUSTOM_MENDEL_NAME)
	#define MACHINE_NAME CUSTOM_MENDEL_NAME
#else
	// Default firmware set to Mendel
	#define MACHINE_NAME "Mendel"
	#define FIRMWARE_URL "https://github.com/ErikZalm/Marlin/"
#endif

#ifndef MACHINE_UUID
   #define MACHINE_UUID "00000000-0000-0000-0000-000000000000"
#endif


#define STRINGIFY_(n) #n
#define STRINGIFY(n) STRINGIFY_(n)


// Common LCD messages
/* nothing here as of yet */

// Common serial messages
#define MSG_MARLIN "Marlin"

// Serial Console Messages

#define MSG_Enqueing "enqueing \""
#define MSG_POWERUP "PowerUp"
#define MSG_EXTERNAL_RESET " External Reset"
#define MSG_BROWNOUT_RESET " Brown out Reset"
#define MSG_WATCHDOG_RESET " Watchdog Reset"
#define MSG_SOFTWARE_RESET " Software Reset"
#define MSG_AUTHOR " | Author: "
#define MSG_CONFIGURATION_VER " Last Updated: "
#define MSG_FREE_MEMORY " Free Memory: "
#define MSG_PLANNER_BUFFER_BYTES "  PlannerBufferBytes: "
#define MSG_OK "ok"
#define MSG_FILE_SAVED "Done saving file."
#define MSG_ERR_LINE_NO "Line Number is not Last Line Number+1, Last Line: "
#define MSG_ERR_CHECKSUM_MISMATCH "checksum mismatch, Last Line: "
#define MSG_ERR_NO_CHECKSUM "No Checksum with line number, Last Line: "
#define MSG_ERR_NO_LINENUMBER_WITH_CHECKSUM "No Line Number with checksum, Last Line: "
#define MSG_FILE_PRINTED "Done printing file"
#define MSG_BEGIN_FILE_LIST "Begin file list"
#define MSG_END_FILE_LIST "End file list"
#define MSG_M104_INVALID_EXTRUDER "M104 Invalid extruder "
#define MSG_M105_INVALID_EXTRUDER "M105 Invalid extruder "
#define MSG_M200_INVALID_EXTRUDER "M200 Invalid extruder "
#define MSG_M218_INVALID_EXTRUDER "M218 Invalid extruder "
#define MSG_ERR_NO_THERMISTORS "No thermistors - no temperature"
#define MSG_M109_INVALID_EXTRUDER "M109 Invalid extruder "
#define MSG_HEATING "Heating..."
#define MSG_HEATING_COMPLETE "Heating done."
#define MSG_BED_HEATING "Bed Heating."
#define MSG_BED_DONE "Bed done."
#define MSG_M115_REPORT "FIRMWARE_NAME:Marlin V1; Sprinter/grbl mashup for gen6 FIRMWARE_URL:" FIRMWARE_URL " PROTOCOL_VERSION:" PROTOCOL_VERSION " MACHINE_TYPE:" MACHINE_NAME " EXTRUDER_COUNT:" STRINGIFY(EXTRUDERS) " UUID:" MACHINE_UUID "\n"
#define MSG_COUNT_X " Count X: "
#define MSG_ERR_KILLED "Printer halted. kill() called!"
#define MSG_ERR_STOPPED "Printer stopped due to errors. Fix the error and use M999 to restart. (Temperature is reset. Set it after restarting)"
#define MSG_RESEND "Resend: "
#define MSG_UNKNOWN_COMMAND "Unknown command: \""
#define MSG_ACTIVE_EXTRUDER "Active Extruder: "
#define MSG_INVALID_EXTRUDER "Invalid extruder"
#define MSG_X_MIN "x_min: "
#define MSG_X_MAX "x_max: "
#define MSG_Y_MIN "y_min: "
#define MSG_Y_MAX "y_max: "
#define MSG_Z_MIN "z_min: "
#define MSG_Z_MAX "z_max: "
#define MSG_M119_REPORT "Reporting endstop status"
#define MSG_ENDSTOP_HIT "TRIGGERED"
#define MSG_ENDSTOP_OPEN "open"
#define MSG_HOTEND_OFFSET "Hotend offsets:"

#define MSG_SD_CANT_OPEN_SUBDIR "Cannot open subdir"
#define MSG_SD_INIT_FAIL "SD init fail"
#define MSG_SD_VOL_INIT_FAIL "volume.init failed"
#define MSG_SD_OPENROOT_FAIL "openRoot failed"
#define MSG_SD_CARD_OK "SD card ok"
#define MSG_SD_WORKDIR_FAIL "workDir open failed"
#define MSG_SD_OPEN_FILE_FAIL "open failed, File: "
#define MSG_SD_FILE_OPENED "File opened: "
#define MSG_SD_SIZE " Size: "
#define MSG_SD_FILE_SELECTED "File selected"
#define MSG_SD_WRITE_TO_FILE "Writing to file: "
#define MSG_SD_PRINTING_BYTE "SD printing byte "
#define MSG_SD_NOT_PRINTING "Not SD printing"
#define MSG_SD_ERR_WRITE_TO_FILE "error writing to file"
#define MSG_SD_CANT_ENTER_SUBDIR "Cannot enter subdir: "

#define MSG_STEPPER_TOO_HIGH "Steprate too high: "
#define MSG_ENDSTOPS_HIT "endstops hit: "
#define MSG_ERR_COLD_EXTRUDE_STOP " cold extrusion prevented"
#define MSG_ERR_LONG_EXTRUDE_STOP " too long extrusion prevented"
#define MSG_BABYSTEPPING_X "Babystepping X"
#define MSG_BABYSTEPPING_Y "Babystepping Y"
#define MSG_BABYSTEPPING_Z "Babystepping Z"
#define MSG_SERIAL_ERROR_MENU_STRUCTURE "Error in menu structure"

#define MSG_ERR_EEPROM_WRITE                "Error writing to EEPROM!"

#define WELCOME_MSG "Ready"
#define MSG_ON "On"
#define MSG_OFF "Off"
#define MSG_SD_BAD_FILENAME "Bad filename!"
#define MSG_HEATING_PROCESS "Heating..."
#define MSG_HEATING_DONE "Heating done."
#define MSG_BED_HEATING_PROCESS "Bed Heating."
#define MSG_BED_HEATING_DONE "Bed done."
#define MSG_ENDSTOPS_TOUCH "Endstops hit: "
#define MSG_STOPPED "Stopped"
#define MSG_BED "Bed"
#define MSG_DWELL "Sleep..."
#define MSG_END_HOUR "hours"
#define MSG_END_MINUTE "minutes"
#define MSG_ZPROBE_OUT "Z probe out bed"
#define MSG_POSITION_UNKNOWN "Home X/Y before Z"
#define MSG_PRINTING "Printing..."
#define MSG_USERWAIT "Wait for user..."
#define MSG_KILLED "KILLED"
#define MSG_NO_MOVE "No move"
#define MSG_PAUSED "Press to resume"

