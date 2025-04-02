#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(ADDON), "MA_Armor"};
        skipWhenMissingDependencies = 1;
        units[] = {
            "IK_MA_marineUnit_B",
            "IK_MA_marineUnit_1",
            "IK_MA_marineUnit_2",
            "IK_MA_marineUnit_3",
            "IK_MA_marineUnit_4",
            "IK_MA_marineUnit_5",
            "IK_MA_marineUnit_6",
            "IK_MA_marineUnit_7",
            "IK_MA_marineUnit_8",
            "IK_MA_marineUnit_G",
            "IK_MA_marineUnit_9",
            "IK_MA_marineUnit_10",
            "IK_MA_marineUnit_11",
            "IK_MA_marineUnit_12",
            "IK_MA_marineUnit_13",
            "IK_MA_marineUnit_14",
            "IK_MA_marineUnit_15",
            "IK_MA_marineUnit_16",
            "IK_MA_marineUnit_W",
            "IK_MA_marineUnit_17",
            "IK_MA_marineUnit_18",
            "IK_MA_marineUnit_19",
            "IK_MA_marineUnit_20",
            "IK_MA_marineUnit_21",
            "IK_MA_marineUnit_22",
            "IK_MA_marineUnit_23",
            "IK_MA_marineUnit_24",
            "IK_MA_m52dBackpack",
            "IK_MA_m52dBackpack_Strapless"
        };
        weapons[] = {
            "IK_MA_marineVest_0",
            "IK_MA_marineVest_1",
            "IK_MA_marineVest_2",
            "IK_MA_marineVest_3",
            "IK_MA_marineVest_4",
            "IK_MA_marineVest_5",
            "IK_MA_marineVest_6",
            "IK_MA_marineVest_7",
            "IK_MA_marineVest_8",
            "IK_MA_marineVest_9",
            "IK_MA_marineVest_10",
            "IK_MA_marineVest_11",
            "IK_MA_marineVest_12",
            "IK_MA_marineVest_13",
            "IK_MA_marineVest_14",
            "IK_MA_marineVest_15",
            "IK_MA_marineVest_16",
            "IK_MA_marineVest_17",
            "IK_MA_marineVest_18",
            "IK_MA_marineVest_19",
            "IK_MA_marineVest_20",
            "IK_MA_marineVest_21",
            "IK_MA_marineVest_22",
            "IK_MA_marineVest_23",
            "IK_MA_marineVest_24",
            "IK_MA_marineVest_25",
            "IK_MA_marineVest_26",
            "IK_MA_marineVest_27",
            "IK_MA_marineVest_28",
            "IK_MA_marineVest_29",
            "IK_MA_marineVest_30",
            "IK_MA_marineVest_31",
            "IK_MA_marineVest_32",
            "IK_MA_marineVest_33",
            "IK_MA_marineVest_34",
            "IK_MA_marineUniform_B",
            "IK_MA_marineUniform_1",
            "IK_MA_marineUniform_2",
            "IK_MA_marineUniform_3",
            "IK_MA_marineUniform_4",
            "IK_MA_marineUniform_5",
            "IK_MA_marineUniform_6",
            "IK_MA_marineUniform_7",
            "IK_MA_marineUniform_8",
            "IK_MA_marineUniform_G",
            "IK_MA_marineUniform_9",
            "IK_MA_marineUniform_10",
            "IK_MA_marineUniform_11",
            "IK_MA_marineUniform_12",
            "IK_MA_marineUniform_13",
            "IK_MA_marineUniform_14",
            "IK_MA_marineUniform_15",
            "IK_MA_marineUniform_16",
            "IK_MA_marineUniform_W",
            "IK_MA_marineUniform_17",
            "IK_MA_marineUniform_18",
            "IK_MA_marineUniform_19",
            "IK_MA_marineUniform_20",
            "IK_MA_marineUniform_21",
            "IK_MA_marineUniform_22",
            "IK_MA_marineUniform_23",
            "IK_MA_marineUniform_24",
            "IK_MA_marineHeadgear_Base",
            "IK_MA_marineHeadgear_1",
            "IK_MA_marineHeadgear_2",
            "IK_MA_marineHeadgear_3",
            "IK_MA_marineHeadgear_Green",
            "IK_MA_marineHeadgear_4",
            "IK_MA_marineHeadgear_5",
            "IK_MA_marineHeadgear_6",
            "IK_MA_marineHeadgear_White",
            "IK_MA_marineHeadgear_7",
            "IK_MA_marineHeadgear_8",
            "IK_MA_marineHeadgear_9",
            "IK_MA_marineVest_0",
            "IK_MA_marineVest_1",
            "IK_MA_marineVest_2",
            "IK_MA_marineVest_3",
            "IK_MA_marineVest_4",
            "IK_MA_marineVest_5",
            "IK_MA_marineVest_6",
            "IK_MA_marineVest_7",
            "IK_MA_marineVest_8",
            "IK_MA_marineVest_9",
            "IK_MA_marineVest_10",
            "IK_MA_marineVest_11",
            "IK_MA_marineUniform_B",
            "IK_MA_marineUniform_1",
            "IK_MA_marineUniform_2",
            "IK_MA_marineUniform_3",
            "IK_MA_marineUniform_4",
            "IK_MA_marineUniform_5",
            "IK_MA_marineUniform_6",
            "IK_MA_marineUniform_7",
            "IK_MA_marineUniform_8",
            "IK_MA_marineUniform_G",
            "IK_MA_marineUniform_9",
            "IK_MA_marineUniform_10",
            "IK_MA_marineUniform_11",
            "IK_MA_marineUniform_12",
            "IK_MA_marineUniform_13",
            "IK_MA_marineUniform_14",
            "IK_MA_marineUniform_15",
            "IK_MA_marineUniform_16",
            "IK_MA_marineUniform_W",
            "IK_MA_marineUniform_17",
            "IK_MA_marineHeadgear_Base",
            "IK_MA_marineHeadgear_1",
            "IK_MA_marineHeadgear_2",
            "IK_MA_marineHeadgear_3",
            "IK_MA_marineHeadgear_Green",
            "IK_MA_marineHeadgear_4",
            "IK_MA_marineHeadgear_5",
            "IK_MA_marineHeadgear_6",
            "IK_MA_marineHeadgear_White",
            "IK_MA_marineHeadgear_7",
            "IK_MA_marineHeadgear_8",
            "IK_MA_marineHeadgear_9",
            "IK_MA_odstHeadgear",
            "IK_MA_odstHeadgear_dp",
            "IK_MA_odstVest_Base",
            "IK_MA_odstVest_Rifleman",
            "IK_MA_odstVest_Marksman",
            "IK_MA_odstVest_CQB",
            "IK_MA_odstVest_Light",
            "IK_MA_odstVest_Sailboat",
            "IK_MA_odstHeadgear_Sailboat",
            "IK_MA_odstHeadgear_Sailboat_dp",
            "IK_MA_odstVest_Kodiak",
            "IK_MA_odstHeadgear_Kodiak",
            "IK_MA_odstHeadgear_Kodiak_dp",
            "IK_MA_odstVest_Dalu",
            "IK_MA_odstHeadgear_Dalu",
            "IK_MA_odstHeadgear_Dalu_dp",
            "IK_MA_odstVest_Cortez",
            "IK_MA_odstHeadgear_Cortez",
            "IK_MA_odstHeadgear_Cortez_dp",
            "IK_MA_odstVest_Wizzy",
            "IK_MA_odstHeadgear_Wizzy",
            "IK_MA_odstHeadgear_Wizzy_dp",
            "IK_MA_odstUniform",
            "IK_MA_odstUniform_1",
            "IK_MA_odstUniform_2",
        };
    };
};

