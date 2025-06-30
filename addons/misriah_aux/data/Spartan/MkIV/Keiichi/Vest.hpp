class IK_MAPO_spartanVest_Keiichi : IK_MAPO_spartanVest
{
	class XtdGearInfo
	{
		model = "JC_XtdVestSpartan";
		Mjolnir = "Keiichi";
	};
	displayName = ITEM_NAME(Keiichi047 Vest);
	descriptionShort = "MIA after the Harvest Campaign";
	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"camo3",
		"camo4",
		//	"mkvb_upper",
		//	"mkvb_lower",
		//	"mkiv_left",
		//	"mkiv_right"
	};
	hiddenSelectionsTextures[] =
	{
		QPATHTOF(data\Spartan\MkIV\Keiichi\MKIV_Upper_co.paa),
		QPATHTOF(data\Spartan\MkIV\Keiichi\MKIV_Lower_co.paa),
		QPATHTOF(data\Spartan\MkIV\Keiichi\MKIV_Shoulders_co.paa),
		QPATHTOF(data\Spartan\MkIV\Keiichi\MKIV_Shoulders_co.paa)
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			//	"mkvb_upper",
			//	"mkvb_lower",
			//	"mkiv_left",
			//	"mkiv_right"
		};
		hiddenSelectionsTextures[] =
		{
			QPATHTOF(data\Spartan\MkIV\Keiichi\MKIV_Upper_co.paa),
			QPATHTOF(data\Spartan\MkIV\Keiichi\MKIV_Lower_co.paa),
			QPATHTOF(data\Spartan\MkIV\Keiichi\MKIV_Shoulders_co.paa),
			QPATHTOF(data\Spartan\MkIV\Keiichi\MKIV_Shoulders_co.paa)
		};
	};
};
