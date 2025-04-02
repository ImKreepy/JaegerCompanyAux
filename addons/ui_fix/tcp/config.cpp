#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {QUOTE(ADDON),"A3_Ui_F_TCP"};
        units[] = {};
        weapons[] = {};
        skipWhenMissingDependencies = 1;
    };
};

class RscPicture;
class CfgWorlds
{
    class CAWorld;
    class Stratis: CAWorld {};
    class Altis: CAWorld {};
    class Blood_OPTRE: CAWorld
    {
        planet="Installation 04";
    };
    class OPTRE_Gridlock: Stratis
    {
        planet="Earth";
    };
    class OPTRE_iberius: Stratis
    {
        planet="Earth";
    };
    class OPTRE_Kholo: CAWorld
    {
        planet="Earth";
    };
    class OPTRE_Madrigal: CAWorld
    {
        planet="Madrigal";
    };
    class Pandora: CAWorld
    {
        planet="Pandora";
    };
    class OPTRE_Sandstorm: Stratis
    {
        planet="Earth";
    };
    class OPTRE_Arcadia: CAWorld
    {
        planet="Arcadia";
    };
    class OPTRE_EridanusSecundus: Stratis
    {
        planet="Eridanus";
    };
    class OPTRE_Archipelago: CAWorld
    {
        planet="Installation 04";
    };
    class OPTRE_Snowlands: CAWorld
    {
        planet="Installation 04";
    };
    class OPTRE_Installation04: CAWorld
    {
        planet="Installation 04";
    };
    class OPTRE_Wetlands: CAWorld
    {
        planet="Installation 04";
    };
    class OPTRE_Kholo2: CAWorld
    {
        planet="Earth";
    };
    class OPTRE_Kholo2s: CAWorld
    {
        planet="Earth";
    };
    class OPTRE_Phobos: Altis
    {
        planet="Phobos";
    };
};