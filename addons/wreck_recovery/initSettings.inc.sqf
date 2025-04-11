[
    "Wrecks_Module_Toggle", 
    "CHECKBOX",
    ["Enable Wreck Recovery", "Enable (default) or disable the wreck recovery module."],
    ["Kreepy's Wreck Recovery", "Settings"],
    true,
    1,
    {},
    true
] call CBA_fnc_addSetting;

[
    "Wrecks_Large_Recovery", 
    "EDITBOX",
    ["Large Vehicles", "Class names of large vehicles that can be recovered."],
    ["Kreepy's Wreck Recovery", "Packageable Wrecks"],
    QUOTE(['Plane']),
    1,
    {},
    true
] call CBA_fnc_addSetting;

[
    "Wrecks_Medium_Recovery", 
    "EDITBOX",
    ["Medium Vehicles", "Class names of medium vehicles that can be recovered."],
    ["Kreepy's Wreck Recovery", "Packageable Wrecks"],
    QUOTE([ARR_3('Car','Tank','Helicopter')]),
    1,
    {},
    true
] call CBA_fnc_addSetting;