class V_PlateCarrier1_rgr;
class OPTRE_FC_Elite_Armor_Minor : V_PlateCarrier1_rgr
{
    class ItemInfo;
};
class IK_OPTRE_SilentShadow_Vest : OPTRE_FC_Elite_Armor_Minor
{
    displayName= ITEM_NAME(Silent Shadow Vest);
    author= AUTHOR;
    hiddenSelections[]=
    {
        "camo1",
        "camo2"
    };
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(SUBCOMPONENT\data\jc_ultra_vest_co.paa),
        QPATHTOF(SUBCOMPONENT\data\jc_ultra_limbs_co.paa)
    };
    hiddenSelectionsMaterials[]=
    {
        QPATHTOF(SUBCOMPONENT\data\rvmats\jc_ultra_vest.rvmat),
        QPATHTOF(SUBCOMPONENT\data\rvmats\jc_ultra_limbs.rvmat)
    };
    class ItemInfo: ItemInfo
    {
        hiddenSelections[]=
        {
            "camo1",
            "camo2"
        };
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(SUBCOMPONENT\data\jc_ultra_vest_co.paa),
            QPATHTOF(SUBCOMPONENT\data\jc_ultra_limbs_co.paa)
        };
        hiddenSelectionsMaterials[]=
        {
            QPATHTOF(SUBCOMPONENT\data\rvmats\jc_ultra_vest.rvmat),
            QPATHTOF(SUBCOMPONENT\data\rvmats\jc_ultra_limbs.rvmat)
        };
        class HitpointsProtectionInfo
        {
            class Arms
            {
                hitpointName="HitArms";
                armor=60;
                passThrough=0.1;
            };
            class Hands
            {
                hitpointName="HitHands";
                armor=60;
                passThrough=0.1;
            };
            class Legs
            {
                hitpointName="HitLegs";
                armor=60;
                passThrough=0.1;
            };
            class Neck
            {
                hitpointName="HitNeck";
                armor=60;
                passThrough=0.1;
            };
            class Chest
            {
                hitpointName="HitChest";
                armor=60;
                passThrough=0.1;
            };
            class Diaphragm
            {
                hitpointName="HitDiaphragm";
                armor=60;
                passThrough=0.1;
            };
            class Abdomen
            {
                hitpointName="HitAbdomen";
                armor=60;
                passThrough=0.1;
            };
            class Pelvis
            {
                hitpointName="HitPelvis";
                armor=60;
                passThrough=0.1;
            };
            class Body
            {
                hitpointName="HitBody";
                armor=60;
                passThrough=0.1;
            };
        };
    };
};
