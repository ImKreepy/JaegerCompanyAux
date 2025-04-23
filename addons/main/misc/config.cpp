#include "script_component.hpp"

class CfgPatches
{
    class SUBADDON {
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(MAIN_ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(MAIN_ADDON)};
        units[] = {
            "IK_Backpack_Invisible"
        };
        weapons[] = {
            "IK_Bandanna_Armored"
        };
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"