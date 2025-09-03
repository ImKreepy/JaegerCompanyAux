class CfgVehicles
{   
    class IK_OPTRE_eliteMinor_T25;
    class IK_OPTRE_eliteMinor_AA;
    class IK_OPTRE_eliteMinor_AT;
    class IK_OPTRE_EliteMajor_T51;
    class IK_OPTRE_EliteUltra_T51;
    class IK_OPTRE_EliteUltra_SilentShadow_T51;
    class IK_OPTRE_EliteZealot_T51;
    class IK_OPTRE_EliteZealot__FieldMaster_T51;

    class IK_WBK_OPTRE_eliteMinor_Carbine : IK_OPTRE_eliteMinor_T25
    {
		faction="JC_Covenant";
        displayName = "Sangheili Minor (Carbine)";
        editorSubcategory="EdSubCat_Elites_WBK";
        EDITORPREVIEW(jc_eliteMinor_Carbine);
    };
    class IK_WBK_OPTRE_eliteMinor_AA : IK_OPTRE_eliteMinor_AA
    {
		faction="JC_Covenant";
        displayName = "Sangheili Minor (AA)";
        editorSubcategory="EdSubCat_Elites_WBK";
        EDITORPREVIEW(jc_eliteMinor_AA);
    };
    class IK_WBK_OPTRE_eliteMinor_AT : IK_OPTRE_eliteMinor_AT
    {
		faction="JC_Covenant";
        displayName = "Sangheili Minor (AT)";
        editorSubcategory="EdSubCat_Elites_WBK";
        EDITORPREVIEW(jc_eliteMinor_AT);
    };
    class IK_WBK_OPTRE_EliteMajor_Carbine : IK_OPTRE_EliteMajor_T51
    {
		faction="JC_Covenant";
        displayName = "Sangheili Major (Carbine)";
        editorSubcategory="EdSubCat_Elites_WBK";
        EDITORPREVIEW(jc_eliteMajor_Carbine);
    };
    class IK_WBK_OPTRE_EliteUltra_Carbine : IK_OPTRE_EliteUltra_T51
    {
		faction="JC_Covenant";
        displayName = "Sangheili Ultra (Carbine)";
        editorSubcategory="EdSubCat_Elites_WBK";
        EDITORPREVIEW(jc_eliteUltra_Carbine);
    };
    class IK_WBK_OPTRE_EliteUltra_SilentShadow_Carbine : IK_OPTRE_EliteUltra_SilentShadow_T51
    {
		faction="JC_Covenant";
        displayName = "Silent Shadow (Carbine)";
        editorSubcategory="EdSubCat_Elites_WBK";
        EDITORPREVIEW(jc_eliteUltra_SilentShadow_Carbine);
    };
    class IK_WBK_OPTRE_EliteUltra_SilentShadow_Melee : IK_OPTRE_EliteUltra_SilentShadow_T51
    {
		faction="JC_Covenant";
        displayName = "Silent Shadow (Melee)";
        editorSubcategory="EdSubCat_Elites_WBK";
        EDITORPREVIEW(jc_eliteUltra_SilentShadow_Melee);
        weapons[]=
        {
            "IK_WBK_EnergySword_Red",
            "Throw",
            "Put"
        };
    };
    class IK_WBK_OPTRE_EliteZealot_Carbine : IK_OPTRE_EliteZealot_T51
    {
		faction="JC_Covenant";
        displayName = "Sangheili Zealot (Carbine)";
        editorSubcategory="EdSubCat_Elites_WBK";
        EDITORPREVIEW(jc_eliteZealot_Carbine);
    };
    class IK_WBK_OPTRE_EliteZealot_Melee : IK_OPTRE_EliteZealot_T51
    {
		faction="JC_Covenant";
        displayName = "Sangheili Zealot (Melee)";
        EDITORPREVIEW(jc_eliteZealot_Melee);
        weapons[]=
        {
            "Casey_Energy_Sword_2",
            "Throw",
            "Put"
        };
    };
    class IK_WBK_OPTRE_EliteZealot__FieldMaster_Carbine : IK_OPTRE_EliteZealot__FieldMaster_T51
    {
		faction="JC_Covenant";
        displayName = "Sangheili Field Master (Carbine)";
        editorSubcategory="EdSubCat_Elites_WBK";
        EDITORPREVIEW(jc_eliteMaster_Carbine);
    };
    class IK_WBK_OPTRE_EliteZealot__FieldMaster_Melee : IK_OPTRE_EliteZealot__FieldMaster_T51
    {
		faction="JC_Covenant";
        displayName = "Sangheili Field Master (Melee)";
        EDITORPREVIEW(jc_eliteMaster_Melee);
        weapons[]=
        {
            "Casey_Energy_Sword_2",
            "Throw",
            "Put"
        };
    };

    /*
    class IK_WBK_OPTRE_EliteFieldMarshal_T51 : OPTRE_FC_Elite_FieldMarshal
    {
		faction="JC_Covenant";
        _generalMacro="IK_WBK_OPTRE_eliteCarbine";
        editorSubcategory="EdSubCat_Elites_WBK";
        EDITORPREVIEW(jc_eliteMinor_T25);
    };
    */
};
