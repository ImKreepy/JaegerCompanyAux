class IK_MAPO_spartanVest_Douglas : IK_MAPO_spartanVest
{
	class XtdGearInfo
	{
		model = "JC_XtdVestSpartan";
		Mjolnir = "Douglas";
	};
	displayName = ITEM_NAME(Douglas042 Vest);
	descriptionShort = "Got beat up by a monkey";
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
		QPATHTOF(data\Spartan\MkIV\Douglas\MKIV_Upper_co.paa),
		QPATHTOF(data\Spartan\MkIV\Douglas\MKIV_Lower_co.paa),
		QPATHTOF(data\Spartan\MkIV\Douglas\MKIV_Shoulders_co.paa),
		QPATHTOF(data\Spartan\MkIV\Douglas\MKIV_Shoulders_co.paa)
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
			QPATHTOF(data\Spartan\MkIV\Douglas\MKIV_Upper_co.paa),
			QPATHTOF(data\Spartan\MkIV\Douglas\MKIV_Lower_co.paa),
			QPATHTOF(data\Spartan\MkIV\Douglas\MKIV_Shoulders_co.paa),
			QPATHTOF(data\Spartan\MkIV\Douglas\MKIV_Shoulders_co.paa)
		};
	};
};