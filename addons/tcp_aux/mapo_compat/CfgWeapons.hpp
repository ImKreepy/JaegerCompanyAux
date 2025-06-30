class CfgWeapons
{
    class H_HelmetB;

    class MAPO_MKIV_Helmet : H_HelmetB
    {
        class ItemInfo;
    };
    class IK_MAPO_spartanHeadgear : MAPO_MKIV_Helmet
    {
        tcp_visrRscTitlesClass = "RscTCPVisrODST";
        tcp_visrActivatedClass = "TCP_H_Helmet_ECH252D";
        tcp_visrDeactivatedClass = "TCP_H_Helmet_ECH252D_Transparent";
    };

    class MAPO_SPI_Helmet : H_HelmetB
    {
        class ItemInfo;
    };
    class IK_MAPO_spiHeadgear : MAPO_SPI_Helmet
    {
        tcp_visrRscTitlesClass = "RscTCPVisrODST";
        tcp_visrActivatedClass = "TCP_H_Helmet_ECH252D";
        tcp_visrDeactivatedClass = "TCP_H_Helmet_ECH252D_Transparent";
    };
};
