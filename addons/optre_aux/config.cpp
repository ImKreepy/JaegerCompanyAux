#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = COMPONENT_NAME;
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {};
        units[] = { };
        weapons[] = {   };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};