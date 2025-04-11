params ["_wreck","_shippingBox"];

private _recoveryModuleArea = missionNamespace getVariable "IK_Wreck_RecoveryArea";

waitUntil {
    (_shippingBox inArea _recoveryModuleArea)
    && (isTouchingGround _shippingBox)
};
sleep 2;
if ((_shippingBox inArea _recoveryModuleArea) && (isTouchingGround _shippingBox)) then {
    deleteVehicle _shippingBox;
    missionNamespace setVariable ["IK_VehicleToSpawn", _wreck];
};