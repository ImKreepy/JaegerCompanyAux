#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #undef PREPMAIN
    #define PREP(fncName) FUNC(var1) = compile preProcessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName))
    #define PREPMAIN(fncName) FUNCMAIN(var1) = compile preProcessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName))
#else
    #undef PREP
    #undef PREPMAIN
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,var1)), QFUNC(fncName)] call CBA_fnc_compileFunction
    #define PREPMAIN(fncName) [QPATHTOF(functions\DOUBLES(fnc,var1)), QFUNCMAIN(fncName)] call CBA_fnc_compileFunction
#endif

#define QPATHTOF_SUB(var1) QPATHTOF(SUBCOMPONENT\##var1) // Path to an addon's subcomponent

#define ITEM_NAME(NAME) QUOTE([##PREFIX_LONG##] NAME)
#define ITEM_PICTURE(PICTURE) QUOTE(z\jc\addons\main\item_picture\##PICTURE##.paa)
#define ACEX_ICON(ICON) QUOTE(z\jc\addons\main\acex_icon\##ICON##.paa)