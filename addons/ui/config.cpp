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

#include "CfgEventHandlers.hpp"

class CfgWorlds
{
	class CAWorld;
	class Altis: CAWorld
	{
		cutscenes[] = { "RikerMenu" };
	};
	initWorld = "Altis";
	demoWorld = "Altis";
};

class CfgMainMenuSpotlight
{
	class JoinServer
	{
		text = "Jaeger Company Server";
		picture = "my_mod\data\spotlight.paa";
		action = "connectToServer ['104.192.227.46', 2306, 'JGC']";
		actionText = "Join the Jaeger Server";
		condition = QUOTE(if (missionNamespace getVariable 'JC_UI_JoinServer' isEqualTo 'JGC') then {true} else {false});
	};
};

class CfgMissions
{
	class Cutscenes
	{
		class RikerMenu
		{
			directory = "MyAddon\MyScene.Stratis";
		};
	};
};
