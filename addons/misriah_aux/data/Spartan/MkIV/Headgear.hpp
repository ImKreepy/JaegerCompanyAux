class IK_MAPO_spartanHeadgear : MAPO_MKIV_Helmet
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearSpartan";
        Mjolnir = "Blank";
    };
    author = AUTHOR;
    displayName = ITEM_NAME(MkIV Blank Helmet);
	descriptionShort = "Standard issue Spartan Helmet";
    hiddenSelections[] =
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\Spartan\MkIV\MKIV_Helmet_co.paa),
        QPATHTOF(data\Spartan\MkIV\MKIV_Visor_co.paa)
    };
    hiddenSelectionsMaterials[] =
    {
        QPATHTOF(data\Spartan\MkIV\rvmats\MKIV_Helmet.rvmat),
        QPATHTOF(data\Spartan\MkIV\rvmats\MKIV_Visor.rvmat)
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
            QPATHTOF(data\Spartan\MkIV\MKIV_Helmet_co.paa),
            QPATHTOF(data\Spartan\MkIV\MKIV_Visor_co.paa)
        };
        hiddenSelectionsMaterials[] =
        {
            QPATHTOF(data\Spartan\MkIV\rvmats\MKIV_Helmet.rvmat),
            QPATHTOF(data\Spartan\MkIV\rvmats\MKIV_Visor.rvmat)
        };
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName = "HitHead";
                armor = 100;
                passThrough = 0.1;
            };
            class Face
            {
                hitpointName = "HitFace";
                armor = 100;
                passThrough = 0.1;
            };
            class Neck
            {
                hitpointName = "HitNeck";
                armor = 100;
                passThrough = 0.1;
            };
        };
    };
};
class IK_MAPO_spartanHeadgear_Red : IK_MAPO_spartanHeadgear
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearSpartan";
        Mjolnir = "Red";
    };
    displayName = ITEM_NAME(MkIV Red Team Helmet);
    hiddenSelections[] =
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[] =
    {
        QPATHTOF(data\Spartan\MkIV\MKIV_Helmet_RED_co.paa),
        QPATHTOF(data\Spartan\MkIV\MKIV_Visor_co.paa)
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
            QPATHTOF(data\Spartan\MkIV\MKIV_Helmet_RED_co.paa),
            QPATHTOF(data\Spartan\MkIV\MKIV_Visor_co.paa)
        };
    };
};

