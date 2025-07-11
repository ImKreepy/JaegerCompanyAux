#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = COMPONENT_NAME;
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"jc_main", "optre_core", "optre_fc_core"};
        units[] = { };
        weapons[] = {   };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};
