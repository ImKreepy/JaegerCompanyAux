#include "..\script_component.hpp"

// Gets if the Wreck Recovery Module is enabled or not
_recoveryToggled = missionNamespace getVariable "Wrecks_Module_Toggle";

// Exits if the Wreck Recovery Module is disabled
if (!_recoveryToggled) exitWith {
    INFO("Wreck Recovery Module is disabled. Exiting.");
};

// Exacutes if the Wreck Recovery Module is enabled
if (_recoveryToggled) then {

    // Gets the class names of the wrecks that can be recovered
    _largeWrecks = missionNamespace getVariable "Wrecks_Large_Recovery";
    _mediumWrecks = missionNamespace getVariable "Wrecks_Medium_Recovery";

    // Checks if the recovery module is present in the mission
    private _recoveryModule = "IK_Wreck_Recovery";
    if (isNil { _recoveryModule }) exitWith {
        INFO("Wreck Recovery Module not found. Exiting.");
    };

    // Logs the recovery module's area
    private _recoveryModuleArea = [_recoveryModule] call BIS_fnc_getArea;
    missionNamespace setVariable ["IK_Wreck_RecoveryArea", _recoveryModuleArea];

    // Checks if the spawn module is present in the mission
    private _spawnModule = "IK_Wreck_Spawn";
    if (isNil { _spawnModule }) exitWith {
        INFO("Wreck Spawn Module not found. Exiting.");
    };

    // Logs the spawn module's position
    private _spawnModuleArea = getPosATL _spawnModule;
    missionNamespace setVariable ["IK_Wreck_SpawnPoint", _spawnModuleArea];

    
};