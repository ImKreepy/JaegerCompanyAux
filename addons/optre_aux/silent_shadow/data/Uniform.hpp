class U_B_CombatUniform_mcam;
class OPTRE_FC_Elite_CombatSkin : U_B_CombatUniform_mcam
{
    class ItemInfo;
};
class IK_OPTRE_SilentShadow_Uniform: OPTRE_FC_Elite_CombatSkin
{
    scope=2;
    scopeArsenal=2;
    author= AUTHOR;
    displayName= ITEM_NAME(Silent Shadow Combat Skin);
    class ItemInfo: ItemInfo
    {
        uniformModel="-";
        uniformClass="IK_OPTRE_SilentShadow_Unit";
    };
};
