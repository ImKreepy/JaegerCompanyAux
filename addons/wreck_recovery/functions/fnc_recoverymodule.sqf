#include "..\script_component.hpp"

params [
	["_units", [], [[]]]				// Argument 1 is a list of affected units (affected by value selected in the 'class Units' argument))
];

{_x addAction ["Package Wreck",QUOTE([_target] call FUNC(packagewreck)),_this select 3,2,true,true,"",!alive _target,5,false,"","" ]} forEach _units;
true;