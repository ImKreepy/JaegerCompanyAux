#include "..\script_component.hpp"
/*
 * Author: kymckay
 * Calculates the Surgical Kit treatment time based on the amount of stitchable wounds.
 *
 * Arguments:
 * 0: Medic (not used) <OBJECT>
 * 1: Patient <OBJECT>
 * 2: Body Part <STRING>
 *
 * Return Value:
 * Treatment Time <NUMBER>
 *
 * Example:
 * [player, cursorObject, "head"] call ace_medical_treatment_fnc_getStitchTime
 *
 * Public: No
 */

params ["", "_patient", "_bodyPart"];
_bodyPart = toLowerANSI _bodyPart;

private _impalementWounds = [];
{
    _x params ["_woundClassID", "_amountOf", "_bleeding"];

    private _classIndex = _woundClassID / 10;
    private _className = ACEGVAR(medical_damage,woundClassNames) select _classIndex;

    if (_className isEqualTo "Impalement") then {
        _impalementWounds pushBack [_woundClassID, _amountOf, _bleeding];
    };
} forEach (GRAB_OPEN_WOUNDS(_patient) getOrDefault [_bodyPart, []]);

count _impalementWounds * GVAR(woundStitchTime)
