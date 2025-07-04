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

