class CfgPatches 
{
	class HLC_COMPAT_ACE3_MP5
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 0.100000;
		requiredAddons[] = { "A3_Weapons_F", "hlcweapons_core", "ace_common", "hlcweapons_mp5" };
		version = "1";
		projectName = "HLCmod";
		author = "Toadie";
	};
};
class CfgWeapons
{
    class GrenadeLauncher;
    class UGL_F : GrenadeLauncher {
        magazines[] += { "ACE_HuntIR_M203" };
    };
};
