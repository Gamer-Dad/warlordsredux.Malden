class CfgWarlordSectors {
    connections[] = {
        {"AbandonedWarehouse", "Corton"},
        {"AbandonedWarehouse", "LaRiviere"},
        {"AbandonedWarehouse", "SouthPointFaro"},
        {"AirportMilitaryBase", "IslandAirport"},
        {"AirportMilitaryBase", "NorthLighthouse"},
        {"AirportMilitaryBase", "RadioStation"},
        {"AirportMilitaryBase", "RustedBase"},
        {"AretteBeach", "Corton"},
        {"AretteBeach", "GoisseHarbor"},
        {"AretteBeach", "LaPessagne"},
        {"AretteBeach", "SouthPointFaro"},
        {"Arudy", "Dourdan"},
        {"Arudy", "FeasOutpost"},
        {"Arudy", "Larche"},
        {"Arudy", "Lavalle"},
        {"Bosquet", "IslandAirport"},
        {"Bosquet", "SaintLouis"},
        {"Cancon", "CanconHarbor"},
        {"Cancon", "Chapoi"},
        {"Cancon", "LaRiviere"},
        {"CanconHarbor", "LePortSouth"},
        {"CanconHarbor", "SouthPointFaro"},
        {"CanconHarbor", "USSFreedom"},
        {"Chapoi", "Corton"},
        {"Chapoi", "LePortEast"},
        {"Chapoi", "SainteMaarie"},
        {"Corton", "Dorres"},
        {"Corton", "LaPessagne"},
        {"Corton", "LaRiviere"},
        {"Corton", "SainteMaarie"},
        {"Dorres", "Guran"},
        {"Dorres", "SainteMaarie"},
        {"Dourdan", "Houdan"},
        {"Dourdan", "LaTrinte"},
        {"Dourdan", "LumberMill"},
        {"DowntownLePort", "Houdan"},
        {"DowntownLePort", "LePortEast"},
        {"DowntownLePort", "LePortSouth"},
        {"EastLightHouse", "Houdan"},
        {"EastLightHouse", "LePortEast"},
        {"EastLightHouse", "PMCHarbor"},
        {"EastVillage", "LumberMill"},
        {"EastVillage", "Point19Bravo"},
        {"FeasOutpost", "LaPessagne"},
        {"FeasOutpost", "Lavalle"},
        {"FishermansRavine", "GoisseHarbor"},
        {"FishermansRavine", "MorayHarbor"},
        {"FishermansRavine", "Vigny"},
        {"Goisse", "GoisseHarbor"},
        {"Goisse", "Lavalle"},
        {"GoisseHarbor", "LolisseHarbor"},
        {"Guran", "Houdan"},
        {"Houdan", "LePortEast"},
        {"Isaro", "Larche"},
        {"Isaro", "Lavalle"},
        {"Isaro", "SecretRock"},
        {"LaPessagne", "Vigny"},
        {"Larche", "SaintLouis"},
        {"LaTrinte", "Larche"},
        {"LaTrinte", "LumberMill"},
        {"LaTrinte", "SaintLouis"},
        {"Lavalle", "SaintJean"},
        {"LePortEast", "PMCHarbor"},
        {"LePortSouth", "USSFreedom"},
        {"Lolisse", "LolisseHarbor"},
        {"Lolisse", "RustedBase"},
        {"LolisseHarbor", "MorayHarbor"},
        {"LolisseHarbor", "NorthLighthouse"},
        {"MorayAirfield", "MorayHarbor"},
        {"MorayHarbor", "SouthPointFaro"},
        {"PMCBase", "PMCHarbor"},
        {"PMCBase", "SouthPoint"},
        {"PMCHarbor", "USSFreedom"},
        {"Point19Bravo", "SouthPoint"},
        {"RadioStation", "SaintLouis"},
        {"RadioStation", "SecretRock"},
        {"RustedBase", "SecretRock"},
        {"SaintJean", "SecretRock"},
    };

    class AbandonedWarehouse {
        area[] = {159.687, 137.78, 290.002, 1};
        name = "Abandoned Warehouse";
        services[] = {"H"};
        location[] = {2349.925, 3289.7029, 0};
    };

    class AirportMilitaryBase {
        area[] = {106.195, 98.5487, 340.303, 0};
        name = "Airport Military Base";
        disableHome = 1;
        services[] = {"H"};
        location[] = {7511.3267, 10567.572, 0};
    };

    class AretteBeach {
        area[] = {114.14, 93.4463, 228.734, 1};
        name = "Arette Beach";
        disableHome = 1;
        services[] = {"W"};
        location[] = {1622.3571, 4639.5518, 0};
    };

    class Arudy {
        area[] = {149.603, 196.481, 65.703, 0};
        name = "Arudy";
        location[] = {5537.8057, 6990.7578, 0};
    };

    class Bosquet {
        area[] = {94.2095, 94.2095, 65.703, 0};
        name = "Bosquet";
        location[] = {7909.3691, 9094.2676, 0};
    };

    class Cancon {
        area[] = {210.048, 284.901, 55.901, 0};
        name = "Cancon";
        location[] = {5376.623, 2813.4751, 0};
    };

    class CanconHarbor {
        area[] = {107.975, 107.975, 128.18, 0};
        name = "Cancon Harbor";
        disableHome = 1;
        services[] = {"W"};
        location[] = {5773.9609, 2421.427, 0};
    };

    class Chapoi {
        area[] = {255.106, 221.083, 148.187, 1};
        name = "Chapoi";
        location[] = {5836.4912, 3525.0879, 0};
    };

    class Corton {
        area[] = {103.583, 103.583, 121.177, 0};
        name = "Corton";
        location[] = {3790.9541, 4937.9502, 0};
    };

    class Dorres {
        area[] = {160.092, 160.092, 121.177, 0};
        name = "Dorres";
        location[] = {5291.3101, 4728.979, 0};
    };

    class Dourdan {
        area[] = {225, 225, 65.703, 0};
        name = "Dourdan";
        location[] = {7035.98, 7143.3682, 0};
    };

    class DowntownLePort {
        area[] = {176.347, 279.714, 200.804, 0};
        name = "Downtown Le Port";
        location[] = {8283.9473, 3202.3235, 0};
    };

    class EastLightHouse {
        area[] = {105.295, 105.295, 65.703, 0};
        name = "East Light House";
        services[] = {"W"};
        location[] = {8291.293, 6012.1919, 0};
    };

    class EastVillage {
        area[] = {113.186, 115.617, 65.703, 0};
        name = "East Village";
        disableHome = 1;
        services[] = {"H", "W"};
        location[] = {8537.6152, 7688.5361, 0};
    };

    class FeasOutpost {
        area[] = {175, 175, 121.177, 0};
        name = "Feas Outpost";
        location[] = {4337.7959, 6777.1631, 0};
    };

    class FishermansRavine {
        area[] = {79.2219, 57.5868, 271.223, 1};
        name = "Fisherman's Ravine";
        disableHome = 1;
        services[] = {"W"};
        location[] = {2999.751, 7155.167, 0};
    };

    class Goisse {
        area[] = {175, 175, 121.177, 0};
        name = "Goisse";
        location[] = {3598.7539, 8516.8516, 0};
    };

    class GoisseHarbor {
        area[] = {99.9714, 99.9714, 121.177, 0};
        name = "Goisse Harbor";
        disableHome = 1;
        services[] = {"W"};
        location[] = {3043.907, 8480.7334, 0};
    };

    class Guran {
        area[] = {110.489, 110.489, 121.177, 0};
        name = "Guran";
        location[] = {6584.6411, 6022.2271, 0};
    };

    class Houdan {
        area[] = {156.84, 100, 265.179, 1};
        name = "Houdan";
        location[] = {7111.5869, 6104.7129, 0};
    };

    class Isaro {
        area[] = {62.6279, 53.4675, 80.9078, 0};
        name = "Isaro";
        location[] = {5070.4702, 8366.6563, 0};
    };

    class IslandAirport {
        area[] = {292.387, 292.387, 88.5251, 0};
        name = "Island Airport";
        disableHome = 1;
        services[] = {"H", "A"};
        location[] = {8079.0449, 9989.4014, 0};
    };

    class LaPessagne {
        area[] = {127.113, 161.647, 214.215, 1};
        name = "La Pessagne";
        location[] = {3108.9319, 6308.9609, 0};
    };

    class Larche {
        area[] = {310.768, 221.571, 102.095, 0};
        name = "Larche";
        location[] = {6041.8809, 8669.292, 0};
    };

    class LaRiviere {
        area[] = {260.53, 208.945, 52.5228, 0};
        name = "La Riviere";
        services[] = {"W"};
        location[] = {3697.6836, 3254.9094, 0};
    };

    class LaTrinte {
        area[] = {225, 400, 46.7184, 0};
        name = "La Trinte";
        location[] = {7256.0669, 7959.2969, 0};
    };

    class Lavalle {
        area[] = {99.3435, 99.3435, 65.703, 0};
        name = "Lavalle";
        location[] = {5069.8589, 7365.5469, 0};
    };

    class LePortEast {
        area[] = {176.347, 279.714, 178.267, 0};
        name = "Le Port East";
        disableHome = 1;
        services[] = {"W"};
        location[] = {8449.4385, 3789.186, 0};
    };

    class LePortSouth {
        area[] = {176.347, 279.714, 149.405, 0};
        name = "Le Port South";
        disableHome = 1;
        services[] = {"W"};
        location[] = {7842.4561, 3266.9341, 0};
    };

    class Lolisse {
        area[] = {85.8941, 85.8941, 65.703, 0};
        name = "Lolisse";
        location[] = {5546.2432, 11190.831, 0};
    };

    class LolisseHarbor {
        area[] = {73.2688, 73.2688, 65.327, 0};
        name = "Lolisse Harbor";
        disableHome = 1;
        services[] = {"W"};
        location[] = {5513.5249, 11628.908, 0};
    };

    class LumberMill {
        area[] = {133.713, 136.144, 65.703, 0};
        name = "Lumber Mill";
        location[] = {7799.606, 7555.0342, 0};
    };

    class MorayAirfield {
        area[] = {92.5382, 53.6847, 0.51, 1};
        name = "Moray Airfield";
        disableHome = 1;
        services[] = {"A", "H"};
        location[] = {751.13281, 12149.688, 0};
    };

    class MorayHarbor {
        area[] = {69.3579, 71.0993, 51.0743, 0};
        name = "Moray Harbor";
        disableHome = 1;
        services[] = {"W"};
        location[] = {946.32922, 11891.597, 0};
    };

    class NorthLighthouse {
        area[] = {58.8733, 58.8733, 65.703, 0};
        name = "North Lighthouse";
        location[] = {6791.3169, 11426.996, 0};
    };

    class PMCBase {
        area[] = {155.769, 155.769, 65.703, 0};
        name = "PMC Base";
        disableHome = 1;
        services[] = {"H"};
        location[] = {9748.2695, 3908.3379, 0};
    };

    class PMCHarbor {
        area[] = {121.201, 96.2009, 262.872, 1};
        name = "PMC Harbor";
        disableHome = 1;
        services[] = {"W"};
        location[] = {9349.4326, 3839.2739, 0};
    };

    class Point19Bravo {
        area[] = {113.186, 115.617, 65.703, 0};
        name = "Point 19 Bravo";
        disableHome = 1;
        services[] = {"H", "W"};
        location[] = {9699.4775, 5921.3242, 0};
    };

    class RadioStation {
        area[] = {153.592, 251.028, 43.549, 1};
        name = "Radio Station";
        location[] = {7074.7529, 10069.099, 0};
    };

    class RustedBase {
        area[] = {223.895, 137.311, 0.984378, 1};
        name = "Rusted Base";
        disableHome = 1;
        services[] = {"H"};
        location[] = {6088.9072, 10780.773, 0};
    };

    class SainteMaarie {
        area[] = {103.583, 103.583, 121.177, 0};
        name = "Sainte Maarie";
        location[] = {5580.1372, 4234.9521, 0};
    };

    class SaintJean {
        area[] = {214.44, 99.3435, 80.9078, 0};
        name = "Saint Jean";
        location[] = {4495.812, 8236.3848, 0};
    };

    class SaintLouis {
        area[] = {210.625, 210.625, 65.703, 0};
        name = "Saint Louis";
        location[] = {7155.127, 9008.6738, 0};
    };

    class SecretRock {
        area[] = {140.532, 140.532, 121.177, 0};
        name = "Secret Rock";
        location[] = {5972.9028, 10035.822, 0};
    };

    class SouthPoint {
        area[] = {133.237, 133.237, 65.703, 0};
        name = "South Point";
        disableHome = 1;
        services[] = {"H", "W"};
        location[] = {11610.73, 4512.627, 0};
    };

    class SouthPointFaro {
        area[] = {107.975, 107.975, 128.18, 0};
        name = "South Point Faro";
        disableHome = 1;
        services[] = {"W", "H"};
        location[] = {1123.327, 652.02301, 0};
    };

    class USSFreedom {
        area[] = {350, 200, 355.044, 1};
        name = "USS Freedom";
        disableHome = 1;
        carrier = 1;
        services[] = {"W", "H", "A"};
        location[] = {7792.9746, 449.625, 0};
    };

    class Vigny {
        area[] = {131.192, 128.683, 224.104, 1};
        name = "Vigny";
        location[] = {3104.4121, 6829.9971, 0};
    };

    class Wait {
        area[] = {0, 0, 0, 0};
        disableHome = 1;
        location[] = {12000, 12000, 0};
        name = "Wait";
    };
};