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

// If patient is swimming, don't allow bandage actions.
if (_patient call ACEFUNC(common,isSwimming)) exitWith {false};

private _canPluck = false;
{
    private _woundClassID = _x select 0;

    private _classIndex = _woundClassID / 10;
    private _className = ACEGVAR(medical_damage,woundClassNames) select _classIndex;

    if (IS_IMPALEMENT_OR(_className)) exitWith {
        _canPluck = true;
    };
} forEach (GRAB_OPEN_WOUNDS(_patient) getOrDefault [_bodyPart, []]);

_canPluck
