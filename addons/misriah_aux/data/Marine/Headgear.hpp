//Brown Start
class IK_MA_marineHeadgear_Base : CH252_Helmet_Base
{
    scope = 1;
    scopeArsenal = 1;
    displayName = ITEM_NAME(Marine Helmet);
	descriptionShort = "Halo Reach Marine Helmet";
    picture = ITEM_PICTURE(picture);
    model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
    hiddenSelections[] =
    {
        "Camo1", // Helmet
        "Camo2", // NVG Mount
        "Camo3", // Helmet
        "Camo4", // Eye Piece
        "Camo5", // Eye Piece Glass
        "Camo6", // Visor Glasses
        "Helmet",
        "NVGMount",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses"
    };
    hiddenSelectionsTextures[] =
    {
        "MA_Armor\data\Helmets\CH252\data\ma_brown_trooperhelmet_co.paa",
        "MA_Armor\data\Helmets\CH252\data\ma_brown_trooperhelmet_co.paa",
        "MA_Armor\data\Helmets\CH252\data\ma_brown_trooperhelmet_co.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_B_CA.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_C_CA.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Helmet",
            "NVGMount",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses"
        };
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Helmets\CH252\data\ma_brown_trooperhelmet_co.paa",
            "MA_Armor\data\Helmets\CH252\data\ma_brown_trooperhelmet_co.paa",
            "MA_Armor\data\Helmets\CH252\data\ma_brown_trooperhelmet_co.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_B_CA.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_C_CA.paa"
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
class IK_MA_marineHeadgear_1 : IK_MA_marineHeadgear_Base
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "Brown";
        Visor = "None";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        //    "Helmet",
        //    "NVGMount",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            //    "Helmet",
            //    "NVGMount",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses"
        };
    };
};
class IK_MA_marineHeadgear_2 : IK_MA_marineHeadgear_Base
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "Brown";
        Visor = "Eye Piece";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            //  "Helmet",
            //  "NVGMount",
            //    "EyePiece",
            //    "EyePieceGlass",
                "VisorGlasses"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            //  "Helmet",
            //  "NVGMount",
            //  "EyePiece",
            //  "EyePieceGlass",
                "VisorGlasses"
        };
    };
};
class IK_MA_marineHeadgear_3 : IK_MA_marineHeadgear_Base
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "Brown";
        Visor = "Glasses";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        //  "Helmet",
        //  "NVGMount",
            "EyePiece",
            "EyePieceGlass",
            //  "VisorGlasses"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            //  "Helmet",
            //  "NVGMount",
                "EyePiece",
                "EyePieceGlass",
                //  "VisorGlasses"
        };
    };
};
//Brown End

//Woodland Start
class IK_MA_marineHeadgear_Green : IK_MA_marineHeadgear_Base
{
    picture = ITEM_PICTURE(picture);
    hiddenSelections[] =
    {
        "Camo1", // Helmet
        "Camo2", // NVG Mount
        "Camo3", // Helmet
        "Camo4", // Eye Piece
        "Camo5", // Eye Piece Glass
        "Camo6", // Visor Glasses
        "Helmet",
        "NVGMount",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses"
    };
    hiddenSelectionsTextures[] =
    {
        "MA_Armor\data\Helmets\CH252\data\ma_Green_trooperhelmet_co.paa",
        "MA_Armor\data\Helmets\CH252\data\ma_Green_trooperhelmet_co.paa",
        "MA_Armor\data\Helmets\CH252\data\ma_Green_trooperhelmet_co.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Helmet",
            "NVGMount",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses"
        };
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Helmets\CH252\data\ma_Green_trooperhelmet_co.paa",
            "MA_Armor\data\Helmets\CH252\data\ma_Green_trooperhelmet_co.paa",
            "MA_Armor\data\Helmets\CH252\data\ma_Green_trooperhelmet_co.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
        };
    };
};
class IK_MA_marineHeadgear_4 : IK_MA_marineHeadgear_Green
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "Green";
        Visor = "None";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        //    "Helmet",
        //    "NVGMount",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            //    "Helmet",
            //    "NVGMount",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses"
        };
    };
};
class IK_MA_marineHeadgear_5 : IK_MA_marineHeadgear_Green
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "Green";
        Visor = "Eye Piece";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            //  "Helmet",
            //  "NVGMount",
            //    "EyePiece",
            //    "EyePieceGlass",
                "VisorGlasses"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            //  "Helmet",
            //  "NVGMount",
            //  "EyePiece",
            //  "EyePieceGlass",
                "VisorGlasses"
        };
    };
};
class IK_MA_marineHeadgear_6 : IK_MA_marineHeadgear_Green
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "Green";
        Visor = "Glasses";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        //  "Helmet",
        //  "NVGMount",
            "EyePiece",
            "EyePieceGlass",
            //  "VisorGlasses"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            //  "Helmet",
            //  "NVGMount",
                "EyePiece",
                "EyePieceGlass",
                //  "VisorGlasses"
        };
    };
};
//Woodland End

