class IK_MA_odstHeadgear : CH252D_Helmet
{
    class XtdGearInfo
    {
        Model = "JC_XtdHeadgearODST_Reach";
        Basic = "Standard";
    };
	displayName = ITEM_NAME(Standard ODST Helmet);
	descriptionShort = "Halo Reach ODST Helmet";
	picture = ITEM_PICTURE(picture);
    ACE_Protection = 1;
	hiddenSelections[] =
	{
		"Camo1",
		"Camo2"
		//"Helmet"
		//"Visor"
	};
	hiddenSelectionsTextures[] =
	{
		QPATHTOF(data\ODST\MA_ODST_Helmet_co.paa),
		QPATHTOF(data\ODST\MA_ODST_Visor_co.paa),
        "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"
	};
	hiddenSelectionsMaterials[] =
	{
		QPATHTOF(data\ODST\rvmats\reach_odst_helm.rvmat),
		QPATHTOF(data\ODST\rvmats\reach_odst_visor.rvmat),
        "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] =
		{
			"Camo1",
			"Camo2"
			//"Helmet"
			//"Visor"
		};
		hiddenSelectionsTextures[] =
		{
			QPATHTOF(data\ODST\MA_ODST_Helmet_co.paa),
			QPATHTOF(data\ODST\MA_ODST_Visor_co.paa),
        	"MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			QPATHTOF(data\ODST\rvmats\reach_odst_helm.rvmat),
			QPATHTOF(data\ODST\rvmats\reach_odst_visor.rvmat),
        	"MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName = "HitHead";
				armor = 45;
				passThrough = 0.1;
			};
			class Face
			{
				hitpointName = "HitFace";
				armor = 45;
				passThrough = 0.1;
			};
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 45;
				passThrough = 0.1;
			};
		};
	};
};
class IK_MA_odstHeadgear_dp : IK_MA_odstHeadgear
{
	scope = 1;
    scopeArsenal = 1;
	model = "MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
	hiddenSelectionsTextures[] =
	{
		QPATHTOF(data\ODST\MA_ODST_Helmet_co.paa),
		"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa",
        "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"
	};
	class ItemInfo : ItemInfo
	{
		uniformModel = "MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		hiddenSelectionsTextures[] =
		{
			QPATHTOF(data\ODST\MA_ODST_Helmet_co.paa),
			"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa",
        "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"
		};
	};
};

#include "Cortez/Headgear.hpp"
#include "Dalu/Headgear.hpp"
#include "Kodiak/Headgear.hpp"
#include "Sailboat/Headgear.hpp"
#include "Wizzy/Headgear.hpp"
