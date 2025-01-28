// myAutomation.h - For Kevin S. "TCKR_CS" system
// https://dcc-ex.com/ex-installer/managing-config-files.html
// Set the outputs to be DC - this is a safe bet incase of power rest
AUTOSTART SETLOCO(5) SET_TRACK(A,DC) DONE
AUTOSTART SETLOCO(7) SET_TRACK(B,DC) DONE

// Pin setup/assignment for turnouts
AUTOSTART 
SET(200)
SET(201)
SET(202)
SET(203)
SET(204)
SET(205)
SET(206)
SET(207)
DONE

// Automation to set Track Power
//AUTOMATION (500, "RR:Dist B DC") // Set District B to DC power
//	SETLOCO (5)
//	SET_TRACK(B,DC) PRINT("District B to DC")
//DONE
//AUTOMATION (501, "RR:Dist B DCX") // Set District B to DCX power
//	SETLOCO (5)
//	SET_TRACK(B,DCX) PRINT("District B to DCX")
//DONE
//AUTOMATION (502, "RR:Dist B DCC") // Set District B to DCC power
//	SET_TRACK(B,MAIN) PRINT("District B to DCC")
//DONE



// Include other config files (ORDER IS IMPORTANT)
#include "myRoster.h"
#include "myAliases.h"
#include "myOverload.h"
#include "myTurnouts.h"
#include "myRoutes.h"

