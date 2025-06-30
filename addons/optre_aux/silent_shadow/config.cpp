#include "script_component.hpp"

class CfgPatches
{
    class SUBADDON {
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(ADDON),"OPTRE_FC_Units_Elite"};
        skipWhenMissingDependencies = 1;
        units[] = {
            "IK_OPTRE_SilentShadow_Unit",
            "IK_OPTRE_SilentShadow_Unit_AA",
            "IK_OPTRE_SilentShadow_Unit_AT"
        };
        weapons[] = {   };
        VERSION_CONFIG;
    };
};

class CfgVehicles
{
    #include "data/Unit.hpp"
};

class CfgWeapons
{
    #include "data/Headgear.hpp"
    #include "data/Vest.hpp"
    #include "data/Uniform.hpp"
};

#include "data\CfgGroups.hpp"
