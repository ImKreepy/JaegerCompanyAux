#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #undef PREPMAIN
    #define PREP(fncName) FUNC(fncName) = compile preProcessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName))
    #define PREPMAIN(fncName) FUNCMAIN(fncName) = compile preProcessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName))
#else
    #undef PREP
    #undef PREPMAIN
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName)), QFUNC(fncName)] call CBA_fnc_compileFunction
    #define PREPMAIN(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName)), QFUNCMAIN(fncName)] call CBA_fnc_compileFunction
#endif

#ifndef MATPATH_SYS
    #define MATPATH_SYS(var1,var2,var3) MAINPREFIX\var1\SUBPREFIX\var2\var3.paa
#endif
#define MATPATH(var1) MATPATH_SYS(PREFIX,COMPONENT,var1)
#define QMATPATH(var1) MATPATH(var1)

#define ITEM_NAME(NAME) QUOTE([##PREFIX_LONG##] NAME)
#define ITEM_PICTURE(PICTURE) QUOTE(ik\jc\addons\main\item_picture\##PICTURE##.paa)
#define ACEX_ICON(ICON) QUOTE(\ik\jc\addons\main\acex_icon\##ICON##.paa)
#define ANIMS(var1) QPATHTOF(anim\##var1##.rtm)
