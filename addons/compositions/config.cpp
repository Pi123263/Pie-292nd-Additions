class CfgPatches
{
	class Pie292ndAdds_Compositions
	{
		name="Pie 292nd Additions Compositions";
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

class CfgEditorCategories
{
	class Pie292ndAdds_EdCat_292nd 
	{
		displayName = "292nd Things";
	};
};

class CfgEditorSubcategories
{
	class Pie292ndAdds_EdSubCat_292ndCompositions 
	{
		displayName = "Company Compositions";
	};
};

class Cfg3DEN
{
	class Compositions
	{
		class Pie292ndAdds_Compositions_292ndDefaultCompanyComposition
		{
			path = "292ndPieAdds\addons\compositions\Compositions\292ndDefaultCompanyComposition";	
			side = 8;											// 0 opfor, 1 blufor, 2 indfor, 3 civ, 8 Empty/Props
			editorCategory = "Pie292ndAdds_EdCat_292nd";						
			editorSubcategory = "Pie292ndAdds_EdSubCat_292ndCompositions";		
			displayName = "292nd Default Company Composition";
			icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";	// left side icon in groups list
			useSideColorOnIcon = 1;								// 1 == icon is always colored in faction color
		};
	};
};