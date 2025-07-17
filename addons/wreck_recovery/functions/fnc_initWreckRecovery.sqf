#include "..\script_component.hpp"

params [
	["_logic", objNull, [objNull]],
	["_units", [], [[]]],
	["_activated", true, [true]]
];

missionNamespace setVariable ["IK_WR_ModulePosATL", getPosATL _logic, true];
missionNamespace setVariable ["IK_WR_Vehicles", _units, true];
/*{
    ["IK_WR_PackageWreck", "Package Wreck", "",
    {[_target] call FUNC(packageWreck);},
    {true},{},
    [parameters],[0,0,0],[100]] call ace_interact_menu_fnc_createAction;

    [_x, 0, ["IK_WR_Actions"], IK_PackageWreck] call ace_interact_menu_fnc_addActionToObject;
} forEach _units;*/
true;
