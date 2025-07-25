#define COMPONENT main
#define COMPONENT_BEAUTIFIED Main
#include "script_mod.hpp"

//#define DEBUG_MODE_FULL
//#define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_MAIN
	#define DEBUG_MODE_FULL
#endif
	#ifdef DEBUG_SETTINGS_MAIN
	#define DEBUG_SETTINGS DEBUG_SETTINGS_MAIN
#endif

#include "script_macros.hpp"


#define AUTHORS {"Im Kreepy"}

#define SUPPLY_LIGHT 150
#define SUPPLY_MED 250
#define SUPPLY_HEAVY 350
#define SUPPLY_PACK 400
