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

/*---- MACRO chain to define a material path in rvmats. ----*/
// Creating a pathing without a begining slash.
#define PATHTO(var1) PATHTOF2_SYS(PREFIX,COMPONENT,var1)
#define PATHTOSUB(var1) PATHTO(SUBCOMPONENT\var1)

// Quoting the pathing.
#define QPATHTO(var1) QUOTE(PATHTO(var1))
#define QPATHTOSUB(var1) QUOTE(PATHTOSUB(var1))

// Creating pathing to a rvmat folder.
#define QPATHTOM(var1) QPATHTO(data\rvmats\var1.paa)
#define QPATHTOSUBM(var1) QPATHTOSUB(data\rvmats\var1.paa)

// Creating pathing to a rvmat folder in a subfolder.
#define QPATHTOM2(var1,var2) QPATHTO(data\var1\rvmats\var2.paa)
#define QPATHTOSUBM2(var1,var2) QPATHTOSUB(data\var1\rvmats\var2.paa)
/*-------------------------------------------*/

#define ITEM_NAME(NAME) QUOTE([##PREFIX_LONG##] NAME)
#define ITEM_PICTURE(PICTURE) QUOTE(ik\jc\addons\main\item_picture\##PICTURE##.paa)
#define ACEX_ICON(ICON) QUOTE(\ik\jc\addons\main\acex_icon\##ICON##.paa)
#define ANIMS(var1) QPATHTOF(anim\##var1##.rtm)