class CfgVehicles
{
    class MA_Uniform_Base;
    class MA_Marine_BDU_Base : MA_Uniform_Base
    {
        class ItemInfo;
    };

    class Static;
    class MA_M56SR_Helmet_Prop : Static
    {
        class ItemInfo;
    };

    class MA_Backpack_Base;
    class MA_M52D_Rucksack : MA_Backpack_Base
    {
        class ItemInfo;
    };

    //Marine Gear
    #include "Marine/Unit.hpp"

    //ODST Gear
    #include "ODST/Unit.hpp"
    #include "ODST/Backpack.hpp"
};

class CfgWeapons
{
    class U_B_CombatUniform_mcam;
    class UniformItem;
    class V_PlateCarrier1_rgr;
    class M52_ODST_Vest_Base : V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };

    class MA_Helmet_Base;
    class MA_M56SR_Helmet : MA_Helmet_Base
    {
        class ItemInfo;
    };
    class CH252_Helmet_Base : MA_Helmet_Base
    {
        class ItemInfo;
    };
    class CH252D_Helmet : MA_Helmet_Base
    {
        class ItemInfo;
    };

    class MA_M56S_Vest;
    class MA_M56R_Vest : MA_M56S_Vest
    {
        class ItemInfo;
    };    

    #include "Marine/pouchesReqs.hpp"

    //Marine Gear
    #include "Marine/Vest.hpp"
    #include "Marine/Headgear.hpp"
    #include "Marine/Uniform.hpp"

    //ODST Gear
    #include "ODST/Vest.hpp"
    #include "ODST/Headgear.hpp"
    #include "ODST/Uniform.hpp"
};