//Brown Start
class IK_MA_marineUniform_B : U_B_CombatUniform_mcam
{
    scope = 1;
    scopeArsenal = 1;
    author = AUTHOR;
    displayName = ITEM_NAME(Marine Combat Uniform);
	descriptionShort = "Halo Reach Marine Combat Uniform";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver.p3d";
    picture = ITEM_PICTURE(picture);
    class ItemInfo : UniformItem
    {
        uniformModel = "-";
        uniformClass = "IK_MA_marineUnit_B_Base";
        containerClass = "SupplyLight";
        mass = 10;
        uniformType = "Neopren";
        modelSides[] = { 6 };
    };
};
class IK_MA_marineUniform_1 : IK_MA_marineUniform_B
{
	scope = 2;
	scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_1";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Brown";
        Collar = "No";
        Shoulders = "None";
    };
};
class IK_MA_marineUniform_2 : IK_MA_marineUniform_B
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_2";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Brown";
        Collar = "No";
        Shoulders = "Half";
    };
};
class IK_MA_marineUniform_3 : IK_MA_marineUniform_B
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_3";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Brown";
        Collar = "No";
        Shoulders = "FullOne";
    };
};
class IK_MA_marineUniform_4 : IK_MA_marineUniform_B
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_4";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Brown";
        Collar = "No";
        Shoulders = "FullTwo";
    };
};
class IK_MA_marineUniform_5 : IK_MA_marineUniform_B
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_5";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Brown";
        Collar = "Yes";
        Shoulders = "Half";
    };
};
class IK_MA_marineUniform_6 : IK_MA_marineUniform_B
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_6";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Brown";
        Collar = "Yes";
        Shoulders = "None";
    };
};
class IK_MA_marineUniform_7 : IK_MA_marineUniform_B
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_7";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Brown";
        Collar = "Yes";
        Shoulders = "FullOne";
    };
};
class IK_MA_marineUniform_8 : IK_MA_marineUniform_B
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_8";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Brown";
        Collar = "Yes";
        Shoulders = "FullTwo";
    };
};
//Brown End

//Woodland Start
class IK_MA_marineUniform_G : IK_MA_marineUniform_B
{
    picture = ITEM_PICTURE(picture);
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_G";
    };
};
class IK_MA_marineUniform_9 : IK_MA_marineUniform_G
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_9";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Green";
        Collar = "No";
        Shoulders = "None";
    };
};
class IK_MA_marineUniform_10 : IK_MA_marineUniform_G
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_10";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Green";
        Collar = "No";
        Shoulders = "Half";
    };
};
class IK_MA_marineUniform_11 : IK_MA_marineUniform_G
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_11";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Green";
        Collar = "No";
        Shoulders = "FullOne";
    };
};
class IK_MA_marineUniform_12 : IK_MA_marineUniform_G
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_12";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Green";
        Collar = "No";
        Shoulders = "FullTwo";
    };
};
class IK_MA_marineUniform_13 : IK_MA_marineUniform_G
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_13";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Green";
        Collar = "Yes";
        Shoulders = "Half";
    };
};
class IK_MA_marineUniform_14 : IK_MA_marineUniform_G
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_14";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Green";
        Collar = "Yes";
        Shoulders = "None";
    };
};
class IK_MA_marineUniform_15 : IK_MA_marineUniform_G
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_15";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Green";
        Collar = "Yes";
        Shoulders = "FullOne";
    };
};
class IK_MA_marineUniform_16 : IK_MA_marineUniform_G
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_16";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Green";
        Collar = "Yes";
        Shoulders = "FullTwo";
    };
};
//Woodland End

//Tan Start
class IK_MA_marineUniform_W : IK_MA_marineUniform_B
{
    picture = ITEM_PICTURE(picture);
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_W";
    };
};
class IK_MA_marineUniform_17 : IK_MA_marineUniform_W
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_17";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "White";
        Collar = "No";
        Shoulders = "None";
    };
};
class IK_MA_marineUniform_18 : IK_MA_marineUniform_W
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_18";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "White";
        Collar = "No";
        Shoulders = "Half";
    };
};
class IK_MA_marineUniform_19 : IK_MA_marineUniform_W
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_19";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "White";
        Collar = "No";
        Shoulders = "FullOne";
    };
};
class IK_MA_marineUniform_20 : IK_MA_marineUniform_W
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_20";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "White";
        Collar = "No";
        Shoulders = "FullTwo";
    };
};
class IK_MA_marineUniform_21 : IK_MA_marineUniform_W
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_21";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "White";
        Collar = "Yes";
        Shoulders = "Half";
    };
};
class IK_MA_marineUniform_22 : IK_MA_marineUniform_W
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_22";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "White";
        Collar = "Yes";
        Shoulders = "None";
    };
};
class IK_MA_marineUniform_23 : IK_MA_marineUniform_W
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_23";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "White";
        Collar = "Yes";
        Shoulders = "FullOne";
    };
};
class IK_MA_marineUniform_24 : IK_MA_marineUniform_W
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_24";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "White";
        Collar = "Yes";
        Shoulders = "FullTwo";
    };
};
//Winter End

//Tan Start
class IK_MA_marineUniform_T : IK_MA_marineUniform_B
{
    picture = ITEM_PICTURE(picture);
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_T";
    };
};
class IK_MA_marineUniform_25 : IK_MA_marineUniform_T
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_25";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Tan";
        Collar = "No";
        Shoulders = "None";
    };
};
class IK_MA_marineUniform_26 : IK_MA_marineUniform_T
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_26";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Tan";
        Collar = "No";
        Shoulders = "Half";
    };
};
class IK_MA_marineUniform_27 : IK_MA_marineUniform_T
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_27";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Tan";
        Collar = "No";
        Shoulders = "FullOne";
    };
};
class IK_MA_marineUniform_28 : IK_MA_marineUniform_T
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_28";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Tan";
        Collar = "No";
        Shoulders = "FullTwo";
    };
};
class IK_MA_marineUniform_29 : IK_MA_marineUniform_T
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_29";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Tan";
        Collar = "Yes";
        Shoulders = "Half";
    };
};
class IK_MA_marineUniform_30 : IK_MA_marineUniform_T
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_30";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Tan";
        Collar = "Yes";
        Shoulders = "None";
    };
};
class IK_MA_marineUniform_31 : IK_MA_marineUniform_T
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_31";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Tan";
        Collar = "Yes";
        Shoulders = "FullOne";
    };
};
class IK_MA_marineUniform_32 : IK_MA_marineUniform_T
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_marineUnit_32";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "Tan";
        Collar = "Yes";
        Shoulders = "FullTwo";
    };
};
//Tan End