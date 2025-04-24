class CfgWeapons
{
    class ACRE_BaseRadio;
    class ACRE_PRC117F: ACRE_BaseRadio
    {
        class ItemInfo;
    };
    class IK_ACRE_PRC118: ACRE_PRC117F
    {
        displayName = "AN/PRC-118";
        useActionTitle = "AN/PRC-118";
        picture = "\idi\acre\addons\sys_prc117f\Data\PRC117F_ico.paa";
        descriptionShort = "AN/PRC-118 Manpack SatCom Radio";
        scopeCurator = 2;
        scope = 2;

        class ItemInfo: ItemInfo
        {
            mass = 400;
        };
        class Library
        {
            libTextDesc = "AN/PRC-118";
        };
        
        EGVAR(arsenalStats,frequencyMin) = 30e6;
        EGVAR(arsenalStats,frequencyMax) = 512e6;
        EGVAR(arsenalStats,transmitPower) = 100000;
        EGVAR(arsenalStats,effectiveRange) = "100+km (50-100km)";
    };

    RADIO_ID_LIST(IK_ACRE_PRC118)
};