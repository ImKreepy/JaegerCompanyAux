#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(ADDON), "MA_Armor_ORION"};
        skipWhenMissingDependencies = 1;
        units[] = {
            "IK_MAPO_spartanBackpack",
            "IK_MAPO_KeiichiBackpack",
            "IK_MAPO_DouglasBackpack"
        };
        weapons[] = { 
            "IK_MAPO_spiVest",
            "IK_MAPO_spiHeadgear",
            "IK_MAPO_spiVest_Riker",
            "IK_MAPO_spiHeadgear_Riker",
            "IK_MAPO_spiVest_Ash",
            "IK_MAPO_spartanVest_Samuel",
            "IK_MAPO_spartanVest_Li",
            "IK_MAPO_spartanVest_Keiichi",
            "IK_MAPO_spartanVest_Joseph",
            "IK_MAPO_spartanVest_Jerome",
            "IK_MAPO_spartanVest_Douglas",
            "IK_MAPO_spartanVest",
            "IK_MAPO_spartanHeadgear",
            "IK_MAPO_spartanHeadgear_Red"
        };
        VERSION_CONFIG;
    };
};

class CfgVehicles
{
    class MA_Backpack_Base;
    class Mjolnir_Shoulders_Base_Spartan : MA_Backpack_Base
    {
        class ItemInfo;
    };

    //MkIV Gear
    #include "MkIV/Backpack.hpp"
};

class CfgWeapons
{
    class H_HelmetB;
    class MAPO_MKIV_Helmet : H_HelmetB
    {
        class ItemInfo;
    };
    class MAPO_SPI_Helmet : H_HelmetB
    {
        class ItemInfo;
    };

    class V_PlateCarrier1_rgr;
    class MAPO_MKIV_Armor : V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };

    class MA_Vest_Base;
    class MAPO_SPI_Armor : MA_Vest_Base
    {
        class ItemInfo;
    };
    //MkIV Gear
    #include "MkIV/Vest.hpp"
    #include "MkIV/Headgear.hpp"
    
    //SPI Gear
    #include "SPI/Vest.hpp"
    #include "SPI/Headgear.hpp"
};
