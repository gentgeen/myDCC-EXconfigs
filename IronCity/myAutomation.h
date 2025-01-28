// myAutomation.h - for ICNS Command Station
// ====================================================================
// Setting all tracks to DC is proably safest option - so we never have
// a case where power is reset and we have a DC locomotive sitting on
// a DCC track 
AUTOSTART SETLOCO(1) SET_TRACK(A,DC) DONE
AUTOSTART SETLOCO(2) SET_TRACK(B,DCX) DONE
AUTOSTART SETLOCO(4) SET_TRACK(C,DC) DONE
AUTOSTART SETLOCO(5) SET_TRACK(D,DCX) DONE

// Set for Altoona 2024 show
//AUTOSTART SET_TRACK(A,MAIN) DONE
//AUTOSTART SET_TRACK(B,MAIN) DONE
//AUTOSTART SETLOCO (5) SET_TRACK(C,DCX) DONE
//AUTOSTART SET_TRACK(D,PROG) DONE
// ====================================================================
AUTOMATION (500,"District C DC") // Set district C to DC
  SETLOCO (5)
  SET_TRACK (C,DC) PRINT("District C DC")
DONE

AUTOMATION (501,"District C DCX") // Set district C to DCX
  SETLOCO (5)
  SET_TRACK (C,DCX) PRINT("District C DCX")
DONE
// ====================================================================
// Setting up DC roster to make life a little easier for guests
ROSTER(1,"DC Cab 1","/* /")
ROSTER(2,"DC Cab 2","/* /")
ROSTER(4,"DC Cab 4","/* /")
ROSTER(5,"DC Cab 5","/* /")
