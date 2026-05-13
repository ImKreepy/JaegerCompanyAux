class CfgVehicles
{   
    class EventHandlers;
    class OPTRE_FC_Elite_Minor;
    class OPTRE_FC_Elite_Minor2;
    class OPTRE_FC_Elite_Minor3;
    class OPTRE_FC_Elite_MinorAA;
    class OPTRE_FC_Elite_MinorAT;
    class OPTRE_FC_Elite_Major;
    //class OPTRE_FC_Elite_Officer;
    //class OPTRE_FC_Elite_SpecOps;
    //class OPTRE_FC_Elite_SpecOps2;
    //class OPTRE_FC_Elite_SpecOps3;
    //class OPTRE_FC_Elite_SpecOps4;
    class OPTRE_FC_Elite_Ultra;
    class OPTRE_FC_Elite_Ultra2;
    class OPTRE_FC_Elite_Ultra3;
    class OPTRE_FC_Elite_Zealot;
    class OPTRE_FC_Elite_Zealot2;
    //class OPTRE_FC_Elite_FieldMarshal;
    //class OPTRE_FC_Elite_FieldMarshal2;
    //class OPTRE_FC_Elite_HonorGuard;

    // Elite Minor Start
    class IK_OPTRE_eliteMinor_T25 : OPTRE_FC_Elite_Minor
    {
        author = AUTHOR;
        faction = "JC_Covenant";
        editorSubcategory="EdSubCat_Elites";
        EDITORPREVIEW(jc_eliteMinor_T25);
        class EventHandlers : EventHandlers
        {
            init = "if (local (_this select 0)) then {[(_this select 0), [['IK_OPTRE_EliteMinor_Vest_Blue','IK_OPTRE_EliteMinor_Headgear_Blue'], 0.5, ['IK_OPTRE_EliteMinor_Vest_Teal','IK_OPTRE_EliteMinor_Headgear_Teal'], 0.5, ['IK_OPTRE_EliteMinor_Vest_LightBlue','IK_OPTRE_EliteMinor_Headgear_LightBlue'], 0.5]] call jc_fnc_unitGearRandomizerWeighted;};";
        };
    };
    class IK_OPTRE_eliteMinor_T51 : OPTRE_FC_Elite_Minor2
    {
        author = AUTHOR;
        faction = "JC_Covenant";
        editorSubcategory="EdSubCat_Elites";
        EDITORPREVIEW(jc_eliteMinor_T51);
        class EventHandlers : EventHandlers
        {
            init = "if (local (_this select 0)) then {[(_this select 0), [['IK_OPTRE_EliteMinor_Vest_Blue','IK_OPTRE_EliteMinor_Headgear_Blue'], 0.5, ['IK_OPTRE_EliteMinor_Vest_Teal','IK_OPTRE_EliteMinor_Headgear_Teal'], 0.5, ['IK_OPTRE_EliteMinor_Vest_LightBlue','IK_OPTRE_EliteMinor_Headgear_LightBlue'], 0.5]] call jc_fnc_unitGearRandomizerWeighted;};";
        };
    };
    class IK_OPTRE_eliteMinor_T33 : OPTRE_FC_Elite_Minor3
    {
        author = AUTHOR;
        faction = "JC_Covenant";
        editorSubcategory="EdSubCat_Elites";
        EDITORPREVIEW(jc_eliteMinor_T33);
        class EventHandlers : EventHandlers
        {
            init = "if (local (_this select 0)) then {[(_this select 0), [['IK_OPTRE_EliteMinor_Vest_Blue','IK_OPTRE_EliteMinor_Headgear_Blue'], 0.5, ['IK_OPTRE_EliteMinor_Vest_Teal','IK_OPTRE_EliteMinor_Headgear_Teal'], 0.5, ['IK_OPTRE_EliteMinor_Vest_LightBlue','IK_OPTRE_EliteMinor_Headgear_LightBlue'], 0.5]] call jc_fnc_unitGearRandomizerWeighted;};";
        };
    };
    class IK_OPTRE_eliteMinor_AA : OPTRE_FC_Elite_MinorAA
    {
        author = AUTHOR;
        faction = "JC_Covenant";
        editorSubcategory="EdSubCat_Elites";
        EDITORPREVIEW(jc_eliteMinor_AA);
        class EventHandlers : EventHandlers
        {
            init = "if (local (_this select 0)) then {[(_this select 0), [['IK_OPTRE_EliteMinor_Vest_Blue','IK_OPTRE_EliteMinor_Headgear_Blue'], 0.5, ['IK_OPTRE_EliteMinor_Vest_Teal','IK_OPTRE_EliteMinor_Headgear_Teal'], 0.5, ['IK_OPTRE_EliteMinor_Vest_LightBlue','IK_OPTRE_EliteMinor_Headgear_LightBlue'], 0.5]] call jc_fnc_unitGearRandomizerWeighted;};";
        };
    };
    class IK_OPTRE_eliteMinor_AT : OPTRE_FC_Elite_MinorAT
    {
        author = AUTHOR;
        faction = "JC_Covenant";
        editorSubcategory="EdSubCat_Elites";
        EDITORPREVIEW(jc_eliteMinor_AT);
        class EventHandlers : EventHandlers
        {
            init = "if (local (_this select 0)) then {[(_this select 0), [['IK_OPTRE_EliteMinor_Vest_Blue','IK_OPTRE_EliteMinor_Headgear_Blue'], 0.5, ['IK_OPTRE_EliteMinor_Vest_Teal','IK_OPTRE_EliteMinor_Headgear_Teal'], 0.5, ['IK_OPTRE_EliteMinor_Vest_LightBlue','IK_OPTRE_EliteMinor_Headgear_LightBlue'], 0.5]] call jc_fnc_unitGearRandomizerWeighted;};";
        };
    };
    // Elite Minor End

    // Elite Major Start
    class IK_OPTRE_EliteMajor_T51 : OPTRE_FC_Elite_Major
    {
        author = AUTHOR;
        displayName = "Sangheili Major (T51)";
        faction = "JC_Covenant";
        editorSubcategory="EdSubCat_Elites";
        EDITORPREVIEW(jc_eliteMajor_T51);
        class EventHandlers : EventHandlers
        {
            init = "if (local (_this select 0)) then {[(_this select 0), [['IK_OPTRE_EliteMajor_Vest_Brick','IK_OPTRE_EliteMajor_Headgear_Brick'], 0.9, ['IK_OPTRE_EliteMajor_Vest_Orange','IK_OPTRE_EliteMajor_Headgear_Orange'], 0.9, ['IK_OPTRE_EliteMajor_Vest_Red','IK_OPTRE_EliteMajor_Headgear_Red'], 0.9, ['IK_OPTRE_EliteOfficer_Vest_Brick','IK_OPTRE_EliteOfficer_Headgear_Brick'], 0.7, ['IK_OPTRE_EliteOfficer_Vest_Orange','IK_OPTRE_EliteOfficer_Headgear_Orange'], 0.7, ['IK_OPTRE_EliteOfficer_Vest_Red','IK_OPTRE_EliteOfficer_Headgear_Red'], 0.7, ['IK_OPTRE_EliteOfficer_Vest_CE','IK_OPTRE_EliteOfficer_Headgear_CE'], 0.3]] call jc_fnc_unitGearRandomizerWeighted;};";
        };
    };
    class IK_OPTRE_EliteMajor_T25 : OPTRE_FC_Elite_Major
    {
        author = AUTHOR;
        displayName = "Sangheili Major (T25)";
        faction = "JC_Covenant";
        editorSubcategory="EdSubCat_Elites";
        EDITORPREVIEW(jc_eliteMajor_T25);
		weapons[] = {"OPTRE_FC_T25_Rifle","Throw","Put"};
		respawnWeapons[] = {"OPTRE_FC_T25_Rifle","Throw","Put"};
		magazines[] = {"OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_PlasmaGrenade"};
		respawnMagazines[] = {"OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_T25_Rifle_Battery","OPTRE_FC_PlasmaGrenade"};
        class EventHandlers : EventHandlers
        {
            init = "if (local (_this select 0)) then {[(_this select 0), [['IK_OPTRE_EliteMajor_Vest_Brick','IK_OPTRE_EliteMajor_Headgear_Brick'], 0.9, ['IK_OPTRE_EliteMajor_Vest_Orange','IK_OPTRE_EliteMajor_Headgear_Orange'], 0.9, ['IK_OPTRE_EliteMajor_Vest_Red','IK_OPTRE_EliteMajor_Headgear_Red'], 0.9, ['IK_OPTRE_EliteOfficer_Vest_Brick','IK_OPTRE_EliteOfficer_Headgear_Brick'], 0.7, ['IK_OPTRE_EliteOfficer_Vest_Orange','IK_OPTRE_EliteOfficer_Headgear_Orange'], 0.7, ['IK_OPTRE_EliteOfficer_Vest_Red','IK_OPTRE_EliteOfficer_Headgear_Red'], 0.7, ['IK_OPTRE_EliteOfficer_Vest_CE','IK_OPTRE_EliteOfficer_Headgear_CE'], 0.3]] call jc_fnc_unitGearRandomizerWeighted;};";
        };
    };
    // Elite Major End

    //Elite Ultra Start
    class IK_OPTRE_EliteUltra_T51 : OPTRE_FC_Elite_Ultra
    {
        author = AUTHOR;
        faction = "JC_Covenant";
        editorSubcategory="EdSubCat_Elites";
        EDITORPREVIEW(jc_eliteUltra_T51);
		linkedItems[] = {"IK_OPTRE_EliteUltra_Vest_Ash","IK_OPTRE_EliteUltra_Headgear_Ash","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"IK_OPTRE_EliteUltra_Vest_Ash","IK_OPTRE_EliteUltra_Headgear_Ash","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
    };
    class IK_OPTRE_EliteUltra_T50 : OPTRE_FC_Elite_Ultra2
    {
        author = AUTHOR;
        faction = "JC_Covenant";
        editorSubcategory="EdSubCat_Elites";
        EDITORPREVIEW(jc_eliteUltra_T50);
		linkedItems[] = {"IK_OPTRE_EliteUltra_Vest_Ash","IK_OPTRE_EliteUltra_Headgear_Ash","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"IK_OPTRE_EliteUltra_Vest_Ash","IK_OPTRE_EliteUltra_Headgear_Ash","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
    };
    class IK_OPTRE_EliteUltra_T60 : OPTRE_FC_Elite_Ultra3
    {
        author = AUTHOR;
        faction = "JC_Covenant";
        editorSubcategory="EdSubCat_Elites";
        EDITORPREVIEW(jc_eliteUltra_T60);
		linkedItems[] = {"IK_OPTRE_EliteUltra_Vest_Ash","IK_OPTRE_EliteUltra_Headgear_Ash","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"IK_OPTRE_EliteUltra_Vest_Ash","IK_OPTRE_EliteUltra_Headgear_Ash","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
    };
    class IK_OPTRE_EliteUltra_SilentShadow_T51 : OPTRE_FC_Elite_Ultra
    {
        author = AUTHOR;
        displayName = "Silent Shadow (T51)";
        faction = "JC_Covenant";
        editorSubcategory="EdSubCat_Elites";
        EDITORPREVIEW(jc_eliteUltra_SilentShadow_T51);
		linkedItems[] = {"IK_OPTRE_EliteUltra_Vest_SilentShadow","IK_OPTRE_EliteUltra_Headgear_SilentShadow","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"IK_OPTRE_EliteUltra_Vest_SilentShadow","IK_OPTRE_EliteUltra_Headgear_SilentShadow","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
    };
    class IK_OPTRE_EliteUltra_SilentShadow_T50 : OPTRE_FC_Elite_Ultra2
    {
        author = AUTHOR;
        displayName = "Silent Shadow (T50)";
        faction = "JC_Covenant";
        editorSubcategory="EdSubCat_Elites";
        EDITORPREVIEW(jc_eliteUltra_SilentShadow_T50);
		linkedItems[] = {"IK_OPTRE_EliteUltra_Vest_SilentShadow","IK_OPTRE_EliteUltra_Headgear_SilentShadow","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"IK_OPTRE_EliteUltra_Vest_SilentShadow","IK_OPTRE_EliteUltra_Headgear_SilentShadow","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
    };
    class IK_OPTRE_EliteUltra_SilentShadow_T60 : OPTRE_FC_Elite_Ultra3
    {
        author = AUTHOR;
        displayName = "Silent Shadow (T60)";
        faction = "JC_Covenant";
        editorSubcategory="EdSubCat_Elites";
        EDITORPREVIEW(jc_eliteUltra_SilentShadow_T60);
		linkedItems[] = {"IK_OPTRE_EliteUltra_Vest_SilentShadow","IK_OPTRE_EliteUltra_Headgear_SilentShadow","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"IK_OPTRE_EliteUltra_Vest_SilentShadow","IK_OPTRE_EliteUltra_Headgear_SilentShadow","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
    };
    // Elite Ultra End

    // Elite Zealot Start
    class IK_OPTRE_EliteZealot_T51 : OPTRE_FC_Elite_Zealot
    {
        author = AUTHOR;
        faction = "JC_Covenant";
        editorSubcategory="EdSubCat_Elites";
        EDITORPREVIEW(jc_eliteZealot_T51);
		linkedItems[] = {"IK_OPTRE_EliteZealot_Vest_Zealot","IK_OPTRE_EliteZealot_Headgear_Zealot","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"IK_OPTRE_EliteZealot_Vest_Zealot","IK_OPTRE_EliteZealot_Headgear_Zealot","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
    };
    class IK_OPTRE_EliteZealot_T50 : OPTRE_FC_Elite_Zealot2
    {
        author = AUTHOR;
        faction = "JC_Covenant";
        editorSubcategory="EdSubCat_Elites";
        EDITORPREVIEW(jc_eliteZealot_T50);
		linkedItems[] = {"IK_OPTRE_EliteZealot_Vest_Zealot","IK_OPTRE_EliteZealot_Headgear_Zealot","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"IK_OPTRE_EliteZealot_Vest_Zealot","IK_OPTRE_EliteZealot_Headgear_Zealot","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
    };
    class IK_OPTRE_EliteZealot_FieldMaster_T51 : OPTRE_FC_Elite_Zealot
    {
        author = AUTHOR;
        faction = "JC_Covenant";
        displayName = "Sangheili Field Master (T51)";
        editorSubcategory="EdSubCat_Elites";
        EDITORPREVIEW(jc_eliteZealot_FieldMaster_T51);
		linkedItems[] = {"IK_OPTRE_EliteZealot_Vest_Gold","IK_OPTRE_EliteZealot_Headgear_Gold","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"IK_OPTRE_EliteZealot_Vest_Gold","IK_OPTRE_EliteZealot_Headgear_Gold","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
    };
    class IK_OPTRE_EliteZealot_FieldMaster_T50 : OPTRE_FC_Elite_Zealot2
    {
        author = AUTHOR;
        faction = "JC_Covenant";
        displayName = "Sangheili Field Master (T50)";
        editorSubcategory="EdSubCat_Elites";
        EDITORPREVIEW(jc_eliteZealot_FieldMaster_T50);
		linkedItems[] = {"IK_OPTRE_EliteZealot_Vest_Gold","IK_OPTRE_EliteZealot_Headgear_Gold","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"IK_OPTRE_EliteZealot_Vest_Gold","IK_OPTRE_EliteZealot_Headgear_Gold","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
    };
    // Elite Zealot End

    /*
    // Elite Field Marshal Start
    class IK_OPTRE_EliteFieldMarshal_T51 : OPTRE_FC_Elite_FieldMarshal
    {
        author = AUTHOR;
        faction = "JC_Covenant";
        editorSubcategory="EdSubCat_Elites";
		linkedItems[] = {"IK_OPTRE_EliteZealot_Vest_Zealot","IK_OPTRE_EliteZealot_Headgear_Zealot","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"IK_OPTRE_EliteZealot_Vest_Zealot","IK_OPTRE_EliteZealot_Headgear_Zealot","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
    };
    class IK_OPTRE_EliteFieldMarshal_T50 : OPTRE_FC_Elite_FieldMarshal2
    {
        author = AUTHOR;
        faction = "JC_Covenant";
        editorSubcategory="EdSubCat_Elites";
		linkedItems[] = {"IK_OPTRE_EliteZealot_Vest_Zealot","IK_OPTRE_EliteZealot_Headgear_Zealot","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
		respawnLinkedItems[] = {"IK_OPTRE_EliteZealot_Vest_Zealot","IK_OPTRE_EliteZealot_Headgear_Zealot","ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","OPTRE_FC_NVG"};
    };
    // Elite Field Marshal End
    */
};
