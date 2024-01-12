_APA = _this select 0;
_relpos = _APA getRelPos [5, 90];
_pylon = "pya_main_pylon_single_fixed" createVehicle _relpos;
_pylon attachTo [_APA, [0.0,-0.2,0.3], "PIP1_pos", true];
[_pylon, group _APA] call BIS_fnc_spawnCrew;
_pylon setPylonLoadout ["pylon1", "CUP_PylonPod_1200Rnd_TE1_Red_Tracer_GAU19A_M"];
_APA setVehicleRadar 1;
_APA setPylonLoadout [1, "PylonRack_12Rnd_PG_missiles"];
_APA setPylonLoadout [2, "PylonRack_12Rnd_PG_missiles"];
_APA setPylonLoadout [3, "PylonRack_12Rnd_PG_missiles"];
_APA setPylonLoadout [4, "PylonRack_12Rnd_PG_missiles"];
group _APA setCombatMode "RED";

