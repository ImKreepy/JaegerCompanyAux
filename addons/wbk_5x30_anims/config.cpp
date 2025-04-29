#include "script_component.hpp"

class CfgPatches
{
	class ADDON {
        author = AUTHOR;
        authors[] = {AUTHORS};
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"jc_main","a3_anims_f","KKA3_ACE_Extension_Anim"};
        skipWhenMissingDependencies = 1;
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};
class CfgMovesBasic;
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName="OFP2_ManSkeleton";
	gestures="CfgGesturesMale";
	class States
	{
		class AmovPercMstpSnonWnonDnon_falling;
		class WBK_Fun_Anim_Base: AmovPercMstpSnonWnonDnon_falling
		{
			minPlayTime=1;
			ignoreMinPlayTime[]=
			{
				"Unconscious"
			};
			actions="NoActions";
			file="a3\anims_f_epa\data\anim\sdr\cts\hubcleaned\briefing\hubbriefing_loop.rtm";
			speed=0.0306;
			looped="true";
			showHandGun=0;
			soundEnabled=0;
			mask="BodyFull";
			interpolationSpeed=3;
			leftHandIKBeg=0;
			leftHandIKCurve[]={};
			leftHandIKEnd=0;
			rightHandIKBeg=0;
			rightHandIKCurve[]={};
			rightHandIKEnd=0;
			weaponIK=0;
			enableOptics=0;
			showWeaponAim=0;
			disableWeapons=1;
			disableWeaponsLong=1;
			leaning="empty";
			aimingBody="empty";
			aiming="empty";
			forceAim=1;
			limitGunMovement=9.1000004;
			head="headNo";
			headBobMode=2;
			headBobStrength=0;
			canPullTrigger=1;
			enableDirectControl=0;
			weaponLowered=0;
			variantsPlayer[]={};
			variantsAI[]={};
			ConnectTo[]={};
			InterpolateTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class WBK_Meme_Anim_1: WBK_Fun_Anim_Base
		{
			file=ANIMS(meme_1);
			speed=-0.60000002;
		};
		class WBK_Meme_Anim_2: WBK_Fun_Anim_Base
		{
			file=ANIMS(meme_2);
			speed=-0.44999999;
		};
		class WBK_Meme_Anim_3: WBK_Fun_Anim_Base
		{
			file=ANIMS(meme_3);
			speed=-0.5;
		};
	};
};
class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class kka3_anim
			{
				class wbk_funnies
				{
					displayName="Webknight Sex Mod";
					icon="\KKA3_ACE_Extension_Anim\data\ui_RP.paa";
					class WBK_Meme_Anim_1
					{
						displayName="Pose 1";
						condition="";
						exceptions[]={};
						statement=QUOTE([ARR_2(ace_player,'WBK_Meme_Anim_1')] remoteExec ['switchMove'];);
						icon="\KKA3_ACE_Extension_Anim\data\ui_dot.paa";
					};
					class WBK_Meme_Anim_2
					{
						displayName="Pose 2";
						condition="";
						exceptions[]={};
						statement=QUOTE([ARR_2(ace_player,'WBK_Meme_Anim_2')] remoteExec ['switchMove'];);
						icon="\KKA3_ACE_Extension_Anim\data\ui_dot.paa";
					};
					class WBK_Meme_Anim_3
					{
						displayName="Pose 3";
						condition="";
						exceptions[]={};
						statement=QUOTE([ARR_2(ace_player,'WBK_Meme_Anim_3')] remoteExec ['switchMove'];);
						icon="\KKA3_ACE_Extension_Anim\data\ui_dot.paa";
					};
				};
			};
		};
	};
};