//Winter Start
class IK_MA_marineHeadgear_White : IK_MA_marineHeadgear_Base
{
    picture = ITEM_PICTURE(picture);
    hiddenSelections[] =
    {
        "Camo1", // Helmet
        "Camo2", // NVG Mount
        "Camo3", // Helmet
        "Camo4", // Eye Piece
        "Camo5", // Eye Piece Glass
        "Camo6", // Visor Glasses
        "Helmet",
        "NVGMount",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses"
    };
    hiddenSelectionsTextures[] =
    {
        "MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Helmet",
            "NVGMount",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses"
        };
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
        };
    };
};
class IK_MA_marineHeadgear_7 : IK_MA_marineHeadgear_White
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "White";
        Visor = "None";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        //    "Helmet",
        //    "NVGMount",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            //    "Helmet",
            //    "NVGMount",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses"
        };
    };
};
class IK_MA_marineHeadgear_8 : IK_MA_marineHeadgear_White
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "White";
        Visor = "Eye Piece";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            //  "Helmet",
            //  "NVGMount",
            //    "EyePiece",
            //    "EyePieceGlass",
                "VisorGlasses"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            //  "Helmet",
            //  "NVGMount",
            //  "EyePiece",
            //  "EyePieceGlass",
                "VisorGlasses"
        };
    };
};
class IK_MA_marineHeadgear_9 : IK_MA_marineHeadgear_White
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "White";
        Visor = "Glasses";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        //  "Helmet",
        //  "NVGMount",
            "EyePiece",
            "EyePieceGlass",
            //  "VisorGlasses"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            //  "Helmet",
            //  "NVGMount",
                "EyePiece",
                "EyePieceGlass",
                //  "VisorGlasses"
        };
    };
};
//Winter End

//Tan Start
class IK_MA_marineHeadgear_Tan : IK_MA_marineHeadgear_Base
{
    picture = ITEM_PICTURE(picture);
    hiddenSelections[] =
    {
        "Camo1", // Helmet
        "Camo2", // NVG Mount
        "Camo3", // Helmet
        "Camo4", // Eye Piece
        "Camo5", // Eye Piece Glass
        "Camo6", // Visor Glasses
        "Helmet",
        "NVGMount",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses"
    };
    hiddenSelectionsTextures[] =
    {
        "MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Helmet",
            "NVGMount",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses"
        };
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa"
        };
    };
};
class IK_MA_marineHeadgear_10 : IK_MA_marineHeadgear_Tan
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "Tan";
        Visor = "None";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        //    "Helmet",
        //    "NVGMount",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            //    "Helmet",
            //    "NVGMount",
                "EyePiece",
                "EyePieceGlass",
                "VisorGlasses"
        };
    };
};
class IK_MA_marineHeadgear_11 : IK_MA_marineHeadgear_Tan
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "Tan";
        Visor = "Eye Piece";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            //  "Helmet",
            //  "NVGMount",
            //    "EyePiece",
            //    "EyePieceGlass",
                "VisorGlasses"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            //  "Helmet",
            //  "NVGMount",
            //  "EyePiece",
            //  "EyePieceGlass",
                "VisorGlasses"
        };
    };
};
class IK_MA_marineHeadgear_12 : IK_MA_marineHeadgear_Tan
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "Tan";
        Visor = "Glasses";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        //  "Helmet",
        //  "NVGMount",
            "EyePiece",
            "EyePieceGlass",
            //  "VisorGlasses"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            //  "Helmet",
            //  "NVGMount",
                "EyePiece",
                "EyePieceGlass",
                //  "VisorGlasses"
        };
    };
};
//Tan End