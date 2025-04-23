class CfgWeapons
{
    class HeadgearItem;
    class H_Bandanna_gry;
    class IK_Bandanna_Armored : H_Bandanna_gry
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        weaponPoolAvailable = 1;
        author = AUTHOR;
        displayName = ITEM_NAME(Reinforced Bandana);
        picture = "\A3\Characters_F\Data\UI\icon_H_helmet_plain_ca.paa";
        model = "\A3\characters_F\Civil\headgear_c_bandana1.p3d";
        class ItemInfo : HeadgearItem
        {
            mass = 40;
            uniformModel = "\A3\characters_F\Civil\headgear_c_bandana1.p3d";
            modelSides[] = { 6 };
            hiddenSelections[] =
            {
                "camo"
            };
            class HitpointsProtectionInfo
            {
                class Head
                {
                    hitpointName = "HitHead";
                    armor = 35;
                    passThrough = 0.1;
                };
                class Face
                {
                    hitpointName = "HitFace";
                    armor = 35;
                    passThrough = 0.1;
                };
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 35;
                    passThrough = 0.1;
                };
            };
        };
    };
};