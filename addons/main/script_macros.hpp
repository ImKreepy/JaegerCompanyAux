#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"

/*
 A template for how I label class names
    PREFIX_AUX_ITEM_PART_EXTRA
    IK_OPTRE_EliteMinor_Vest_Orange
    IK_MA_Marine_Vest_Brown

 A template for how I label textures
    prefix_type_part_extra_co
    jc_eliteMinor_vest_orange_co
*/

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

#define QPATHTOSUBF(var1) QPATHTOF(SUBCOMPONENT\var1)

#define ITEM_NAME(NAME) QUOTE([##PREFIX_LONG##] NAME)
#define ITEM_PICTURE(PICTURE) QUOTE(ik\jc\addons\main\item_picture\##PICTURE##.paa)
#define ACEX_ICON(ICON) QUOTE(\ik\jc\addons\main\acex_icon\##ICON##.paa)
#define ANIMS(var1) QPATHTOF(anim\##var1##.rtm)
#define EDITORPREVIEW(PREVIEW) editorPreview = QPATHTOF(data\editorPreviews\PREVIEW.jpg)
#define EDITORPREVIEWSUB(PREVIEW) editorPreview = QPATHTOSUBF(data\editorPreviews\PREVIEW.jpg)
