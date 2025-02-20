/* See https://dcc-ex.com/exrail/exrail-command-reference.html#controlling-overload-shorts
 * Simple script to trigger an audible notice, a red LED,and send a message to
 * LCD screen when the CS detects an Overload. 
 *  
 * In my case, I set have an Active Buzzer on 51, and a red LED on PIN 53
 *
 * TO INSTALL:
 *   1) Place this script in the same directory as your myAutomation.h
 *   2) make the PIN numbers in the ALIAS commands match what ever PINs you are using
 *   3) Add the line    #include "myOverload.h"   to the bottom of you myAutomation.h file
 *   4) Upload to your CS
*/

ALIAS(audibleNotice,51)     // Set an alias for PIN 52
                            // This pin is my "audio beep" 

ALIAS(myRedLED,53)          // Set an alias for PIN 53
                            // This pin is my "red LED" 

ONOVERLOAD(A)
  LCD(6, "OVERLOAD Trk A")   // Send message to line 6 of the LCD Screen
  SET(audibleNotice)         // Turn on PINs
  SET(myRedLED)
  AFTEROVERLOAD(A)
    RESET(audibleNotice)     // Turn off PINs
    RESET(myRedLED)
     LCD(6,"Trk A Clear")    // Send message to the LCD Screen
DONE

ONOVERLOAD(B)
  LCD(7, "OVERLOAD Trk B")   // Send message to line 7 of the LCD Screen
  SET(audibleNotice)         // Turn on PINs
  SET(myRedLED)
  AFTEROVERLOAD(B)
    RESET(audibleNotice)     // Turn off PINs
    RESET(myRedLED)
    LCD(7,"Trk B Clear")     // Send message to the LCD Screen
DONE
