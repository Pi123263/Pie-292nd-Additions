class CfgPatches
{
	class Pie292ndAdds_Markers
	{
		name="Pie 292nd Additions Markers";
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

class CfgMarkers 
{
	class flag_AAF;
	class Pie292ndAdds_JaegerMarker_CSR : flag_AAF
	{
		scope = 2;						// accessibility: 0 = private, 1 = protected, 2 = public
		name = "Jaeger(CSR)";			// name used in the Editor and other UIs
		icon = "292ndPieAdds\addons\data\markers\marker_jaeger_CSR.paa";		// marker icon
		texture = "292ndPieAdds\addons\data\markers\marker_jaeger_CSR.paa";	// ?
		editorCategory = "Pie292ndAdds_EdCat_292nd";
	};
	class Pie292ndAdds_JaegerMarker_GDPR : Pie292ndAdds_JaegerMarker_CSR
	{
		scope = 2;						// accessibility: 0 = private, 1 = protected, 2 = public
		name = "Jaeger(CSR)";			// name used in the Editor and other UIs
		icon = "292ndPieAdds\addons\data\markers\marker_jaeger_GDPR.paa";		// marker icon
		texture = "292ndPieAdds\addons\data\markers\marker_jaeger_GDPR.paa";	// ?
	};
	class Pie292ndAdds_JaegerMarker_HPR : Pie292ndAdds_JaegerMarker_CSR
	{
		scope = 2;						// accessibility: 0 = private, 1 = protected, 2 = public
		name = "Jaeger(HPR)";			// name used in the Editor and other UIs
		icon = "292ndPieAdds\addons\data\markers\marker_jaeger_HPR.paa";		// marker icon
		texture = "292ndPieAdds\addons\data\markers\marker_jaeger_HPR.paa";	// ?
	};
	class Pie292ndAdds_JaegerMarker_PPR : Pie292ndAdds_JaegerMarker_CSR
	{
		scope = 2;						// accessibility: 0 = private, 1 = protected, 2 = public
		name = "Jaeger(PPR)";			// name used in the Editor and other UIs
		icon = "292ndPieAdds\addons\data\markers\marker_jaeger_PPR.paa";		// marker icon
		texture = "292ndPieAdds\addons\data\markers\marker_jaeger_PPR.paa";	// ?
	};
	class Pie292ndAdds_JaegerMarker_PRB : Pie292ndAdds_JaegerMarker_CSR
	{
		scope = 2;						// accessibility: 0 = private, 1 = protected, 2 = public
		name = "Jaeger(PRB)";			// name used in the Editor and other UIs
		icon = "292ndPieAdds\addons\data\markers\marker_jaeger_PRB.paa";		// marker icon
		texture = "292ndPieAdds\addons\data\markers\marker_jaeger_PRB.paa";	// ?
	};
	class Pie292ndAdds_JaegerMarker_SRR : Pie292ndAdds_JaegerMarker_CSR
	{
		scope = 2;						// accessibility: 0 = private, 1 = protected, 2 = public
		name = "Jaeger(SRR)";			// name used in the Editor and other UIs
		icon = "292ndPieAdds\addons\data\markers\marker_jaeger_SRR.paa";		// marker icon
		texture = "292ndPieAdds\addons\data\markers\marker_jaeger_SRR.paa";	// ?
	};
	class Pie292ndAdds_JaegerMarker_WarsawPact : Pie292ndAdds_JaegerMarker_CSR
	{
		scope = 2;						// accessibility: 0 = private, 1 = protected, 2 = public
		name = "Jaeger(WarsawPact)";			// name used in the Editor and other UIs
		icon = "292ndPieAdds\addons\data\markers\marker_jaeger_warsawPact.paa";		// marker icon
		texture = "292ndPieAdds\addons\data\markers\marker_jaeger_warsawPact.paa";	// ?
	};
};


