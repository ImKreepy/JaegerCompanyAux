class CfgVehicles
{
    class ItemInfo;
    class B_AssaultPack_Base;
    class IK_Backpack_Invisible : B_AssaultPack_Base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = ITEM_NAME(Invisible Backpack);
        model = "\a3\weapons_f\empty.p3d";
        author = AUTHOR;
        class ItemInfo : ItemInfo
        {
            containerClass = "SupplyPack";
        };
        mass = 20;
        class TransportWeapons {};
        class TransportMagazines {};
        class TransportItems {};
    };
};
