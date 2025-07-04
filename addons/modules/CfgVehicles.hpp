class CfgVehicles
{
    MODULE_REQS;
	class IK_RescaleObjects : ACE_Module
	{
		scope = 1; // 1 = 3DEN only, 2 = Zeus & 3DEN
		author = AUTHOR;
		displayName = "Rescale Objects";
		category = "IK_Modules";

		function = QFUNCMAIN(rescaleObjects);	// Name of function triggered once conditions are met
		functionPriority = 1;				// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 1;						// 0 = server, 1 = global, 2 = persistent global execution
		isTriggerActivated = 0;				// 1 = wait for synced triggers
		isDisposable = 1;					// 0 = repeatable
		is3DEN = 0;							// 1 = run in 3DEN
		curatorCanAttach = 0;				// 1 = drag and drop on entity

		// 3DEN Attributes Menu Options
		canSetArea = 0;						// 1 = allows Area Attributes

		class Attributes : AttributesBase
		{};
		class ModuleDescription : ModuleDescription
		{
			description = "Sync objects you wish to resacle.";	// Short description, structured text
			sync[] = {"AnyStaticObject"};				// Array of synced entities (can contain base classes)
		};
	};
    class IK_MakeAceArsenal : ACE_Module
	{
		displayName = "Make ACE Arsenal";
		//icon = "\TAG_addonName\data\icon_Nuke_ca.paa";

		function = QFUNC(makeAceArsenal);
		curatorInfoType = "RscDisplayAttributeModuleIK_MakeSimpleObjects";

		class Attributes : AttributesBase{};
		class ModuleDescription : ModuleDescription
		{
			description = "Sync objects you wish to make a ACE Arsenal.";
			sync[] = {"Anything"};				// Array of synced entities (can contain base classes)
		};
	};
};