#include "..\script_component.hpp"

params ["_target"];

private _wreck = cursorObject;
if (_wreck == player) exitWith { hint "You cannot package yourself!" };
if (isNull _wreck) exitWith { hint "No wreck selected!" };
if (alive _wreck) then { hint "Is not a wreck!" };
private _crewed = objectParent _wreck;
if (!isNull _crewed) exitWith { hint "Wreck is crewed!" };
deleteVehicleCrew _wreck;
waitUntil {crew _wreck == []};

private _wreckPosATL = (getPosATL _wreck) vectorAdd [0,0,0.5];
private _wreckDir = getDir _wreck;
deleteVehicle _wreck;
private _shippingBox = "WreckRecovery_Box" createVehicle _wreckPosATL;
private _shippingBox setDir _wreckDir;

[_wreck,_shippingBox] call FUNC(trackpackage);