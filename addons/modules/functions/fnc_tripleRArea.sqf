#include "../script_component.hpp"

params [
	["_logic", objNull, [objNull]],
	["_units", [], [[]]],
	["_activated", true, [true]]];

{
    _x setDamage 0;
    _x setFuel 1;
    _x setVehicleAmmo 1;
} forEach _units;
true;
