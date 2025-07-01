#include "..\script_component.hpp"
/*
 * Function to change the camo of a vehicle
 *
 * Arguments:
 * 0: Vehicle object (Object)
 * 1: Camo type (String)
 *
 * Return Value:
 * None
 *
 * Example:
 * [_vehicle, _camoType] call jc_main_fnc_vehicleCamoChanger;
 *
 * Public: No
 */
 
params [
	["_vehicle",(objectParent ace_player),[ace_player]],
	["_camoType","",["aString"]]
];

_config = configFile >> "CfgVehicles" >> (typeOf _vehicle);
_textureTypeList =  getArray (_config >> "textureList");

if(count _textureTypeList <= 0) exitWith { 
	//diag_log format["%1 Not enough texture sources for %2",time,_vehicle]
};

if(_camoType isEqualTo "") then {
	_camoType = _textureTypeList select 0;
};

// Check that the given texture type is valid
if(!(_camoType in _textureTypeList)) exitWith {
	//diag_log format["%1 %2 not in %3",time,_camoType,_textureTypeList]
};

//diag_log format["%1 camos are %2 looking for %3",time,_textureTypeList,_camoType];
_textures = getArray (_config >> "textureSources" >> _camoType >> "textures");
{
	_vehicle setObjectTextureGlobal[_forEachIndex,_x];
} forEach _textures;
