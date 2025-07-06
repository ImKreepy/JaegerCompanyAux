#include "../script_component.hpp"

params [
	["_logic", objNull, [objNull]],
	["_units", [], [[]]],
	["_activated", true, [true]]];

{
    _x setdammage 0;
    _x setfuel 1;
    _x setVehicleAmmo 1;
} forEach _units;
true;
