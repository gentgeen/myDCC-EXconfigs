// config.h - For K. Squire Command Station
// https://dcc-ex.com/ex-installer/managing-config-files.html


// OLED Screen stuff
#define OLED_DRIVER 128,64
#define SCROLLMODE 1

// JMRI Virtual Display - Scheduled for Version 5.2 
//   -- The JMRI display will show "Screen 0"  One option is that with 
//		the virtual display, you can exceed the hardware limit of 8 rows
//		#define MAX_CHARACTER_ROWS 16
#define ENABLE_VDPY
#define MAX_CHARACTER_ROWS 16

// Motor Shield Stuff
#define MOTOR_SHIELD_TYPE STANDARD_MOTOR_SHIELD

//Wifi Stuff
#define IP_PORT 2560
#define ENABLE_WIFI true
#define WIFI_SSID "TCKR_CS"
#define WIFI_PASSWORD "turtle creek"
#define WIFI_HOSTNAME "dccex"
#define WIFI_CHANNEL 1
#define WIFI_FORCE_AP true //Force into AP mode since I have set the SSID




