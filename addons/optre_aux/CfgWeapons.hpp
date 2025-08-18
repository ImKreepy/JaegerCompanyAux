class CfgWeapons
{
    class ItemInfo;
    #include "data\VestReqs.hpp"
    #include "data\HeadgearReqs.hpp"

    // Elite Minor Start
    // Blue
    class IK_OPTRE_EliteMinor_Vest_Blue : OPTRE_FC_Elite_Armor_Minor
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteVests";
            Rank= "Minor";
            Colors= "Blue";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Minor Vest (Standard));
        MINOR_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Minor,body,blue),
            ELITE_VEST(Minor,limbs,blue)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMinor_Vest.hpp"
        };
    };
    class IK_OPTRE_EliteMinor_Headgear_Blue : OPTRE_FC_Elite_Helmet_Minor
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteHeadgears";
            Rank= "Minor";
            Colors= "Blue";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Minor Helmet (Standard));
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Minor,blue)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMinor_Headgear.hpp"
        };
    };
    // Baja
    class IK_OPTRE_EliteMinor_Vest_Baja : OPTRE_FC_Elite_Armor_Minor
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteVests";
            Rank= "Minor";
            Colors= "Baja";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Minor Vest (Baja));
        MINOR_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Minor,body,baja),
            ELITE_VEST(Minor,limbs,baja)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMinor_Vest.hpp"
        };
    };
    class IK_OPTRE_EliteMinor_Headgear_Baja : OPTRE_FC_Elite_Helmet_Minor
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteHeadgears";
            Rank= "Minor";
            Colors= "Baja";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Minor Helmet (Baja));
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Minor,baja)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMinor_Headgear.hpp"
        };
    };
    // Teal
    class IK_OPTRE_EliteMinor_Vest_Teal : OPTRE_FC_Elite_Armor_Minor
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteVests";
            Rank= "Minor";
            Colors= "Teal";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Minor Vest (Teal));
        MINOR_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Minor,body,Teal),
            ELITE_VEST(Minor,limbs,Teal)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMinor_Vest.hpp"
        };
    };
    class IK_OPTRE_EliteMinor_Headgear_Teal : OPTRE_FC_Elite_Helmet_Minor
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteHeadgears";
            Rank= "Minor";
            Colors= "Teal";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Minor Helmet (Teal));
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Minor,Teal)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMinor_Headgear.hpp"
        };
    };
    // Light Blue
    class IK_OPTRE_EliteMinor_Vest_LightBlue : OPTRE_FC_Elite_Armor_Minor
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteVests";
            Rank= "Minor";
            Colors= "LightBlue";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Minor Vest (Light Blue));
        MINOR_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Minor,body,LightBlue),
            ELITE_VEST(Minor,limbs,LightBlue)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMinor_Vest.hpp"
        };
    };
    class IK_OPTRE_EliteMinor_Headgear_LightBlue : OPTRE_FC_Elite_Helmet_Minor
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteHeadgears";
            Rank= "Minor";
            Colors= "LightBlue";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Minor Helmet (Light Blue));
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Minor,LightBlue)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMinor_Headgear.hpp"
        };
    };
    // Gold
    class IK_OPTRE_EliteMinor_Vest_Gold : OPTRE_FC_Elite_Armor_Minor
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteVests";
            Rank= "Minor";
            Colors= "Gold";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Minor Vest (Gold));
        MINOR_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Minor,body,Gold),
            ELITE_VEST(Minor,limbs,Gold)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMinor_Vest.hpp"
        };
    };
    class IK_OPTRE_EliteMinor_Headgear_Gold : OPTRE_FC_Elite_Helmet_Minor
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteHeadgears";
            Rank= "Minor";
            Colors= "Gold";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Minor Helmet (Gold));
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Minor,Gold)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMinor_Headgear.hpp"
        };
    };
    // White
    class IK_OPTRE_EliteMinor_Vest_White : OPTRE_FC_Elite_Armor_Minor
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteVests";
            Rank= "Minor";
            Colors= "White";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Minor Vest (White));
        MINOR_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Minor,body,White),
            ELITE_VEST(Minor,limbs,White)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMinor_Vest.hpp"
        };
    };
    class IK_OPTRE_EliteMinor_Headgear_White : OPTRE_FC_Elite_Helmet_Minor
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteHeadgears";
            Rank= "Minor";
            Colors= "White";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Minor Helmet (White));
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Minor,White)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMinor_Headgear.hpp"
        };
    };
    // Black
    class IK_OPTRE_EliteMinor_Vest_Black : OPTRE_FC_Elite_Armor_Minor
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteVests";
            Rank= "Minor";
            Colors= "Black";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Minor Vest (Black));
        MINOR_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Minor,body,Black),
            ELITE_VEST(Minor,limbs,Black)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMinor_Vest.hpp"
        };
    };
    class IK_OPTRE_EliteMinor_Headgear_Black : OPTRE_FC_Elite_Helmet_Minor
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteHeadgears";
            Rank= "Minor";
            Colors= "Black";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Minor Helmet (Black));
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Minor,Black)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMinor_Headgear.hpp"
        };
    };
    // Elite Minor End

    // Elite Major Start
    // Brick
    class IK_OPTRE_EliteMajor_Vest_Brick : OPTRE_FC_Elite_Armor_Major
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteVests";
            Rank= "Major";
            Colors= "Brick";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Major Vest (Standard));
        MAJOR_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Major,body,brick),
            ELITE_VEST(Major,limbs,brick)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMajor_Vest.hpp"
        };
    };
    class IK_OPTRE_EliteMajor_Headgear_Brick : OPTRE_FC_Elite_Helmet_Major
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteHeadgears";
            Rank= "Major";
            Colors= "Brick";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Major Helmet (Standard));
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Major,brick)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMajor_Headgear.hpp"
        };
    };
    // Orange
    class IK_OPTRE_EliteMajor_Vest_Orange : OPTRE_FC_Elite_Armor_Major
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteVests";
            Rank= "Major";
            Colors= "Orange";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Major Vest (Orange));
        MAJOR_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Major,body,Orange),
            ELITE_VEST(Major,limbs,Orange)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMajor_Vest.hpp"
        };
    };
    class IK_OPTRE_EliteMajor_Headgear_Orange : OPTRE_FC_Elite_Helmet_Major
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteHeadgears";
            Rank= "Major";
            Colors= "Orange";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Major Helmet (Orange));
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Major,Orange)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMajor_Headgear.hpp"
        };
    };
    // Red
    class IK_OPTRE_EliteMajor_Vest_Red : OPTRE_FC_Elite_Armor_Major
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteVests";
            Rank= "Major";
            Colors= "Red";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Major Vest (Red));
        MAJOR_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Major,body,Red),
            ELITE_VEST(Major,limbs,Red)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMajor_Vest.hpp"
        };
    };
    class IK_OPTRE_EliteMajor_Headgear_Red : OPTRE_FC_Elite_Helmet_Major
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteHeadgears";
            Rank= "Major";
            Colors= "Red";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Major Helmet (Red));
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Major,Red)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMajor_Headgear.hpp"
        };
    };
    // Elite Major End

    // Elite Officer Start
    // Orange
    class IK_OPTRE_EliteOfficer_Vest_Orange : OPTRE_FC_Elite_Armor_Officer
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteVests";
            Rank= "Officer";
            Colors= "Orange";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Officer Vest (Standard));
        OFFICER_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Officer,chest,orange),
            ELITE_VEST(Officer,chest,orange),
            ELITE_VEST(Officer,limbs,orange),
            ELITE_VEST(Officer,limbs,orange),
            ELITE_VEST(Officer,waist,orange)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMajor_Vest.hpp"
        };
    };
    class IK_OPTRE_EliteOfficer_Headgear_Orange : OPTRE_FC_Elite_Helmet_Officer
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteHeadgears";
            Rank= "Officer";
            Colors= "Orange";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Officer Helmet (Standard));
        hiddenSelections[]={"camo", "camo1", "camo2"};
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Officer,orange),
            QPATHTOF(data\elites\officer\jc_eliteOfficer_headgear_light_ca.paa),
            ELITE_HEADGEAR(Officer,orange)
        };
        class ItemInfo: ItemInfo
        {     
            hiddenSelections[]={"camo", "camo1", "camo2"};
            hiddenSelectionsTextures[]=
            {
                ELITE_HEADGEAR(Officer,orange),
                QPATHTOF(data\elites\officer\jc_eliteOfficer_headgear_light_ca.paa),
                ELITE_HEADGEAR(Officer,orange)
            };
            #include "data\elites\ItemInfo_EliteMajor_Headgear.hpp"
        };
    };
    // Brick
    class IK_OPTRE_EliteOfficer_Vest_Brick : OPTRE_FC_Elite_Armor_Officer
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteVests";
            Rank= "Officer";
            Colors= "Brick";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Officer Vest (Brick));
        OFFICER_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Officer,chest,Brick),
            ELITE_VEST(Officer,chest,Brick),
            ELITE_VEST(Officer,limbs,Brick),
            ELITE_VEST(Officer,limbs,Brick),
            ELITE_VEST(Officer,waist,Brick)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMajor_Vest.hpp"
        };
    };
    class IK_OPTRE_EliteOfficer_Headgear_Brick : OPTRE_FC_Elite_Helmet_Officer
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteHeadgears";
            Rank= "Officer";
            Colors= "Brick";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Officer Helmet (Brick));
        hiddenSelections[]={"camo", "camo1", "camo2"};
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Officer,Brick),
            QPATHTOF(data\elites\officer\jc_eliteOfficer_headgear_light_ca.paa),
            ELITE_HEADGEAR(Officer,Brick)
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[]={"camo", "camo1", "camo2"};
            hiddenSelectionsTextures[]=
            {
                ELITE_HEADGEAR(Officer,Brick),
                QPATHTOF(data\elites\officer\jc_eliteOfficer_headgear_light_ca.paa),
                ELITE_HEADGEAR(Officer,Brick)
            };
            #include "data\elites\ItemInfo_EliteMajor_Headgear.hpp"
        };
    };
    // Red
    class IK_OPTRE_EliteOfficer_Vest_Red : OPTRE_FC_Elite_Armor_Officer
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteVests";
            Rank= "Officer";
            Colors= "Red";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Officer Vest (Red));
        OFFICER_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Officer,chest,Red),
            ELITE_VEST(Officer,chest,Red),
            ELITE_VEST(Officer,limbs,Red),
            ELITE_VEST(Officer,limbs,Red),
            ELITE_VEST(Officer,waist,Red)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMajor_Vest.hpp"
        };
    };
    class IK_OPTRE_EliteOfficer_Headgear_Red : OPTRE_FC_Elite_Helmet_Officer
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteHeadgears";
            Rank= "Officer";
            Colors= "Red";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Officer Helmet (Red));
        hiddenSelections[]={"camo", "camo1", "camo2"};
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Officer,Red),
            QPATHTOF(data\elites\officer\jc_eliteOfficer_headgear_light_ca.paa),
            ELITE_HEADGEAR(Officer,Red)
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[]={"camo", "camo1", "camo2"};
            hiddenSelectionsTextures[]=
            {
                ELITE_HEADGEAR(Officer,Red),
                QPATHTOF(data\elites\officer\jc_eliteOfficer_headgear_light_ca.paa),
                ELITE_HEADGEAR(Officer,Red)
            };
            #include "data\elites\ItemInfo_EliteMajor_Headgear.hpp"
        };
    };
    // CE
    class IK_OPTRE_EliteOfficer_Vest_CE : OPTRE_FC_Elite_Armor_Officer
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteVests";
            Rank= "Officer";
            Colors= "Zealot";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Officer Vest (CE));
        OFFICER_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Officer,chest,CE),
            ELITE_VEST(Officer,chest,CE),
            ELITE_VEST(Officer,limbs,CE),
            ELITE_VEST(Officer,limbs,CE),
            ELITE_VEST(Officer,waist,CE)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteMajor_Vest.hpp"
        };
    };
    class IK_OPTRE_EliteOfficer_Headgear_CE : OPTRE_FC_Elite_Helmet_Officer
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteHeadgears";
            Rank= "Officer";
            Colors= "Zealot";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Officer Helmet (CE));
        hiddenSelections[]={"camo", "camo1", "camo2"};
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Officer,CE),
            "",
            ELITE_HEADGEAR(Officer,CE)
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[]={"camo", "camo1", "camo2"};
            hiddenSelectionsTextures[]=
            {
                ELITE_HEADGEAR(Officer,CE),
                "",
                ELITE_HEADGEAR(Officer,CE)
            };
            #include "data\elites\ItemInfo_EliteMajor_Headgear.hpp"
        };
    };
    // Elite Officer End

    // Elite Ultra Start
    // Ash
    class IK_OPTRE_EliteUltra_Vest_Ash : OPTRE_FC_Elite_Armor_Ultra
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteVests";
            Rank= "Ultra";
            Colors= "White";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Ultra Vest (Standard));
        ULTRA_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Ultra,body,ash),
            ELITE_VEST(Ultra,limbs,ash)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteUltra_Vest.hpp"
        };
    };
    class IK_OPTRE_EliteUltra_Headgear_Ash : OPTRE_FC_Elite_Helmet_Ultra
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteHeadgears";
            Rank= "Ultra";
            Colors= "White";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Ultra Helmet (Standard));
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Ultra,ash)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteUltra_Headgear.hpp"
        };
    };
    // Black
    class IK_OPTRE_EliteUltra_Vest_Black : OPTRE_FC_Elite_Armor_Ultra
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteVests";
            Rank= "Ultra";
            Colors= "Black";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Ultra Vest (Black));
        ULTRA_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Ultra,body,Black),
            ELITE_VEST(Ultra,limbs,Black)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteUltra_Vest.hpp"
        };
    };
    class IK_OPTRE_EliteUltra_Headgear_Black : OPTRE_FC_Elite_Helmet_Ultra
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteHeadgears";
            Rank= "Ultra";
            Colors= "Black";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Ultra Helmet (Black));
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Ultra,Black)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteUltra_Headgear.hpp"
        };
    };
    // Silent Shadow
    class IK_OPTRE_EliteUltra_Vest_SilentShadow : OPTRE_FC_Elite_Armor_Ultra
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteVests";
            Rank= "Ultra";
            Colors= "Red";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Ultra Vest (Silent Shadow));
        SHADOW_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Ultra,body,SilentShadow),
            ELITE_VEST(Ultra,limbs,SilentShadow)
        };
        hiddenSelectionsMaterials[]=
        {
            QPATHTOF(data\elites\ultra\rvmats\jc_eliteUltra_vest.rvmat),
            QPATHTOF(data\elites\ultra\rvmats\jc_eliteUltra_limbs.rvmat)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteZealot_Vest.hpp"
        };
    };
    class IK_OPTRE_EliteUltra_Headgear_SilentShadow : OPTRE_FC_Elite_Helmet_Ultra
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteHeadgears";
            Rank= "Ultra";
            Colors= "Red";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Ultra Helmet (Silent Shadow));
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Ultra,SilentShadow)
        };
        hiddenSelectionsMaterials[]=
        {
            QPATHTOF(data\elites\ultra\rvmats\jc_eliteUltra_headgear.rvmat)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteZealot_Headgear.hpp"
        };
    };
    // Elite Ultra End

    // Elite Zealot Start
    // Zealot
    class IK_OPTRE_EliteZealot_Vest_Zealot : OPTRE_FC_Elite_Armor_Zealot
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteVests";
            Rank= "Zealot";
            Colors= "Zealot";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Zealot Vest (Standard));
        ZEALOT_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Zealot,body,zealot),
            ELITE_VEST(Zealot,limbs,zealot)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteZealot_Vest.hpp"
        };
    };
    class IK_OPTRE_EliteZealot_Headgear_Zealot : OPTRE_FC_Elite_Helmet_Zealot
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteHeadgears";
            Rank= "Zealot";
            Colors= "Zealot";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Zealot Helmet (Standard));
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Zealot,zealot),
            ELITE_HEADGEAR(Guard,zealot),
            ELITE_HEADGEAR(Zealot,lights),
            ELITE_HEADGEAR(Marshal,zealot)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteZealot_Headgear.hpp"
        };
    };
    // Gold
    class IK_OPTRE_EliteZealot_Vest_Gold : OPTRE_FC_Elite_Armor_Zealot
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteVests";
            Rank= "Zealot";
            Colors= "Gold";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Zealot Vest (Field Master));
        ZEALOT_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Zealot,body,Gold),
            ELITE_VEST(Zealot,limbs,Gold)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteZealot_Vest.hpp"
        };
    };
    class IK_OPTRE_EliteZealot_Headgear_Gold : OPTRE_FC_Elite_Helmet_Zealot
    {
        class XtdGearInfo {
            model= "JC_OPTRE_eliteHeadgears";
            Rank= "Zealot";
            Colors= "Gold";
        };
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Zealot Helmet (Field Master));
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Zealot,Gold),
            ELITE_HEADGEAR(Guard,zealot),
            ELITE_HEADGEAR(Zealot,lights),
            ELITE_HEADGEAR(Marshal,zealot)
        };
        class ItemInfo : ItemInfo
        {
            #include "data\elites\ItemInfo_EliteZealot_Headgear.hpp"
        };
    };
    // Elite Zealot End
