class IK_MAPO_spiHeadgear_Riker : IK_MAPO_spiHeadgear
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearSpartan";
        SPI = "Goliath";
    };
    displayName = ITEM_NAME(Goliath Black SPI Helmet);
    hiddenSelections[] =
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(MAPO\data\SPI\Riker\SPI_Helmet_co.paa),
        QPATHTOF(MAPO\data\SPI\SPI_Visor_co.paa)
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(MAPO\data\SPI\Riker\SPI_Helmet_co.paa),
            QPATHTOF(MAPO\data\SPI\SPI_Visor_co.paa)
        };
    };
};
