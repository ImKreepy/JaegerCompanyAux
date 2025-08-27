class ACE_Medical_Treatment {
    class Bandage {
        class FieldDressing {
            class Impalement {
                effectiveness = 0;
                reopeningChance = 0;
                reopeningMinDelay = 0;
                reopeningMaxDelay = 0;
            };
            class ImpalementMinor : Impalement {};
            class ImpalementMedium : Impalement {};
            class ImpalementLarge : Impalement {};
        };
    };
};
