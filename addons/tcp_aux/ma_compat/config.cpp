#include "script_component.hpp"

class CfgPatches
{
    class SUBADDON {
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(ADDON),"jc_misriah_aux","TCP_Ui"};
        skipWhenMissingDependencies = 1;
        units[] = { };
        weapons[] = {   };
        VERSION_CONFIG;
    };
};

#include "CfgWeapons.hpp"
