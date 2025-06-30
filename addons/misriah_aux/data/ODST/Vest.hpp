class IK_MA_odstVest_Base : M52_ODST_Vest_Base
{
    scope = 1;
    scopeArsenal = 1;
    author = AUTHOR;
    displayName = ITEM_NAME(ODST Standard Vest);
	descriptionShort = "Halo Reach ODST Vest";
    picture = ITEM_PICTURE(picture);
    hiddenSelections[] =
    {
        "Camo1",
        "Camo2",
        "Camo3",
        "Camo4",
        "Camo5",
        "Camo6",
        "Camo7",
        "Camo8",
        "Camo9",
        "Camo10",
        "Camo11",
        "Camo12",
        "Camo13",
        "Camo14",
        "Camo15",
        "Camo16",
        "Camo17",
        "Camo18",
        "Camo19",
        "Camo20",
        "Camo21",
        "Camo22",
        "Camo23",
        "Camo24",
        "Camo25",
        "Camo26",
        "Camo27",
        "Camo28",
        "Camo29",
        "CQB_Left",
        "CQB_Right",
        "Marksman_Left",
        "Marksman_Right",
        "ODST_Bracer_Left",
        "ODST_Bracer_Right",
        "ODST_Chest",
        "ODST_Left",
        "ODST_Right",
        "ChestPMLeft",
        "ChestPMRight",
        "ChestPouch",
        "LShoulderRadio",
        "RShoulderRadio",
        "StomachPouch",
        "TorsoPMLeft",
        "TorsoPMRight",
        "TorsoPouch",
        "WaistBack",
        "WaistGLeft",
        "WaistGRight",
        "WaistPLeft",
        "WaistPRight",
        "WaistRLeft",
        "WaistRRight",
        "WaistSLeft",
        "WaistSRight",
        "LegPouchL",
        "LegPouchR"
    };
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\ODST\MA_ODST_CQB_co.paa),
        QPATHTOF(data\ODST\MA_ODST_CQB_co.paa),
        QPATHTOF(data\ODST\MA_ODST_Marksman_co.paa),
        QPATHTOF(data\ODST\MA_ODST_Marksman_co.paa),
        QPATHTOF(data\ODST\MA_ODST_Vest_co.paa),
        QPATHTOF(data\ODST\MA_ODST_Vest_co.paa),
        QPATHTOF(data\ODST\MA_ODST_Vest_co.paa),
        QPATHTOF(data\ODST\MA_ODST_Shoulders_co.paa),
        QPATHTOF(data\ODST\MA_ODST_Shoulders_co.paa),
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
        "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
        "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
        "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
        "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
        "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
    };
    hiddenSelectionsMaterials[] =
    {
        QPATHTOF(data\ODST\rvmats\cqb_shoulders.rvmat),
        QPATHTOF(data\ODST\rvmats\cqb_shoulders.rvmat),
        QPATHTOF(data\ODST\rvmats\marksman_shoulders.rvmat),
        QPATHTOF(data\ODST\rvmats\marksman_shoulders.rvmat),
        QPATHTOF(data\ODST\rvmats\odst_armor.rvmat),
        QPATHTOF(data\ODST\rvmats\odst_armor.rvmat),
        QPATHTOF(data\ODST\rvmats\odst_armor.rvmat),
        QPATHTOF(data\ODST\rvmats\odst_shoulders.rvmat),
        QPATHTOF(data\ODST\rvmats\odst_shoulders.rvmat),
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        ""
    };
    class ItemInfo : ItemInfo
    {
        containerClass = "SupplyMed";
        hiddenSelections[] =
        {
            "Camo1",
            "Camo2",
            "Camo3",
            "Camo4",
            "Camo5",
            "Camo6",
            "Camo7",
            "Camo8",
            "Camo9",
            "Camo10",
            "Camo11",
            "Camo12",
            "Camo13",
            "Camo14",
            "Camo15",
            "Camo16",
            "Camo17",
            "Camo18",
            "Camo19",
            "Camo20",
            "Camo21",
            "Camo22",
            "Camo23",
            "Camo24",
            "Camo25",
            "Camo26",
            "Camo27",
            "Camo28",
            "Camo29",
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            "ODST_Bracer_Left",
            "ODST_Bracer_Right",
            "ODST_Chest",
            "ODST_Left",
            "ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            "StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            "WaistBack",
            "WaistGLeft",
            "WaistGRight",
            "WaistPLeft",
            "WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            "WaistSRight",
            "LegPouchL",
            "LegPouchR"
        };
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\ODST\MA_ODST_CQB_co.paa),
            QPATHTOF(data\ODST\MA_ODST_CQB_co.paa),
            QPATHTOF(data\ODST\MA_ODST_Marksman_co.paa),
            QPATHTOF(data\ODST\MA_ODST_Marksman_co.paa),
            QPATHTOF(data\ODST\MA_ODST_Vest_co.paa),
            QPATHTOF(data\ODST\MA_ODST_Vest_co.paa),
            QPATHTOF(data\ODST\MA_ODST_Vest_co.paa),
            QPATHTOF(data\ODST\MA_ODST_Shoulders_co.paa),
            QPATHTOF(data\ODST\MA_ODST_Shoulders_co.paa),
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa",
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa",
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa",
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa"
        };
        hiddenSelectionsMaterials[] =
        {
            QPATHTOF(data\ODST\rvmats\cqb_shoulders.rvmat),
            QPATHTOF(data\ODST\rvmats\cqb_shoulders.rvmat),
            QPATHTOF(data\ODST\rvmats\marksman_shoulders.rvmat),
            QPATHTOF(data\ODST\rvmats\marksman_shoulders.rvmat),
            QPATHTOF(data\ODST\rvmats\odst_armor.rvmat),
            QPATHTOF(data\ODST\rvmats\odst_armor.rvmat),
            QPATHTOF(data\ODST\rvmats\odst_armor.rvmat),
            QPATHTOF(data\ODST\rvmats\odst_shoulders.rvmat),
            QPATHTOF(data\ODST\rvmats\odst_shoulders.rvmat),
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            "",
            ""
    };
        class HitpointsProtectionInfo
        {
            class Neck
            {
                hitpointName = "HitNeck";
                armor = 45;
                passThrough = 0.1;
            };
            class Legs
            {
                hitpointName = "HitLegs";
                armor = 45;
                passThrough = 0.1;
            };
            class Arms
            {
                hitpointName = "HitArms";
                armor = 45;
                passThrough = 0.1;
            };
            class Hands
            {
                hitpointName = "HitHands";
                armor = 45;
                passThrough = 0.1;
            };
            class Chest
            {
                hitpointName = "HitChest";
                armor = 45;
                passThrough = 0.1;
            };
            class Diaphragm
            {
                hitpointName = "HitDiaphragm";
                armor = 45;
                passThrough = 0.1;
            };
            class Abdomen
            {
                hitpointName = "HitAbdomen";
                armor = 45;
                passThrough = 0.1;
            };
            class Pelvis
            {
                hitpointName = "HitPelvis";
                armor = 45;
                passThrough = 0.1;
            };
            class Body
            {
                hitpointName = "HitBody";
                armor = 45;
                passThrough = 0.1;
            };
        };
    };
};
class IK_MA_odstVest_Rifleman : IK_MA_odstVest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = ITEM_NAME(ODST Rifleman Vest);
    picture = ITEM_PICTURE(picture);
    hiddenSelections[] = { "Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight","LegPouchL","LegPouchR" };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] = { "Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight","LegPouchL","LegPouchR" };
    };
    class XtdGearInfo
    {
        Model = "JC_XtdVestODST_Reach";
        Basic = "Rifleman";
    };
};
class IK_MA_odstVest_Marksman : IK_MA_odstVest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = ITEM_NAME(ODST Marksman Vest);
    picture = ITEM_PICTURE(picture);
    hiddenSelections[] = { "Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Right","ODST_Left","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","StomachPouch","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight" };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] = { "Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Right","ODST_Left","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","StomachPouch","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight" };
    };
    class XtdGearInfo
    {
        Model = "JC_XtdVestODST_Reach";
        Basic = "Marksman";
    };
};
class IK_MA_odstVest_CQB : IK_MA_odstVest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = ITEM_NAME(ODST CQB Vest);
    picture = ITEM_PICTURE(picture);
    hiddenSelections[] = { "Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Right","Marksman_Left","Marksman_Right","ODST_Left","LShoulderRadio","RShoulderRadio","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGRight","WaistRRight","WaistSLeft" };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] = { "Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Right","Marksman_Left","Marksman_Right","ODST_Left","LShoulderRadio","RShoulderRadio","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGRight","WaistRRight","WaistSLeft" };
    };
    class XtdGearInfo
    {
        Model = "JC_XtdVestODST_Reach";
        Basic = "CQB";
    };
};
class IK_MA_odstVest_Light : IK_MA_odstVest_Base
{
    scope = 2;
    scopeArsenal = 2;
    displayName = ITEM_NAME(ODST Light Vest);
    picture = ITEM_PICTURE(picture);
    hiddenSelections[] = { "Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ODST_Left","ODST_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight","LegPouchL","LegPouchR" };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] = { "Camo1","Camo2","Camo3","Camo4","Camo5","Camo6","Camo7","Camo8","Camo9","Camo10","Camo11","Camo12","Camo13","Camo14","Camo15","Camo16","Camo17","Camo18","Camo19","Camo20","Camo21","Camo22","Camo23","Camo24","Camo25","Camo26","Camo27","Camo28","Camo29","CQB_Left","CQB_Right","Marksman_Left","Marksman_Right","ODST_Left","ODST_Right","ChestPMLeft","ChestPMRight","ChestPouch","LShoulderRadio","RShoulderRadio","StomachPouch","TorsoPMLeft","TorsoPMRight","TorsoPouch","WaistBack","WaistGLeft","WaistGRight","WaistPLeft","WaistPRight","WaistRLeft","WaistRRight","WaistSLeft","WaistSRight","LegPouchL","LegPouchR" };
    };
    class XtdGearInfo
    {
        Model = "JC_XtdVestODST_Reach";
        Basic = "Light";
    };
};

#include "Cortez/Vest.hpp"
#include "Dalu/Vest.hpp"
#include "Kodiak/Vest.hpp"
#include "Sailboat/Vest.hpp"
#include "Wizzy/Vest.hpp"
