class SoldierWB;
class OPTRE_UNSC_Soldier_Base: SoldierWB
{
    class EventHandlers;
    class HitPoints: HitPoints
    {
        class HitFace;
        class HitNeck;
        class HitHead;
        class HitPelvis;
        class HitAbdomen;
        class HitDiaphragm;
        class HitChest;
        class HitBody;
        class HitArms;
        class HitHands;
        class HitLegs;
    };
};
class OPTRE_FC_Elite_Undersuit: OPTRE_UNSC_Soldier_Base
{
    class EventHandlers;
    class HitPoints: HitPoints
    {
        class HitFace;
        class HitNeck;
        class HitHead;
        class HitPelvis;
        class HitAbdomen;
        class HitDiaphragm;
        class HitChest;
        class HitBody;
        class HitArms;
        class HitHands;
        class HitLegs;
    };
};
class IK_OPTRE_SilentShadow_Unit : OPTRE_FC_Elite_Undersuit
{
    scope=2;
    scopeCurator=2;
    faction="OPTRE_FC_Covenant";
    editorSubcategory="EdSubCat_SilentShadow";
    side=0;
    author= AUTHOR;
    displayName="Silent Shadow (Pulse Carbine)";
    icon="iconMan";
    uniformAccessories[]={};
    nakedUniform="IK_OPTRE_SilentShadow_Uniform";
    uniformClass="IK_OPTRE_SilentShadow_Uniform";
    editorPreview = EDEN_PREVIEW(jc_silentshadow_carbine);
    linkedItems[]=
    {
        "IK_OPTRE_SilentShadow_Vest",
        "IK_OPTRE_SilentShadow_Headgear",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        "ItemGPS",
        "OPTRE_FC_NVG"
    };
    weapons[]=
    {
        "OPTRE_FC_T60_PulseCarbine",
        "Throw",
        "Put"
    };
    magazines[]=
    {
        "OPTRE_FC_T60_Pulse_Carbine_Battery",
        "OPTRE_FC_T60_Pulse_Carbine_Battery",
        "OPTRE_FC_T60_Pulse_Carbine_Battery",
        "OPTRE_FC_T60_Pulse_Carbine_Battery",
        "OPTRE_FC_PlasmaGrenade"
    };
    hiddenSelections[]=
    {
        "camo",
        "camoShield"
    };
    hiddenSelectionsTextures[]=
    {
        QPATHTOF(SUBCOMPONENT\data\jc_elite_body_co.paa)
    };
    hiddenSelectionsMaterials[]=
    {
        QPATHTOF(SUBCOMPONENT\data\rvmats\jc_elite_body.rvmat)
    };
    class HitPoints: HitPoints
    {
        class HitFace: HitFace
        {
            armor=10;
        };
        class HitNeck: HitNeck
        {
            armor=10;
        };
        class HitHead: HitHead
        {
            armor=10;
        };
        class HitPelvis: HitPelvis
        {
            armor=16;
        };
        class HitAbdomen: HitAbdomen
        {
            armor=10;
        };
        class HitDiaphragm: HitDiaphragm
        {
            armor=10;
        };
        class HitChest: HitChest
        {
            armor=10;
        };
        class HitArms: HitArms
        {
            armor=14;
        };
        class HitHands: HitHands
        {
            armor=14;
        };
        class HitLegs: HitLegs
        {
            armor=14;
        };
    };
};
class IK_OPTRE_SilentShadow_Unit_AA: IK_OPTRE_SilentShadow_Unit
{
    displayName="Silent Shadow (Fuel Rod)";
    icon="iconManAT";
    editorPreview= EDEN_PREVIEW(jc_silentshadow_aa);
    linkedItems[]=
    {
        "IK_OPTRE_SilentShadow_Vest",
        "IK_OPTRE_SilentShadow_Headgear",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        "ItemGPS",
        "OPTRE_FC_NVG"
    };
    weapons[]=
    {
        "OPTRE_FC_T25_Rifle",
        "Throw",
        "Put",
        "OPTRE_FC_T33_FuelRod_Cannon_Guided"
    };
    magazines[]=
    {
        "OPTRE_FC_T25_Rifle_Battery",
        "OPTRE_FC_T25_Rifle_Battery",
        "OPTRE_FC_T25_Rifle_Battery",
        "OPTRE_FC_T33_FuelRod_Pack_Guided",
        "OPTRE_FC_T33_FuelRod_Pack_Guided",
        "OPTRE_FC_PlasmaGrenade"
    };
};
class IK_OPTRE_SilentShadow_Unit_AT: IK_OPTRE_SilentShadow_Unit
{
    displayName="Silent Shadow (Concussion Rifle)";
    icon="iconManAT";
    editorPreview= EDEN_PREVIEW(jc_silentshadow_at);
    linkedItems[]=
    {
        "IK_OPTRE_SilentShadow_Vest",
        "IK_OPTRE_SilentShadow_Headgear",
        "ItemMap",
        "ItemCompass",
        "ItemWatch",
        "ItemRadio",
        "ItemGPS",
        "OPTRE_FC_NVG"
    };
    weapons[]=
    {
        "OPTRE_FC_T50_ConcussionRifle",
        "Throw",
        "Put"
    };
    magazines[]=
    {
        "OPTRE_FC_T50_6rnd_mag",
        "OPTRE_FC_T50_6rnd_mag",
        "OPTRE_FC_T50_6rnd_mag",
        "OPTRE_FC_T50_6rnd_mag",
        "OPTRE_FC_T50_6rnd_mag",
        "OPTRE_FC_T50_6rnd_mag",
        "OPTRE_FC_PlasmaGrenade"
    };
};