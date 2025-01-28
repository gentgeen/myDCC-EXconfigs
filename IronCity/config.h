// config.h - for ICNS Command Station

// OLED Screen stuff
#define OLED_DRIVER 128,64
#define SCROLLMODE 1

// Motor Shield 1 Defined
#define MOTOR_SHIELD_TYPE EX8874_SHIELD

// Dual stacked EX-MotorShield8874s
#define MOTOR_SHIELD_TYPE EX8874_DUAL_STACKED
#define EX8874_DUAL_STACKED F("EX8874_DUAL_STACKED"),\
new MotorDriver( 3, 12, UNUSED_PIN, 9, A0, 5.08, 5000, A4), \
new MotorDriver(11, 13, UNUSED_PIN, 8, A1, 5.08, 5000, A5), \
new MotorDriver( 2, 10, UNUSED_PIN, 7, A2, 5.08, 5000, A6), \
new MotorDriver( 5,  4, UNUSED_PIN, 6, A3, 5.08, 5000, A7)

//Wifi Stuff
#define IP_PORT 2560
#define ENABLE_WIFI true
#define WIFI_SSID "IronCityCS"
#define WIFI_PASSWORD "ShortQuestion"
#define WIFI_HOSTNAME "ICNSdccex"
#define WIFI_CHANNEL 1
#define WIFI_FORCE_AP true //Force into AP mode since I have set the SSID
