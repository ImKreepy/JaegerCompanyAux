#include "..\script_component.hpp"

waitUntil {isTouchingGround _ikShippingBox};
sleep 2;
private _wreck = _ikShippingBox getVariable ["IK_WR_PackagedWreck", objNull];
private _modulePosATL = missionNamespace getVariable "IK_WR_ModulePosATL";

if (isNull _wreck) then {
    if (isNull _wreck) exitWith {};
} else {
    deleteVehicle _ikShippingBox;
    sleep 0.1;
    _wreck createVehicle _modulePosATL;
    _ikShippingBox setVariable ["IK_WR_PackagedWreck", objNull, true];
};
