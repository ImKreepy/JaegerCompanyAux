#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = COMPONENT_NAME;
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"jc_main","A3_Ui_F","A3_Data_F_TCP","A3_Ui_F_TCP"};
        units[] = { };
        weapons[] = {   };
        skipWhenMissingDependencies = 1;
    };
};

#include "CfgWorlds.hpp"