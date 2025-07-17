#include "script_component.hpp"

class CfgPatches {
    class ADDON
    {
        name = COMPONENT_NAME;
        author = AUTHOR;
        authors[] = {"Im Kreepy"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"jc_main", "ace_modules"};
        units[] = { };
        weapons[] = {   };
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"

class CfgFactionClasses
{
    class IK_Wrecks
    {
        displayName=QUOTE(COMPONENT_BEAUTIFIED);
    };
};


class CfgVehicles
{
	class LandVehicle;
    class Car: LandVehicle
	{
        class ACE_Actions
		{
			class ACE_MainActions
			{
				class IK_WR_Actions
				{
					displayName = "Wreck Recovery";
					condition = QUOTE(true);
                    statement = "";
					class IK_PackageWreck
					{
						displayName = "Package Wreck";
						condition = QUOTE(true);
						statement = QUOTE([_target] call FUNC(packageWreck));
					};
				};
			};
        };
	};
	class Logic;
	class Module_F : Logic
	{
		class AttributesBase
		{
			class ModuleDescription;
		};
		class ModuleDescription{};
	};
	class ACE_Module: Module_F{};
	class IK_Modules_RecoverableVehicles : ACE_Module
	{
		scope = 2; // 1 = Hidden in 3DEN, 2 = Visible in 3DEN
		author = AUTHOR;
		displayName = "Recoverable Vehicles";
		function = QFUNC(initWreckRecovery);	// Name of function triggered once conditions are met
		category = "IK_Wrecks";
		functionPriority = 0;				// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 0;						// 0 = server, 1 = global, 2 = persistent global execution
		isTriggerActivated = 0;				// 1 = wait for synced triggers
		isDisposable = 1;					// 0 = repeatable
		is3DEN = 0;							// 1 = run in 3DEN
		curatorCanAttach = 0;				// 1 = drag and drop on entity

		// 3DEN Attributes Menu Options
		canSetArea = 0;						// 1 = allows Area Attributes

		class Attributes : AttributesBase
		{
			class ModuleDescription : ModuleDescription {};
		};
		class ModuleDescription : ModuleDescription
		{
			description = "Sync vehicles you wish to make recoverable.";	// Short description, structured text
			sync[] = {"AnyVehicle"};				// Array of synced entities (can contain base classes)
		};
	};
	class IK_Modules_RecoveryArea : IK_Modules_RecoverableVehicles
	{
		scope = 2; // 1 = Hidden in 3DEN, 2 = Visible in 3DEN
		displayName = "Recovery Area";
		function = QFUNC(recoveryArea);
		isGlobal = 0;						// 0 = server, 1 = global, 2 = persistent global execution
		isTriggerActivated = 0;				// 1 = wait for synced triggers
		isDisposable = 1;					// 0 = repeatable

		class Attributes : AttributesBase
		{
			class ModuleDescription : ModuleDescription {};
		};
		class ModuleDescription : ModuleDescription
		{
			description = "Sync trigger for recovery zone. All wrecks in the zone will be respawned on module postion.";	// Short description, structured text
			sync[] = {"EmptyDetector"};				// Array of synced entities (can contain base classes)
		};
	};
	class IK_Modules_ManualPackage : IK_Modules_RecoverableVehicles
	{
		scope = 1; // 1 = Hidden in 3DEN, 2 = Visible in 3DEN
		scopeCurator = 1; // 2 = Visible in Zeus, 0 = Hidden in Zeus
		displayName = "Package Wreck";
		function = QFUNC(packageWreckZeus);
		isGlobal = 0;						// 0 = server, 1 = global, 2 = persistent global execution
		isTriggerActivated = 0;				// 1 = wait for synced triggers
		isDisposable = 1;					// 0 = repeatable
		curatorCanAttach = 1;				// 1 = drag and drop on entity

		class Attributes : AttributesBase
		{
			class ModuleDescription : ModuleDescription {};
		};
		class ModuleDescription : ModuleDescription
		{
			description = "Drop onto a vehicle for it to be instantly packaged.";	// Short description, structured text
			sync[] = {"AnyVehicle"};				// Array of synced entities (can contain base classes)
		};
	};
};
