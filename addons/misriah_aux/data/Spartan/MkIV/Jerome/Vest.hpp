
class IK_MAPO_spartanVest_Jerome : IK_MAPO_spartanVest
{
	class XtdGearInfo
	{
		model = "JC_XtdVestSpartan";
		Mjolnir = "Jerome";
	};
	displayName = ITEM_NAME(Jerome092 Vest);
	descriptionShort = "John's arguably cooler counterpart";
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
		QPATHTOF(data\Spartan\MkIV\Jerome\MKIV_Upper_co.paa),
		QPATHTOF(data\Spartan\MkIV\Jerome\MKIV_Lower_co.paa),
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
			QPATHTOF(data\Spartan\MkIV\Jerome\MKIV_Upper_co.paa),
			QPATHTOF(data\Spartan\MkIV\Jerome\MKIV_Lower_co.paa),
			QPATHTOF(data\Spartan\MkIV\MKIV_Shoulders_co.paa),
			QPATHTOF(data\Spartan\MkIV\MKIV_Shoulders_co.paa)
		};
	};
};