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
		icon = ACEX_ICON(jc_interaction_swap_ca);
		condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
		showDisabled = 0;
		priority = 2;
		class Unit_Standard
		{
			displayName = "Standard";
			icon = ACEX_ICON(jc_xtd_unsc_ca);
			class IK_Olives
			{
				displayname = "Olives";
				icon = ACEX_ICON(jc_interaction_olive_ca);
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
					statement = QUOTE([ARR_2(_target,'UNSC_Olive_E415')] call FUNCMAIN(vehicleCamoChanger));
					showDisabled = 0;
					runOnHover = 0;
					priority = 2.5;
				};
				class E416_O : E415_O
				{
					displayName = "E-416";
					statement = QUOTE([ARR_2(_target,'UNSC_Olive_E416')] call FUNCMAIN(vehicleCamoChanger));
				};
				class E417_O : E415_O
				{
					displayName = "E-417";
					statement = QUOTE([ARR_2(_target,'UNSC_Olive_E417')] call FUNCMAIN(vehicleCamoChanger));
				};
				class E418_O : E415_O
				{
					displayName = "E-418";
					statement = QUOTE([ARR_2(_target,'UNSC_Olive_E418')] call FUNCMAIN(vehicleCamoChanger));
				};
				class E419_O : E415_O
				{
					displayName = "E-419";
					statement = QUOTE([ARR_2(_target,'UNSC_Olive_E419')] call FUNCMAIN(vehicleCamoChanger));
				};
				class G022_O : E415_O
				{
					displayName = "G-022";
					statement = QUOTE([ARR_2(_target,'UNSC_Olive_G22')] call FUNCMAIN(vehicleCamoChanger));
				};
				class G023_O : E415_O
				{
					displayName = "G-023";
					statement = QUOTE([ARR_2(_target,'UNSC_Olive_G23')] call FUNCMAIN(vehicleCamoChanger));
				};
				class G024_O : E415_O
				{
					displayName = "G-024";
					statement = QUOTE([ARR_2(_target,'UNSC_Olive_G24')] call FUNCMAIN(vehicleCamoChanger));
				};
			};
			class IK_Grays
			{
				displayname = "Grays";
				icon = ACEX_ICON(jc_interaction_gray_ca);
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
					statement = QUOTE([ARR_2(_target,'UNSC_Gray_E415')] call FUNCMAIN(vehicleCamoChanger));
					showDisabled = 0;
					runOnHover = 0;
					priority = 2.5;
				};
				class E416_G : E415_G
				{
					displayName = "E-416";
					statement = QUOTE([ARR_2(_target,'UNSC_Gray_E416')] call FUNCMAIN(vehicleCamoChanger));
				};
				class E417_G : E415_G
				{
					displayName = "E-417";
					statement = QUOTE([ARR_2(_target,'UNSC_Gray_E417')] call FUNCMAIN(vehicleCamoChanger));
				};
				class E418_G : E415_G
				{
					displayName = "E-418";
					statement = QUOTE([ARR_2(_target,'UNSC_Gray_E418')] call FUNCMAIN(vehicleCamoChanger));
				};
				class E419_G : E415_G
				{
					displayName = "E-419";
					statement = QUOTE([ARR_2(_target,'UNSC_Gray_E419')] call FUNCMAIN(vehicleCamoChanger));
				};
				class G022_G : E415_G
				{
					displayName = "G-022";
					statement = QUOTE([ARR_2(_target,'UNSC_Gray_G22')] call FUNCMAIN(vehicleCamoChanger));
				};
				class G023_G : E415_G
				{
					displayName = "G-023";
					statement = QUOTE([ARR_2(_target,'UNSC_Gray_G23')] call FUNCMAIN(vehicleCamoChanger));
				};
				class G024_G : E415_G
				{
					displayName = "G-024";
					statement = QUOTE([ARR_2(_target,'UNSC_Gray_G24')] call FUNCMAIN(vehicleCamoChanger));
				};
			};
			class IK_Whites
			{
				displayname = "Winter";
				icon = ACEX_ICON(jc_interaction_white_ca);
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
					statement = QUOTE([ARR_2(_target,'UNSC_White_E415')] call FUNCMAIN(vehicleCamoChanger));
					showDisabled = 0;
					runOnHover = 0;
					priority = 2.5;
				};
				class E416_W : E415_W
				{
					displayName = "E-416";
					statement = QUOTE([ARR_2(_target,'UNSC_White_E416')] call FUNCMAIN(vehicleCamoChanger));
				};
				class E417_W : E415_W
				{
					displayName = "E-417";
					statement = QUOTE([ARR_2(_target,'UNSC_White_E417')] call FUNCMAIN(vehicleCamoChanger));
				};
				class E418_W : E415_W
				{
					displayName = "E-418";
					statement = QUOTE([ARR_2(_target,'UNSC_White_E418')] call FUNCMAIN(vehicleCamoChanger));
				};
				class E419_W : E415_W
				{
					displayName = "E-419";
					statement = QUOTE([ARR_2(_target,'UNSC_White_E419')] call FUNCMAIN(vehicleCamoChanger));
				};
				class G022_W : E415_W
				{
					displayName = "G-022";
					statement = QUOTE([ARR_2(_target,'UNSC_White_G22')] call FUNCMAIN(vehicleCamoChanger));
				};
				class G023_W : E415_W
				{
					displayName = "G-023";
					statement = QUOTE([ARR_2(_target,'UNSC_White_G23')] call FUNCMAIN(vehicleCamoChanger));
				};
				class G024_W : E415_W
				{
					displayName = "G-024";
					statement = QUOTE([ARR_2(_target,'UNSC_White_G24')] call FUNCMAIN(vehicleCamoChanger));
				};
			};
			class IK_ONI
			{
				displayname = "ONI";
				icon = ACEX_ICON(jc_interaction_black_ca);
				exceptions[] =
				{
					"isNotInside",
					"isNotSwimming",
					"isNotSitting"
				};
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				statement = QUOTE([ARR_2(_target,'UNSC_ONI_DC77')] call FUNCMAIN(vehicleCamoChanger));
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
