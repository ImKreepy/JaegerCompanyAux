class IK_WBK_OPTRE_SilentShadow_Unit_Melee: IK_OPTRE_SilentShadow_Unit
{
    _generalMacro="IK_WBK_OPTRE_SilentShadow_Unit_Melee";
    editorSubcategory="EdSubCat_SilentShadow_Wbk";
    displayName="Silent Shadow (WBK/Melee)";
    icon="iconMan";
    editorPreview= EDEN_PREVIEW(jc_silentshadow_melee);
    weapons[]=
    {
        "IK_WBK_EnergySword_Red",
        "Throw",
        "Put"
    };
};
class OPTRE_FC_Elite_SpecOps2;
class WBK_EliteMainWeap_3 : OPTRE_FC_Elite_SpecOps2{};
class WBK_EliteMainWeap_4 : OPTRE_FC_Elite_SpecOps2{};
class WBK_EliteMainWeap_10 : OPTRE_FC_Elite_SpecOps2{};
class IK_WBK_OPTRE_SilentShadow_Unit_Carbine : WBK_EliteMainWeap_3
{
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
    editorSubcategory="EdSubCat_SilentShadow_Wbk";
    _generalMacro="IK_WBK_OPTRE_SilentShadow_Unit_Carbine";
    displayName="Silent Shadow (WBK/Carbine)";
};
class IK_WBK_OPTRE_SilentShadow_Unit_AT : WBK_EliteMainWeap_3
{
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
    editorSubcategory="EdSubCat_SilentShadow_Wbk";
    _generalMacro="IK_WBK_OPTRE_SilentShadow_Unit_AT";
    displayName="Silent Shadow (WBK/AT)";
};
class IK_WBK_OPTRE_SilentShadow_Unit_AA : WBK_EliteMainWeap_3
{
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
    editorSubcategory="EdSubCat_SilentShadow_Wbk";
    _generalMacro="IK_WBK_OPTRE_SilentShadow_Unit_AA";
    displayName="Silent Shadow (WBK/AA)";
};