/*
    // Elite Field Marshal Start
    class IK_OPTRE_EliteMarshal_Vest_Zealot : OPTRE_FC_Elite_Armor_FieldMarshal
    {
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Zealot Vest (Field Marshal));
        ZEALOT_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Zealot,body,zealot),
            ELITE_VEST(Zealot,limbs,zealot),
            ELITE_VEST(Marshal,limbs,zealot)
        };
    };
    class IK_OPTRE_EliteMarshal_Headgear_Zealot : OPTRE_FC_Elite_Helmet_FieldMarshal
    {
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Zealot Helmet (Field Marshal));
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Zealot,zealot),
            ELITE_HEADGEAR(Guard,zealot),
            ELITE_HEADGEAR(Zealot,lights),
            ELITE_HEADGEAR(Marshal,zealot)
        };
    };
    // Elite Field Marshal End

    // Elite Honor Guard Start
    class IK_OPTRE_EliteGuard_Vest_Zealot : OPTRE_FC_Elite_Armor_HonorGuard
    {
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Honor Guard);
        ZEALOT_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Ultra,body,ash),
            ELITE_VEST(Guard,body,zealot),
            ELITE_VEST(Guard,legs,zealot),
            ELITE_VEST(Guard,limbs&lights,zealot)
        };
    };
    class IK_OPTRE_EliteGuard_Headgear_Zealot : OPTRE_FC_Elite_Helmet_HonorGuard
    {
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Honor Guard);
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Guard,zealot2),
            ELITE_HEADGEAR(Guard,zealot),
            ELITE_HEADGEAR(Guard,lights),
            ELITE_HEADGEAR(Marshal,zealot)
        };
    };
    // Elite Honor Guard End
    
    // Elite Ultra Honor Guard Start
    // Ash
    class IK_OPTRE_EliteUltra_Vest_Ash : OPTRE_FC_Elite_Armor_HonorGuard_Ultra
    {
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Ultra Vest (Standard));
        ZEALOT_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Ultra,body,ash),
            ELITE_VEST(Zealot,limbs,ultra),
            ELITE_VEST(Zealot,legs,ultra),
            ELITE_VEST(Guard,limbs&lights,zealot)
        };
    };
    class IK_OPTRE_EliteUltra_Headgear_Ash : OPTRE_FC_Elite_Helmet_HonorGuard_Ultra
    {
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Ultra Helmet (Standard));
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Ultra,ash),
            ELITE_HEADGEAR(Ultra,ash)
        };
    };
    // Black
    class IK_OPTRE_EliteUltra_Vest_Black : OPTRE_FC_Elite_Armor_HonorGuard_Ultra
    {
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Ultra Vest (Black));
        ZEALOT_SHIELDS;
        hiddenSelectionsTextures[]=
        {
            ELITE_VEST(Ultra,body,ash),
            ELITE_VEST(Zealot,limbs,ultra),
            ELITE_VEST(Zealot,legs,ultra),
            ELITE_VEST(Guard,limbs&lights,zealot)
        };
    };
    class IK_OPTRE_EliteUltra_Headgear_Black : OPTRE_FC_Elite_Helmet_HonorGuard_Ultra
    {
        author= AUTHOR;
        displayName= ITEM_NAME(Elite Ultra Helmet (Black));
        hiddenSelectionsTextures[]=
        {
            ELITE_HEADGEAR(Ultra,Black)
        };
    };
    // Elite Ultra Honor Gaurd End
    */
};
