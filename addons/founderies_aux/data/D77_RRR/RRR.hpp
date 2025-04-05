class IK_Founderies_D77_Single_RRR : IK_Founderies_D77_Single
{
	displayName = ITEM_NAME(D77-TC Pelican (Single Seater/RRR));
	weapons[] = { "CMFlareLauncher" };
	magazines[] = { "168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine" };

	#include "AceChangeRRR.hpp"

	hiddenSelections[] =
	{
		"camo1", //Body
		"camo2", //Wings
		"camo3" //Weapons
	};
	hiddenSelectionsTextures[] =
	{
		QPATHTOF(data\D77_RRR\HW2\Olive\body_co.paa),
		QPATHTOF(data\D77_RRR\HW2\Olive\wings_and_gear_co.paa),
		QPATHTOF(data\D77_RRR\HW2\Olive\weaponry_co.paa)
	};

	class textureSources
	{
		class UNSC_White_RRR
		{
			displayName = "White";
			author = AUTHOR;
			textures[] =
			{
				QPATHTOF(data\D77_RRR\HW2\Winter\body_co.paa),
				QPATHTOF(data\D77_RRR\HW2\Winter\wings_and_gear_co.paa),
				QPATHTOF(data\D77_RRR\HW2\Winter\weaponry_co.paa)
			};
			faction = "JC_BLU";
		};
		class UNSC_Olive_RRR
		{
			displayName = "Olive";
			author = AUTHOR;
			textures[] =
			{
				QPATHTOF(data\D77_RRR\HW2\Olive\body_co.paa),
				QPATHTOF(data\D77_RRR\HW2\Olive\wings_and_gear_co.paa),
				QPATHTOF(data\D77_RRR\HW2\Olive\weaponry_co.paa)
			};
			faction = "JC_BLU";
		};
		class UNSC_Gray_RRR
		{
			displayName = "Gray";
			author = AUTHOR;
			textures[] =
			{
				QPATHTOF(data\D77_RRR\HW2\Gray\body_co.paa),
				QPATHTOF(data\D77_RRR\HW2\Gray\wings_and_gear_co.paa),
				QPATHTOF(data\D77_RRR\HW2\Gray\weaponry_co.paa)
			};
			faction = "JC_BLU";
		};
	};
	textureList[] =
	{
		"UNSC_Olive_RRR", 1,
		"UNSC_White_RRR", 1,
		"UNSC_Gray_RRR", 1
	};
	
	ace_cargo_space = 24;
	ace_cargo_hasCargo = 1;
	ace_repair_canRepair = 1;
	ace_refuel_fuelCargo = 4500;
	ace_refuel_hooks[] = { {0,-14,2.5},{0,-14,2.5} };
	ace_rearm_defaultSupply = 20000;
	supplyRadius = 50;
	fuelExplosionPower = 30;

	class Ace_Cargo
	{
		class Cargo
		{
			class xx_SpareWheel
			{
				type = "ACE_Wheel";
				amount = 12;
			};
			class xx_SpareTrack
			{
				type = "ACE_Track";
				amount = 6;
			};
		};
	};

	class TransportItems
	{
		class xx_ToolKit
		{
			name = "ToolKit";
			count = 2;
		};
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
			class Pylons
			{
				delete PylonRight1;
				delete PylonRight2;
				delete PylonRight3;
				delete PylonRight4;
				delete PylonsLeft1;
				delete PylonsLeft2;
				delete PylonsLeft3;
				delete PylonsLeft4;
			};
		};
		delete SensorsManagerComponent;
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