if (!isServer) exitWith {};
// OAF_fnc_ManTurrets = {
params ["_MRAP"];
_relpos = _MRAP getRelPos [5, 90];  
_turret = "I_LT_01_Cannon_F" createVehicle _relpos; 
_turret attachTo [_MRAP, [0.302246,-2.22168,0.580989]]; 
_turret addMagazineTurret ["60Rnd_20mm_HE_shells", [0]];
_turret addMagazineTurret ["60Rnd_20mm_HE_shells", [0]];
_turret addMagazineTurret ["200Rnd_762x51_Belt_Yellow", [0]];
_turret addMagazineTurret ["200Rnd_762x51_Belt_Yellow", [0]];
_turret setObjectTextureGlobal [0, ""];
_turret setObjectTextureGlobal [1,"a3\armor_f_tank\lt_01\data\lt_01_cannon_olive_co.paa"];
_turret setObjectTextureGlobal [2, ""];
_turret setObjectTextureGlobal [3, ""];
_turret lockDriver true;
_turret allowCrewInImmobile true;
group _MRAP addvehicle _turret;
_MRAP addMagazineTurret ["SmokeLauncherMag", [-1]];
_MRAP addWeaponTurret ["SmokeLauncher", [-1]];
_MRAP addEventHandler ["deleted", "deleteVehicle _turret;"];
_driver = assignedDriver _MRAP;
"OAF_Core_Motorized_Rifleman" createUnit [_relpos, group _driver, "myUnit = this"]; 
myUnit assignAsTurret [_turret, [0]];
myUnit assignAsGunner _turret;
myUnit moveInGunner _turret;
myUnit moveInTurret [_turret, [0]];
// };
// // _MRAP = _this select 0;
// params ["_MRAP"];
// [_MRAP, 0] remoteExec ["OAF_fnc_ManTurrets", 0];
myUnit moveInGunner _turret;
myUnit moveInTurret [_turret, [0]];


