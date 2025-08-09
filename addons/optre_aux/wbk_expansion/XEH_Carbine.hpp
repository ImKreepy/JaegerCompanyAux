class IK_WBK_OPTRE_eliteMinor_Carbine
{
    class Init_WBK_EliteCarbine
    {
        init="_unit = _this select 0; if (local _unit) then {[_unit,selectRandom ['Repeater_Blue','PlasmaCarbine','Default']] execVM 'WBK_Halo_Aliens\AI\WBK_AI_Elite.sqf';};";
    };
};
class IK_WBK_OPTRE_EliteMajor_Carbine : IK_WBK_OPTRE_eliteMinor_Carbine
{
    class Init_WBK_EliteCarbine;
};
class IK_WBK_OPTRE_EliteUltra_Carbine : IK_WBK_OPTRE_eliteMinor_Carbine
{
    class Init_WBK_EliteCarbine;
};
class IK_WBK_OPTRE_EliteUltra_SilentShadow_Carbine : IK_WBK_OPTRE_eliteMinor_Carbine
{
    class Init_WBK_EliteCarbine;
};
class IK_WBK_OPTRE_EliteZealot_Carbine : IK_WBK_OPTRE_eliteMinor_Carbine
{
    class Init_WBK_EliteCarbine;
};
class IK_WBK_OPTRE_EliteZealot__FieldMaster_Carbine : IK_WBK_OPTRE_eliteMinor_Carbine
{
    class Init_WBK_EliteCarbine;
};
