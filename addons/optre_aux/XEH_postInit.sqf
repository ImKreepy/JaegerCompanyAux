#include "script_component.hpp"

if (GVAR(disableCookoff)) then {

    INFO("Disabling ACE Cookoff for Covenant Vehicles");
    
    // - OPTRE ---------------------------------------------
    ["OPTRE_FC_Wraith", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["OPTRE_FC_Spirit_F", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["OPTRE_FC_Spectre_Base", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["OPTRE_FC_Locust", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["OPTRE_FC_Ghost", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["OPTRE_FC_Type26B_Banshee", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;

    // - 1stMEU ---------------------------------------------
    ["MEU_PHANTOM", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["MEU_Phantom_Light", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["MEU_PHANTOM_Separatist", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["MEU_PHANTOM_Separatist_Light", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["MEU_Shadow", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["MEU_Shadow_Troop", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["Meu_Banshee", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["MEU_Banshee_N", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["MEU_Banshee_S", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["MEU_Bugger_Captain", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["MEU_Bugger_Hiveward", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["MEU_Bugger_Major", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["MEU_Bugger_Major_ND", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["MEU_Bugger_Minor", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["MEU_Bugger_Ranger", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["MEU_Bugger_Ultra", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;
    ["MEU_Bugger_Ultra_ND", "init", {_this call ace_cookoff_fnc_disableCookoff}, true, [], true] call CBA_fnc_addClassEventHandler;

} else {
    INFO("ACE Cookoff for Covenant Vehicles is enabled.");
};
