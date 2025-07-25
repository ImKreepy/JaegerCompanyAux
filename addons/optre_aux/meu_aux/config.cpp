#include "script_component.hpp"

class CfgPatches
{
    class SUBADDON {
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(ADDON),"MEU_Units_Forerunner"};
        skipWhenMissingDependencies = 1;
        units[] = {
			"JC_MEU_Sentinel_Aggressor"
		};
        weapons[] = {   };
        VERSION_CONFIG;
    };
};
class CfgVehicles
{
	class I_UAV_01_F;
	class MEU_Sentinel_A: I_UAV_01_F{};
	class JC_MEU_Sentinel_Aggressor: MEU_Sentinel_A
	{
		side=2;
		scope=2;
		displayname="[JC] Aggressor Sentinel";
		model="PR_Forerunner\SentinelAggressor\SentinelAggressor.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"glowall"
		};
		hiddenSelectionsTextures[]=
		{
			QPATHTOF(meu_aux\jc_sentinel_aggressor_co.paa)
		};
	};
};
