// See https://dcc-ex.com/exrail/exrail-command-reference.html#controlling-overload-shorts

// Adding to short-detection...
ONOVERLOAD(A)
  LCD(6, "OVERLOAD A POWEROFF")
  PRINT("Overload Detected on A - Turn Off Power")
  SET_TRACK(A, NONE)   // Unsets the TrackManager assignment and turns off power.
  SET(27)              // Light the LED
  AFTEROVERLOAD(A)
      LCD(6, "RESTORE A POWER ON")
      PRINT("Overload Cleared on A - Power Restored")
      RESET(27)
      DELAY(2000)
      LCD(6, "                  ")
DONE
// The following turns the poweron and allows the AFTEROVERLOAD to run
// This could also be achieved with a physical button and AFTER(pin) in place of ROUTE()
ROUTE(901,"RR:Reset A")
  LCD(6,"                  ")
  SETLOCO(5) 
  SET_TRACK(A, DC)
  POWERON
DONE
