class CfgVehicles
{
    class ItemInfo;
    class B_AssaultPack_Base;
    class IK_Backpack_Invisible : B_AssaultPack_Base
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = ITEM_NAME(Invisible Backpack);
        model = "\a3\weapons_f\empty.p3d";
        author = AUTHOR;
        class ItemInfo : ItemInfo
        {
            containerClass = "SupplyPack";
        };
        mass = 20;
        class TransportWeapons {};
        class TransportMagazines {};
        class TransportItems {};
    };
/*
    MODULE_REQS;
	class IK_RescaleObjects : ACE_Module
	{
		scope = 1;
  author = AUTHOR;
		displayName = "Rescale Objects";
		//icon = "\TAG_addonName\data\icon_Nuke_ca.paa";
		category = "IK_Modules";

		function = QFUNCMAIN(rescaleObjects);	// Name of function triggered once conditions are met
		functionPriority = 1;				// Execution priority, modules with lower number are executed first. 0 is used when the attribute is undefined
		isGlobal = 1;						// 0 for server only execution, 1 for global execution, 2 for persistent global execution
		isTriggerActivated = 0;				// 1 for module waiting until all synced triggers are activated
		isDisposable = 1;					// 1 if modules is to be disabled once it is activated (i.e. repeated trigger activation will not work)
		is3DEN = 0;							// 1 to run init function in Eden Editor as well
		curatorCanAttach = 0;				// 1 to allow Zeus to attach the module to an entity

		// 3DEN Attributes Menu Options
		canSetArea = 0;						// Allows for setting the area values in the Attributes menu in 3DEN
		canSetAreaShape = 0;				// Allows for setting "Rectangle" or "Ellipse" in Attributes menu in 3DEN
		canSetAreaHeight = 0;				// Allows for setting height or Z value in Attributes menu in 3DEN

		class Attributes : AttributesBase
		{
            class Units : Units
			{
				property = "IK_RescaleObjects_Units";
			};
			class ModuleDescription : ModuleDescription {};
		};

		class ModuleDescription : ModuleDescription
		{
			description = "Sync objects you wish to resacle.";	// Short description, will be formatted as structured text
			sync[] = {"AnyObject"};				// Array of synced entities (can contain base classes)
		};
	};
    class IK_MakeSimpleObjects : ACE_Module
	{
		displayName = "Make Simple Objects";
		//icon = "\TAG_addonName\data\icon_Nuke_ca.paa";

		function = QFUNCMAIN(rescaleObjects);
		curatorInfoType = "RscDisplayAttributeModuleIK_MakeSimpleObjects";

		class Attributes : AttributesBase
		{
            class Units : Units
			{
				property = "IK_MakeSimpleObjects_Units";
			};
		};

		class ModuleDescription : ModuleDescription
		{
			description = "Sync objects you wish to make a Simple Objects.";
		};
	};*/
};

