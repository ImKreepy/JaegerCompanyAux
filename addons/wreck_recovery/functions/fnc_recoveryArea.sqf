#include "..\script_component.hpp"

params [
	["_logic", objNull, [objNull]],
	["_units", [], [[]]],
	["_activated", true, [true]]
];

private _trigger = _units select 0;
_trigger setTriggerActivation ["STATIC", "PRESENT", true];
_trigger setTriggerStatements [
    QUOTE(_ikShippingBox inArea thisTrigger;),
    QUOTE(call FUNC(spawnVehicle);),
    ""
];
true;
