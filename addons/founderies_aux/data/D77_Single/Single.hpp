class IK_Founderies_D77_Single : Splits_Pelican_base
{
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	side = 1;
	author = "SplitJaw, DemonicOnPC, Im Kreepy";
	displayName = ITEM_NAME(D77-TC Pelican (Single Seater));
	faction="JC_BLU";
	editorSubcategory = "EdSubCat_JC_BLU_Helicopters";
	editorPreview = EDEN_PREVIEW(PREVIEW);
	crew = "";
	memoryPointDriverOptics = "PIP2_pos";
	weapons[] =
	{
		"Splits_M370_70mm_autocannon",
		"OPTRE_CHAINGUN40",
		"CMFlareLauncher",
		"Laserdesignator_mounted"
	};
	magazines[] =
	{
		"Splits_1200Rnd_Cannon_70mm_M370_MP",
		"Splits_1200Rnd_Cannon_70mm_M370_MP",
		"Splits_1200Rnd_Cannon_70mm_M370_HE",
		"Splits_1200Rnd_Cannon_70mm_M370_HE",
		"OPTRE_1200Rnd_40mm_HE",
		"OPTRE_1200Rnd_40mm_HE",
		"OPTRE_1200Rnd_40mm_HE",
		"OPTRE_1200Rnd_40mm_HE",
		"OPTRE_1200Rnd_40mm_HE",
		"168Rnd_CMFlare_Chaff_Magazine",
		"Laserbatteries"
	};

	#include "AceChange.hpp"

	hiddenSelections[] =
	{
		"camo1", //Body
		"camo2", //Wings
		"camo3", //Weapons
	};
	hiddenSelectionsTextures[] =
	{
		QPATHTOF(data\D77_Single\Olive\body_022_co.paa),
		QPATHTOF(data\D77_Single\Olive\wings_and_gear_co.paa),
		QPATHTOF(data\D77_Single\Olive\weaponry_co.paa),
	};
	class textureSources
	{
		#include "Olive/olive.hpp"
		#include "Gray/gray.hpp"
		#include "White/white.hpp"
		#include "ONI/oni.hpp"
	};
	textureList[] =
	{
		"UNSC_Olive_G22",0,
		"UNSC_Olive_G23",1,
		"UNSC_Olive_G24",1,
		"UNSC_Olive_E415",1,
		"UNSC_Olive_E416",1,
		"UNSC_Olive_E416",1,
		"UNSC_Olive_E417",1,
		"UNSC_Olive_E418",1,
		"UNSC_Olive_E419",1,
		"UNSC_Gray_G22",1,
		"UNSC_Gray_G23",1,
		"UNSC_Gray_G24",1,
		"UNSC_Gray_E415",1,
		"UNSC_Gray_E416",1,
		"UNSC_Gray_E416",1,
		"UNSC_Gray_E417",1,
		"UNSC_Gray_E418",1,
		"UNSC_Gray_E419",1,
		"UNSC_White_G22",1,
		"UNSC_White_G23",1,
		"UNSC_White_G24",1,
		"UNSC_White_E415",1,
		"UNSC_White_E416",1,
		"UNSC_White_E416",1,
		"UNSC_White_E417",1,
		"UNSC_White_E418",1,
		"UNSC_White_E419",1,
		"UNSC_ONI_DC77",1,
	};
	class pilotCamera
	{
		class OpticsIn
		{
			class Wide
			{
				initAngleX = 0;
				minAngleX = -30;
				maxAngleX = 30;
				initAngleY = 0;
				minAngleY = -100;
				maxAngleY = 100;
				initFov = 0.46599999;
				minFov = 0.46599999;
				maxFov = 0.46599999;
				opticsDisplayName = "WFOV";
				visionMode[] =
				{
					"Normal",
					"NVG",
					"Ti"
				};
				thermalMode[] = { 0,1 };
				gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
			};
			class Medium : Wide
			{
				initFov = 0.093000002;
				minFov = 0.093000002;
				maxFov = 0.093000002;
				opticsDisplayName = "MFOV";
				gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
			};
			class Narrow : Wide
			{
				initFov = 0.028999999;
				minFov = 0.028999999;
				maxFov = 0.028999999;
				opticsDisplayName = "NFOV";
				gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
			};
		};
		class OpticsOut
		{
			class Monocular
			{
				initFov = 0.89999998;
				minFov = 0.25;
				maxFov = 1.25;
				initAngleX = 0;
				initAngleY = 0;
				minAngleX = -65;
				maxAngleX = 85;
				minAngleY = -150;
				maxAngleY = 150;
				minMoveX = -0.2;
				maxMoveX = 0.2;
				minMoveY = -0.1;
				maxMoveY = 0.1;
				minMoveZ = -0.1;
				maxMoveZ = 0.2;
				visionMode[] =
				{
					"Normal",
					"NVG",
					"Ti"
				};
				gunnerOpticsModel = "";
				gunnerOpticsEffect[] = {};
			};
		};
		pilotOpticsShowCursor = 1;
		controllable = 1;
	};
	class Turrets : Turrets
	{
		delete MainTurret;
		class RearDoorGun : RearDoorGun
		{
			gunnerType = "";
			gunnerName = "Door Gunner";
			weapons[] =
			{
				//"Splits_M247_Coax" //This is the Default Rear turret class
				"OPTRE_M247T_Coax"
			};
			magazines[] =
			{
				"OPTRE_500Rnd_762x51_Box_Tracer",
				"OPTRE_500Rnd_762x51_Box_Tracer",
				"OPTRE_500Rnd_762x51_Box_Tracer",
				"OPTRE_500Rnd_762x51_Box_Tracer",
				//"Splits_1200Rnd_762x51_AP_Mag_Tracer" //This is the default ammo
			};
		};
		class CargoTurret_01 : CargoTurret_01
		{
			gunnerName = "Standing Seat 1";
			crew = "";
		};
		class CargoTurret_02 : CargoTurret_02
		{
			gunnerName = "Standing Seat 2";
			crew = "";
		};
		class CargoTurret_03 : CargoTurret_03
		{
			gunnerName = "Observer Seat";
			crew = "";
		};
		class CargoTurret_04 : CargoTurret_04
		{
			gunnerName = "Standing Seat 3";
			crew = "";
		};
		class CargoTurret_05 : CargoTurret_05
		{
			gunnerName = "Standing Seat 4";
			crew = "";
		};
		class CargoTurret_06 : CargoTurret_06
		{
			gunnerName = "Standing Seat 5";
		};
		class CargoTurret_07 : CargoTurret_07
		{
			gunnerName = "Standing Seat 6";
			crew = "";
		};
		class CargoTurret_08 : CargoTurret_08
		{
			gunnerName = "Standing Seat 7";
		};
		class CargoTurret_09 : CargoTurret_09
		{
			gunnerName = "Standing Seat 8";
			crew = "";
		};
		class CargoTurret_10 : CargoTurret_10
		{
			gunnerName = "Standing Seat 9";
		};
		class CargoTurret_11 : CargoTurret_11
		{
			gunnerName = "Standing Seat 10";
			crew = "";
		};
		class CargoTurret_12 : CargoTurret_12
		{
			gunnerName = "Standing Seat 11";
		};
		class CargoTurret_13 : CargoTurret_13
		{
			gunnerName = "Standing Seat 12";
			crew = "";
		};
		class CargoTurret_14 : CargoTurret_14
		{
			gunnerName = "Standing Seat 13";
		};
		class CargoTurret_15 : CargoTurret_15
		{
			gunnerName = "Standing Seat 14";
			crew = "";
		};
	};
	class Components : Components
	{
		class TransportPylonsComponent
		{
			UIPicture = "\z\jc\addons\founderies_aux\data\pelicanpylonpic.paa";
			class Pylons
			{
				class PylonRight1
				{
					attachment = "Splits_PylonMissile_AA_Pelican_x2";
					priority = 4;
					hardpoints[] =
					{
						"OPAEX_Hardpoint_D77-TC",
						"Splits_T_Missiles"
					};
					turret[] = {};
					UIposition[] = { 0.25,0.1 };
				};
				class PylonRight2
				{
					attachment = "Splits_PylonMissile_AGM_Pelican_x2";
					priority = 3;
					hardpoints[] =
					{
						"OPAEX_Hardpoint_D77-TC",
						"Splits_T_Missiles"
					};
					turret[] = {};
					UIposition[] = { 0.25,0.2 };
				};
				class PylonRight3
				{
					attachment = "Splits_PylonMissile_AGM_Bottom_Pelican_x3";
					priority = 2;
					hardpoints[] =
					{
						"OPTRE_Hardpoint_D77_Guided",
						"Splits_B_Missiles"
					};
					turret[] = {};
					UIposition[] = { 0.6,0.1 };
				};
				class PylonRight4
				{
					attachment = "Splits_PylonMissile_AGM_Bottom_Pelican_x3";
					priority = 1;
					hardpoints[] =
					{
						"OPTRE_Hardpoint_D77_Guided",
						"Splits_B_Missiles"
					};
					turret[] = {};
					UIposition[] = { 0.6,0.2 };
				};
				class PylonsLeft1 : PylonRight1 { UIposition[] = { 0.25,0.5 }; mirroredMissilePos = 1; };
				class PylonsLeft2 : PylonRight2 { UIposition[] = { 0.25,0.4 }; mirroredMissilePos = 1; };
				class PylonsLeft3 : PylonRight3 { UIposition[] = { 0.6,0.5 }; mirroredMissilePos = 1; };
				class PylonsLeft4 : PylonRight4 { UIposition[] = { 0.6,0.4 }; mirroredMissilePos = 1; };
			};
			class Presets
			{
				class Empty
				{
					displayName = "$STR_empty";
					attachment[] = {};
				};
				class Default
				{
					displayName = "$STR_vehicle_default";
					attachment[] =
					{
						"Splits_PylonMissile_AA_Pelican_x2",
						"Splits_PylonMissile_AGM_Pelican_x2",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Pelican_x2",
						"Splits_PylonMissile_AA_Pelican_x2"
					};
				};
				class AT
				{
					displayName = "$STR_A3_cfgmagazines_titan_at_dns";
					attachment[] =
					{
						"Splits_PylonMissile_AA_Pelican_x2",
						"Splits_PylonMissile_AGM_Pelican_x2",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Pelican_x2",
						"Splits_PylonMissile_AA_Pelican_x2"
					};
				};
				class HAT
				{
					displayName = "$STR_A3_Heavy_AT_preset_displayName";
					attachment[] =
					{
						"Splits_PylonMissile_AA_Pelican_x2",
						"Splits_PylonMissile_AGM_Pelican_x2",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Pelican_x2",
						"Splits_PylonMissile_AA_Pelican_x2"
					};
				};
				class CAS
				{
					displayName = "$STR_A3_CAS_PRESET_DISPLAYNAME";
					attachment[] =
					{
						"Splits_PylonMissile_AA_Pelican_x2",
						"Splits_PylonMissile_AGM_Pelican_x2",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Bottom_Pelican_x3",
						"Splits_PylonMissile_AGM_Pelican_x2",
						"Splits_PylonMissile_AA_Pelican_x2"
					};
				};
				class Special
				{
					displayName = "CAS: ANVIL II & III";
					attachment[] = { "OPTRE_32Rnd_Anvil2_missiles","OPTRE_32Rnd_Anvil3_missiles","","","OPTRE_1200Rnd_40mm_HE" };
				};
			};
		};
		class SensorsManagerComponent
		{
			class Components
			{
				class IRSensorComponent : SensorTemplateIR
				{
					class AirTarget
					{
						minRange = 50;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 50;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					maxTrackableSpeed = 1e+10;
					animDirection = "mainGun";
					angleRangeHorizontal = 46;
					angleRangeVertical = 34;
					aimdown = -0.25;
				};
				class VisualSensorComponent : SensorTemplateVisual
				{
					class AirTarget
					{
						minRange = 50;
						maxRange = 8000;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 50;
						maxRange = 8000;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					maxTrackableSpeed = 1e+10;
					animDirection = "mainGun";
					angleRangeHorizontal = 46;
					angleRangeVertical = 34;
					aimdown = -0.25;
				};
				class ActiveRadarSensorComponent : SensorTemplateActiveRadar
				{
					class AirTarget
					{
						minRange = 20;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 20;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					maxTrackableSpeed = 1e+10;
					angleRangeHorizontal = 180;
					angleRangeVertical = 90;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					aimDown = 30;
				};
				class PassiveRadarSensorComponent : SensorTemplatePassiveRadar
				{
					class AirTarget
					{
						minRange = 50;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 5;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					maxTrackableSpeed = 1e+10;
					angleRangeHorizontal = 180;
					angleRangeVertical = 90;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					aimDown = 30;
				};
				class LaserSensorComponent : SensorTemplateLaser
				{
					class AirTarget
					{
						minRange = 50;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 5;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					maxTrackableSpeed = 1e+10;
					angleRangeHorizontal = 180;
					angleRangeVertical = 90;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					aimDown = 30;
				};
				class NVSensorComponent : SensorTemplateNV
				{
					class AirTarget
					{
						minRange = 50;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 5;
						maxRange = 8000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					maxTrackableSpeed = 1e+10;
					angleRangeHorizontal = 180;
					angleRangeVertical = 90;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					aimDown = 30;
				};
			};
		};
	};
	class SimpleObject
	{
		eden = 0;
		animate[] =
		{
			{"damage_hide",0},
			{"glass_1",0},
			{"glass_2",0},
			{"glass_3",0},
			{"glass_4",0},
			{"glass_5",0},
			{"glass_6",0},
			{"glass_7",0},
			{"glass_8",0},
			{"glass_9",0},
			{"glass_10",0},
			{"glass_11",0},
			{"glass_12",0},
			{"glass_13",0},
			{"glass_14",0},
			{"glass_15",0},
			{"glass_16",0},
			{"glass_17",0},
			{"glass_18",0},
			{"glass_19",0},
			{"glass_20",0},
			{"cannon_barrel_hide",0},
			{"rotor_1_blur_hide",0},
			{"rotor_1_static_hide",0},
			{"rotor_2_blur_hide",0},
			{"rotor_2_static_hide",0},
			{"engine_1_1_rot",1},
			{"engine_1_2_rot",1},
			{"engine_2_1_rot",1},
			{"engine_2_2_rot",1},
			{"stator_1_rudder_rot",0},
			{"stator_1_elevator_rot",0},
			{"rotor_1_rot",0},
			{"stator_2_rudder_rot",0},
			{"stator_2_elevator_rot",0},
			{"rotor_2_rot",0},
			{"gear_1_move",0},
			{"gear_2_rot",0},
			{"gear_2_a_rot",0},
			{"gear_2_b_rot",0},
			{"gear_3_rot",0},
			{"gear_3_a_rot",0},
			{"gear_3_b_rot",0},
			{"gear_1_hatch_1_rot",0},
			{"gear_1_hatch_2_rot",0},
			{"wheel_1_rot",0},
			{"wheel_2_rot",0},
			{"wheel_3_rot",0},
			{"gear_1_damper_move",0},
			{"gear_1_damper_rotate",0},
			{"gear_1_link_1_rotate",0},
			{"gear_1_link_2_rotate",0},
			{"gear_2_damper_move",0},
			{"gear_3_damper_move",0},
			{"door_1_rot",0},
			{"cargoseats_hide",1},
			{"display_off_hide",0},
			{"positionlights_hide",0},
			{"cannon_turret_rot",0},
			{"cannon_rot",0.09},
			{"cannon_muzzleflash_hide",0},
			{"cannon_barrel_move",1},
			{"rotor_1_hide",0},
			{"rotor_1_unhide",0},
			{"rotor_2_hide",0},
			{"rotor_2_unhide",0},
			{"avionics_damage",0},
			{"stick_control_1_pitch_rot",0},
			{"Throttle",0},
			{"stick_control_2_pitch_rot",0},
			{"stick_control_1_roll_rot",0},
			{"stick_control_2_roll_rot",0},
			{"pedals_1_left_1_move",0},
			{"pedals_1_right_1_move",0},
			{"pedals_1_left_2_rot",0},
			{"pedals_1_right_2_rot",0},
			{"pedals_2_left_1_move",0},
			{"pedals_2_right_1_move",0},
			{"pedals_2_left_2_rot",0},
			{"pedals_2_right_2_rot",0},
			{"display_1_alt_ladder_rot",8.16},
			{"display_1_alt_1_rot",8.16},
			{"display_1_alt_10_rot",8.16},
			{"display_1_alt_100_rot",8.16},
			{"display_1_alt_1000_rot",8.16},
			{"display_1_compass_rot",0},
			{"display_1_fuel_move",1},
			{"display_1_gear_down_move",0},
			{"display_1_gear_up_move",0},
			{"display_1_horizon_bank_rot",0},
			{"display_1_horizon_move",0},
			{"display_1_hydraulics_1_rot",0},
			{"display_1_hydraulics_2_rot",0},
			{"display_1_oil_1_rot",1},
			{"display_1_oil_2_rot",1},
			{"display_1_oil_3_rot",1},
			{"display_1_oil_4_rot",1},
			{"display_1_oil_5_rot",1},
			{"display_1_oil_6_rot",1},
			{"display_1_pitch_rot",0},
			{"display_1_roll_rot",0},
			{"display_1_yaw_rot",0},
			{"display_1_rpm_1_rot",0},
			{"display_1_rpm_2_rot",0},
			{"display_1_speed_ladder_rot",0},
			{"display_1_speed_1_rot",0},
			{"display_1_speed_10_rot",0},
			{"display_1_speed_100_rot",0},
			{"display_1_vert_speed_rot",0},
			{"display_1_voltage_1_rot",0},
			{"display_1_voltage_2_rot",0},
			{"display_1_vtol_1_rot",1},
			{"display_1_vtol_2_rot",1},
			{"display_2_alt_ladder_rot",8.16},
			{"display_2_alt_1_rot",8.16},
			{"display_2_alt_10_rot",8.16},
			{"display_2_alt_100_rot",8.16},
			{"display_2_alt_1000_rot",8.16},
			{"display_2_compass_rot",0},
			{"display_2_fuel_move",1},
			{"display_2_horizon_bank_rot",0},
			{"display_2_horizon_move",0},
			{"display_2_oil_1_rot",1},
			{"display_2_oil_2_rot",1},
			{"display_2_speed_ladder_rot",0},
			{"display_2_speed_1_rot",0},
			{"display_2_speed_10_rot",0},
			{"display_2_speed_100_rot",0},
			{"display_2_vert_speed_rot",0},
			{"display_2_vtol_1_rot",1},
			{"display_2_vtol_2_rot",1},
			{"display_at_1_hide",1},
			{"display_at_2_hide",1},
			{"display_at_3_hide",1},
			{"display_at_4_hide",1},
			{"display_at_5_hide",1},
			{"display_at_6_hide",1},
			{"display_at_7_hide",1},
			{"display_at_8_hide",1},
			{"display_mg_ammo_1_hide",1},
			{"display_mg_ammo_2_hide",1},
			{"display_mg_ammo_3_hide",1},
			{"display_mg_ammo_4_hide",1},
			{"display_mg_ammo_5_hide",1},
			{"display_mg_ammo_6_hide",1},
			{"display_mg_ammo_7_hide",1},
			{"display_mg_ammo_8_hide",1},
			{"display_mg_ammo_9_hide",1},
			{"display_mg_ammo_10_hide",1},
			{"display_rocketspod_1_empty_hide",1},
			{"display_rocketspod_2_empty_hide",1},
			{"rocketb30_hide",1},
			{"rocketa30_hide",1},
			{"rocketb29_hide",1},
			{"rocketa29_hide",1},
			{"rocketb28_hide",1},
			{"rocketa28_hide",1},
			{"rocketb27_hide",1},
			{"rocketa27_hide",1},
			{"rocketb26_hide",1},
			{"rocketa26_hide",1},
			{"rocketb25_hide",1},
			{"rocketa25_hide",1},
			{"rocketb24_hide",1},
			{"rocketa24_hide",1},
			{"rocketb23_hide",1},
			{"rocketa23_hide",1},
			{"rocketb22_hide",1},
			{"rocketa22_hide",1},
			{"rocketb21_hide",1},
			{"rocketa21_hide",1},
			{"rocketb20_hide",1},
			{"rocketa20_hide",1},
			{"rocketb19_hide",1},
			{"rocketa19_hide",1},
			{"rocketb18_hide",1},
			{"rocketa18_hide",1},
			{"rocketb17_hide",1},
			{"rocketa17_hide",1},
			{"rocketb16_hide",1},
			{"rocketa16_hide",1},
			{"rocketb15_hide",1},
			{"rocketa15_hide",1},
			{"rocketb14_hide",1},
			{"rocketa14_hide",1},
			{"rocketb13_hide",1},
			{"rocketa13_hide",1},
			{"rocketb12_hide",1},
			{"rocketa12_hide",1},
			{"rocketb11_hide",1},
			{"rocketa11_hide",1},
			{"rocketb10_hide",1},
			{"rocketa10_hide",1},
			{"rocketb9_hide",1},
			{"rocketa9_hide",1},
			{"rocketb8_hide",1},
			{"rocketa8_hide",1},
			{"rocketb6_hide",1},
			{"rocketa6_hide",1},
			{"rocketb5_hide",1},
			{"rocketa5_hide",1},
			{"rocketb4_hide",1},
			{"rocketa4_hide",1},
			{"rocketb3_hide",1},
			{"rocketa3_hide",1},
			{"rocketb2_hide",1},
			{"rocketa2_hide",1},
			{"rocketb7_hide",1},
			{"rocketa7_hide",1},
			{"rocketb1_hide",1},
			{"rocketa1_hide",1}
		};
		hide[] =
		{
			"clan",
			"zasleh",
			"zasleh3",
			"cannon_muzzleflash",
			"light_1_hide",
			"light_2_hide",
			"light_3_hide",
			"zadni svetlo",
			"podsvit pristroju",
			"poskozeni"
		};
		verticalOffset = 3.159;
		verticalOffsetWorld = -0.036;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	tf_range = 120000;
	tf_isolatedAmount = 0.4;
	tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
	tf_hasLRradio = 1;
	enableRadio = 1;
};