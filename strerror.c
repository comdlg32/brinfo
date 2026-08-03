#include "brinfo.h"

char* strstat(int status) {
	switch(status) {
		case 10001: return "Ready";
		case 10002: return "Ready (offline)";
		case 10003: return "Warming up";
		case 10004: return "Self Test or Internal Test";
		case 10005: return "Reset, Clearing Memory";
		case 10006: return "Toner Low";
		case 10007: return "Canceling Job";
		case 10010: return "Status Buffer Overflow";
		case 10011: return "Buffer Overflow";
		case 10013: return "Self Test";
		case 10014: return "Printing Test";
		case 10015: return "Printing Font List";
		case 10016: return "Engine Test";
		case 10017: return "Printing Demo Page";
		case 10018: return "Resetting Menus to Defaults";
		case 10019: return "Resetting Active IO";
		case 10020: return "Resetting all IO";
		case 10021: return "Restoring Factory Settings";
		case 10022: return "Printing Configuration Page";
		case 10023: return "Processing Job";
		case 10024: return "Press select to form feed or Data received";
		case 10025: return "Access Denied";
		case 10026: return "No Job to Cancel";
		case 10027: return "Clearing paper path";
		case 10028: return "Printing error log";
		case 10029: return "Formfeeding";
		case 10030: return "Print Job Received";
		case 10031: return "Engine Cleaning";

		case 20001: return "Generic syntax error (entire PJL command ignored)";
		case 20002: return "Unsupported command";
		case 20004: return "Unsupported personality, system, or I/O port";
		case 20005: return "PJL command buffer overflow";
		case 20006: return "Illegal character or line terminated by the Universal Exit Language command";
		case 20007: return "<WS> or [<CR>]<LF> missing after closing quotes";
		case 20008: return "Invalid character in an alphanumeric value";
		case 20009: return "Invalid character in a numeric value";
		case 20010: return "Invalid character at the start of a string, alphanumeric value, or numeric value";
		case 20011: return "String missing closing double-quote character";
		case 20012: return "Numeric value starts with a decimal point";
		case 20013: return "Numeric value does not contain any digits";
		case 20014: return "No alphanumeric value after command modifier";
		case 20015: return "Option name and equal sign encountered, but the value field is missing";
		case 20016: return "More than one command modifier";
		case 20017: return "Command modifier encountered after an option(command modifier must precede option)";
		case 20018: return "Command not an alphanumeric value";
		case 20019: return "Numeric value encountered when an alphanumeric value expected";
		case 20020: return "String encountered when an alphanumeric valueexpected";
		case 20021: return "Unsupported command modifier";
		case 20022: return "Command modifier missing";
		case 20023: return "Option missing";
		case 20024: return "Extra data received after option name (used for commands like SET that limit the number of options supported)";
		case 20025: return "Two decimal points in a numeric value";
		case 20026: return "Invalid binary value";

		case 25001: return "Generic warning error (part of the PJL command ignored)";
		case 25002: return "PJL prefix missing";
		case 25003: return "Alphanumeric value too long";
		case 25004: return "String too long";
		case 25005: return "Numeric value too long";
		case 25006: return "Unsupported option name";
		case 25007: return "Option name requires a value which is missing";
		case 25008: return "Option name requires a value of a different type";
		case 25009: return "Option name received with a value, but this option does not support values";
		case 25010: return "Same option name received more than once";
		case 25011: return "Ignored option name due to value underflow or overflow";
		case 25012: return "Value for option experienced data loss due to data conversion (value truncated or rounded)";
		case 25013: return "Value for option experienced data loss due to value being out of range; the value used was the closest supported limit";
		case 25014: return "Value is of the correct type, but is out of range (value wasignored)";
		case 25016: return "Option name received with an alphanumeric value, butthis value is not supported";
		case 25017: return "String empty, option ignored";
		case 25018: return "A Universal Exit Language command wasexpected but not found";

		case 27001: return "Generic semantic error";
		case 27002: return "EOJ command encountered without a previouslymatching JOB command. An EOJ command does nothave a matching JOB command if the number of validEOJ commands received is greater than the number ofvalid JOB commands received";
		case 27003: return "Password protected—attempted to change NVRAM value when password is set and the job is not a secure PJL job";
		case 27004: return "Cannot modify the value of a read-only variable";
		case 27005: return "Can only use DEFAULT with this variable; cannot use SET";
		case 27006: return "Attempted to pass a NULL string to a command orcommand option that requires the string to contain atleast one character";
		case 27007: return "Attempted to DEFAULT a variable which can only be SET";

		case 40000: return "Sleep Mode";
		case 40010: return "Install Toner Cartridge or No electric contact with Toner Cartridge";
		case 40011: return "Accessing Toner Cartridge";
		case 40019: return "Remove paper";
		case 40020: return "No MICR Toner or Install MICR Toner Cartridge";
		case 40021: return "Printer Open. Close Printer Cover";
		case 40022: return "Paper Jam or Remove Paper Jam";
		case 40024: return "FE Cartridge";
		case 40026: return "PC Install or Install Tray 2";
		case 40038: return "Low Toner, PRESS GO KEY";
		case 40046: return "FI Insert Cartridge";
		case 40047: return "FR Remove Cartridge";
		case 40048: return "[PJL OPMSG]";
		case 40049: return "[PJL STMSG]";
		case 40050: return "50 Service or 50 FUSER Error, Cycle Power";
		case 40051: return "51 ERROR or 51 Printer Error, Cycle Power";
		case 40052: return "52 ERROR or 52 Printer Error, Cycle Power";
		case 40053: return "53-xy-zz ERROR";
		case 40054: return "54 ERROR";
		case 40055: return "55 ERROR";
		case 40056: return "56 ERROR";
		case 40057: return "57 Service or 57 Motor Failure";
		case 40058: return "58 SERVICE or FAN Motor Failure";
		case 40059: return "59 ERROR";
		case 40061: return "61.x SERVICE";
		case 40062: return "62.x SERVICE";
		case 40063: return "63 SERVICE";
		case 40064: return "64 SERVICE or Printer Error, Cycle Power";
		case 40065: return "65 SERVICE";
		case 40066: return "External paper handling device failure";
		case 40067: return "67 SERVICE";
		case 40068: return "69 SERVICE";
		case 40069: return "70 ERROR";
		case 40070: return "71 ERROR";
		case 40071: return "72 SERVICE";
		case 40079: return "Printer Manually Taken Offline";
		case 40080: return "EE Incompatible or LC Incompatible";
		case 40083: return "FS Disk Failure or 311.1.1 Disk Failure or Volume 0 FAILURE (Volume 0 will be indicated as either DISK, FLASH, or RAMDISK as appropriate)";
		case 40089: return "Incomplete Tray 3 Installed";
		case 40090: return "Incompatible Envelope Feeder Installed";
		case 40092: return "81 SERVICE (XXX)";
		case 40093: return "Remove Duplex Jam";
		case 40096: return "41.3 Unexpected Paper Size Check Paper in Tray";
		case 40099: return "56.1 ERROR PRESS SELECT KEY";
		case 40100: return "56.2 ERROR PRESS SELECT KEY";
		case 40102: return "FINISHER ALIGN ERROR [BIN NAME]";
		case 40103: return "FINISH LIMIT REACHED [BIN NAME]";
		case 40104: return "INPUT DEVICE FEED PATH OPEN";
		case 40105: return "OUTPUT DEVICE DELIVERY PATH OPEN";
		case 40106: return "INPUT OPERATION ERROR X.YY";
		case 40107: return "OUTPUT OPERATION ERROR X.YY";
		case 40116: return "Volume 1 FAILURE (Failure on Volume 1. Volume 1 will be indicated as either DISK, FLASH, or RAMDISK as appropriate)";
		case 40118: return "Volume 2 FAILURE (Failure on Volume2 . Volume 2 is indicated as either DISK, FLASH, or RAMDISK as appropriate.";
		case 40119: return "Paper Misfeed";
		case 40120: return "Open face-up output bin";
		case 40121: return "Close face-up output bin";
		case 40122: return "Duplexer must be installed";
		case 40123: return "Duplexer error, remove duplexer";
		case 40124: return "Bad duplexer Example of messages: connection";
		case 40128: return "Drum Error replace Drum Kit";
		case 40129: return "Drum Life Out replace Drum Kit";
		case 40130: return "Drum Life Low replace Drum Kit";
		case 40131: return "Transfer Kit out replace Kit";
		case 40132: return "Transfer Kit low replace Kit";
		case 40141: return "Waste toner full, replace Drum Kit";
		case 40142: return "Install Drum Kit";
		case 40143: return "Reinstall Transfer Belt";
		case 40144: return "Press Go to Print, Press Select to Change Toner";
		case 40146: return "41.5 Unexpected Paper Type, Check Paper in Tray";

		case 50000: return "General Hardware Failure";
		case 50001: return "ROM or RAM Error, ROM Checksum Failed";
		case 50002: return "RAM Error, RAM Test Failed";
		case 50003: return "Engine Fuser Error";
		case 50004: return "Engine Beam Detect Error";
		case 50005: return "Engine Scanner Error";
		case 50006: return "Engine Fan Error";
		case 50007: return "Engine Communications Error";
		case 50008: return "FUSER Error Cycle Power or Low FUSER Temperature";
		case 50009: return "FUSER Error Cycle Power or FUSER took too long to Warm Up";
		case 50010: return "FUSER Error Cycle Power or FUSER too hot";
		case 50011: return "FUSER Error Cycle Power or bad FUSER";
		case 50012: return "Error Press Select Key or Beam Detect Malfunction";
		case 50013: return "Error Press Select Key or Laser Malfunction";
		case 50014: return "Error Press Select Key or Scanner Startup Failure";
		case 50015: return "Error Press Select Key or Scanner Rotation Failure";
		case 50016: return "Fan Failure Call Service or Fan Motor 1 Failure";
		case 50017: return "Fan Failure Call Service or Fan Motor 2 Failure";
		case 50018: return "Fan Failure Call Service or Fan Motor 3 Failure";
		case 50019: return "Fan Failure Call Service or Fan Motor 4 Failure";
		case 50020: return "Upper Input Tray Lifter Malfunction";
		case 50021: return "Lower Input Tray Lifter Malfunction";
		case 50022: return "Printer Error Cycle Power or Multipurpose Try Lifter Malfunction";
		case 50023: return "Printer Error Cycle Power or Main Motor Startup Failure";
		case 50024: return "Printer Error Cycle Power or Main Motor Rotation Failure";
		case 50025: return "Finisher Malfunction [BIN NAME] or External Binding Device Has a Malfunction";
		case 50026: return "Device Error X.YY Cycle Power or An External Device has Reporte a Malfunction";
		case 50027: return "Duplex Error Check Duplex Unit or Duplex Unit Guide Failed and Requires Service";
		case 50028: return "Error Press Select Key or Communication Failure between Formatter and Engine";
		case 50029: return "Printer Error Cycle Power";
		case 50030: return "Fan Motor 5 Failure";
		case 50031: return "Fan Motor 6 Failure";
		case 50032: return "Fan Motor 7 Failure";
		case 50033: return "Fan Motor 8 Failure";
		case 50599: return "Processor Error, Power Cycle";
		default:
			if (status >= 50500 && status <= 50599) {
				return "Firmware Error, Power Cycle";
			} else {
				return "Unknown";
			}
	}
}

int intstat(int status) {
	if (status >= 10001 && status <= 10031) {
		return PJL_INFO;
	} else if (status >= 25001 && status <= 25018) {
		return PJL_PARSEERR;
	} else if (status >= 25001 && status <= 25018) {
		return PJL_PARSEWARN;
	} else if (status >= 27001 && status <= 27007) {
		return PJL_SEMERR;
	} else if (status >= 40010 && status <= 40146) {
		return PJL_OPERATOR;
	} else if (status >= 50000 && status <= 50599) {
		return PJL_HWERR;
	}

	return PJL_UNKNOWN;
}

int trafficstat(int status) {
	if (status >= 10001 && status <= 10031) {
		return BR_GREEN;
	} else if (status == 40000) {
		return BR_GREEN;
	} else if (status >= 25001 && status <= 25018) {
		return BR_YELLOW;
	} else if (status >= 25001 && status <= 25018) {
		return BR_YELLOW;
	} else if (status >= 27001 && status <= 27007) {
		return BR_YELLOW;
	} else if (status >= 40010 && status <= 40146) {
		return BR_RED;
	} else if (status >= 50000 && status <= 50599) {
		return BR_RED;
	}

	return BR_YELLOW;
}
