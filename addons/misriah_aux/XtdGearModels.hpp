class XtdGearModels
{
    class CfgVehicles
    {
        class JC_XtdBackpackInfantry
        {
            label = "Infantry Backpacks";
            author = AUTHOR;
            options[] = {"M52D"};
            class M52D
            {
                alwaysSelectable = 1;
                values[] = {"Strap","Strapless"};
                class Strap
                {
                    label = "Strap";
                    description = "M52D Infantry Backpack";
                    //image = ACEX_ICON(icon);
                };
                class Strapless
                {
                    label = "Strapless";
                    description = "Strapless M52D Infantry Backpack";
                    //image = ACEX_ICON(icon);
                };
            };
        };
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
        //Uniforms
        class JC_XtdUniformCrossBranch
        {
            label = "Cross Branch BDU";
            author = AUTHOR;
            options[] = {"Camo","Collar","Shoulders"};
            class Camo
            {
                alwaysSelectable = 1;
                values[] = { "Brown","Green","White","Tan","ODST"};
                class Brown
                {
                    label = "Brown";
                    description = "Brown Marine BDU";
                    image = "#(rgb,8,8,3)color(0.255,0.161,0,1)";
                };
                class Green
                {
                    label = "Woodland";
                    description = "Woodland Marine BDU";
                    image = "#(rgb,8,8,3)color(0.12156863,0.25490198,0,1)";
                };
                class White
                {
                    label = "Winter";
                    description = "Winter Marine BDU";
                    image = "#(rgb,8,8,3)color(0.9411765,0.9411765,0.9411765,1)";
                };
                class Tan
                {
                    label = "Desert";
                    description = "Desert Marine BDU";
                    image = "#(rgb,8,8,3)color(0.85490197,0.6666667,0.3647059,1)";
                };
                class ODST
                {
                    label = "ODST";
                    description = "Pedes primi in Infernum";
                    image = ACEX_ICON(jc_xtd_ODST_ca);
                };
            };
            class Collar
            {
                alwaysSelectable = 1;
                values[] = { "Yes","No" };
            };
            class Shoulders
            {
                alwaysSelectable = 1;
                values[] = { "None","Half","FullOne","FullTwo" };
                class FullOne
                {
                    label = "Full One";
                };
                class FullTwo
                {
                    label = "Full Two";
                };
            };
        };
        
        //Headgear
        class JC_XtdHeadgearMarine
        {
            label = "[HR] Marine Helmets";
            author = AUTHOR;
            options[] = {"Camo","Visor"};
            class Camo
            {
                alwaysSelectable = 1;
                values[] = {"Brown", "Green", "White", "Tan"};
                class Brown
                {
                    label = "Brown";
                    description = "Woodland Marine Helmet";
                    image = "#(rgb,8,8,3)color(0.255,0.161,0,1)";
                };
                class Green
                {
                    label = "Woodland";
                    description = "Woodland Marine Helmet";
                    image = "#(rgb,8,8,3)color(0.12156863,0.25490198,0,1)";
                };
                class White
                {
                    label = "Winter";
                    description = "Winter Marine Helmet";
                    image = "#(rgb,8,8,3)color(0.9411765,0.9411765,0.9411765,1)";
                };
                class Tan
                {
                    label = "Desert";
                    description = "Desert Marine Helmet";
                    image = "#(rgb,8,8,3)color(0.85490197,0.6666667,0.3647059,1)";
                };
            };
            class Visor
            {
                alwaysSelectable = 1;
                values[] = { "None","Eye Piece","Glasses","Vacuum Blue","VacuumYellow" };
                class VacuumYellow
                {
                    label = "Vacuum Yellow";
                    description = "Typically for NCOs";
                };
            };
            class Collar
            {
                alwaysSelectable = 1;
                values[] = { "Yes","No" };
            };
        };
        class JC_XtdHeadgearODST_Reach
        {
            label = "[HR] ODST Helmets";
            author = AUTHOR;
            options[] = {"Basic","Custom"};
            class Basic
            {
                alwaysSelectable = 1;
                values[] = {"Standard"};
                class Standard
                {
                    label = "Standard";
                    description = "Standard ODST Helmet";
                    //image = ACEX_ICON(icon);
                };
            };
            class Custom
            {
                alwaysSelectable = 1;
                values[] = {"Cortez","Dalu","Kodiak","Sailboat","Wizzy"};
                class Cortez
                {
                    label = "Cortez";
                    description = "Cortez's ODST Helmet";
                    //image = ACEX_ICON(icon);
                };
                class Dalu
                {
                    label = "Dalu";
                    description = "Dalu's ODST Helmet";
                    //image = ACEX_ICON(icon);
                };
                class Kodiak
                {
                    label = "Kodiak";
                    description = "Kodiak's ODST Helmet";
                    //image = ACEX_ICON(icon);
                };
                class Sailboat
                {
                    label = "Sailboat";
                    description = "Sailboat's ODST Helmet";
                    //image = ACEX_ICON(icon);
                };
                class Wizzy
                {
                    label = "Wizzy";
                    description = "Wizzy's ODST Helmet";
                    //image = ACEX_ICON(icon);
                };
            };
        };
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
        class JC_XtdVestMarine
        {
            label = "Marine Pouches";
            author = AUTHOR;
            options[] = { "MOS","Kit","Variant" };
            class MOS
            {
                alwaysSelectable = 1;
                values[] = { "Standard","Rifleman","Medic","Engineer","TL" };
                class Standard
                {
                    description = "Misc";
                    image = ACEX_ICON(jc_xtd_unsc_ca);
                };
                class Rifleman
                {
                    description = "Standard Infantry";
                    //image = ACEX_ICON(icon);
                };
                class Medic
                {
                    description = "Navy Combat Medic";
                    image = ACEX_ICON(jc_xtd_medic_ca);
                };
                class Engineer
                {
                    description = "Bob the Builder. Can he fix it?";
                    image = ACEX_ICON(jc_xtd_engineer_ca);
                };
                class TL
                {
                    label = "Team Leader";
                    description = "I am the leader now";
                    //image = ACEX_ICON(icon);
                };
            };
            class Kit
            {
                alwaysSelectable = 1;
                values[] = { "Light","Medium","Heavy","None" };
            };
            class Variant
            {
                alwaysSelectable = 1;
                values[] = { "A","B","C","D" };
            };
        };
        class JC_XtdVestODST_Reach
        {
            label = "[HR] ODST Vests";
            author = AUTHOR;
            options[] = {"Basic","Custom"};
            class Basic
            {
                alwaysSelectable = 1;
                values[] = {"Rifleman","Marksman","CQB","Light"};
                class Rifleman
                {
                    label = "Rifleman";
                    description = "Reach ODST Rifleman Vest";
                    //image = ACEX_ICON(icon);
                };
                class Marksman
                {
                    label = "Marksman";
                    description = "Reach ODST Marksman Vest";
                    //image = ACEX_ICON(icon);
                };
                class CQB
                {
                    label = "CQB";
                    description = "Reach ODST CQB Vest";
                    //image = ACEX_ICON(icon);
                };
                class Light
                {
                    label = "Light";
                    description = "Reach ODST Light Vest";
                    //image = ACEX_ICON(icon);
                };
            };
            class Custom
            {
                alwaysSelectable = 1;
                values[] = {"Cortez","Dalu","Kodiak","Sailboat","Wizzy"};
                class Cortez
                {
                    label = "Cortez";
                    description = "Cortez's ODST Vest";
                    //image = ACEX_ICON(icon);
                };
                class Dalu
                {
                    label = "Dalu";
                    description = "Dalu's ODST Vest";
                    //image = ACEX_ICON(icon);
                };
                class Kodiak
                {
                    label = "Kodiak";
                    description = "Kodiak's ODST Vest";
                    //image = ACEX_ICON(icon);
                };
                class Sailboat
                {
                    label = "Sailboat";
                    description = "Sailboat's ODST Vest";
                    //image = ACEX_ICON(icon);
                };
                class Wizzy
                {
                    label = "Wizzy";
                    description = "Wizzy's ODST Vest";
                    //image = ACEX_ICON(icon);
                };
            };
        };
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