class IK_MA_odstUniform : IK_MA_marineUniform_B
{
    displayName = ITEM_NAME(ODST Uniform);
    picture = ITEM_PICTURE(picture);
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_odstUnit_Base";
    };
};
class IK_MA_odstUniform_1 : IK_MA_odstUniform
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_odstUnit_1";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "ODST";
        Collar = "No";
        Shoulders = "None";
    };
};
class IK_MA_odstUniform_2 : IK_MA_odstUniform
{
    scope = 2;
    scopeArsenal = 2;
    class ItemInfo : ItemInfo
    {
        uniformClass = "IK_MA_odstUnit_2";
    };
    class XtdGearInfo
    {
        model = "JC_XtdUniformCrossBranch";
        Camo = "ODST";
        Collar = "Yes";
        Shoulders = "None";
    };
};