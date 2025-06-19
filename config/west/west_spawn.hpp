class Spawn {
    class B_Truck_01_medical_F {
        capValue = 1;
        
        name = "NATO Medical Truck";
    }; // HEMMT Spawn Truck

    class B_Slingload_01_Medevac_F {
        
        loadable[] = { 0, 0, 0 };
        name = "NATO Medical Pod";
    }; // Huron Spawn

    class Land_TentA_F {
        garbageCollector = 1;
        name = "Deployed Tent";
    }; // 'Deployed Tent'

    class ForwardBaseSupplies {
        cost = 500;
        demolishable = 1;
        
        loadable[] = { 0, 0, 0 };
        name = "Forward Base Supplies";
        spawn = "VirtualReammoBox_camonet_F";
    };  // 'Forward Base Supply"

    class RuggedTerminal_01_communications_hub_F {
        
        name = "Forward Base";
    }; // 'Forward Base"
};