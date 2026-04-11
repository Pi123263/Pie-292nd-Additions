class CfgPatches
{
	class Pie292ndAdds_OverflowManagementSystem
	{
		name="Pie 292nd Additions Overflow Management System";
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

//#include "ui\defines.hpp"
class RscObject;
class RscText;
class RscFrame;
class RscLine;
class RscProgress;
class RscPicture;
class RscPictureKeepAspect;
class RscVideo;
class RscHTML;
class RscButton;
class RscShortcutButton;
class RscEdit;
class RscCombo;
class RscListBox;
class RscListNBox;
class RscXListBox;
class RscTree;
class RscSlider;
class RscXSliderH;
class RscActiveText;
class RscActivePicture;
class RscActivePictureKeepAspect;
class RscStructuredText;
class RscToolbox;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscControlsGroupNoHScrollbars;
class RscControlsGroupNoVScrollbars;
class RscButtonTextOnly;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscButtonMenuSteam;
class RscMapControl;
class RscMapControlEmpty;
class RscCheckBox;
#include "ui\dialog_OMS.hpp"

class CfgFunctions 
{
	
	class Pie	{
		class overflowManagementSystem {
			file = "292ndPieAdds\addons\overflowManagementSystem\functions";
			
			class initDialogOMS {};
			class listPlayerInfo {};
			class assignOverflowPlayerToSquad {};
			class getPlayerSquads {};
			class listSquadInfo {};
			class markPlayerAsOverflow {};
			class initOMSSystem { postInit = 1;};
		};
	};
};