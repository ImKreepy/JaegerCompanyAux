class CfgGlasses
{
    class None;
    class IK_Glasses_Empty : None
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = ITEM_NAME(Empty Glasses);
        picture = ITEM_PICTURE(picture_ca);
        model = "\a3\weapons_f\empty.p3d";
        author = AUTHOR;
        ACE_Resistance = 2;
        ACE_Protection = 1;
    };
    class IK_Glasses_ODST : IK_Glasses_Empty
    {
        displayName = ITEM_NAME(ODST Visor);
        picture = ITEM_PICTURE(picture_ca);
        ACE_Overlay = QPATHTOF(textures\CombatGoggles.paa);
        ACE_OverlayCracked = QPATHTOF(textures\CombatGogglesCracked.paa);
    };
};