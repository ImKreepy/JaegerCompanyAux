#include "..\script_component.hpp"
/*
 * Authors: Im Kreepy
 * Randomizes a unit's vest and headgear as a kit, weighted.
 *
 * Arguments:
 * 0: _unit <OBJECT>
 * 1: _gearListWeighted <ARRAY>
 *
 * Return Value:
 * Return description <NONE>
 *
 * Example:
 * [(_this select 0), [["vest1","headgear1"], 0.0, ["vest2","headgear2"], 0.0]] call jc_main_fnc_unitGearRandomizerWeighted
 *
 * Public: No
 */

params ["_unit", "_gearList"];

private _defaultVest = vest _unit;
private _defaultHeadgear = headgear _unit;
private _randomGear = selectRandomWeighted _gearList;

private _newVest = _randomGear select 0;
if (_newVest == '') then {
    _newVest = _defaultVest;
};

private _newHeadgear = _randomGear select 1;
if (_newHeadgear == '') then {
    _newHeadgear = _defaultHeadgear;
};

_unit addVest _newVest;
_unit addHeadgear _newHeadgear;
true;
