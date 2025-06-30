class IK_MAPO_spartanVest_Joseph : IK_MAPO_spartanVest
{
	class XtdGearInfo
	{
		model = "JC_XtdVestSpartan";
		Mjolnir = "Joseph";
	};
	displayName = ITEM_NAME(Joseph122 Vest);
	descriptionShort = "Prison break wanna be";
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
		QPATHTOF(data\Spartan\MkIV\Joseph\MKIV_Upper_co.paa),
		QPATHTOF(data\Spartan\MkIV\Joseph\MKIV_Lower_co.paa),
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
			QPATHTOF(data\Spartan\MkIV\Joseph\MKIV_Upper_co.paa),
			QPATHTOF(data\Spartan\MkIV\Joseph\MKIV_Lower_co.paa),
			QPATHTOF(data\Spartan\MkIV\MKIV_Shoulders_co.paa),
			QPATHTOF(data\Spartan\MkIV\MKIV_Shoulders_co.paa)
		};
	};
};
