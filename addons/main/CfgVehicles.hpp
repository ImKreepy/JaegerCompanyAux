class CfgVehicles
{
    class ContainerSupply;
	class SupplyLight : ContainerSupply
    {
        maximumLoad = SUPPLY_LIGHT;
    };
    class SupplyMed : ContainerSupply
    {
        maximumLoad = SUPPLY_MED;
    };
    class SupplyHeavy : ContainerSupply
    {
        maximumLoad = SUPPLY_HEAVY;
    };
    class SupplyPack : ContainerSupply
    {
        maximumLoad = SUPPLY_PACK;
    };
/*
	MODULE_REQS;
	class IK_RescaleObjects : ACE_Module
	{
		scope = 1;
		displayName = "Rescale Objects";
		//icon = "\TAG_addonName\data\icon_Nuke_ca.paa";
		category = "EdCat_IK_Modules";

		function = "jc_main_fnc_rescaleObjects";	// Name of function triggered once conditions are met
		functionPriority = 1;				// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 0;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 1;					// 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity
		curatorInfoType = "RscDisplayAttributeModuleRescaleObject"; // Menu displayed when the module is placed or double-clicked on by Zeus

		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
		canSetAreaHeight = 0;				// Allows for setting height or Z value in Attributes menu in 3DEN

		class Attributes : AttributesBase
		{
			class ModuleDescription : ModuleDescription {};
		};

		class ModuleDescription : ModuleDescription
		{
			description = "Short module description";	// Short description, will be formatted as structured text
			sync[] = { "LocationArea_F" };				// Array of synced entities (can contain base classes)

			class LocationArea_F
			{
				description[] = { // Multi-line descriptions are supported
					"First line",
					"Second line"
				};
				position = 1;	// Position is taken into effect
				direction = 1;	// Direction is taken into effect
				optional = 1;	// Synced entity is optional
				duplicate = 1;	// Multiple entities of this type can be synced
				synced[] = { "BluforUnit", "AnyBrain" };	// Pre-defined entities like "AnyBrain" can be used (see the table below)
			};

			class BluforUnit
			{
				description = "Short description";
				displayName = "Any BLUFOR unit";	// Custom name
				icon = "iconMan";					// Custom icon (can be file path or CfgVehicleIcons entry)
				side = 1;							// Custom side (determines icon color)
			};
		};
	};*/
};