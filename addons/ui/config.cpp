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
