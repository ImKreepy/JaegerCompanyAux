#include "../script_component.hpp"

params [
	["_logic", objNull, [objNull]],
	["_units", [], [[]]],
	["_activated", true, [true]]
];

{
    [_x, true] call ace_arsenal_fnc_initBox;
} forEach _units;
true;
