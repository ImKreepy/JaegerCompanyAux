class IK_MAPO_spiVest : MAPO_SPI_Armor
{
	scope = 2;
	scopeArsenal = 2;
	class XtdGearInfo
	{
		model = "JC_XtdVestSpartan";
		Spartan = "Blank";
	};
	author = AUTHOR;
	displayName = ITEM_NAME(SPI Blank Vest);
	descriptionShort = "Semi-Powered Infiltration Armor";
	model = "MA_Armor_ORION\data\Vests\SPI\SPI_Spartan.p3d";
	hiddenSelections[] =
	{
		"camo"
	};
	hiddenSelectionsTextures[] =
	{
		QPATHTOF(data\Spartan\SPI\SPI_Armour_co.paa)
	};
	hiddenSelectionsMaterials[] =
    {
        QPATHTOF(data\Spartan\SPI\rvmats\SPI_Armor.rvmat)
    };
	class ItemInfo : ItemInfo
	{
		containerClass = "SupplyHeavy";
		uniformModel = "MA_Armor_ORION\data\Vests\SPI\SPI_Spartan.p3d";
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			QPATHTOF(data\Spartan\SPI\SPI_Armour_co.paa)
		};
		hiddenSelectionsMaterials[] =
		{
			QPATHTOF(data\Spartan\SPI\rvmats\SPI_Armor.rvmat)
		};
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName = "HitNeck";
				armor = 65;
				passThrough = 0.1;
			};
			class Legs
			{
				hitpointName = "HitLegs";
				armor = 65;
				passThrough = 0.1;
			};
			class Arms
			{
				hitpointName = "HitArms";
				armor = 65;
				passThrough = 0.1;
			};
			class Hands
			{
				hitpointName = "HitHands";
				armor = 65;
				passThrough = 0.1;
			};
			class Chest
			{
				hitpointName = "HitChest";
				armor = 65;
				passThrough = 0.1;
			};
			class Diaphragm
			{
				hitpointName = "HitDiaphragm";
				armor = 65;
				passThrough = 0.1;
			};
			class Abdomen
			{
				hitpointName = "HitAbdomen";
				armor = 65;
				passThrough = 0.1;
			};
			class Pelvis
			{
				hitpointName = "HitPelvis";
				armor = 65;
				passThrough = 0.1;
			};
			class Body
			{
				hitpointName = "HitBody";
				armor = 65;
				passThrough = 0.1;
			};
		};
	};
};
#include "Ash/Vest.hpp"
#include "Riker/Vest.hpp"