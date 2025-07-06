#include "../script_component.hpp"

params [
	["_logic", objNull, [objNull]],
	["_units", [], [[]]],
	["_activated", true, [true]]];

{
    _x call ace_medical_treatment_fnc_fullHealLocal
} forEach _units;
true;
