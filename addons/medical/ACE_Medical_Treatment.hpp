class ACE_Medical_Treatment {
    class Bandaging {
        class BasicBandage {
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
        class PackingBandage : FieldDressing {
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
        class ElasticBandage : FieldDressing {
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
        class QuikClot : FieldDressing {
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
