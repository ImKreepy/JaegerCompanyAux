#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(ADDON)};
        units[] = {};
        weapons[] = {};
    };
};

class RscPicture;
class RscTitles
{
	class SplashNoise
	{
		// Jaeger's splash screen noise
		fadeIn=1;
		duration=13;
		class BackgroundNoise: RscPicture
		{
			style="0x30 + 0x800";
			text= "z\jc\addons\ui_fix\unit\jc_splash_temp_ca.paa";
		};
	};
};