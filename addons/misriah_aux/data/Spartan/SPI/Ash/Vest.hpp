class IK_MAPO_spiVest_Ash : IK_MAPO_spiVest
{
	class XtdGearInfo
    {
        model = "JC_XtdVestSpartan";
        SPI = "Ash";
    };
	displayName = ITEM_NAME(Ash G099 SPI Vest);
	hiddenSelections[] =
	{
		"camo"
	};
	hiddenSelectionsTextures[] =
	{
		QPATHTOF(data\Spartan\SPI\Ash\SPI_Armour_co.paa)
	};
	class ItemInfo : ItemInfo
	{
		hiddenSelections[] =
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			QPATHTOF(data\Spartan\SPI\Ash\SPI_Armour_co.paa)
		};
	};
};
