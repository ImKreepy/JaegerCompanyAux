#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(ADDON),"1st_MEU_patch_main_loadingScreens","1st_MEU_patch_main_worlds"};
        units[] = {};
        weapons[] = {};
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "worldsFix.hpp"

class RscPicture;
class RscStandardDisplay;
class RscActiveText;
class RscActivePicture: RscActiveText{};
class RscControlsGroupNoScrollbars;
class RscMainMenuSpotlight: RscControlsGroupNoScrollbars {};

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
			text= QPATHTOF(meu_fix\jc_splash_temp_ca.paa);
		};
	};
};
class RscDisplayMain: RscStandardDisplay
{
	class Logo: RscActivePicture
	{
		text="\a3\Ui_f\data\Logos\arma3_shadow_ca.paa";
		tooltip="$STR_TOOLTIP_MAIN_CREDITS";
		color[]={0.89999998,0.89999998,0.89999998,1};
		colorActive[]={1,1,1,1};
		shadow=0;
		x="0.5 - 	5 * 	(pixelW * pixelGrid * 2)";
		y="safezoneY + (3 - 0.5 * 	5) * 	(pixelH * pixelGrid * 2)";
		w="2 * 	5 * 	(pixelW * pixelGrid * 2)";
		h="1 * 	5 * 	(pixelH * pixelGrid * 2)";
		onButtonClick="if (scriptdone (missionnamespace getvariable ['RscDisplayMain_credits',scriptnull])) then {RscDisplayMain_credits = _this spawn (uinamespace getvariable 'bis_fnc_credits');};";
		onSetFocus="(_this select 0) ctrlsettextcolor [1,1,1,1];";
		onKillFocus="(_this select 0) ctrlsettextcolor [0.9,0.9,0.9,1];";
		onLoad="(_this select 0) ctrlshow !(395180 in getDLCs 1)";
	};
    class controlsBackground
	{
		delete LoadingPic;
	};
};
class RscDisplayLoading
{
	class Variants
	{
		class LoadingOne
		{
			class controls
			{
				delete LoadingPic;
			};
		};
		class Loading_West1: LoadingOne
		{
			class controls
			{
				delete LoadingPic;
			};
		};
		class Loading_West2: LoadingOne
		{
			class controls
			{
				delete LoadingPic;
			};
		};
		class Loading_East1: LoadingOne
		{
			class controls
			{
				delete LoadingPic;
			};
		};
		class Loading_East2: LoadingOne
		{
			class controls
			{
				delete LoadingPic;
            };
        };
    };
};

class RscDisplayLoadMission: RscStandardDisplay
{
	class controlsBackground
	{
		delete LoadingPic;
	};
};
class RscDisplayStart: RscStandardDisplay
{
	class controls
	{
		delete LoadingPic;
	};
};
class RscDisplayMPPlayers;
class RscDisplayClientWait: RscDisplayMPPlayers
{
	delete LoadingPic;
};
class RscDisplayClient: RscStandardDisplay
{
	class controlsBackground
	{
		delete LoadingPic;
	};
};
