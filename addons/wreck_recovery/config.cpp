#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        author = AUTHOR;
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"jc_main"};
        units[] = {};
        weapons[] = {};
    };
};

#include "CfgEventHandlers.hpp"

class CfgFactionClasses
{
    class IK_Wrecks
    {
        displayName="Kreepy's Wreck Recovery";
    };
};
class CfgVehicles
{   
    class Logic;
	class Module_F : Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit;					// Default edit box (i.e. text input field)
			class Combo;				// Default combo box (i.e. drop-down menu)
			class Checkbox;				// Default checkbox (returned value is Boolean)
			class CheckboxNumber;		// Default checkbox (returned value is Number)
			class ModuleDescription;	// Module description
			class Units;				// Selection of units on which the module is applied
		};

		// Description base classes (for more information see below):
		class ModuleDescription
		{
			class AnyBrain;
		};
	};
    class IK_Wreck_Recovery: Module_F
    {
        scope = 2;
        author = AUTHOR;
        displayName = "Recovery Module";
        //icon = "";
        category = "IK_Wrecks";

        function = "ace_fnc_bananaModuleInit";
        functionPriority = 10;
        isGlobal = 0;                       // 0 for server only execution, 1 for global execution, 2 for persistent global execution
        isTriggerActivated = 0;             // 1 for module waiting until all synced triggers are activated
        isDisposable = 0;                   // 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
        is3DEN = 0;                         // 1 to run init function in Eden Editor as well
        curatorInfoType = "RscDisplayModuleWreckRecovery";

        // 3den Attributes
        canSetArea = 1;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 1;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
		canSetAreaHeight = 1;				// Allows for setting height or Z value in Attributes menu in 3DEN
		class AttributeValues
		{
			// This section allows you to set the default values for the attributes menu in 3DEN
			size3[] = { 10, 10, 10 };		// 3D size (x-axis radius, y-axis radius, z-axis radius)
			isRectangle = 0;				// Sets if the default shape should be a rectangle or ellipse
		};

		class Attributes : AttributesBase
		{
			class Units : Units
			{
				property = "IK_Wreck_Recovery_Vehicles";
			};
			class ModuleDescription : ModuleDescription {}; // Module description should be shown last
		};
        class ModuleDescription : ModuleDescription
		{
			description = "Wreck Recovery Module";	// Short description, will be formatted as structured text
		};
    };
};