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
	class Controls
	{
		class BackgroundSpotlight: RscPicture
		{
			text="#(argb,8,8,3)color(1,1,1,1)";
			colorText[]={0,0,0,0.89999998};
			x="0.5 - (1.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) - 2 * 	(2 * pixelW)";
			y="0.5 - (	10 / 2) * 	(pixelH * pixelGridNoUIScale * 2) - 	(2 * pixelH)";
			w="3 * 	10 * 	(pixelW * pixelGridNoUIScale * 2) + 4 * 	(2 * pixelW)";
			h="(	10) * 	(pixelH * pixelGridNoUIScale * 2) + 2 * 	(2 * pixelH)";
		};
		class BackgroundSpotlightLeft: BackgroundSpotlight
		{
			text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
			angle=180;
			x="safezoneX";
			w="(safezoneW - (3 * 	10 * 	(pixelW * pixelGridNoUIScale * 2) + 4 * 	(2 * pixelW))) / 2";
		};
		class BackgroundSpotlightRight: BackgroundSpotlightLeft
		{
			text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
			angle=0;
			x="0.5 + (1.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) + 2 * 	(2 * pixelW)";
		};
		class Spotlight1: RscMainMenuSpotlight
		{
			idc=1021;
			x="0.5 - (1.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) - 	(2 * pixelW)";
			class Controls: Controls
			{
				class GroupPicture: GroupPicture
				{
					class Controls: Controls
					{
						class Picture: Picture
						{
							text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_2_ca.paa";
						};
						class Video: Video
						{
							text="\a3\Ui_f\Video\spotlight_2.ogv";
						};
					};
				};
				class GroupHover: GroupHover
				{
					class Controls: Controls
					{
						class Overlay: Overlay
						{
						};
						class LineLeft: LineLeft
						{
						};
						class LineRight: LineRight
						{
						};
						class LineTop: LineTop
						{
							text="$STR_A3_RscDisplayMain_Spotlight_Open";
						};
						class LineBottom: LineBottom
						{
						};
					};
				};
				class TextBackground: TextBackground
				{
				};
				class Text: Text
				{
					text="$STR_A3_RscDisplayMain_GroupMultiplayer_QuickPlay_text";
				};
				class Button: Button
				{
				};
			};
		};
		class Spotlight2: RscText
		{
			idc=1020;
			x="0.5 - (0.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2)";
			y="0.5 - (	10 / 2) * 	(pixelH * pixelGridNoUIScale * 2)";
			w="10 * 	(pixelW * pixelGridNoUIScale * 2)";
			h="10 * 	(pixelH * pixelGridNoUIScale * 2)";
			show=0;
		};
		class Spotlight3: RscMainMenuSpotlight
		{
			idc=1022;
			x="0.5 + (0.5 * 	10) * 	(pixelW * pixelGridNoUIScale * 2) + 	(2 * pixelW)";
			class Controls: Controls
			{
				class GroupPicture: GroupPicture
				{
					class Controls: Controls
					{
						class Picture: Picture
						{
							text="\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\spotlight_3_ca.paa";
						};
						class Video: Video
						{
							text="\a3\Ui_f\Video\spotlight3.ogv";
						};
					};
				};
				class GroupHover: GroupHover
				{
					class Controls: Controls
					{
						class Overlay: Overlay
						{
						};
						class LineLeft: LineLeft
						{
						};
						class LineRight: LineRight
						{
						};
						class LineTop: LineTop
						{
							text="$STR_A3_RscDisplayMain_Spotlight_Create";
						};
						class LineBottom: LineBottom
						{
						};
					};
				};
				class TextBackground: TextBackground
				{
				};
				class Text: Text
				{
					text="$STR_A3_RscDisplayMain_ButtonEditor";
				};
				class Button: Button
				{
				};
			};
		};
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
	};
	enableDisplay=1;
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
