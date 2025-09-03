#define COMPONENT medical
#define COMPONENT_BEAUTIFIED Medical
#include "\ik\jc\addons\main\script_mod.hpp"

#include "\z\ace\addons\medical_engine\script_macros_medical.hpp"
#include "\ik\jc\addons\main\script_macros.hpp"

#define ACE_Medical QUOTE(ace_medical_engine),QUOTE(ace_medical),QUOTE(ace_medical_damage),QUOTE(ace_medical_treatment)

#define ACE_PREFIX ace
#define ACEGVAR(module,var) TRIPLES(ACE_PREFIX,module,var)
#define ACEFUNC(module,var) TRIPLES(ACE_PREFIX,module,fnc_##var)
#define ACEQGVAR(module,var) QUOTE(ACEGVAR(module,var))
#define ACEQFUNC(module,var) QUOTE(ACEFUNC(module,var))

#define GRAB_OPEN_WOUNDS(unit) (unit getVariable [ACEQGVAR(medical,openWounds), createHashMap])

#define IS_IMPALEMENT_OR(var) var isEqualTo "ImpalementWound" || var isEqualTo "BlamiteWound" || var isEqualTo "SpikeWound"
#define IS_IMPALEMENT_AND(var) var isEqualTo "ImpalementWound" && var isEqualTo "BlamiteWound" && var isEqualTo "SpikeWound"
#define NOT_IMPALEMENT_OR(var) var isNotEqualTo "ImpalementWound" || var isNotEqualTo "BlamiteWound" || var isNotEqualTo "SpikeWound"
#define NOT_IMPALEMENT_AND(var) var isNotEqualTo "ImpalementWound" && var isNotEqualTo "BlamiteWound" && var isNotEqualTo "SpikeWound"
