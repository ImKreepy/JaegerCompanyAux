class CfgVehicles
{
    MODULE_REQS;
	class IK_Modules_RescaleObjects : ACE_Module
	{
		scope = 1; // 1 = 3DEN only, 2 = Zeus & 3DEN
		author = AUTHOR;
		displayName = "Rescale Objects";
		category = "IK_Modules";
		function = QFUNC(rescaleObjects);	// Name of function triggered once conditions are met
		functionPriority = 1;				// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 1;						// 0 = server, 1 = global, 2 = persistent global execution
		isTriggerActivated = 0;				// 1 = wait for synced triggers
		isDisposable = 1;					// 0 = repeatable
		is3DEN = 0;							// 1 = run in 3DEN
		curatorCanAttach = 0;				// 1 = drag and drop on entity

		// 3DEN Attributes Menu Options
		canSetArea = 0;						// 1 = allows Area Attributes

		class Attributes : AttributesBase{};
		class ModuleDescription : ModuleDescription
		{
			description = "Sync objects you wish to resacle.";	// Short description, structured text
			sync[] = {"AnyStaticObject"};				// Array of synced entities (can contain base classes)
		};
	};
    class IK_Modules_MakeAceArsenal : IK_Modules_RescaleObjects
	{
		displayName = "Make ACE Arsenal";
		function = QFUNC(makeAceArsenal);

		class Attributes : AttributesBase{};
		class ModuleDescription : ModuleDescription
		{
			description = "Sync objects you wish to make a ACE Arsenal.";
			sync[] = {"Anything"};
		};
	};
    class IK_Modules_FullHealArea : IK_Modules_RescaleObjects
	{
		displayName = "Full Heal Area";
		function = QFUNC(fullHealArea);
		
		isDisposable = 0;
		canSetArea = 0;

		canSetAreaShape = 1;
		canSetAreaHeight = 1;
		class AttributeValues
		{
			
			size3[] = { 100, 100, -1 };
			isRectangle = 0;
		};

		class Attributes : AttributesBase{};
		class ModuleDescription : ModuleDescription
		{
			description = "Any unit that enters this area will be fully healed.";
			sync[] = {"AnyBrain"};
		};
	};
    class IK_Modules_RRR : IK_Modules_FullHealArea
	{
		displayName = "Repair, Refuel, Rearm Area";
		function = QFUNC(tripleRArea);

		class Attributes : AttributesBase{};
		class ModuleDescription : ModuleDescription
		{
			description = "Any vehicle that enters this area will be fully repaired, refueled, and rearmed.";
			sync[] = {"AnyVehicles"};
		};
	};
};
