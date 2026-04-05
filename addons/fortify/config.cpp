class CfgPatches
{
	class Pie292ndAdds_Fortify
	{
		name="Pie 292nd Additions Ace Fortify";
		author="Pi123263";
		url="";
		requiredVersion=2;
		requiredAddons[]=
		{
			"A3_Functions_F",
			"A3_Data_F_AoW_Loadorder"
		};
		units[]={};
		weapons[]={};
	};
};

class ACEX_Fortify_Presets {
    class Pie_FortifyPreset_292West {
        displayName = "292 Preset West";
        objects[] = {
            {"Pie_Fortify_AmmoBoxObject",			1},
			{"Land_HelipadCircle_F",				1},
			{"ACE_Track",							5},
			{"ACE_Wheel",							5},
			{"Land_BagBunker_Small_F",				5},
			{"Land_BagFence_Long_F",				5}, 
			{"Land_BagFence_Short_F",				5},
			{"Land_BagFence_Round_F",				5}, 
			{"Land_ladder_half_EP1",				5},
			{"Land_Razorwire_F",					5},
			{"Land_SandbagBarricade_01_half_F",		10},
			{"Land_SandbagBarricade_01_F",			10},
			{"Land_SandbagBarricade_01_hole_F",		10},
			{"Wire",								10},
			{"Land_ladder",							10},
			{"Land_CzechHedgehog_01_new_F",			15},
			{"B_G_HMG_02_high_F",					25},
			{"CUP_A2_Road_Bridge_wood_25",			50}
        };
    };
	
	class Pie_FortifyPreset_292Indep {
        displayName = "292 Preset Indep";
        objects[] = {
            {"Pie_Fortify_AmmoBoxObject",			1},
			{"Land_HelipadCircle_F",				1},
			{"ACE_Track",							5},
			{"ACE_Wheel",							5},
			{"Land_BagBunker_Small_F",				5},
			{"Land_BagFence_Long_F",				5}, 
			{"Land_BagFence_Short_F",				5},
			{"Land_BagFence_Round_F",				5}, 
			{"Land_ladder_half_EP1",				5},
			{"Land_Razorwire_F",					5},
			{"Land_SandbagBarricade_01_half_F",		10},
			{"Land_SandbagBarricade_01_F",			10},
			{"Land_SandbagBarricade_01_hole_F",		10},
			{"Wire",								10},
			{"Land_ladder",							10},
			{"Land_CzechHedgehog_01_new_F",			15},
			{"B_G_HMG_02_high_F",					25},
			{"CUP_A2_Road_Bridge_wood_25",			50}
        };
    };
};


class CfgFunctions 
{
	
	class Pie	{
		class fortify {
			file = "292ndPieAdds\addons\fortify\functions";
			
			class CSWAmmoReplacer {
				//file = "292ndPieAdds\addons\fortify\functions\fn_CSWAmmoReplacer.sqf";
				postInit = 1;
			};
		};
	};
};

//file = "292ndPieAdds\fortify\functions\Pie_292ndFortifyFunctions_CSWAmmoReplacer.sqf"; "P:\292ndPieAdds\addons\fortify\functions\fn_CSWAmmoReplacer.sqf"