class CfgPatches
{
	class Pie292ndAdds_aceActions
	{
		name="Pie 292nd Additions Ace Actions";
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

class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle {
        class ACE_Actions {
			class ACE_MainActions {
				class Pie292Adds_AttachFlagToVehicle {
					displayName = "Add 292nd Flag to Vehicle";
					condition = "alive _target";
					distance = 4;
					statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\292ndflag.paa';";
				
					class Pie292Adds_AttachFlagToVehicle_Specialities {
						displayName = "Specialities";
						condition = "true";
						statement = "true";
						
						class Pie292Adds_AttachFlagToVehicle_Kestrel {
							displayName = "Kestrel";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Kestrel.paa';";
						};
					
						class Pie292Adds_AttachFlagToVehicle_Razor {
							displayName = "Razor";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Razor.paa';";
						};
						
						class Pie292Adds_AttachFlagToVehicle_Paladin {
							displayName = "Paladin";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Paladin.paa';";
						};
						
						class Pie292Adds_AttachFlagToVehicle_Bandit {
							displayName = "Bandit";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Bandit.paa';";
						};
						
						class Pie292Adds_AttachFlagToVehicle_Quickdraw {
							displayName = "Quickdraw";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Quickdraw.paa';";
						};
                    };

					
                    class Pie292Adds_AttachFlagToVehicle_Lion {
                        displayName = "Lion";
                        condition = "true";
                        statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Lion.paa';";
                    };
					

					class Pie292Adds_AttachFlagToVehicle_Echo {
						displayName = "Echo";
						condition = "true";
						statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Echo.paa';";
						
						class Pie292Adds_AttachFlagToVehicle_Python {
							displayName = "Python";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Python.paa';";
						};
						
						class Pie292Adds_AttachFlagToVehicle_Phalanx {
							displayName = "Phalanx";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Phalanx.paa';";
						};
						
						class Pie292Adds_AttachFlagToVehicle_Knight {
							displayName = "Knight";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Knight.paa';";
						};
						
						class Pie292Adds_AttachFlagToVehicle_Legion {
							displayName = "Legion";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Legion.paa';";
						};
                    };
					
					
                    class Pie292Adds_AttachFlagToVehicle_Foxtrot {
                        displayName = "Foxtrot";
                        condition = "true";
                        statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Foxtrot.paa';";
						
						class Pie292Adds_AttachFlagToVehicle_Cobra {
							displayName = "Cobra";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Cobra.paa';";
						};
						
						class Pie292Adds_AttachFlagToVehicle_Longbow {
							displayName = "Longbow";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Longbow.paa';";
						};
						
						class Pie292Adds_AttachFlagToVehicle_Saracen {
							displayName = "Saracen";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Saracen.paa';";
						};
						
						class Pie292Adds_AttachFlagToVehicle_Crusader {
							displayName = "Crusader";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Crusader.paa';";
						};
                    };
					
					
					class Pie292Adds_AttachFlagToVehicle_Overflow {
                        displayName = "Overflow";
                        condition = "true";
                        statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Overflow.paa';";
                    };
				
				
					class Pie292Adds_RemoveFlagFromVehicle {
                        displayName = "Remove Flag";
                        condition = "true";
                        statement = "_target forceFlagTexture '';";
                    };
				};
			};
		};
    };




class Tank: LandVehicle {
        class ACE_Actions {
			class ACE_MainActions {
				class Pie292Adds_AttachFlagToVehicle {
					displayName = "Add 292nd Flag to Vehicle";
					condition = "alive _target";
					distance = 4;
					statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\292ndflag.paa';";
				
					class Pie292Adds_AttachFlagToVehicle_Specialities {
						displayName = "Specialities";
						condition = "true";
						statement = "true";
						
						class Pie292Adds_AttachFlagToVehicle_Kestrel {
							displayName = "Kestrel";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Kestrel.paa';";
						};
					
						class Pie292Adds_AttachFlagToVehicle_Razor {
							displayName = "Razor";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Razor.paa';";
						};
						
						class Pie292Adds_AttachFlagToVehicle_Paladin {
							displayName = "Paladin";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Paladin.paa';";
						};
						
						class Pie292Adds_AttachFlagToVehicle_Bandit {
							displayName = "Bandit";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Bandit.paa';";
						};
						
						class Pie292Adds_AttachFlagToVehicle_Quickdraw {
							displayName = "Quickdraw";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Quickdraw.paa';";
						};
                    };

					
                    class Pie292Adds_AttachFlagToVehicle_Lion {
                        displayName = "Lion";
                        condition = "true";
                        statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Lion.paa';";
                    };
					

					class Pie292Adds_AttachFlagToVehicle_Echo {
						displayName = "Echo";
						condition = "true";
						statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Echo.paa';";
						
						class Pie292Adds_AttachFlagToVehicle_Python {
							displayName = "Python";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Python.paa';";
						};
						
						class Pie292Adds_AttachFlagToVehicle_Phalanx {
							displayName = "Phalanx";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Phalanx.paa';";
						};
						
						class Pie292Adds_AttachFlagToVehicle_Knight {
							displayName = "Knight";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Knight.paa';";
						};
						
						class Pie292Adds_AttachFlagToVehicle_Legion {
							displayName = "Legion";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Legion.paa';";
						};
                    };
					
					
                    class Pie292Adds_AttachFlagToVehicle_Foxtrot {
                        displayName = "Foxtrot";
                        condition = "true";
                        statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Foxtrot.paa';";
						
						class Pie292Adds_AttachFlagToVehicle_Cobra {
							displayName = "Cobra";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Cobra.paa';";
						};
						
						class Pie292Adds_AttachFlagToVehicle_Longbow {
							displayName = "Longbow";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Longbow.paa';";
						};
						
						class Pie292Adds_AttachFlagToVehicle_Saracen {
							displayName = "Saracen";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Saracen.paa';";
						};
						
						class Pie292Adds_AttachFlagToVehicle_Crusader {
							displayName = "Crusader";
							condition = "true";
							statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Crusader.paa';";
						};
                    };
					
					
					class Pie292Adds_AttachFlagToVehicle_Overflow {
                        displayName = "Overflow";
                        condition = "true";
                        statement = "_target forceFlagTexture '292ndPieAdds\addons\data\flags\flag_Overflow.paa';";
                    };
				
				
					class Pie292Adds_RemoveFlagFromVehicle {
                        displayName = "Remove Flag";
                        condition = "true";
                        statement = "_target forceFlagTexture '';";
                    };
				};
			};
		};
    };

};


