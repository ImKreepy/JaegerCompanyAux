class ACE_Medical_Treatment {
    class Bandaging {
        class BasicBandage {};
        class FieldDressing {};
        class PackingBandage : FieldDressing {};
        class ElasticBandage : FieldDressing {};
        class QuikClot : FieldDressing {};
    };
};
