#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = COMPONENT_NAME;
        author = AUTHOR;
        authors[] = AUTHORS;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"acre_main"};
        units[] = { };
        weapons[] = {   };
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgWeapons.hpp"
#include "CfgAcreRadios.hpp"