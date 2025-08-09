class IK_WBK_OPTRE_EliteUltra_SilentShadow_Melee
{
    class Init_WBK_EliteMelee
    {
        init="_unit = _this select 0; if (local _unit) then {[_unit] execVM ""\WebKnight_StarWars_Mechanic\AI_Melee_Elite.sqf"";};";
    };
}; 
class IK_WBK_OPTRE_EliteZealot_Melee : IK_WBK_OPTRE_EliteUltra_SilentShadow_Melee
{
    class Init_WBK_EliteMelee;
};
class IK_WBK_OPTRE_EliteZealot__FieldMaster_Melee : IK_WBK_OPTRE_EliteUltra_SilentShadow_Melee
{
    class Init_WBK_EliteMelee;
};
