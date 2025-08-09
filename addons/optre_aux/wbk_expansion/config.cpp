#include "script_component.hpp"

class CfgPatches
{
    class SUBADDON {
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(ADDON),"WBK_Halo_Alients","Casey_Halo_melee"};
        skipWhenMissingDependencies = 1;
        units[] = {
            "IK_WBK_OPTRE_eliteMinor_Carbine",
			"IK_WBK_OPTRE_eliteMinor_AA",
			"IK_WBK_OPTRE_eliteMinor_AT",
			"IK_WBK_OPTRE_EliteMajor_Carbine",
			"IK_WBK_OPTRE_EliteUltra_Carbine",
			"IK_WBK_OPTRE_EliteUltra_SilentShadow_Carbine",
			"IK_WBK_OPTRE_EliteUltra_SilentShadow_Melee",
			"IK_WBK_OPTRE_EliteZealot_Carbine",
			"IK_WBK_OPTRE_EliteZealot_Melee",
			"IK_WBK_OPTRE_EliteZealot_FieldMaster_Carbine",
			"IK_WBK_OPTRE_EliteZealot_FieldMaster_Melee"
        };
        weapons[] = {
            "IK_WBK_EnergySword_Red"
        };
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"

class Extended_InitPost_EventHandlers
{
	#include "XEH_Melee.hpp"
	#include "XEH_Carbine.hpp"
	#include "XEH_AT.hpp"
	#include "XEH_AA.hpp"
};

class CfgWeapons
{
    class Casey_Energy_Sword_1;
	class IK_WBK_EnergySword_Red : Casey_Energy_Sword_1
	{
		displayName= ITEM_NAME(Red Energy Sword);
		model="\ik\jc\addons\optre_aux\wbk_expansion\data\EnergySword\EnergySword.p3d";
		IMS_LightsaberColor="[1,0.5,0.5]";
    };
};

#include "CfgGroups.hpp"
