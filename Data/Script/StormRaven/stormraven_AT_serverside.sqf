_APA = _this select 0;
//Custom Loadout for: APA-15H Stormraven (AT)
params["_APA"];
_allTurrets = [[-1],[0]];
_loadout = [[1,"Pylons1",[0],"PylonRack_4Rnd_LG_scalpel",4,"0:10000107"],[2,"Pylons2",[0],"PylonRack_4Rnd_LG_scalpel",4,"0:10000109"],[3,"Pylons3",[0],"PylonRack_4Rnd_LG_scalpel",4,"0:10000111"],[4,"Pylons4",[0],"PylonRack_4Rnd_LG_scalpel",4,"0:10000112"]];
_originalPylonsInfo = getAllPylonsInfo _APA;

{
	_index = _forEachIndex;
	{
		if((_originalPylonsInfo select _index) select 3 isEqualTo "")then{
			continue;
		};
		[_APA, [[configFile >> "CfgMagazines" >> (_originalPylonsInfo select _index) select 3, "pylonWeapon"] call BIS_fnc_returnConfigEntry, _x]] remoteExec ["removeWeaponTurret"];
	}foreach _allTurrets;
	[_APA, [_forEachIndex + 1, _x select 3, true, _x select 2]] remoteExec ["setPylonLoadout"];
}forEach _loadout;
_APA setVariable ["pylonPriority", [5,4,4,5]];
_APA setPylonsPriority [5,4,4,5];
OAF_fnc_StormRavenInit = {
_relpos = _APA getRelPos [5, 90];
_pylon = "pya_main_pylon_single_fixed" createVehicle _relpos;
_pylon attachTo [_APA, [0.0,-0.2,0.3], "PIP1_pos", true];
[_pylon, group _APA] call BIS_fnc_spawnCrew;
_pylon setPylonLoadout ["pylon1", "CUP_PylonPod_1200Rnd_TE1_Red_Tracer_GAU19A_M"];
_APA setVehicleRadar 1;
group _APA setCombatMode "RED";
};
if (isServer) call OAF_fnc_StormRavenInit;