#include "script_component.hpp"

if (GVAR(disableCookoff)) then {
    INFO("Disabling ACE Cookoff for Covenant Vehicles");

    ["OPTRE_FC_Wraith", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["OPTRE_FC_Spirit_F", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["OPTRE_FC_Spectre_Base", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["OPTRE_FC_Locust", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["OPTRE_FC_Ghost", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["OPTRE_FC_Type26B_Banshee", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
};
