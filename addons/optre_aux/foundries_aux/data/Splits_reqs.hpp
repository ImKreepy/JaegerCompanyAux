class Helicopter;
class Helicopter_Base_F : Helicopter
{
	class Turrets;
	class HitPoints;
	class Reflectors{};
};
class Helicopter_Base_H : Helicopter_Base_F
{
	class Turrets : Turrets{};
	class HitPoints : HitPoints{};
	class Reflectors{};
};

class B_Heli_Transport_01_F : Helicopter_Base_H
{};
class Splits_Pelican_base : B_Heli_Transport_01_F
{
	class Turrets
	{
		class RearDoorGun;
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class CargoTurret_04;
		class CargoTurret_05;
		class CargoTurret_06;
		class CargoTurret_07;
		class CargoTurret_08;
		class CargoTurret_09;
		class CargoTurret_10;
		class CargoTurret_11;
		class CargoTurret_12;
		class CargoTurret_13;
		class CargoTurret_14;
		class CargoTurret_15;
	};
	class Components;
};
