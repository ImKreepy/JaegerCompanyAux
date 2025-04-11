#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {AUTHORS};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Ui_F","jc_main"};
        units[] = {};
        weapons[] = {};
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