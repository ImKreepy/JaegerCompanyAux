#include "..\script_component.hpp"

params ["_target"];

if (_target == cursorObject) then {
    private _wreckPosATL = (getPosATL _target) vectorAdd [0,0,0.5];
    private _wreckDir = getDir _target;

    if (_target == player) exitWith { hint format ["You cannot package %1!", name player] };
    if (isNull _target) exitWith { hint "No wreck selected!" };
    if (alive _target) exitWith { hint "Is not a wreck!" };

    {
        if (alive _x) then {
            if (alive _x) exitWith {
                hint format ["%1 is still alive, cannot package wreck!", name _x];
            };
        } else { _target deleteVehicleCrew _x;}
    } forEach crew _target;

    waitUntil {crew _target select 0 == nil};
    deleteVehicle _target;

    _ikShippingBox = "IK_WR_ShippingBox" createVehicle _wreckPosATL;
    waitUntil {alive _ikShippingBox};
    _ikShippingBox setDir _wreckDir;
    
    _ikShippingBox setVariable ["IK_WR_PackagedWreck", _target, true];
} else {
    hint "You failed.";
};
