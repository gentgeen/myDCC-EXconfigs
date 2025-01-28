// Added when following directions for the SHCD1 CD Board - I2C Switch Machine Control

#include "IODevice.h"
void halSetup() {
	PCF8574::create(200, 8, 0x21);
}

