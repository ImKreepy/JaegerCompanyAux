#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Rescales object to a specified amount. Also has an option to create a Simple object.
 *
 * Arguments:
 * 0: _logic (optional, default: objNull) <OBJECT>
 * 1: _units (optional, default: []) <ARRAY>
 * 2: _activated (optional, default: true) <BOOL>
 *
 * Return Value:
 * Module Activated <BOOL>
 *
 * Example:
 * [_logic,_units,_activated] call jc_modules_fnc_rescaleObjects
 *
 * Public: No
 */

params [
	["_logic", objNull, [objNull]],
	["_units", [], [[]]],
	["_activated", true, [true]]
];

private _scale = _logic getVariable ["RescaleFactor", 1];
private _makeSimple = _logic getVariable ["MakeSimple", false];
{
    if (!simulationEnabled _x) then {
        _x enableSimulationGlobal true;
    };
    if (!isSimpleObject _x && _makeSimple) then {
        private _pos = getPosWorld _x;
        deleteVehicle _x;
        private _simpleObject = createSimpleObject [typeOf _x, _pos];
        _simpleObject setObjectScale _scale;
    } else {
        _x setObjectScale _scale;
    };
} forEach _units;
true;
