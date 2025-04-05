class ACE_SelfActions : ACE_SelfActions
{
	class IK_D77_RRR_CamoChanger
	{
		displayName = "Change Style";
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
		class RRR_Camos
		{
			displayname = "RRR Styles";
			class Olive_RRR
			{
				displayName = "Olive";
				icon = ACEX_ICON(jc_interaction_olive_ca);
				exceptions[] =
				{
					"isNotInside",
					"isNotSwimming",
					"isNotSitting"
				};
				condition = "!(isNull objectParent player) && (driver (vehicle player)==player)";
				statement = QUOTE([ARR_2(_target,'UNSC_Olive_RRR')] call FUNCMAIN(vehicleCamoChanger));
				showDisabled = 0;
				runOnHover = 0;
				priority = 2.5;
			};
			class White_RRR : Olive_RRR
			{
				displayName = "White";
				icon = ACEX_ICON(jc_interaction_white_ca);
				statement = QUOTE([ARR_2(_target,'UNSC_White_RRR')] call FUNCMAIN(vehicleCamoChanger));
			};
			class Gray_RRR : Olive_RRR
			{
				displayName = "Gray";
				icon = ACEX_ICON(jc_interaction_gray_ca);
				statement = QUOTE([ARR_2(_target,'UNSC_Gray_RRR')] call FUNCMAIN(vehicleCamoChanger));
			};
		};
	};
};