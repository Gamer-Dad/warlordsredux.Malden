class HeavyVehicles {
        class B_APC_Wheeled_03_rcws_F {
        aps = 2;
        capValue = 2;
        cost = 1500;
        disallowMagazines[] = {
            "4Rnd_GAA_missiles"
        };
        rearm = 500;
        name = "LAV-III Stryker ICV";
        description = "The Stryker is a family of eight-wheeled armored fighting vehicles derived from the Canadian LAV III.";
        requirements[] = {};
        spawn = "I_APC_Wheeled_03_cannon_F";
        variant = 1;
        textures[] = {
        "A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext_eaf_co.paa",
        "A3\Armor_F_Enoch\apc_tracked_03\data\apc_tracked_03_ext2_eaf_co.paa",
        "A3\Armor_F_Enoch\apc_tracked_03\Data\camonet_EAF_green_CO.paa",
        "A3\Armor_F_Enoch\apc_tracked_03\data\cage_EAF_CO.paa"
        };
        class Gunner: WLTurretDefaults {
            addMagazines[] = {
                "96Rnd_40mm_G_belt",
                "96Rnd_40mm_G_belt"
            };
            addWeapons[] = {
                "GMG_40mm"
            };
            removeMagazines[] = {
                "60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
                "60Rnd_30mm_APFSDS_shells_Tracer_Yellow",
                "140Rnd_30mm_MP_shells_Tracer_Yellow",
                "140Rnd_30mm_MP_shells_Tracer_Yellow",
                "5Rnd_GAT_missiles",
                "5Rnd_GAT_missiles",
                "2Rnd_GAT_missiles"
            };
            removeWeapons[] = {
                "missiles_titan",
                "autocannon_40mm_CTWS"
            };
            turret[] = { 0 };
        };
    }; // "LAV-III Stryker ICV"

        class B_APC_Wheeled_01_cannon_F {
        aps = 2;
        capValue = 3;
        cost = 2900;
        rearm = 500;
        requirements[] = {};
    }; // "AMV-7 Marshall"


    class B_APC_Tracked_01_CRV_F {
        aps = 2;
        capValue = 2;
        cost = 2500;
        rearm = 400;
        requirements[] = {};
    }; // "CRV-6e Bobcat"

    class B_APC_Tracked_01_rcws_F {
        aps = 2;
        capValue = 3;
        cost = 2000;
        rearm = 400;
        requirements[] = {};
        class Gunner: WLTurretDefaults {
            addMagazines[] = {
                "60Rnd_30mm_APFSDS_shells_Tracer_Red",
                "60Rnd_30mm_APFSDS_shells_Tracer_Red",
                "140Rnd_30mm_MP_shells_Tracer_Red",
                "140Rnd_30mm_MP_shells_Tracer_Red"
            };
            addWeapons[] = {
                "autocannon_30mm_CTWS"
            };
            removeMagazines[] = {
                "96Rnd_40mm_G_belt"
            };
            removeWeapons[] = {
                "GMG_40mm"
            };
            turret[] = { 0 };
        };
    }; // "IFV-6c Panther"

    // class B_APC_Wheeled_01_recon_F {
    //     aps = 2;
    //     capValue = 1;
    //     cost = 2700;
    //     description = "AMV-7 Marshall (Recon) is a variant of the AMV-7 Marshall armed with a powerful scanner.";
    //     hasHMD = 1;
    //     hasScanner = 1;
    //     name = "AMV-7 Marshall (Recon)";
    //     rearm = 500;
    //     requirements[] = {};
    //     spawn = "B_APC_Wheeled_01_cannon_F";
    //     variant = 1;

    //     class Gunner: WLTurretDefaults {
    //         addMagazines[] = {};
    //         addWeapons[] = {};
    //         hideTurret = 1;
    //         removeMagazines[] = {
    //             "200Rnd_762x51_Belt_Red",
    //             "40Rnd_40mm_APFSDS_Tracer_Red_shells",
    //             "60Rnd_40mm_GPR_Tracer_Red_shells"
    //         };
    //         removeWeapons[] = {
    //             "LMG_coax",
    //             "autocannon_40mm_CTWS"
    //         };
    //         turret[] = { 0 };
    //     };
    // }; // "AMV-7 Marshall (Recon)"

    // class B_APC_Wheeled_01_cannon_up_F {
    //     aps = 2;
    //     capValue = 3;
    //     cost = 3200;
    //     description = "AMV-7 Marshall UP is a variant of the AMV-7 Marshall armed with a larger magazine 40mm cannon.";
    //     name = "AMV-7 Marshall UP";
    //     rearm = 500;
    //     requirements[] = {};
    //     spawn = "B_APC_Wheeled_01_cannon_F";
    //     variant = 1;

    //     class Gunner: WLTurretDefaults {
    //         addMagazines[] = {
    //             "240Rnd_40mm_GPR_Tracer_Red_shells",
    //             "240Rnd_40mm_GPR_Tracer_Red_shells",
    //             "160Rnd_40mm_APFSDS_Tracer_Red_shells",
    //             "160Rnd_40mm_APFSDS_Tracer_Red_shells"
    //         };
    //         addWeapons[] = {
    //             "autocannon_40mm_VTOL_01"
    //         };
    //         removeMagazines[] = {
    //             "60Rnd_40mm_GPR_Tracer_Red_shells",
    //             "40Rnd_40mm_APFSDS_Tracer_Red_shells"
    //         };
    //         removeWeapons[] = {
    //             "autocannon_40mm_CTWS"
    //         };
    //         turret[] = { 0 };
    //     };
    // }; // "AMV-7 Marshall UP"

    // class B_AFV_Wheeled_01_export_cannon_F {
    //     aps = 2;
    //     capValue = 4;
    //     cost = 3700;
    //     description = "Rhino MGS-E is a variant of the Rhino MGS armed with a weaker 105mm cannon.";
    //     
    //     name = "Rhino MGS-E";
    //     rearm = 500;
    //     requirements[] = {};
    //     spawn = "B_AFV_Wheeled_01_up_cannon_F";
    //     variant = 1;

    //     class Gunner: WLTurretDefaults {
    //         addMagazines[] = {
    //             "40Rnd_105mm_APFSDS_T_Red"
    //         };
    //         addWeapons[] = {
    //             "cannon_105mm"
    //         };
    //         removeMagazines[] = {
    //             "12Rnd_120mm_APFSDS_shells_Tracer_Red",
    //             "8Rnd_120mm_HE_shells_Tracer_Red",
    //             "8Rnd_120mm_HEAT_MP_T_Red",
    //             "4Rnd_120mm_LG_cannon_missiles"
    //         };
    //         removeWeapons[] = {
    //             "cannon_120mm"
    //         };
    //         turret[] = { 0 };
    //     };
    // }; // "Rhino MGS-E"

    // class B_AFV_Wheeled_01_cannon_F {
    //     aps = 2;
    //     capValue = 4;
    //     cost = 4500;
    //     
    //     rearm = 500;
    //     requirements[] = {};
    // }; // "Rhino MGS"

    // class B_AFV_Wheeled_01_up_cannon_F {
    //     aps = 2;
    //     capValue = 4;
    //     cost = 5000;
    //     
    //     rearm = 500;
    //     requirements[] = {};
    // }; // "Rhino MGS UP"

    // class B_MBT_01_cannon_F {
    //     aps = 3;
    //     capValue = 4;
    //     cost = 5800;
    //     disallowMagazines[] = {
    //         "4Rnd_120mm_LG_cannon_missiles"
    //     };
    //     
    //     rearm = 600;
    //     requirements[] = {};
    // }; // "M2A1 Slammer"

    // class B_MBT_01_TUSK_F {
    //     aps = 3;
    //     capValue = 4;
    //     cost = 6500;
    //     disallowMagazines[] = {
    //         "4Rnd_120mm_LG_cannon_missiles"
    //     };
    //     
    //     rearm = 600;
    //     requirements[] = {};
    // }; // "M2A1 Slammer UP"

    // class B_MBT_03_cannon_F {
    //     aps = 3;
    //     capValue = 4;
    //     cost = 8000;
    //     disallowMagazines[] = {
    //         "4Rnd_120mm_LG_cannon_missiles"
    //     };
    //     
    //     name = "M52 Kuma";
    //     rearm = 600;
    //     requirements[] = {};
    //     spawn = "I_MBT_03_cannon_F";
    //     textures[] = {
    //         "src\img\camo\kuma01.jpg",
    //         "src\img\camo\kuma02.jpg",
    //         "src\img\camo\kuma03.jpg",
    //         "\a3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
    //     };
    //}; // "M52 Kuma"

    // class B_MBT_01_TUSK_Railgun_F {
    //     aps = 3;
    //     capValue = 4;
    //     cost = 13000;
    //     description = "M2X Slammer (Railgun) is a variant of the M2A1 Slammer armed with a railgun.";
    //     
    //     name = "M2X Slammer (Railgun)";
    //     rearm = 600;
    //     requirements[] = {};
    //     spawn = "B_MBT_01_TUSK_F";
    //     variant = 1;
    //
    //     class Gunner: WLTurretDefaults {
    //         addMagazines[] = {
    //             "RailGun_01_DummyMagazine",
    //             "60Rnd_75mm_RailGun_APFSDS_mag"
    //         };
    //         addWeapons[] = {
    //             "cannon_railgun",
    //             "cannon_railgun_fake"
    //         };
    //         removeMagazines[] = {
    //             "24Rnd_120mm_APFSDS_shells_Tracer_Red",
    //             "12Rnd_120mm_HE_shells_Tracer_Red",
    //             "12Rnd_120mm_HEAT_MP_T_Red"
    //         };
    //         removeWeapons[] = {
    //             "cannon_120mm"
    //         };
    //         turret[] = { 0 };
    //     };
    // }; // "M2X Slammer (Railgun)"

    // class B_MBT_01_arty_F {
    //     aps = 1;
    //     capValue = 4;
    //     cost = 20000;
    //     disallowMagazines[] = {
    //         "2Rnd_155mm_Mo_Cluster",
    //         "2Rnd_155mm_Mo_Cluster_O"
    //     };
    //     
    //     rearm = 1800;
    //     requirements[] = {};
    // }; // "M4 Scorcher"

    // class B_MBT_01_mlrs_F {
    //     aps = 1;
    //     capValue = 4;
    //     cost = 20000;
    //     disallowMagazines[] = {
    //         "12Rnd_230mm_rockets_cluster"
    //     };
    //     
    //     rearm = 1800;
    //     requirements[] = {};
    // }; // "M5 Sandstorm MLRS"
};