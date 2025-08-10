#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = COMPONENT_NAME;
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"jc_main", "optre_core", "optre_fc_core","optre_fc_units_elite"};
        units[] = {
            "IK_OPTRE_eliteMinor_T25",
            "IK_OPTRE_eliteMinor_T51",
            "IK_OPTRE_eliteMinor_T33",
            "IK_OPTRE_eliteMinor_AA",
            "IK_OPTRE_eliteMinor_AT",

            "IK_OPTRE_EliteMajor_T51",
            "IK_OPTRE_EliteMajor_T25",

            "IK_OPTRE_EliteUltra_T51",
            "IK_OPTRE_EliteUltra_T50",
            "IK_OPTRE_EliteUltra_T60",
            "IK_OPTRE_EliteUltra_SilentShadow_T51",
            "IK_OPTRE_EliteUltra_SilentShadow_T50",
            "IK_OPTRE_EliteUltra_SilentShadow_T60",

            "IK_OPTRE_EliteZealot_T51",
            "IK_OPTRE_EliteZealot_T50",
            "IK_OPTRE_EliteZealot_FieldMaster_T51",
            "IK_OPTRE_EliteZealot_FieldMaster_T50"

        };
        weapons[] = {
            "IK_OPTRE_EliteMinor_Vest_Blue",
            "IK_OPTRE_EliteMinor_Headgear_Blue",
            "IK_OPTRE_EliteMinor_Vest_Baja",
            "IK_OPTRE_EliteMinor_Headgear_Baja",
            "IK_OPTRE_EliteMinor_Vest_Teal",
            "IK_OPTRE_EliteMinor_Headgear_Teal",
            "IK_OPTRE_EliteMinor_Vest_LightBlue",
            "IK_OPTRE_EliteMinor_Headgear_LightBlue",
            "IK_OPTRE_EliteMinor_Vest_Gold",
            "IK_OPTRE_EliteMinor_Headgear_Gold",
            "IK_OPTRE_EliteMinor_Vest_White",
            "IK_OPTRE_EliteMinor_Headgear_White",
            "IK_OPTRE_EliteMinor_Vest_Black",
            "IK_OPTRE_EliteMinor_Headgear_Black",

            "IK_OPTRE_EliteMajor_Vest_Brick",
            "IK_OPTRE_EliteMajor_Headgear_Brick",
            "IK_OPTRE_EliteMajor_Vest_Orange",
            "IK_OPTRE_EliteMajor_Headgear_Orange",
            "IK_OPTRE_EliteMajor_Vest_Red",
            "IK_OPTRE_EliteMajor_Headgear_Red",

            "IK_OPTRE_EliteOfficer_Vest_Brick",
            "IK_OPTRE_EliteOfficer_Headgear_Brick",
            "IK_OPTRE_EliteOfficer_Vest_Orange",
            "IK_OPTRE_EliteOfficer_Headgear_Orange",
            "IK_OPTRE_EliteOfficer_Vest_Red",
            "IK_OPTRE_EliteOfficer_Headgear_Red",
            "IK_OPTRE_EliteOfficer_Vest_CE",
            "IK_OPTRE_EliteOfficer_Headgear_CE",

            "IK_OPTRE_EliteUltra_Vest_Ash",
            "IK_OPTRE_EliteUltra_Headgear_Ash",
            "IK_OPTRE_EliteUltra_Vest_Black",
            "IK_OPTRE_EliteUltra_Headgear_Black",
            "IK_OPTRE_EliteUltra_Vest_SilentShadow",
            "IK_OPTRE_EliteUltra_Headgear_SilentShadow",

            "IK_OPTRE_EliteZealot_Vest_Zealot",
            "IK_OPTRE_EliteZealot_Headgear_Zealot",
            "IK_OPTRE_EliteZealot_Vest_Gold",
            "IK_OPTRE_EliteZealot_Headgear_Gold"
        };
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class CfgFactionClasses
{
    class JC_Covenant
    {
        displayName="[JC] Covenant";
        priority=1;
        side=0;
    };
};

class CfgEditorSubcategories
{
    class EdSubCat_Elites
    {
        displayName = "Sangheili";
    };
    class EdSubCat_Elites_WBK
    {
        displayName = "Sangheili (WBK)";
    };
};

#include "XtdGearModels.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgGroups.hpp"
