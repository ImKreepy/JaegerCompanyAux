#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = COMPONENT_NAME;
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"jc_main", "ace_modules"};
        units[] = {
            "IK_Modules_RescaleObjects",
            "IK_Modules_MakeAceArsenal",
            "IK_Modules_FullHealArea",
            "IK_Modules_RRR"
        };
        weapons[] = {   };
        VERSION_CONFIG;
    };
};

class CfgFactionClasses
{
    class IK_Modules
    {
        displayName="Kreepy's Helpers";
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
