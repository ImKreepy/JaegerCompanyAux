class H_HelmetB;
class OPTRE_FC_Elite_Helmet_Ultra : H_HelmetB
{
    class ItemInfo;
};
class IK_OPTRE_SilentShadow_Headgear: OPTRE_FC_Elite_Helmet_Ultra
{
    displayName= ITEM_NAME(Silent Shadow Helmet);
    description= "Silent Shadow Ultra Helmet";
    author= AUTHOR;
    hiddenSelections[]=
    {
        "camo",
        "camo2",
        "camo3",
        "HonorGuard"
    };
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(SUBCOMPONENT\data\jc_ultra_helmet_co.paa)
    };
    hiddenSelectionsMaterials[]=
    {
        QPATHTOF(SUBCOMPONENT\data\rvmats\jc_ultra_helmet.rvmat)
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(SUBCOMPONENT\data\jc_ultra_helmet_co.paa)
        };
        hiddenSelectionsMaterials[]=
        {
            QPATHTOF(SUBCOMPONENT\data\rvmats\jc_ultra_helmet.rvmat)
        };
        class HitpointsProtectionInfo
        {
            class Head
            {
                hitpointName="HitHead";
                armor=60;
                passThrough=0.1;
            };
            class Face
            {
                hitpointName="HitFace";
                armor=60;
                passThrough=0.1;
            };
        };
    };
};
