#include "script_component.hpp"

class CfgPatches
{
    class MAIN_ADDON
    {
        name = COMPONENT_NAME;
        author = AUTHOR;
        authors[] = AUTHORS;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"cba_main","cba_xeh"};
		url="https://discord.gg/FqY9cNzB5n";
        units[] = {};
        weapons[] = {};
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

class CfgAddons
{
    class PreloadAddons 
    {
        class JaegerMain_Preload
        {
            list[] = {
            "cba_main",
            "cba_xeh",
            "jc_main"
            };
        };
    };
};

class CfgMods
{
    class Mod_Base;
	class JaegerCompanyUnitAux: Mod_Base
	{
		dir="@Jaeger Company - Unit Auxiliary";
		name = "Jaeger Company - Unit Auxiliary";
        author = "Im Kreepy";
        description = "Jaeger Company Unit Auxiliary Mod";

        action = "https://discord.gg/FqY9cNzB5n";
        actionName = "Join Jaeger Company";

        tooltip = "Jaeger Company Unit Auxiliary";
        tooltipOwned = "Jaeger Company Unit Auxiliary Owned";

        picture = "\z\jc\addons\main\logos\jc_logotitle_512_ca.paa"; // Logo displayed in expansions menu
        logo = "\z\jc\addons\main\logos\jc_logo_ca.paa"; // Image displayed on the main menu (128x)
        logoOver = "\z\jc\addons\main\logos\jc_logoover_ca.paa"; // Image displayed when the mouse hovers over the image on the main menu (128x)
        logoSmall = "\z\jc\addons\main\logos\jc_logo_small_ca.paa"; // Image displayed in Arsenal or 3DEN (32x)

        overview = "This mod provides auxiliary support for the Jaeger Company unit.";
        overviewText = "Jaeger Company Unit Auxiliary Mod";
        overviewPicture = "\z\jc\addons\main\logos\jc_logo_ca.paa";
        overviewFootnote = "\z\jc\addons\main\logos\jc_logo_ca.paa";
	};
};

class CfgFactionClasses
{
    class JC_BLU
    {
        displayName="Jaeger Company";
        priority=1;
        side=1;
        icon= "\z\jc\addons\main\logos\jc_icon_ca.paa";
        flag= "\z\jc\addons\main\logos\jc_flag_co.paa";
    };
};
class CfgEditorCategories
{
	/*class NAME
	{
		displayName = "NAME";
	};*/
};
class CfgEditorSubcategories
{
	class EdSubCat_JC_BLU_Helicopters
    {
        displayName = "Helicopters";
    };
    class EdSubCat_SilentShadow
    {
        displayName = "Silent Shadow";
    };
    class EdSubCat_SilentShadow_Wbk
    {
        displayName = "Silent Shadow (WBK)";
    };
};

class CfgVehicles
{
	class ContainerSupply;
	class SupplyLight : ContainerSupply
    {
        maximumLoad = SUPPLY_LIGHT;
    };
    class SupplyMed : ContainerSupply
    {
        maximumLoad = SUPPLY_MED;
    };
    class SupplyHeavy : ContainerSupply
    {
        maximumLoad = SUPPLY_HEAVY;
    };
    class SupplyPack : ContainerSupply
    {
        maximumLoad = SUPPLY_PACK;
    };

};
