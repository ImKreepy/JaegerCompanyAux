class ACE_SelfActions : ACE_SelfActions
{
	class IK_D77_CamoChanger
	{
		displayName = "Change Camo";
		exceptions[] =
		{
			"isNotInside",
			"isNotSwimming",
			"isNotSitting"
		};
		icon = ACEX_ICON(SwapIcon);
		condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
		showDisabled = 0;
		priority = 2;
		class Unit_Standard
		{
			displayName = "Standard";
			icon = ACEX_ICON(UNSC);
			class IK_Olives
			{
				displayname = "Olives";
				icon = ACEX_ICON(OliveInteraction);
				class E415_O
				{
					displayName = "E-415";
					exceptions[] =
					{
						"isNotInside",
						"isNotSwimming",
						"isNotSitting"
					};
					condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
					statement = CAMOCHANGE(UNSC_Olive_E415);
					showDisabled = 0;
					runOnHover = 0;
					priority = 2.5;
				};
				class E416_O : E415_O
				{
					displayName = "E-416";
					statement = CAMOCHANGE(UNSC_Olive_E416);
				};
				class E417_O : E415_O
				{
					displayName = "E-417";
					statement = CAMOCHANGE(UNSC_Olive_E417);
				};
				class E418_O : E415_O
				{
					displayName = "E-418";
					statement = CAMOCHANGE(UNSC_Olive_E418);
				};
				class E419_O : E415_O
				{
					displayName = "E-419";
					statement = CAMOCHANGE(UNSC_Olive_E419);
				};
				class G022_O : E415_O
				{
					displayName = "G-022";
					statement = CAMOCHANGE(UNSC_Olive_G22);
				};
				class G023_O : E415_O
				{
					displayName = "G-023";
					statement = CAMOCHANGE(UNSC_Olive_G23);
				};
				class G024_O : E415_O
				{
					displayName = "G-024";
					statement = CAMOCHANGE(UNSC_Olive_G24);
				};
			};
			class IK_Grays
			{
				displayname = "Grays";
				icon = ACEX_ICON(GrayInteraction);
				class E415_G
				{
					displayName = "E-415";
					exceptions[] =
					{
						"isNotInside",
						"isNotSwimming",
						"isNotSitting"
					};
					condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
					statement = CAMOCHANGE(UNSC_Gray_E415);
					showDisabled = 0;
					runOnHover = 0;
					priority = 2.5;
				};
				class E416_G : E415_G
				{
					displayName = "E-416";
					statement = CAMOCHANGE(UNSC_Gray_E416);
				};
				class E417_G : E415_G
				{
					displayName = "E-417";
					statement = CAMOCHANGE(UNSC_Gray_E417);
				};
				class E418_G : E415_G
				{
					displayName = "E-418";
					statement = CAMOCHANGE(UNSC_Gray_E418);
				};
				class E419_G : E415_G
				{
					displayName = "E-419";
					statement = CAMOCHANGE(UNSC_Gray_E419);
				};
				class G022_G : E415_G
				{
					displayName = "G-022";
					statement = CAMOCHANGE(UNSC_Gray_G22);
				};
				class G023_G : E415_G
				{
					displayName = "G-023";
					statement = CAMOCHANGE(UNSC_Gray_G23);
				};
				class G024_G : E415_G
				{
					displayName = "G-024";
					statement = CAMOCHANGE(UNSC_Gray_G24);
				};
			};
			class IK_Whites
			{
				displayname = "Winter";
				icon = ACEX_ICON(WhiteInteraction);
				class E415_W
				{
					displayName = "E-415";
					exceptions[] =
					{
						"isNotInside",
						"isNotSwimming",
						"isNotSitting"
					};
					condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
					statement = CAMOCHANGE(UNSC_White_E415);
					showDisabled = 0;
					runOnHover = 0;
					priority = 2.5;
				};
				class E416_W : E415_W
				{
					displayName = "E-416";
					statement = CAMOCHANGE(UNSC_White_E416);
				};
				class E417_W : E415_W
				{
					displayName = "E-417";
					statement = CAMOCHANGE(UNSC_White_E417);
				};
				class E418_W : E415_W
				{
					displayName = "E-418";
					statement = CAMOCHANGE(UNSC_White_E418);
				};
				class E419_W : E415_W
				{
					displayName = "E-419";
					statement = CAMOCHANGE(UNSC_White_E419);
				};
				class G022_W : E415_W
				{
					displayName = "G-022";
					statement = CAMOCHANGE(UNSC_White_G22);
				};
				class G023_W : E415_W
				{
					displayName = "G-023";
					statement = CAMOCHANGE(UNSC_White_G23);
				};
				class G024_W : E415_W
				{
					displayName = "G-024";
					statement = CAMOCHANGE(UNSC_White_G24);
				};
			};
			class IK_ONI
			{
				displayname = "ONI";
				icon = ACEX_ICON(BlackInteraction);
				exceptions[] =
				{
					"isNotInside",
					"isNotSwimming",
					"isNotSitting"
				};
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				statement = CAMOCHANGE(UNSC_ONI_DC77);
				showDisabled = 0;
				runOnHover = 0;
				priority = 2.5;
			};
		};/*
		class Custom_Camos
		{
			displayName = "Custom Paints";
		};*/
	};
};