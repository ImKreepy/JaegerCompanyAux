#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {AUTHORS};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"jc_main","A3_Ui_F"};
        skipWhenMissingDependencies = 1;
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};
class RscActivePicture;
class RscStandardDisplay:RscActivePicture{};
class RscDisplayMain: RscStandardDisplay
{
	class Controls
	{
		delete SpotlightPrev;
		delete SpotlightNext;
    };
};