#include "script_component.hpp"

class CfgPatches
{
    class SUBADDON {
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(MAIN_ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(MAIN_ADDON),"ace_goggles","ace_modules"};
        units[] = {
            "IK_Backpack_Invisible"
        };
        weapons[] = {
            "IK_Bandanna_Armored",
            "IK_Glasses_Empty",
            "IK_Glasses_ODST"
        };
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgGlasses.hpp"
