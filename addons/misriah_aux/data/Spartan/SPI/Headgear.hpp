class IK_MAPO_spiHeadgear : MAPO_SPI_Helmet
{
    scope = 2;
    scopeArsenal = 2;
    auther = AUTHOR;
    displayName = ITEM_NAME(SPI Blank Helmet);
    descriptionShort = "Semi-Powered Infiltration Helmet";
    model = "MA_Armor_ORION\data\helmets\spi\spi_helmet_spartan.p3d";
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearSpartan";
        SPI = "Blank";
    };
    hiddenSelections[] =
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\Spartan\SPI\SPI_Helmet_co.paa),
        QPATHTOF(data\Spartan\SPI\SPI_Visor_co.paa)
    };
    hiddenSelectionsMaterials[] =
    {
        QPATHTOF(data\Spartan\SPI\rvmats\SPI_Helmet.rvmat),
        QPATHTOF(data\Spartan\SPI\rvmats\SPI_Visor.rvmat)
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor_ORION\data\helmets\spi\spi_helmet_spartan.p3d";
        hiddenSelections[] =
        {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[] =
        {
            QPATHTOF(data\Spartan\SPI\SPI_Helmet_co.paa),
            QPATHTOF(data\Spartan\SPI\SPI_Visor_co.paa)
        };
        hiddenSelectionsMaterials[] =
        {
            QPATHTOF(data\Spartan\SPI\rvmats\SPI_Helmet.rvmat),
            QPATHTOF(data\Spartan\SPI\rvmats\SPI_Visor.rvmat)
        };
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName = "HitHead";
                armor = 65;
                passThrough = 0.1;
            };
            class Face
            {
                hitpointName = "HitFace";
                armor = 65;
                passThrough = 0.1;
            };
            class Neck
            {
                hitpointName = "HitNeck";
                armor = 65;
                passThrough = 0.1;
            };
        };
    };
};
#include "Riker/Headgear.hpp"
