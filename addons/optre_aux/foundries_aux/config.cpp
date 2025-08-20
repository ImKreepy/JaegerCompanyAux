#include "script_component.hpp"

class CfgPatches
{
    class SUBADDON {
        name = COMPONENT_NAME;
        author = AUTHOR;
        authors[] = AUTHORS;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(ADDON),"ace_interaction","Splits_Vehicles"};
        units[] = {
            "IK_Foundries_D77_Single",
            "IK_Foundries_D77_Single_RRR"
        };
        weapons[] = {   };
		skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "vehicle_reqs.hpp"
#include "CfgVehicles.hpp"
