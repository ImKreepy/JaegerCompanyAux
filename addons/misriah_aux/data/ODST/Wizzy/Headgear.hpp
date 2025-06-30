class IK_MA_odstHeadgear_Wizzy : IK_MA_odstHeadgear
{
	class XtdGearInfo
	{
        Model = "JC_XtdHeadgearODST_Reach";
		Custom = "Wizzy";
	};
	displayName = ITEM_NAME(Wizzy ODST Helmet);
	hiddenSelectionsTextures[] =
	{
		QPATHTOF(data\ODST\Wizzy\MA_ODST_Helmet_co.paa),
		QPATHTOF(data\ODST\MA_ODST_Visor_co.paa),
        "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelectionsTextures[] =
		{
			QPATHTOF(data\ODST\Wizzy\MA_ODST_Helmet_co.paa),
			QPATHTOF(data\ODST\MA_ODST_Visor_co.paa),
        "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"
		};
	};
};
class IK_MA_odstHeadgear_Wizzy_dp : IK_MA_odstHeadgear_Wizzy
{
	scope = 1;
	scopeArsenal = 1;
	model = "MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
	hiddenSelectionsTextures[] =
	{
		QPATHTOF(data\ODST\Wizzy\MA_ODST_Helmet_co.paa),
		"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa",
        "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"
	};
	class ItemInfo : ItemInfo
	{
		uniformModel = "MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm_dp.p3d";
		hiddenSelectionsTextures[] =
		{
			QPATHTOF(data\ODST\Wizzy\MA_ODST_Helmet_co.paa),
			"MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa",
        "MA_Armor\data\Attachments\Balaclava\Marine_Balaclava_CO.paa"
		};
	};
};
