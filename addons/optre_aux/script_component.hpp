#define COMPONENT optre_aux
#define COMPONENT_BEAUTIFIED Operation: TREBUCHETE Auxiliary

#include "\ik\jc\addons\main\script_mod.hpp"

#include "\ik\jc\addons\main\script_macros.hpp"

#define ELITE_VEST(var1,var2,var3) QPATHTOF(data\elites\var1\jc_elite##var1##_vest_##var2##_##var3##_co.paa)
#define ELITE_HEADGEAR(var1,var2) QPATHTOF(data\elites\var1\jc_elite##var1##_headgear_##var2##_co.paa)
#define ZEALOT_HEADGEAR(var1,var2) QPATHTOF(data\elites\zealot\jc_elite##var1##_headgear_##var2##_co.paa)

#define MINOR_SHIELD_STRENGTH 212
#define MAJOR_SHIELD_STRENGTH 273
#define SPECOPS_SHIELD_STRENGTH 333
#define ULTRA_SHIELD_STRENGTH 363
#define ZEALOT_SHIELD_STRENGTH 515

#define MINOR_ARMOR_HITPOINTS 35
#define MAJOR_ARMOR_HITPOINTS MINOR_ARMOR_HITPOINTS
#define OFFICER_ARMOR_HITPOINTS MINOR_ARMOR_HITPOINTS
#define ULTRA_ARMOR_HITPOINTS MINOR_ARMOR_HITPOINTS
#define ZEALOT_ARMOR_HITPOINTS MINOR_ARMOR_HITPOINTS
#define SHADOW_ARMOR_HITPOINTS MINOR_ARMOR_HITPOINTS

#define MINOR_SHIELDS MJOLNIR_isArmor = 1;  \
MJOLNIR_shieldStrength = MINOR_SHIELD_STRENGTH;   \
MJOLNIR_shieldChargeValue = 1.0;    \
MJOLNIR_shieldChargeDelay = 0.10

#define MAJOR_SHIELDS MJOLNIR_isArmor = 1;  \
MJOLNIR_shieldStrength = MAJOR_SHIELD_STRENGTH;   \
MJOLNIR_shieldChargeValue = 1.0;    \
MJOLNIR_shieldChargeDelay = 0.10

#define OFFICER_SHIELDS MAJOR_SHIELDS

#define ULTRA_SHIELDS MJOLNIR_isArmor = 1;  \
MJOLNIR_shieldStrength = ULTRA_SHIELD_STRENGTH;   \
MJOLNIR_shieldChargeValue = 1.0;    \
MJOLNIR_shieldChargeDelay = 0.10

#define ZEALOT_SHIELDS MJOLNIR_isArmor = 1;  \
MJOLNIR_shieldStrength = ZEALOT_SHIELD_STRENGTH;   \
MJOLNIR_shieldChargeValue = 1.0;    \
MJOLNIR_shieldChargeDelay = 0.10

#define SHADOW_SHIELDS ZEALOT_SHIELDS
