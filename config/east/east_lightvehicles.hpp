class LightVehicles {
    class O_Quadbike_01_F {
        capValue = 1;
        cost = 20;
        
        offset[] = {0, 3, 0};
        requirements[] = {};
    }; // "Quad Bike"

    class O_G_Offroad_01_armed_F {
        capValue = 1;
        cost = 150;
        
        offset[] = {0, 5, 0};
        rearm = 120;
        requirements[] = {};

        class Gunner: WLTurretDefaults {
            addMagazines[] = {
                "100Rnd_127x99_mag_Tracer_Yellow",
                "100Rnd_127x99_mag_Tracer_Yellow",
                "100Rnd_127x99_mag_Tracer_Yellow",
                "100Rnd_127x99_mag_Tracer_Yellow"
            };
            addWeapons[] = {
                "HMG_M2_Mounted"
            };
            removeMagazines[] = {};
            removeWeapons[] = {
                "HMG_M2_Mounted"
            };
            turret[] = { 0 };
        };
    }; // "Offroad (HMG)"

    class O_G_Offroad_01_AT_F {
        capValue = 1;
        cost = 500;
        
        offset[] = {0, 5, 0};
        rearm = 180;
        requirements[] = {};

        class Gunner: WLTurretDefaults {
            addMagazines[] = {
                "12Rnd_SPG9_HEAT"
            };
            addWeapons[] = {
                "launcher_SPG9"
            };
            removeMagazines[] = {};
            removeWeapons[] = {
                "launcher_SPG9"
            };
            turret[] = { 0 };
        };
    }; // "Offroad (AT)"

    class O_LSV_02_armed_F {
        capValue = 1;
        cost = 200;
        
        offset[] = {0, 5, 0};
        rearm = 200;
        requirements[] = {};
    }; // "Qilin (Minigun)"

    class O_LSV_02_AT_F {
        capValue = 1;
        cost = 750;
        
        offset[] = {0, 5, 0};
        rearm = 200;
        requirements[] = {};

        class Gunner: WLTurretDefaults {
            addMagazines[] = {
                "Vorona_HEAT",
                "Vorona_HEAT",
                "Vorona_HEAT",
                "Vorona_HEAT"
            };
            addWeapons[] = {
                "missiles_Vorona"
            };
            removeMagazines[] = {};
            removeWeapons[] = {
                "missiles_Vorona"
            };
            turret[] = { 0 };
        };
    }; // "Qilin (AT)"

        class O_MRAP_02_F {
        capValue = 1;
        cost = 300;
        
        requirements[] = {};
    }; // "Ifrit"

    class O_MRAP_02_hmg_F {
        aps = 1;
        capValue = 2;
        cost = 900;
        
        rearm = 300;
        requirements[] = {};
    }; // "Ifrit HMG"

    class O_MRAP_02_gmg_F {
        aps = 1;
        capValue = 2;
        cost = 1250;
        
        rearm = 300;
        requirements[] = {};
    }; // "Ifrit GMG"

    class O_Truck_01_flatbed_F {
        capValue = 1;
        cost = 500;
        
        name = "HEMTT Flatbed";
        requirements[] = {};
        spawn = "B_Truck_01_flatbed_F";
        textures[] = {
            "\a3\soft_f_Exp\truck_01\data\truck_01_ext_01_olive_co.paa",
            "\a3\soft_f_Exp\truck_01\data\truck_01_ext_02_olive_co.paa",
            "\a3\Soft_F_Enoch\Truck_01\Data\truck_01_ammo_pacific_co.paa",
            "\a3\Soft_F_Enoch\Truck_01\Data\Truck_01_cargo_pacific_CO.paa"
        };
    }; // "HEMTT Flatbed"

    class O_Truck_03_transport_F {
        capValue = 1;
        cost = 200;
        
        requirements[] = {};
    }; // "Tempest Transport"

    class O_Truck_03_ammo_F {
        capValue = 1;
        cost = 1000;
        
        requirements[] = {};
    }; // "Tempest Ammo"

    class O_Truck_03_Fuel_F {
        capValue = 1;
        cost = 1000;
        
        requirements[] = {};
    }; // "Tempest Fuel"

    class O_Truck_03_Repair_F {
        capValue = 1;
        cost = 1000;
        
        requirements[] = {};
    }; // "Tempest Repair"
    
    class O_Truck_03_device_F {
        aps = 4;
        capValue = 1;
        cost = 1500;
        
        requirements[] = {};
    }; // "Tempest Device"

    class O_LSV_02_AT_M_F {
        capValue = 1;
        cost = 1100;
        description = "Qilin (AT-M) is a variant of the Qilin armed with a Firefist AT missile launcher.";
        
        name = "Qilin (AT-M)";
        offset[] = {0, 5, 0};
        rearm = 200;
        requirements[] = {};
        spawn = "O_LSV_02_AT_F";
        variant = 1;

        class Gunner: WLTurretDefaults {
            addMagazines[] = {
                "2Rnd_127mm_Firefist_missiles",
                "2Rnd_127mm_Firefist_missiles",
                "2Rnd_127mm_Firefist_missiles",
                "2Rnd_127mm_Firefist_missiles",
                "2Rnd_127mm_Firefist_missiles"
            };
            addWeapons[] = {
                "missiles_Firefist"
            };
            reloadOverride = 6;
            removeMagazines[] = {
                "Vorona_HEAT"
            };
            removeWeapons[] = {
                "missiles_Vorona"
            };
            turret[] = { 0 };
        };
    }; // Qilin (AT-M)

    class O_MRAP_02_gmg_m_F {
        aps = 2;
        capValue = 2;
        cost = 1500;
        description = "Ifrit-M is a variant of the Ifrit armed with a 20mm autocannon.";
        
        name = "Ifrit-M Autocannon";
        rearm = 300;
        requirements[] = {};
        spawn = "O_MRAP_02_gmg_F";
        variant = 1;

        class Gunner: WLTurretDefaults {
            addMagazines[] = {
                "60Rnd_20mm_HE_shells",
                "60Rnd_20mm_HE_shells",
                "60Rnd_20mm_HE_shells",
                "60Rnd_20mm_AP_shells",
                "60Rnd_20mm_AP_shells",
                "200Rnd_338_Mag",
                "200Rnd_338_Mag"
            };
            addWeapons[] = {
                "cannon_20mm",
                "MMG_02_coax"
            };
            removeMagazines[] = {
                "96Rnd_40mm_G_belt"
            };
            removeWeapons[] = {
                "GMG_40mm"
            };
            turret[] = { 0 };
        };
    }; // "Ifrit-M Autocannon"

    //     class O_LSV_01_AT_TV_F {
    //     ammoOverrides[] = {
    //         {"M_127mm_Firefist_AT", {"M_Spike", "Spike (TV-Guided)"}}
    //     };
    //     capValue = 1;
    //     cost = 2000;
    //     description = "Qilin (Spike AT) is a variant of the Prowler AT.";
        
    //     name = "Qilin (Spike AT)";
    //     offset[] = {0, 5, 0};
    //     rearm = 200;
    //     requirements[] = {};
    //     spawn = "O_LSV_02_AT_F";
    //     variant = 1;

    //     class Gunner: WLTurretDefaults {
    //         addMagazines[] = {
    //             "2Rnd_127mm_Firefist_missiles",
    //             "2Rnd_127mm_Firefist_missiles",
    //             "2Rnd_127mm_Firefist_missiles"
    //         };
    //         addWeapons[] = {
    //             "missiles_Firefist"
    //         };
    //         removeMagazines[] = {
    //             "Vorona_HEAT"
    //         };
    //         removeWeapons[] = {
    //             "missiles_Vorona"
    //         };
    //         turret[] = { 0 };
    //     };
    // }; // Qilin (Spike AT)
};