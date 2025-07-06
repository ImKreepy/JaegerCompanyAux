#include "../script_component.hpp"

params [
	["_logic", objNull, [objNull]],
	["_units", [], [[]]],
	["_activated", true, [true]]
];

{
    _x setTriggerActivation ["ANYPLAYER", "PRESENT", true];
    _x setTriggerStatements [
        "this",
        QUOTE({_x setdammage 0; _x setfuel 1; _x setVehicleAmmo 1} foreach thislist;),
        ""
    ];
} forEach _units;
true;
