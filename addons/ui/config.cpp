#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        authors[] = {AUTHORS};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"jc_main","A3_Ui_F","A3_Data_F_Enoch_Loadorder"};
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
		picture = QPATHTOEF(main,logos\jc_flag_512_co.paa);
		video = QPATHTOF(data\jc_joinserver_spotlight.ogv);
		action = "connectToServer ['104.192.227.46', 2306, 'JGC']"; // If you came here for the server information, you are a disapointment to your parents.
		actionText = "Join the Jaeger Server";
		condition = QUOTE(if (missionNamespace getVariable 'JC_UI_JoinServer' isEqualTo 'x8Lr2fN3wB7pKeT5qM0dXvAa') then {true} else {false});
	};
};

class CfgMissions
{
	class Cutscenes
	{
		class RikerMenu
		{
			directory = QPATHTOF(data\menue.Altis);
		};
	};
};
