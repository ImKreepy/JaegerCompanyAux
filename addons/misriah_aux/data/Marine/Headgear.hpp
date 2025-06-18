//Brown Start
class IK_MA_marineHeadgear_Base : CH252_Helmet_Base
{
    scope = 1;
    scopeArsenal = 1;
    displayName = ITEM_NAME(Marine Helmet);
	descriptionShort = "Halo Reach Marine Helmet";
    picture = ITEM_PICTURE(picture);
    model = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
    ACE_Protection = 1;
    hiddenSelections[] =
    {
        "Camo1", // Helmet
        "Camo2", // NVG Mount
        "camo3", // Helmet Strap
        "Camo4", // Eye Piece
        "Camo5", // Eye Piece Glass
        "Camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        "Helmet",
        "NVGMount",
        "HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Brown\VacSeal_Brown_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Urban\FaceModule_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Urban\FaceModule_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        uniformModel = "MA_Armor\data\Helmets\CH252\CH252_Helm.p3d";
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            "Helmet",
            "NVGMount",
            "HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Brown\VacSeal_Brown_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Urban\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Urban\FaceModule_CO.paa"
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
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
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
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        //"EyePiece",
        //"EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            //"EyePiece",
            //"EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
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
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        //"VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            //"VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
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
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        "Helmet",
        "NVGMount",
        "HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    hiddenSelectionsTextures[] =
    {
        "MA_Armor\data\Helmets\CH252\data\ma_Green_trooperhelmet_co.paa",
        "MA_Armor\data\Helmets\CH252\data\ma_Green_trooperhelmet_co.paa",
        "MA_Armor\data\Helmets\CH252\data\ma_Green_trooperhelmet_co.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Green\VacSeal_Green_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Woodland\FaceModule_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Woodland\FaceModule_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            "Helmet",
            "NVGMount",
            "HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Helmets\CH252\data\ma_Green_trooperhelmet_co.paa",
            "MA_Armor\data\Helmets\CH252\data\ma_Green_trooperhelmet_co.paa",
            "MA_Armor\data\Helmets\CH252\data\ma_Green_trooperhelmet_co.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Green\VacSeal_Green_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Woodland\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Woodland\FaceModule_CO.paa"
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
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
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
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        //"EyePiece",
        //"EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            //"EyePiece",
            //"EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
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
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        //"VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            //"VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
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
        "camo3", // Helmet Strap
        "Camo4", // Eye Piece
        "Camo5", // Eye Piece Glass
        "Camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        "Helmet",
        "NVGMount",
        "HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    hiddenSelectionsTextures[] =
    {
        "MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\VaccumCollar\White\VacSeal_White_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Winter\FaceModule_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Winter\FaceModule_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            "Helmet",
            "NVGMount",
            "HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_White_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\White\VacSeal_White_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Winter\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Winter\FaceModule_CO.paa"
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
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
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
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        //"EyePiece",
        //"EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            //"EyePiece",
            //"EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
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
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        //"VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            //"VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
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
        "camo3", // Helmet Strap
        "Camo4", // Eye Piece
        "Camo5", // Eye Piece Glass
        "Camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        "Helmet",
        "NVGMount",
        "HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    hiddenSelectionsTextures[] =
    {
        "MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Tan\VacSeal_Tan_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Desert\FaceModule_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Desert\FaceModule_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            "Helmet",
            "NVGMount",
            "HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Tan_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Tan\VacSeal_Tan_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Desert\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Blue_Visor\Desert\FaceModule_CO.paa"
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
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
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
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        //"EyePiece",
        //"EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            //"EyePiece",
            //"EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
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
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        //"VisorGlasses",
        "VaccumCollar",
        "Helmet_Chin",
        "Closed_Visor"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            //"VisorGlasses",
            "VaccumCollar",
            "Helmet_Chin",
            "Closed_Visor"
        };
    };
};
//Tan End

//Vacuum Start
//Blue Visor Start
class IK_MA_marineHeadgear_13 : IK_MA_marineHeadgear_Base
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "Brown";
        Visor = "Vacuum Blue";
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        //"Helmet_Chin",
        //"Closed_Visor"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            //"Helmet_Chin",
            //"Closed_Visor"
        };
    };
};
class IK_MA_marineHeadgear_14 : IK_MA_marineHeadgear_Green
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "Green";
        Visor = "Vacuum Blue";
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        //"Helmet_Chin",
        //"Closed_Visor"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            //"Helmet_Chin",
            //"Closed_Visor"
        };
    };
};
class IK_MA_marineHeadgear_15 : IK_MA_marineHeadgear_White
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "White";
        Visor = "Vacuum Blue";
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        //"Helmet_Chin",
        //"Closed_Visor"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            //"Helmet_Chin",
            //"Closed_Visor"
        };
    };
};
class IK_MA_marineHeadgear_16 : IK_MA_marineHeadgear_Tan
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "Tan";
        Visor = "Vacuum Blue";
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        //"Helmet_Chin",
        //"Closed_Visor"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            //"Helmet_Chin",
            //"Closed_Visor"
        };
    };
};
//Blue Visor End

