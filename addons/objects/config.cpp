class CfgPatches
{
	class Pie292ndAdds_Objects
	{
		name="Pie 292nd Additions Objects";
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

class CfgEditorSubcategories
{
	class Pie292ndAdds_EdSubCat_Billboards 
	{
		displayName = "Billboards";
	};
	class Pie292ndAdds_EdSubCat_Flags 
	{
		displayName = "Flags";
	};
	
	class Pie292ndAdds_EdSubCat_JaegerFlags 
	{
		displayName = "Jaeger's Flags";
	};
	
	class Pie292ndAdds_EdSubCat_Banners
	{
		displayName = "Banners";
	};
	class Pie292ndAdds_EdSubCat_Markers
	{
		displayName = "Jaeger's Markers";
	};
};

class CfgVehicles
{
	class Land_Billboard_F;
	class Pie_Billboard_SmokeRoles : Land_Billboard_F
	{
		author="Pi123263";
		editorCategory = "Pie292ndAdds_EdCat_292nd";
		editorSubcategory = "Pie292ndAdds_EdSubCat_Billboards";
        scope=2;
        scopeCurator=2;
        displayName="Smoke Usage";
		hiddenSelectionsTextures[]=
        {
            '#(rgb,512,512,3)text(0,0,"PuristaBold",0.07,"#FFFFFF","#000000","test")'
        };
		//class EventHandlers
		//{
		//	init = "(_this select 0) setObjectTexture [0, '#(rgb,512,512,3)text(0,0,\"PuristaBold\",0.07,\"#FFFFFF\",\"#000000\",\"Smokes\nGreen Marking LZs\n\nRed Marking CAS Targets\n\nPurple Mass Casualty Locations\n\nYellow General Concealment - Location Marking\n\nBlue General Concealment - Location Marking\")'];";
		//};
	};
	
	
	class FlagCarrier;
	class FlagCarrier_Asym;
	class Pie292ndAdds_292ndFlag: FlagCarrier_Asym
    {
        author="Pi123263";
        class SimpleObject
        {
            eden=1;
            animate[]=
            {
                
                {
                    "flag",
                    0
                }
            };
            hide[]={};
            verticalOffset=3.977;
            verticalOffsetWorld=0;
            init="''";
        };
        editorPreview="";
		editorCategory = "Pie292ndAdds_EdCat_292nd";
		editorSubcategory = "Pie292ndAdds_EdSubCat_Flags";
        scope=2;
        scopeCurator=2;
        displayName="Flag(292nd)";
        hiddenSelectionsTextures[]=
        {
            "\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"
        };
        class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\292ndflag.paa'";
        };
    };
	class Pie292ndAdds_292ndFlag_Kestrel: Pie292ndAdds_292ndFlag 
	{
		displayName="Flag(Kestrel)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\flag_Kestrel.paa'";
        };
	};
	class Pie292ndAdds_292ndFlag_Razor: Pie292ndAdds_292ndFlag 
	{
		displayName="Flag(Razor)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\flag_Razor.paa'";
        };
	};
	class Pie292ndAdds_292ndFlag_Paladin: Pie292ndAdds_292ndFlag 
	{
		displayName="Flag(Paladin)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\flag_Paladin.paa'";
        };
	};
	class Pie292ndAdds_292ndFlag_Bandit: Pie292ndAdds_292ndFlag 
	{
		displayName="Flag(Bandit)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\flag_Bandit.paa'";
        };
	};
	class Pie292ndAdds_292ndFlag_Quickdraw: Pie292ndAdds_292ndFlag 
	{
		displayName="Flag(Quickdraw)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\flag_Quickdraw.paa'";
        };
	};
	
	
	class Pie292ndAdds_292ndFlag_Lion: Pie292ndAdds_292ndFlag 
	{
		displayName="Flag(Lion)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\flag_Lion.paa'";
        };
	};
	
	
	class Pie292ndAdds_292ndFlag_Echo: Pie292ndAdds_292ndFlag 
	{
		displayName="Flag(Echo)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\flag_Echo.paa'";
        };
	};
	class Pie292ndAdds_292ndFlag_Python: Pie292ndAdds_292ndFlag 
	{
		displayName="Flag(Python)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\flag_Python.paa'";
        };
	};
	class Pie292ndAdds_292ndFlag_Phalanx: Pie292ndAdds_292ndFlag 
	{
		displayName="Flag(Phalanx)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\flag_Phalanx.paa'";
        };
	};
	class Pie292ndAdds_292ndFlag_Knight: Pie292ndAdds_292ndFlag 
	{
		displayName="Flag(Knight)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\flag_Knight.paa'";
        };
	};
	class Pie292ndAdds_292ndFlag_Legion: Pie292ndAdds_292ndFlag 
	{
		displayName="Flag(Legion)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\flag_Legion.paa'";
        };
	};
	
	
	class Pie292ndAdds_292ndFlag_Foxtrot: Pie292ndAdds_292ndFlag 
	{
		displayName="Flag(Foxtrot)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\flag_Foxtrot.paa'";
        };
	};
	class Pie292ndAdds_292ndFlag_Cobra: Pie292ndAdds_292ndFlag 
	{
		displayName="Flag(Cobra)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\flag_Cobra.paa'";
        };
	};
	class Pie292ndAdds_292ndFlag_Longbow: Pie292ndAdds_292ndFlag 
	{
		displayName="Flag(Longbow)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\flag_Longbow.paa'";
        };
	};
	class Pie292ndAdds_292ndFlag_Saracen: Pie292ndAdds_292ndFlag 
	{
		displayName="Flag(Saracen)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\flag_Saracen.paa'";
        };
	};
	class Pie292ndAdds_292ndFlag_Crusader: Pie292ndAdds_292ndFlag 
	{
		displayName="Flag(Crusader)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\flag_Crusader.paa'";
        };
	};
	class Pie292ndAdds_292ndFlag_Overflow: Pie292ndAdds_292ndFlag 
	{
		displayName="Flag(Overflow)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\flag_Overflow.paa'";
        };
	};
	
	
	
	class Banner_01_F;
	class Pie292ndAdds_292ndBanner : Banner_01_F
	{
		author="Pi123263";
		editorPreview="";
		editorCategory = "Pie292ndAdds_EdCat_292nd";
		editorSubcategory = "Pie292ndAdds_EdSubCat_Banners";
        scope=2;
        scopeCurator=2;
        displayName="Banner(292nd)";
		
		class EventHandlers
        {
            init="(_this select 0) setObjectTextureGlobal [0,'292ndPieAdds\addons\data\flags\292ndflag.paa']";
        };	
	};
	
	class Pie292ndAdds_292ndBanner_Kestrel : Pie292ndAdds_292ndBanner
	{
        displayName="Banner(Kestrel)";
		class EventHandlers
        {
            init="(_this select 0) setObjectTextureGlobal [0,'292ndPieAdds\addons\data\flags\flag_Kestrel.paa']";
        };	
	};
	class Pie292ndAdds_292ndBanner_Razor : Pie292ndAdds_292ndBanner
	{
        displayName="Banner(Razor)";
		class EventHandlers
        {
            init="(_this select 0) setObjectTextureGlobal [0,'292ndPieAdds\addons\data\flags\flag_Razor.paa']";
        };	
	};
	class Pie292ndAdds_292ndBanner_Paladin : Pie292ndAdds_292ndBanner
	{
        displayName="Banner(Paladin)";
		class EventHandlers
        {
            init="(_this select 0) setObjectTextureGlobal [0,'292ndPieAdds\addons\data\flags\flag_Paladin.paa']";
        };	
	};
	class Pie292ndAdds_292ndBanner_Bandit : Pie292ndAdds_292ndBanner
	{
        displayName="Banner(Bandit)";
		class EventHandlers
        {
            init="(_this select 0) setObjectTextureGlobal [0,'292ndPieAdds\addons\data\flags\flag_Bandit.paa']";
        };	
	};
	class Pie292ndAdds_292ndBanner_Quickdraw : Pie292ndAdds_292ndBanner
	{
        displayName="Banner(Quickdraw)";
		class EventHandlers
        {
            init="(_this select 0) setObjectTextureGlobal [0,'292ndPieAdds\addons\data\flags\flag_Quickdraw.paa']";
        };	
	};
	
	
	class Pie292ndAdds_292ndBanner_Lion : Pie292ndAdds_292ndBanner
	{
        displayName="Banner(Lion)";
		class EventHandlers
        {
            init="(_this select 0) setObjectTextureGlobal [0,'292ndPieAdds\addons\data\flags\flag_Lion.paa']";
        };	
	};
	
	
	class Pie292ndAdds_292ndBanner_Echo : Pie292ndAdds_292ndBanner
	{
        displayName="Banner(Echo)";
		class EventHandlers
        {
            init="(_this select 0) setObjectTextureGlobal [0,'292ndPieAdds\addons\data\flags\flag_Echo.paa']";
        };	
	};
	class Pie292ndAdds_292ndBanner_Python : Pie292ndAdds_292ndBanner
	{
        displayName="Banner(Python)";
		class EventHandlers
        {
            init="(_this select 0) setObjectTextureGlobal [0,'292ndPieAdds\addons\data\flags\flag_Python.paa']";
        };	
	};
	class Pie292ndAdds_292ndBanner_Phalanx : Pie292ndAdds_292ndBanner
	{
        displayName="Banner(Phalanx)";
		class EventHandlers
        {
            init="(_this select 0) setObjectTextureGlobal [0,'292ndPieAdds\addons\data\flags\flag_Phalanx.paa']";
        };	
	};
	class Pie292ndAdds_292ndBanner_Knight : Pie292ndAdds_292ndBanner
	{
        displayName="Banner(Knight)";
		class EventHandlers
        {
            init="(_this select 0) setObjectTextureGlobal [0,'292ndPieAdds\addons\data\flags\flag_Knight.paa']";
        };	
	};
	class Pie292ndAdds_292ndBanner_Legion : Pie292ndAdds_292ndBanner
	{
        displayName="Banner(Legion)";
		class EventHandlers
        {
            init="(_this select 0) setObjectTextureGlobal [0,'292ndPieAdds\addons\data\flags\flag_Legion.paa']";
        };	
	};
	
	
	class Pie292ndAdds_292ndBanner_Foxtrot : Pie292ndAdds_292ndBanner
	{
        displayName="Banner(Foxtrot)";
		class EventHandlers
        {
            init="(_this select 0) setObjectTextureGlobal [0,'292ndPieAdds\addons\data\flags\flag_Foxtrot.paa']";
        };	
	};
	class Pie292ndAdds_292ndBanner_Cobra : Pie292ndAdds_292ndBanner
	{
        displayName="Banner(Cobra)";
		class EventHandlers
        {
            init="(_this select 0) setObjectTextureGlobal [0,'292ndPieAdds\addons\data\flags\flag_Cobra.paa']";
        };	
	};
	class Pie292ndAdds_292ndBanner_Longbow : Pie292ndAdds_292ndBanner
	{
        displayName="Banner(Longbow)";
		class EventHandlers
        {
            init="(_this select 0) setObjectTextureGlobal [0,'292ndPieAdds\addons\data\flags\flag_Longbow.paa']";
        };	
	};
	class Pie292ndAdds_292ndBanner_Saracen : Pie292ndAdds_292ndBanner
	{
        displayName="Banner(Saracen)";
		class EventHandlers
        {
            init="(_this select 0) setObjectTextureGlobal [0,'292ndPieAdds\addons\data\flags\flag_Saracen.paa']";
        };	
	};
	class Pie292ndAdds_292ndBanner_Crusader : Pie292ndAdds_292ndBanner
	{
        displayName="Banner(Crusader)";
		class EventHandlers
        {
            init="(_this select 0) setObjectTextureGlobal [0,'292ndPieAdds\addons\data\flags\flag_Crusader.paa']";
        };	
	};
	
	
	
	
	//jaeger flags
	class Pie292ndAdds_JaegerFlag_CSR: Pie292ndAdds_292ndFlag 
	{
		displayName="Jaeger Flag(CSR)";
		editorSubcategory = "Pie292ndAdds_EdSubCat_JaegerFlags";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\jaegerFlags\flag_jaeger_CSR.paa'";
        };
	};
	
	class Pie292ndAdds_JaegerFlag_GDPR: Pie292ndAdds_JaegerFlag_CSR 
	{
		displayName="Jaeger Flag(GDPR)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\jaegerFlags\flag_jaeger_GDPR.paa'";
        };
	};
	
	class Pie292ndAdds_JaegerFlag_HPR: Pie292ndAdds_JaegerFlag_CSR 
	{
		displayName="Jaeger Flag(HPR)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\jaegerFlags\flag_jaeger_HPR.paa'";
        };
	};
	
	class Pie292ndAdds_JaegerFlag_PPR: Pie292ndAdds_JaegerFlag_CSR 
	{
		displayName="Jaeger Flag(PPR)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\jaegerFlags\flag_jaeger_PPR.paa'";
        };
	};
	
	class Pie292ndAdds_JaegerFlag_PRB: Pie292ndAdds_JaegerFlag_CSR 
	{
		displayName="Jaeger Flag(PRB)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\jaegerFlags\flag_jaeger_PRB.paa'";
        };
	};
	
	class Pie292ndAdds_JaegerFlag_SRR: Pie292ndAdds_JaegerFlag_CSR 
	{
		displayName="Jaeger Flag(SRR)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\jaegerFlags\flag_jaeger_SRR.paa'";
        };
	};
	
	class Pie292ndAdds_JaegerFlag_WarsawPact: Pie292ndAdds_JaegerFlag_CSR 
	{
		displayName="Jaeger Flag(Warsaw Pact)";
		class EventHandlers
        {
            init="(_this select 0) setFlagTexture '292ndPieAdds\addons\data\flags\jaegerFlags\flag_jaeger_warsawPact.paa'";
        };
	};
};

