params ["_MBT"];
if (!local _MBT) exitWith {};
if (!simulationEnabled _MBT) exitWith {};
_relpos = _MBT getRelPos [5, 90];  
_turret = "OAF_Core_Dragon_Turret" createVehicle _relpos;
_turret attachTo [_MBT,[-0.216797,-1.90479,0.117221] ,"otocvez", true];
_turret addMagazineTurret ["60Rnd_20mm_HE_shells", [0]];
_turret addMagazineTurret ["60Rnd_20mm_AP_shells", [0]];
_turret addMagazineTurret ["200Rnd_762x51_Belt_Yellow", [0]];
_turret setObjectTextureGlobal [0, ""];
_turret setObjectTextureGlobal [1,"a3\armor_f_tank\lt_01\data\lt_01_cannon_olive_co.paa"];
_turret setObjectTextureGlobal [2, ""];
_turret setObjectTextureGlobal [3, ""];
_turret lockDriver true;
_turret allowCrewInImmobile true;
group _MBT addvehicle _turret;
_MBT addMagazineTurret ["SmokeLauncherMag", [-1]];
_MBT addWeaponTurret ["SmokeLauncher", [-1]];
_MBT addEventHandler ["Deleted", "deleteVehicle _turret;"];
_driver = assignedDriver _MBT;
"OAF_Core_AI" createUnit [_relpos, group _driver, "myUnit = this"]; 
myUnit assignAsTurret [_turret, [0]];
myUnit assignAsGunner _turret;
myUnit moveInGunner _turret;
myUnit moveInTurret [_turret, [0]];
_MBT addWeaponTurret ["CUP_Vacannon_M197_veh",[0]];  
_MBT addMagazineTurret ["CUP_750Rnd_TE2_Red_Tracer_M197_20mm_HEI_M",[0]];  
_MBT addMagazineTurret ["CUP_750Rnd_TE2_Red_Tracer_M197_20mm_AP_M",[0]];  
_MBT removeWeaponTurret ["ACE_LMG_coax_MAG58_mem3",[0]];  
_MBT removeMagazinesTurret ["200Rnd_762x51_Belt_Yellow",[0]];  
_MBT removeMagazinesTurret ["200Rnd_127x99_mag_Tracer_Yellow",[0,0]];  
_MBT removeWeaponTurret ["HMG_127_APC",[0,0]];  
_MBT addWeaponTurret ["CUP_Vhmg_M3P_veh",[0,0]];  
_MBT addMagazineTurret ["CUP_250Rnd_TE1_Red_Tracer_127x99_M",[0,0]];  
_MBT addMagazineTurret ["CUP_250Rnd_TE1_Red_Tracer_127x99_M",[0,0]];  
_MBT addMagazineTurret ["CUP_250Rnd_TE1_Red_Tracer_127x99_M",[0,0]];  
_MBT addWeaponTurret ["GMG_20mm",[0,0]];  
_MBT addMagazineTurret ["40Rnd_20mm_g_belt",[0,0]];  
_MBT addMagazineTurret ["40Rnd_20mm_g_belt",[0,0]];  
_MBT addWeaponTurret ["Laserdesignator_vehicle",[0]];  
_MBT addMagazineTurret ["Laserbatteries",[0]]; 
_MBT setMass 72200.0;  
[
	_MBT,
	["Blu_Olive",1], 
	["HideTurret",1,"HideHull",1,"showCamonetHull",0,"showCamonetTurret",1]
] call BIS_fnc_initVehicle;
track = "Land_TankTracks_01_short_F" createVehicle _relpos; // Create object. imporant that this first refers to world position
_relPosTrack = _MBT selectionPosition "otocvez"; // find position of turret's rotation memory point
_relPosTrack = [-1.75635,-1.32813,-0.481319] vectorDiff _relPosTrack; //get offset between desired "hull coordinate" and turret pos
track attachTo [_MBT,_relPosTrack ,"otocvez", true]; //TL turret // attach object to turret's rotation using modified coords
track setVectorDirAndUp [vectorDir _MBT, [1,0,0]]; // rotate object 90 deg to the right // -1 for left
//
track = "Land_TankTracks_01_short_F" createVehicle _relPosTrack;
_relPosTrack = _MBT selectionPosition "otocvez"; 
_relPosTrack = [1.81982,-1.55127,-0.448319] vectorDiff _relPosTrack;
track attachTo [_MBT,_relPosTrack ,"otocvez", true]; //TR turret 
track setVectorDirAndUp [vectorDir _MBT, [-1,0,0]];
//L hull tracks:
track = "Land_TankTracks_01_short_F" createVehicle _relPosTrack; 
_relPosTrack = [-2.16309,1.24365,-1.78032];
track attachTo [_MBT,_relPosTrack]; 
track setVectorDirAndUp [vectorDir _MBT, [1,0,0]];
//
track = "Land_TankTracks_01_short_F" createVehicle _relPosTrack; 
_relPosTrack = [-2.16309,0.171875,-1.78032];
track attachTo [_MBT,_relPosTrack]; 
track setVectorDirAndUp [vectorDir _MBT, [1,0,0]];
//
track = "Land_TankTracks_01_short_F" createVehicle _relPosTrack; 
_relPosTrack = [-2.16309,-0.881348,-1.78032];
track attachTo [_MBT,_relPosTrack]; 
track setVectorDirAndUp [vectorDir _MBT, [1,0,0]];
//
track = "Land_TankTracks_01_short_F" createVehicle _relPosTrack; 
_relPosTrack = [-2.16309,-1.95313,-1.78032];
track attachTo [_MBT,_relPosTrack]; 
track setVectorDirAndUp [vectorDir _MBT, [1,0,0]];
//R hull tracks:
track = "Land_TankTracks_01_short_F" createVehicle _relPosTrack; 
_relPosTrack = [2.20996,1.22705,-1.77232];
track attachTo [_MBT,_relPosTrack]; 
track setVectorDirAndUp [vectorDir _MBT, [-1,0,0]];
//
track = "Land_TankTracks_01_short_F" createVehicle _relPosTrack; 
_relPosTrack = [2.20996,0.154785,-1.77232];
track attachTo [_MBT,_relPosTrack]; 
track setVectorDirAndUp [vectorDir _MBT, [-1,0,0]];
//
track = "Land_TankTracks_01_short_F" createVehicle _relPosTrack; 
_relPosTrack = [2.20996,-0.897949,-1.77232];
track attachTo [_MBT,_relPosTrack]; 
track setVectorDirAndUp [vectorDir _MBT, [-1,0,0]];
//
track = "Land_TankTracks_01_short_F" createVehicle _relPosTrack; 
_relPosTrack = [2.20996,-1.97021,-1.77232];
track attachTo [_MBT,_relPosTrack]; 
track setVectorDirAndUp [vectorDir _MBT, [-1,0,0]];
//