//Yellow Visor Start
class IK_MA_marineHeadgear_17 : IK_MA_marineHeadgear_Base
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "Brown";
        Visor = "VacuumYellow";
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        //"Helmet_Chin",
        //"Closed_Visor"
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Brown\VacSeal_Brown_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Yellow_Visor\Urban\FaceModule_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Yellow_Visor\Urban\FaceModule_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            //"Helmet_Chin",
            //"Closed_Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Brown_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Brown\VacSeal_Brown_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Yellow_Visor\Urban\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Yellow_Visor\Urban\FaceModule_CO.paa"
        };
    };
};
class IK_MA_marineHeadgear_18 : IK_MA_marineHeadgear_Green
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "Green";
        Visor = "VacuumYellow";
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        //"Helmet_Chin",
        //"Closed_Visor"
    };
    hiddenSelectionsTextures[]=
    {
        "MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Green\VacSeal_Green_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Yellow_Visor\Woodland\FaceModule_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Yellow_Visor\Woodland\FaceModule_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            //"Helmet_Chin",
            //"Closed_Visor"
        };
        hiddenSelectionsTextures[]=
        {
            "MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_Green_TrooperHelmet_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Green\VacSeal_Green_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Yellow_Visor\Woodland\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Yellow_Visor\Woodland\FaceModule_CO.paa"
        };
    };
};
class IK_MA_marineHeadgear_19 : IK_MA_marineHeadgear_White
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "White";
        Visor = "VacuumYellow";
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        //"Helmet_Chin",
        //"Closed_Visor"
    };
    hiddenSelectionsTextures[] =
    {
        "MA_Armor\data\Helmets\CH252\data\ma_White_trooperhelmet_co.paa",
        "MA_Armor\data\Helmets\CH252\data\ma_White_trooperhelmet_co.paa",
        "MA_Armor\data\Helmets\CH252\data\ma_White_trooperhelmet_co.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\VaccumCollar\White\VacSeal_White_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Yellow_Visor\Winter\FaceModule_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Yellow_Visor\Woodland\FaceModule_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            //"Helmet_Chin",
            //"Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Helmets\CH252\data\ma_White_trooperhelmet_co.paa",
            "MA_Armor\data\Helmets\CH252\data\ma_White_trooperhelmet_co.paa",
            "MA_Armor\data\Helmets\CH252\data\ma_White_trooperhelmet_co.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\White\VacSeal_White_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Yellow_Visor\Winter\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Yellow_Visor\Woodland\FaceModule_CO.paa"
        };
    };
};
class IK_MA_marineHeadgear_20 : IK_MA_marineHeadgear_Tan
{
    class XtdGearInfo
    {
        model = "JC_XtdHeadgearMarine";
        Camo = "Tan";
        Visor = "VacuumYellow";
        Collar = "No";
    };
    scope = 2;
    scopeArsenal = 2;
    hiddenSelections[] =
    {
        "camo1", // Helmet
        "camo2", // NVG Mount
        "camo3", // Helmet Strap
        "camo4", // Eye Piece
        "camo5", // Eye Piece Glass
        "camo6", // Visor Glasses
        "Camo7", // Vaccum Collar
        "Camo8", // Helmet Chin
        "Camo9", // Closed Visor
        //"Helmet",
        //"NVGMount",
        //"HelmetStrap",
        "EyePiece",
        "EyePieceGlass",
        "VisorGlasses",
        "VaccumCollar",
        //"Helmet_Chin",
        //"Closed_Visor"
    };
    hiddenSelectionsTextures[] =
    {
        "MA_Armor\data\Helmets\CH252\data\ma_Tan_trooperhelmet_co.paa",
        "MA_Armor\data\Helmets\CH252\data\ma_Tan_trooperhelmet_co.paa",
        "MA_Armor\data\Helmets\CH252\data\ma_Tan_trooperhelmet_co.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Tan\VacSeal_Tan_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Yellow_Visor\Desert\FaceModule_CO.paa",
        "MA_Armor\data\Helmets\CH252\data\SealedVisor\Yellow_Visor\Desert\FaceModule_CO.paa"
    };
    class ItemInfo : ItemInfo
    {
        hiddenSelections[] =
        {
            "camo1", // Helmet
            "camo2", // NVG Mount
            "camo3", // Helmet Strap
            "camo4", // Eye Piece
            "camo5", // Eye Piece Glass
            "camo6", // Visor Glasses
            "Camo7", // Vaccum Collar
            "Camo8", // Helmet Chin
            "Camo9", // Closed Visor
            //"Helmet",
            //"NVGMount",
            //"HelmetStrap",
            "EyePiece",
            "EyePieceGlass",
            "VisorGlasses",
            "VaccumCollar",
            //"Helmet_Chin",
            //"Closed_Visor"
        };
        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Helmets\CH252\data\ma_Tan_trooperhelmet_co.paa",
            "MA_Armor\data\Helmets\CH252\data\ma_Tan_trooperhelmet_co.paa",
            "MA_Armor\data\Helmets\CH252\data\ma_Tan_trooperhelmet_co.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\MA_HelmetAccessories_A_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\VaccumCollar\Tan\VacSeal_Tan_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Yellow_Visor\Desert\FaceModule_CO.paa",
            "MA_Armor\data\Helmets\CH252\data\SealedVisor\Yellow_Visor\Desert\FaceModule_CO.paa"
        };
    };
};
//Yellow Visor End
//Vacuum End

#include "HeadgearCollar.hpp"