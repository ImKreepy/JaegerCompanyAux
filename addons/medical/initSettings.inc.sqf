[
    QGVAR(locationPluck),
    "LIST",
    ["Remove Impalement Locations", "Areas where impalements can be removed"],
    ["Jaeger Company", QUOTE(COMPONENT_BEAUTIFIED)],
    [[0, 1, 2, 3, 4], ["Anywhere", "Vehicle", "Medical Facilities", "Vehicles And Facilities", "Disabled"], 0],
    true
] call CBA_fnc_addSetting;
[
    QGVAR(allowSelfPluck),
    "LIST",
    ["Allow Self Impalement Removal", "Can a unit remove their own impalements"],
    ["Jaeger Company", QUOTE(COMPONENT_BEAUTIFIED)],
    [[0, 1, 2], ["No", "Yes", "Doctors"], 1],
    true
] call CBA_fnc_addSetting;
[
    QGVAR(medicPluck),
    "LIST",
    ["Medic Required", "Is a medic required to remove impalements"],
    ["Jaeger Company", QUOTE(COMPONENT_BEAUTIFIED)],
    [[0, 1, 2], ["Anyone", "Medics", "Doctors"], 0],
    true
] call CBA_fnc_addSetting;
[
    QGVAR(treatmentTimePluck),
    "SLIDER",
    ["Impalement Removal Coefficient", "Modifies the time it take to remove an impalement"],
    ["Jaeger Company", QUOTE(COMPONENT_BEAUTIFIED)],
    LSTRING(Category),
    [0.1, 60, 5, 1],
    true
] call CBA_fnc_addSetting;
