#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = COMPONENT_NAME;
        author = AUTHOR;
        authors[] = AUTHORS;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"jc_main","ace_interaction","Splits_Vehicles"};
        units[] = {
            "IK_Foundries_D77_Single",
            "IK_Foundries_D77_Single_RRR"
        };
        weapons[] = {   };
		skipWhenMissingDependencies = 1;
    };
};

#include "vehicle_reqs.hpp"
#include "CfgVehicles.hpp"