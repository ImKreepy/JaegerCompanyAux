#include "../script_component.hpp"

params [
	["_logic", objNull, [objNull]],
	["_units", [], [[]]],
	["_activated", true, [true]]];
{
    if (!simulationEnabled _x) then {
        _x enableSimulationGlobal true;
    };
    //private _scale = _x get3DENAttribute "Scale";
    _x setObjectScale 2;
} forEach _units;
true;
