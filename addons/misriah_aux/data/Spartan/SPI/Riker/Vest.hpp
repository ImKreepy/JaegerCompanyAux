class IK_MAPO_spiVest_Riker : IK_MAPO_spiVest
{
	class XtdGearInfo
    {
        model = "JC_XtdVestSpartan";
        SPI = "Goliath";
    };
	displayName = ITEM_NAME(Goliath Black SPI Vest);
	hiddenSelections[] =
	{
		"camo"
	};
	hiddenSelectionsTextures[] =
	{
		QPATHTOF(data\Spartan\SPI\Riker\SPI_Armour_co.paa)
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			QPATHTOF(data\Spartan\SPI\Riker\SPI_Armour_co.paa)
		};
	};
};