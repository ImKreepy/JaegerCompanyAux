#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"jc_main", ACE_Medical};
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
        skipWhenMissingDependencies = 1;
    };
};

#include "ACE_Medical_Injuries.hpp"
#include "ACE_Medical_Treatment.hpp"
#include "ACE_Medical_Treatment_Actions.hpp"
#include "CfgEventHandlers.hpp"
