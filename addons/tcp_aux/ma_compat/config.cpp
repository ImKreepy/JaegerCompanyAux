#include "script_component.hpp"

class CfgPatches
{
    class SUBADDON {
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(ADDON),"A3_Ui_F_TCP","jc_misriah_aux_infantry"};
        skipWhenMissingDependencies = 1;
        units[] = { };
        weapons[] = {   };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"