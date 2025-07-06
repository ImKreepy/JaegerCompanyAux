#include "../script_component.hpp"

params [
	["_logic", objNull, [objNull]],
	["_units", [], [[]]],
	["_activated", true, [true]]
];

private _scale = _logic getVariable ["RescaleFactor", 1];
{
    if (!simulationEnabled _x) then {
        _x enableSimulationGlobal true;
    };
    _x setObjectScale _scale;
} forEach _units;
true;
