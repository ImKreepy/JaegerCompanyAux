class ACE_Medical_Injuries {
    class wounds {
        class BlamiteWound {
            bleeding = 0.05;
            pain = 0.8;
            causeLimping = 1;
            causeFracture = 1;
        };
    };
    class damageTypes {
        class Blamite {
            thresholds[] = {{20, 10}, {4.5, 2}, {3, 1}, {0, 1}};
            selectionSpecific = 1;
            class Avulsion {
                weighting[] = {{1, 1}, {0.35, 0}};
            };
            class Contusion {
                weighting[] = {{0.35, 0}, {0.35, 1}};
                sizeMultiplier = 3.2;
                painMultiplier = 2.2;
            };
            class BlamiteWound {
                weighting[] = {{1.5, 0}, {1.5, 1}, {0.35, 1}, {0.35, 0}};
                sizeMultiplier = 0.8;
            };
        };
        class RemovedImpalement {
            thresholds[] = {{4.5, 2}, {3, 1}, {0, 1}};
            selectionSpecific = 1;
            class PunctureWound {
                weighting[] = {{1.5, 1}, {0.35, 1}};
                sizeMultiplier = 0.8;
            };
        };
    };
};
