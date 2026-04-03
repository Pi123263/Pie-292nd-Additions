class CfgPatches
{
	class Pie292ndAdds_QuickJoinButton
	{
		name="Pie 292nd Additions Quickjoin Button";
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

class CfgCommands {
    allowedHTMLLoadURIs[] += {
        "ts3server://194.164.96.227"
    };
};

class CfgMainMenuSpotlight
{
	class QuickJoinButton292nd
	{
		text="Join 292nd Server";
		textIsQuote=0;
		picture="292ndPieAdds\addons\data\logos\292ndlogo.paa";
		video="";
		//action="connectToServer ['194.164.96.227', 2302, 'mikemike']";
		//action="(_this # 0) ctrlSetURL 'ts3server://194.164.96.227'; connectToServer ['194.164.96.227', 2302, 'mikemike']; ";
		action="Pie_currentTSServerUID = call TFAR_fnc_getTeamSpeakServerUID; if(Pie_currentTSServerUID != 'tUow60s8m6zum81qtUX+oG5XMV4=') then {(_this # 0) ctrlSetURL 'ts3server://194.164.96.227';}; connectToServer ['194.164.96.227', 2302, 'mikemike'];";
		
		
		
		actionText="292nd Server";
		condition="true";
	};
	delete OldMan;
	delete Bootcamp;
	delete EastWind;
	delete ApexProtocol;
	delete Orange_Showcase_IDAP;
	delete Orange_Showcase_LoW;
	delete Orange_CampaignGerman;
	delete Orange_Campaign;
	delete Tanks_Campaign_01;
	delete Showcase_TankDestroyers;
	delete Contact_Campaign;
	delete Tacops_Campaign_03;
	delete Tacops_Campaign_02;
	delete Tacops_Campaign_01;
	delete SP_FD14;
	delete AoW_Showcase_AoW;
	delete AoW_Showcase_Future;
	delete Extraction_lxWS;
	delete Scenario_AirControl_RF;
	delete Scenario_FireSeason_RF;
	delete Scenario_TrainingDay_RF;
	delete Showcase_Alchemist_lxWS;
	delete Showcase_VR_lxWS;
	delete EF_ResoluteCyclone;
};
