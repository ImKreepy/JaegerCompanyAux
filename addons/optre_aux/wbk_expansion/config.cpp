#include "script_component.hpp"

class CfgPatches
{
    class SUBADDON {
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(ADDON),"jc_optre_aux_silent_shadow","WBK_Halo_Alients","Casey_Halo_melee"};
        skipWhenMissingDependencies = 1;
        units[] = {
            "IK_WBK_OPTRE_SilentShadow_Unit_Melee",
            "IK_WBK_OPTRE_SilentShadow_Unit_Carbine",
            "IK_WBK_OPTRE_SilentShadow_Unit_AT",
            "IK_WBK_OPTRE_SilentShadow_Unit_AA"
        };
        weapons[] = {
            "IK_WBK_EnergySword_Red"
        };
        VERSION_CONFIG;
    };
};

class CfgVehicles
{
	#include "..\silent_shadow\data\Unit.hpp"

    #include "data/Unit.hpp"
};

class Extended_InitPost_EventHandlers
{
	class IK_WBK_OPTRE_SilentShadow_Unit_Melee
	{
		class SilentShadow_Melee_init
		{
			init="_unit = _this select 0; if (local _unit) then {[_unit] execVM ""\WebKnight_StarWars_Mechanic\AI_Melee_Elite.sqf"";};";
		};
	};
    class IK_WBK_OPTRE_SilentShadow_Unit_Carbine
	{
		class SilentShadow_Carbine_init
		{
			init="_unit = _this select 0; if (local _unit) then {[_unit,selectRandom ['Repeater_Blue','PlasmaCarbine','Default']] execVM 'WBK_Halo_Aliens\AI\WBK_AI_Elite.sqf';};";
		};
	};
	class IK_WBK_OPTRE_SilentShadow_Unit_AT
	{
		class SilentShadow_AT_init
		{
			init="_unit = _this select 0; if (local _unit) then {[_unit,'ConcussionRifle'] execVM 'WBK_Halo_Aliens\AI\WBK_AI_Elite.sqf';};";
		};
	};
	class IK_WBK_OPTRE_SilentShadow_Unit_AA
	{
		class SilentShadow_AA_init
		{
			init="_unit = _this select 0; if (local _unit) then {[_unit,'FuelRod'] execVM 'WBK_Halo_Aliens\AI\WBK_AI_Elite.sqf';};";
		};
	};
};

class CfgWeapons
{
    class Casey_Energy_Sword_1;
	class IK_WBK_EnergySword_Red : Casey_Energy_Sword_1
	{
		displayName= ITEM_NAME(Red Energy Sword);
		baseWeapon="IK_WBK_EnergySword_Red";
		model="\z\jc\addons\optre_aux\wbk_expansion\data\EnergySword\EnergySword.p3d";
		IMS_LightsaberColor="[1,0.5,0.5]";
    };
};

#include "data\CfgGroups.hpp"
