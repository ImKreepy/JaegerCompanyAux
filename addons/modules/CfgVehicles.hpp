class CfgVehicles
{
    class Logic;
	class Module_F : Logic
	{
		class AttributesBase
		{
			class Edit;
			class Checkbox;
			class ModuleDescription;
		};
		class ModuleDescription{};
	};
	class ACE_Module: Module_F{};
	class IK_Modules_MakeAceArsenal : ACE_Module
	{
		scope = 2; // 1 = Hidden, 2 = Visible
		author = AUTHOR;
		displayName = "Make ACE Arsenal";
		function = QFUNC(makeAceArsenal);	// Name of function triggered once conditions are met
		category = "IK_Modules";
		functionPriority = 1;				// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
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
			description = "Sync objects you wish to make a ACE Arsenal. WARNING! Does not work on Simple Objects!";	// Short description, structured text
			sync[] = {"Anything"};				// Array of synced entities (can contain base classes)
		};
	};
    class IK_Modules_RescaleObjects : IK_Modules_MakeAceArsenal
	{
		displayName = "Rescale Objects";
		function = QFUNC(rescaleObjects);

		class Attributes : AttributesBase
		{
			class RescaleFactor : Edit
			{
				displayName = "Rescale Factor";
				tooltip = "Factor to rescale the objects by. 1 = no change, 2 = double size, 0.5 = half size.";
				property = "IK_Modules_RescaleObjects_RescaleFactor";
				typeName = "NUMBER";
				defaultValue = "1";
			};
			class MakeSimple : Checkbox
			{
				displayName = "Make Simple Object";
				tooltip = "Toggle to make the objects simple objects. This will remove all animations and physics, but can improve performance. I really only made this because some objects don't rescale properly otherwise.";
				property = "IK_Modules_RescaleObjects_MakeSimple";
				defaultValue = "false";
			};
			class ModuleDescription : ModuleDescription {};
		};
		class ModuleDescription : ModuleDescription
		{
			description = "Sync objects you wish to rescale.";
			sync[] = {"AnyStaticObject"};
		};
	};
    class IK_Modules_MakeFullHealArea : IK_Modules_RescaleObjects
	{
		displayName = "Full Heal Area";
		function = QFUNC(makeFullHealArea);

		class ModuleDescription : ModuleDescription
		{
			description = "Sync trigger areas to make them a full heal area. Any player that enters this area will be fully healed.";
			sync[] = {"EmptyDetector"};
		};
	};
    class IK_Modules_MakeTrippleRArea : IK_Modules_RescaleObjects
	{
		displayName = "Repair, Refuel, Rearm Area";
		function = QFUNC(makeTripleRArea);

		class ModuleDescription : ModuleDescription
		{
			description = "Sync trigger areas to make them a RRR area. Any vehicle that enters this area will be repaired, refuled, and rearmed.";
			sync[] = {"EmptyDetector"};
		};
	};
};
