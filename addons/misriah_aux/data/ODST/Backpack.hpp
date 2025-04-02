class IK_MA_m52dBackpack: MA_Backpack_Base
{
    scope=2;
    scopeArsenal=2;
    displayName= ITEM_NAME(M52D Rucksack);
    model="MA_Armor\data\Backpacks\M52_Rucksack\M52_Rucksack.p3d";
    picture="\MA_Armor\data\Icons\ODST_Rucksack.paa";
    hiddenSelections[]=
    {
        "camo1", // Bag
        "camo2", // Straps
       //"Rucksack",
       //"Straps"
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Backpacks\M52_Rucksack\Backpack_CO.paa",
        "MA_Armor\data\Backpacks\M52_Rucksack\Straps_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        containerClass = "SupplyPack";
    };
    class XtdGearInfo
    {
        model = "JC_XtdBackpackInfantry";
        M52D = "Strap";
    };
};

class IK_MA_m52dBackpack_Strapless: IK_MA_m52dBackpack
{
    displayName= ITEM_NAME(M52D Rucksack (Strapless));
    hiddenSelections[]=
    {
        "camo1", // Bag
        "camo2", // Straps
    // "Rucksack",
        "Straps"
    };
    class XtdGearInfo
    {
        model = "JC_XtdBackpackInfantry";
        M52D = "Strapless";
    };
};