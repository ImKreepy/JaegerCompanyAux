#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Turns synced triggers into full heal areas.
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
 * [_logic,_units,_activated] call jc_modules_fnc_makeFullHealArea
 *
 * Public: No
 */

params [
	["_logic", objNull, [objNull]],
	["_units", [], [[]]],
	["_activated", true, [true]]
];

{
    _x setTriggerActivation ["ANYPLAYER", "PRESENT", true];
    _x setTriggerStatements [
        "this",
        QUOTE({_x call ace_medical_treatment_fnc_fullHealLocal} forEach thislist;),
        ""
    ];
} forEach _units;
true;
