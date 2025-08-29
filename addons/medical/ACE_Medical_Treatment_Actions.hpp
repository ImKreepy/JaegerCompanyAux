class ACE_Medical_Treatment_Actions {
    class BasicBandage {
        condition = QFUNC(canBandage);
    };
    class RemoveImpalement: BasicBandage {
        displayName = "Remove Impalement";
        displayNameProgress = "Removing Impalement";
        icon = QPATHTOF(ui\surgical_kit.paa);
        category = "bandage";
        items[] = {""};

        /* treatmentLocations = QGVAR(locationPluck);
        allowSelfTreatment = QGVAR(allowSelfPlucking);
        medicRequired = QGVAR(medicPluck); */

        treatmentTime = QFUNC(getPluckTime);
        condition = QFUNC(canPluck);
        callbackSuccess = "";
        callbackStart = QFUNC(pluckStart);
        callbackProgress = QFUNC(pluckingProgress);
        
        consumeItem = 0; // setting can be 0,1,2 - only 1 will consume items[]
        animationMedic = "AinvPknlMstpSnonWnonDnon_medic1";
        litter[] = {{""}};
    };
};
