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

params ["_medic","_patient", "_bodyPart"];
TRACE_1("fnc_pluckImpalement",_this);
private _openWounds = GRAB_OPEN_WOUNDS(_patient);
private _openWoundsOnPart = _openWounds getOrDefault [_bodyPart, []];

private _woundIndex = _openWoundsOnPart findIf {
    _x params ["_woundClassID"];
    private _classIndex = _woundClassID / 10;
    private _className = ACEGVAR(medical_damage,woundClassNames) select _classIndex;
    IS_IMPALEMENT_OR(_className);
};

private _wound = _openWoundsOnPart select _woundIndex;
_wound params ["","","","_damage"];
private _addDamage = _damage * GVAR(damageMultiplier);
_openWoundsOnPart deleteAt _woundIndex;

_patient setVariable [ACEQGVAR(medical,openWounds), _openWounds, true];

[_patient, _addDamage, _bodyPart, "RemovedImpalement", _medic] call ACEFUNC(medical,addDamageToUnit);

true
