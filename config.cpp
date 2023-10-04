class CfgPatches
{
	class division7_objects
	{
		author = "Division-7";
		url = "https://discord.gg/c2BgeFMgqk";
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"division7_core"};
	};
};

class CfgVehicles 
{
	class OPTRE_CTF_Flag_Base;

  class DIV7_CTF_Flag_CrimsonTeam: OPTRE_CTF_Flag_Base
	{
		scope = 2;
		displayName="Crimson Team Flag";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"division7_objects\_textures\flag_guidon_CrimsonTeam_co.paa"
		};
		editorCategory = "DIV7_EditorCategory_Objects";
		editorSubcategory = "DIV7_EditorSubcategory_Objects_Flags";
	};
	class DIV7_CTF_Flag_Thanatos : DIV7_CTF_Flag_CrimsonTeam
	{
		displayName="Thanatos Flag";
		hiddenSelectionsTextures[]=
		{
			"division7_objects\_textures\flag_guidon_Thanatos_co.paa"
		};
	};
	class DIV7_CTF_Flag_Division7 : DIV7_CTF_Flag_CrimsonTeam
	{
		displayName="Division-7 flag";
		hiddenSelectionsTextures[]=
		{
			"division7_objects\_textures\flag_guidon_Division7_co.paa"
		};
	};
	class DIV7_CTF_Flag_HellHounds : DIV7_CTF_Flag_CrimsonTeam
	{
		displayName="Hellbounds Flag";
		hiddenSelectionsTextures[]=
		{
			"division7_objects\_textures\flag_guidon_Hellhounds_co.paa"
		};
	};	
};
