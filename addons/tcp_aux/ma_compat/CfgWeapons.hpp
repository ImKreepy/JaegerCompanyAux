class CfgWeapons
{
    class MA_Helmet_Base;

    class CH252_Helmet_Base : MA_Helmet_Base{};
    class IK_MA_marineHeadgear_Base : CH252_Helmet_Base
    {
        tcp_visrRscTitlesClass = "RscTCPVisrODST";
        tcp_visrActivatedClass = "TCP_H_Helmet_ECH252D";
        tcp_visrDeactivatedClass = "TCP_H_Helmet_ECH252D_Transparent";
    };

    class CH252D_Helmet : MA_Helmet_Base{};
    class IK_MA_odstHeadgear : CH252D_Helmet
    {
        tcp_visrRscTitlesClass = "RscTCPVisrODST";
        tcp_visrActivatedClass = "TCP_H_Helmet_ECH252D";
        tcp_visrDeactivatedClass = "TCP_H_Helmet_ECH252D_Transparent";
    };
};
