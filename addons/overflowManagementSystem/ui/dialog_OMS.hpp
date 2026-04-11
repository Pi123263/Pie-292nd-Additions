class Pie_OMS_Dialog 
{
	idd = 3141;
	movingenable = 1;
	
	class controlsBackground
	{
		class Pie_OMS_Dialog_Text_VersionInfo: RscText
		{
			idc = 1006;
			text = "Pie OMS Ver.: Alpha 0.01                        If you encounter a bug please contact Pi123263"; //--- ToDo: Localize;
			x = 0.383205 * safezoneW + safezoneX;
			y = 0.736112 * safezoneH + safezoneY;
			w = 0.189492 * safezoneW;
			h = 0.022 * safezoneH;
			//sizeEx = 0.7 * GUI_GRID_H;
		};
		class Pie_OMS_Dialog_Background: RscText
		{
			idc = 1000;
			x = 0.380117 * safezoneW + safezoneX;
			y = 0.247 * safezoneH + safezoneY;
			w = 0.251367 * safezoneW;
			h = 0.517 * safezoneH;
			colorBackground[] = {0,0,0,0.8};
		};
		class Pie_OMS_Dialog_Title: RscText
		{
			idc = 1001;
			text = "Pie Overflow Management System"; //--- ToDo: Localize;
			x = 0.421172 * safezoneW + safezoneX;
			y = 0.261704 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.033 * safezoneH;
			sizeEx = 1.5 * GUI_GRID_H;
		};
		class Pie_OMS_Dialog_Text_PlayerSquad: RscText
		{
			idc = 1002;
			text = "Player Squads:"; //--- ToDo: Localize;
			x = 0.389024 * safezoneW + safezoneX;
			y = 0.305704 * safezoneH + safezoneY;
			w = 0.0657422 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Pie_OMS_Dialog_Text_OverflowPlayers: RscText
		{
			idc = 1003;
			text = "Overflow Players:"; //--- ToDo: Localize;
			x = 0.481328 * safezoneW + safezoneX;
			y = 0.307444 * safezoneH + safezoneY;
			w = 0.0812109 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Pie_OMS_Dialog_Text_SquadInfo: RscText
		{
			idc = 1004;
			text = "Squad Information:"; //--- ToDo: Localize;
			x = 0.387774 * safezoneW + safezoneX;
			y = 0.563816 * safezoneH + safezoneY;
			w = 0.0889453 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Pie_OMS_Dialog_Text_PlayerInfo: RscText
		{
			idc = 1005;
			text = "Player Information:"; //--- ToDo: Localize;
			x = 0.48461 * safezoneW + safezoneX;
			y = 0.564148 * safezoneH + safezoneY;
			w = 0.0966797 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
	
	class Controls
	{
		class Pie_OMS_Dialog_ListBox_PlayerSquads: RscListbox
		{
			idc = 1500;
			x = 0.387852 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.0773438 * safezoneW;
			h = 0.209 * safezoneH;
		};
		class Pie_OMS_Dialog_ListBox_OverflowPlayers: RscListbox
		{
			idc = 1501;
			x = 0.482226 * safezoneW + safezoneX;
			y = 0.336852 * safezoneH + safezoneY;
			w = 0.0889453 * safezoneW;
			h = 0.209 * safezoneH;
		};
		class Pie_OMS_Dialog_StructuredText_SquadInfo: RscStructuredText
		{
			idc = 1100;
			text = "No Squad Selected"; //--- ToDo: Localize;
			x = 0.388634 * safezoneW + safezoneX;
			y = 0.594037 * safezoneH + safezoneY;
			w = 0.0850781 * safezoneW;
			h = 0.132 * safezoneH;
		};
		class Pie_OMS_Dialog_Button_AssignSquad: RscButton
		{
			idc = 1600;
			text = "Assign Squad"; //--- ToDo: Localize;
			x = 0.574883 * safezoneW + safezoneX;
			y = 0.340112 * safezoneH + safezoneY;
			w = 0.0502734 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class Pie_OMS_Dialog_Button_RemoveOverflow: RscButton
		{
			idc = 1601;
			text = "Remove Overflow"; //--- ToDo: Localize;
			x = 0.575 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.0502734 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class Pie_OMS_Dialog_Button_Ok: RscButtonMenuOK
		{
			x = 0.586405 * safezoneW + safezoneX;
			y = 0.720111 * safezoneH + safezoneY;
			w = 0.0386719 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class Pie_OMS_Dialog_StructuredText_OverflowPlayerInfo: RscStructuredText
		{
			idc = 1101;
			text = "No Player Selected"; //--- ToDo: Localize;
			x = 0.486523 * safezoneW + safezoneX;
			y = 0.591482 * safezoneH + safezoneY;
			w = 0.0850781 * safezoneW;
			h = 0.132 * safezoneH;
		};
		class Pie_OMS_Dialog_Button_Debug: RscButton
		{
			idc = 1602;
			text = "Debug"; //--- ToDo: Localize;
			x = 0.586173 * safezoneW + safezoneX;
			y = 0.689593 * safezoneH + safezoneY;
			w = 0.0386719 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};
