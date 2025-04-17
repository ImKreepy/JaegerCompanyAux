#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = COMPONENT_NAME;
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"jc_main"};
        units[] = {
			"All_Combat_Personnel",
			"Command_To_Briefing",
			"All_Ghosts_EVA",
			"ETA_5_Min",
			"ETA_15_Min",
			"ETA_30_Min",
			"All_Echo",
			"Element_To_Arm",
			"Element_To_Hangar",
			"Kilo_To_Arm",
			"Kilo_To_Hangar",
			"Spartan_To_Hangar",
			"Anvil_Armo",
			"Anvil_To_Black",
			"Anvil_To_Blue",
			"Anvil_To_Green",
			"Anvil_To_Red",
			"Anvil_To_White",
			"Anvil_To_Yellow",
			"All_to_Briefing",
			"POA_Alarm",
			"IED_Phone"
		};
        weapons[] = {   };
    };
};

#include "CfgMusicClasses.hpp"

class CfgMusic
{
	#include "Halo1.hpp"
	#include "Halo1A.hpp"
	#include "Halo2.hpp"
	#include "Halo2A.hpp"
	#include "Halo3.hpp"
	#include "Halo3ODST.hpp"
	#include "Halo4.hpp"
	#include "Halo5.hpp"
	#include "HaloReach.hpp"
	#include "HaloWars.hpp"
	#include "HaloWars2.hpp"
	#include "Misc.hpp"
};

#include "CfgSFX.hpp"
#include "CfgVehicles.hpp"