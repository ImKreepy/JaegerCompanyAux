#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Handles the progress of plucking an impalement.
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call PREFIX_medical_fnc_pluckingProgress
 *
 * Public: No
 */

params ["_args", "_elapsedTime", "_totalTime"];
_args params ["_medic", "_patient", "_bodyPart"];
TRACE_1("fnc_pluckingProgress",_this);

private _openWounds = GRAB_OPEN_WOUNDS(_patient);
private _openWoundsOnPart = _openWounds get _bodyPart;

private _impalementWounds = [];
{
    _x params ["_woundClassID"];

    private _classIndex = _woundClassID / 10;
    private _className = ACEGVAR(medical_damage,woundClassNames) select _classIndex;

    if (IS_IMPALEMENT_OR(_className)) then {
        _impalementWounds pushBack _x;
    };
} forEach _openWoundsOnPart;

// Stop treatment if there are no wounds that can be stitched remaining
if (_impalementWounds isEqualTo []) exitWith {false};

// Not enough time has elapsed to stitch a wound
if (_totalTime - _elapsedTime > ([_patient, _patient, _bodyPart] call FUNC(getRemovalTime)) - GVAR(treatmentTimeRemoval)) exitWith {true};

// Stitch the first possible wound on the body part
private _plucked = [_medic, _patient, _bodyPart] call FUNC(removeImpalement);

if (!_plucked) exitWith {
    ERROR_1("failed to remove impalement on unit - %1",_patient);
    false
};

true
