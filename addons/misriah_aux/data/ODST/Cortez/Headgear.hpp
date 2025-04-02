class IK_MA_odstHeadgear_Cortez : IK_MA_odstHeadgear
{
	class XtdGearInfo
	{
        Model = "JC_XtdHeadgearODST_Reach";
		Custom = "Cortez";
	};
	displayName = ITEM_NAME(Cortez ODST Helmet);
	hiddenSelectionsTextures[] =
	{
		QPATHTOF(data\ODST\Cortez\MA_ODST_Helmet_co.paa),
		QPATHTOF(data\ODST\MA_ODST_Visor_co.paa)
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[] =
		{
			QPATHTOF(data\ODST\Cortez\MA_ODST_Helmet_co.paa),
			QPATHTOF(data\ODST\MA_ODST_Visor_co.paa)
		};
	};
};
class IK_MA_odstHeadgear_Cortez_dp : IK_MA_odstHeadgear_Cortez
{
	scope = 1;
	scopeArsenal = 1;
	model = "MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
	hiddenSelectionsTextures[] =
	{
		QPATHTOF(data\ODST\Cortez\MA_ODST_Helmet_co.paa),
		"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"
	};
	class ItemInfo : ItemInfo
	{
		uniformModel = "MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		hiddenSelectionsTextures[] =
		{
			QPATHTOF(data\ODST\Cortez\MA_ODST_Helmet_co.paa),
			"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"
		};
	};
};