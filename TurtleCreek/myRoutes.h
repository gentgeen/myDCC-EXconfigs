// Routes - For Kevin S. "TCKR_CS" system
// included from the setup.h file
// https://dcc-ex.com/ex-installer/managing-config-files.html


// Route to stop all automations and sequences in case of emergency
ROUTE(911,"RR:Stop Everything!")  	KILLALL  DONE   
//Route(901) has been defined with the overload script -- see myOverload.h



// ----------------------------------------------------------
//             Bulwark Yard Routes
// ----------------------------------------------------------
ROUTE(1,"BUL:Red Passing")   THROW(1) DONE
ROUTE(2,"BUL:Red Straight")  CLOSE(1) DONE

ROUTE(3,"BUL:Yel Passing")   THROW(3) THROW(4) THROW(2) DONE
ROUTE(4,"BUL:Yel Straight")  CLOSE(3) CLOSE(4) CLOSE(2) DONE

ROUTE(5,"BUL:To Storage")  THROW(3) CLOSE(4) CLOSE(5) CLOSE(6) DONE

ROUTE(6,"BUL:To Concrete") THROW(3) CLOSE(4) CLOSE(5) THROW(6) DONE

// This route toggles all turnouts to bring them all into the desired close state
// The delays are spread thoroughout the overall so not to have a long delay at the very end
ROUTE(10,"BUL:Default")
	THROW(1) THROW(2) DELAY(1000) THROW(3) THROW(4) DELAY(1000) THROW(5) THROW(6) DELAY(1000)
	CLOSE(1) CLOSE(2) DELAY(1000) CLOSE(3) CLOSE(4) DELAY(1000) CLOSE(5) CLOSE(6) DELAY(1000)
	DONE

// ----------------------------------------------------------
//             Becks Tower Routes
// ----------------------------------------------------------
ROUTE(21,"BK:Straight")
	CLOSE(frank_cross) CLOSE(tower_cross) DONE
ROUTE(22,"BK:Passing")
	THROW(frank_cross) THROW(tower_cross) DONE

