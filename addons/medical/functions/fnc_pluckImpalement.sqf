#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Plucks impalement and replaces it with a puncture wound.
 *
 * Arguments:
 * 0: Argument (optional, default: value) <OBJECT>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [params] call PREFIX_medical_fnc_pluckImpalement
 *
 * Public: No
 */

params ["_patient", "_bodyPart"];
TRACE_1("fnc_pluckImpalement",_this);
private _openWounds = GRAB_OPEN_WOUNDS(_patient);
private _openWoundsOnPart = _openWounds getOrDefault [_bodyPart, []];

private _woundIndex = _openWoundsOnPart findIf {
    _x params ["_woundClassID"];
    private _classIndex = _woundClassID / 10;
    private _className = ACEGVAR(medical_damage,woundClassNames) select _classIndex;

    _className isEqualTo "Impalement"
};

if (_woundIndex isNotEqualTo -1) then {
    private _wound = _openWoundsOnPart select _woundIndex;
    _openWoundsOnPart deleteAt _woundIndex;
    [_patient, 1, _bodyPart, "stab", player] call ACEFUNC(medical,addDamageToUnit);
};

true
