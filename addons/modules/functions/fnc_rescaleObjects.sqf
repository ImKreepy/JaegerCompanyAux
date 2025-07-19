#include "../script_component.hpp"
/*
 * Rescale objects based on a logic's RescaleFactor variable.
 *
 * Arguments:
 * 0: Logic object (OBJECT) - The logic object containing the RescaleFactor variable
 * 1: Array of units to rescale (ARRAY) - The units to be rescaled
 * 2: Activated flag (BOOL) - Whether the function is activated or not
 *
 * Returns:
 * Success (BOOL) - True if the operation was successful
 *
 * Example:
 * [logicObject, [unit1, unit2], true] call ace_module_fnc_rescaleObjects;
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
