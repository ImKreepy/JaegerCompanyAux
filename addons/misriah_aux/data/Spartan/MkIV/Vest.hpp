class IK_MAPO_spartanVest : MAPO_MKIV_Armor
{
	class XtdGearInfo
	{
		model = "JC_XtdVestSpartan";
		Mjolnir = "Blank";
	};
	author = AUTHOR;
	displayName = ITEM_NAME(MkIV Spartan Armor);
	descriptionShort = "Standard issue Spartan Armor";
	model = "MA_Armor_ORION\data\Vests\MKIV\MKIV_Spartan.p3d";
	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"camo3",
		"camo4",
		//	"mkvb_upper",
		//	"mkvb_lower",
		"mkiv_left",
		"mkiv_right"
	};
	hiddenSelectionsTextures[] =
	{
		QPATHTOF(data\Spartan\MkIV\MKIV_Upper_co.paa),
		QPATHTOF(data\Spartan\MkIV\MKIV_Lower_co.paa),
		QPATHTOF(data\Spartan\MkIV\MKIV_Shoulders_co.paa),
		QPATHTOF(data\Spartan\MkIV\MKIV_Shoulders_co.paa)
	};
	hiddenSelectionsMaterials[] =
	{
		QPATHTOF(data\Spartan\MkIV\rvmats\MKIV_Upper.rvmat),
		QPATHTOF(data\Spartan\MkIV\rvmats\MKIV_Lower.rvmat)
	};
	class ItemInfo : ItemInfo
	{
		uniformModel = "MA_Armor_ORION\data\Vests\MKIV\MKIV_Spartan.p3d";
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			//	"mkvb_upper",
			//	"mkvb_lower",
			"mkiv_left",
			"mkiv_right"
		};
		hiddenSelectionsTextures[] =
		{
			QPATHTOF(data\Spartan\MkIV\MKIV_Upper_co.paa),
			QPATHTOF(data\Spartan\MkIV\MKIV_Lower_co.paa),
			QPATHTOF(data\Spartan\MkIV\MKIV_Shoulders_co.paa),
			QPATHTOF(data\Spartan\MkIV\MKIV_Shoulders_co.paa)
		};
		hiddenSelectionsMaterials[] =
		{
			QPATHTOF(data\Spartan\MkIV\rvmats\MKIV_Upper.rvmat),
			QPATHTOF(data\Spartan\MkIV\rvmats\MKIV_Lower.rvmat)
		};
		containerClass = "SupplyHeavy";
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 100;
				passThrough = 0.1;
			};
			class Legs
			{
				hitpointName = "HitLegs";
				armor = 100;
				passThrough = 0.1;
			};
			class Arms
			{
				hitpointName = "HitArms";
				armor = 100;
				passThrough = 0.1;
			};
			class Hands
			{
				hitpointName = "HitHands";
				armor = 100;
				passThrough = 0.1;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 100;
				passThrough = 0.1;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 100;
				passThrough = 0.1;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 100;
				passThrough = 0.1;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 100;
				passThrough = 0.1;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 100;
				passThrough = 0.1;
			};
		};
	};
};
#include "Douglas/Vest.hpp"
#include "Jerome/Vest.hpp"
#include "Joseph/Vest.hpp"
#include "Keiichi/Vest.hpp"
#include "Li/Vest.hpp"
#include "Samuel/Vest.hpp"
