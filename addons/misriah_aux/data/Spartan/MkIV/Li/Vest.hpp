class IK_MAPO_spartanVest_Li : IK_MAPO_spartanVest
{
	class XtdGearInfo
	{
		model = "JC_XtdVestSpartan";
		Mjolnir = "Li";
	};
	displayName = ITEM_NAME(Li008 Vest);
	descriptionShort = "Vaporized during a space walk";
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
		QPATHTOF(data\Spartan\MkIV\Li\MKIV_Upper_co.paa),
		QPATHTOF(data\Spartan\MkIV\Li\MKIV_Lower_co.paa),
		QPATHTOF(data\Spartan\MkIV\MKIV_Shoulders_co.paa),
		QPATHTOF(data\Spartan\MkIV\MKIV_Shoulders_co.paa)
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
			QPATHTOF(data\Spartan\MkIV\Li\MKIV_Upper_co.paa),
			QPATHTOF(data\Spartan\MkIV\Li\MKIV_Lower_co.paa),
			QPATHTOF(data\Spartan\MkIV\MKIV_Shoulders_co.paa),
			QPATHTOF(data\Spartan\MkIV\MKIV_Shoulders_co.paa)
		};
	};
};