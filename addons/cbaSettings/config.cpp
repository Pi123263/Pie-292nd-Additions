class CfgPatches
{
	class Pie292ndAdds_CBASettings
	{
		name="Pie 292nd Additions CBA Settings";
		author="Pi123263";
		url="";
		requiredVersion=2;
		requiredAddons[]=
		{
			"A3_Functions_F",
			"A3_Data_F_Oldman_Loadorder"
		};
		units[]={};
		weapons[]={};
	};
};

class CfgSettings {
    class CBA {
        class Versioning {
            class Pie_292Adds {
                class dependencies {
                    CBA[] = {"cba_main", {3,12,0}, "(true)"};
                };
            };
        };
    };
};

class Extended_PreInit_Eventhandlers {
	Pie_292Adds_CBASettings = call compile preprocessFileLineNumbers "292ndPieAdds\addons\cbaSettings\XEH_preInit.sqf";
};