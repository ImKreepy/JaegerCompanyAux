#include "../script_component.hpp"

params [
	["_logic", objNull, [objNull]],
	["_units", [], [[]]],
	["_activated", true, [true]]
];

{
    _x setTriggerActivation ["ANYPLAYER", "PRESENT", true];
    _x setTriggerStatements [
        "isServer",
        QUOTE(if {isServer} then {{_x call ace_medical_treatment_fnc_fullHealLocal} foreach thislist;};),
        ""
    ];
} forEach _units;
true;
