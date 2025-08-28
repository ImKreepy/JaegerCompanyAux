#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Checks if impalements can be plucked.
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call PREFIX_medical_fnc_canPluck
 *
 * Public: No
 */

params ["_medic","_patient","_bodyPart"];
TRACE_1("fnc_canPluck",_this);

private _canPluck = false;
{
    _x params ["_woundClassID"];

    private _classIndex = _woundClassID / 10;
    private _className = ACEGVAR(medical_damage,woundClassNames) select _classIndex;

    if (_className isEqualTo "Impalement") exitWith {
        _canPluck = true;
    };
} forEach (GRAB_OPEN_WOUNDS(_patient) get _bodyPart);

_canPluck
