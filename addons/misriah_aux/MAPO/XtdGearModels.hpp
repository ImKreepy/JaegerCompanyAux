class XtdGearModels
{
    class CfgVehicles
    {
        class JC_XtdBackpackSpartan
        {
            label = "Spartan Shoulders";
            author = AUTHOR;
            options[] = {"Spartan"};
            class Spartan
            {
                alwaysSelectable = 1;
                values[] = {"Blank","Douglas","Keiichi"};
                class Blank
                {
                    label = "Blank";
                    description = "Blank Spartan Shoulders";
                    //image = ACEX_ICON(icon);
                };
                class Douglas
                {
                    label = "Douglas042";
                    description = "Douglas042's Shoulders";
                    //image = ACEX_ICON(icon);
                };
                class Keiichi
                {
                    label = "Keiichi047";
                    description = "Keiichi047's Shoulders";
                    //image = ACEX_ICON(icon);
                };
            };
        };
    };
    class CfgWeapons
    {
        
        //Headgear
        class JC_XtdHeadgearSpartan
        {
            label = "Spartan Helmets";
            author = AUTHOR;
            options[] = {"Mjolnir", "SPI"};
            class Mjolnir
            {
                alwaysSelectable = 1;
                values[] = {"Blank","Red"};
                class Blank
                {
                    label = "Standard";
                    description = "Standard MkIV Helmet";
                    //image = ACEX_ICON(icon);
                };
                class Red
                {
                    label = "Red Team";
                    description = "Red Team MkIV Helmet";
                    //image = ACEX_ICON(icon);
                };
            };
            class SPI
            {
                alwaysSelectable = 1;
                values[] = {"Blank","Goliath"};
                class Blank
                {
                    label = "Standard";
                    description = "Standard SPI Helmet";
                    //image = ACEX_ICON(icon);
                };
                class Goliath
                {
                    label = "Goliath";
                    description = "SPI Helmet worn by Inserectionist team, Goliath";
                    //image = ACEX_ICON(icon);
                };
            };
        };

        //Vests
        class JC_XtdVestSpartan
        {
            label = "Spartan Vests";
            author = AUTHOR;
            options[] = {"Mjolnir","SPI"};
            class Mjolnir
            {
                alwaysSelectable = 1;
                values[] = {"Blank","Douglas","Jerome","Joseph","Keiichi","Li","Samuel"};
                class Blank
                {
                    label = "Blank";
                    description = "Blank Spartan Vest";
                    //image = ACEX_ICON(icon);
                };
                class Douglas
                {
                    label = "Douglas042";
                    description = "Douglas042's Spartan Vest";
                    //image = ACEX_ICON(icon);
                };
                class Jerome
                {
                    label = "Jerome092";
                    description = "Jerome092's Spartan Vest";
                    //image = ACEX_ICON(icon);
                };
                class Joseph
                {
                    label = "Joseph122";
                    description = "Joseph122's Spartan Vest";
                    //image = ACEX_ICON(icon);
                };
                class Keiichi
                {
                    label = "Keiichi047";
                    description = "Keiichi047's Spartan Vest";
                    //image = ACEX_ICON(icon);
                };
                class Li
                {
                    label = "Li008";
                    description = "Li008's Spartan Vest";
                    //image = ACEX_ICON(icon);
                };
                class Samuel
                {
                    label = "Samuel034";
                    description = "Samuel034's Spartan Vest";
                    //image = ACEX_ICON(icon);
                };
            };
            class SPI
            {
                alwaysSelectable = 1;
                values[] = {"Blank","Ash","Goliath"};
                class Blank
                {
                    label = "Standard";
                    description = "Standard SPI Vest";
                    //image = ACEX_ICON(icon);
                };
                class Ash
                {
                    label = "AshG099";
                    description = "AshG099's SPI Vest";
                    //image = ACEX_ICON(icon);
                };
                class Goliath
                {
                    label = "Goliath";
                    description = "SPI Vest worn by Inserectionist team, Goliath";
                    //image = ACEX_ICON(icon);
                };
            };
        };
    };
};
