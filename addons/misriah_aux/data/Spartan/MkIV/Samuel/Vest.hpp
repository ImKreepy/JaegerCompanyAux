class IK_MAPO_spartanVest_Samuel : IK_MAPO_spartanVest
{
	class XtdGearInfo
	{
		model = "JC_XtdVestSpartan";
		Mjolnir = "Samuel";
	};
	displayName = ITEM_NAME(Samuel034 Vest);
	descriptionShort = "The First Spartan Missing In Action";
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
		QPATHTOF(data\Spartan\MkIV\Samuel\MKIV_Upper_co.paa),
		QPATHTOF(data\Spartan\MkIV\Samuel\MKIV_Lower_co.paa),
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
			QPATHTOF(data\Spartan\MkIV\Samuel\MKIV_Upper_co.paa),
			QPATHTOF(data\Spartan\MkIV\Samuel\MKIV_Lower_co.paa),
			QPATHTOF(data\Spartan\MkIV\MKIV_Shoulders_co.paa),
			QPATHTOF(data\Spartan\MkIV\MKIV_Shoulders_co.paa)
		};
	};
};