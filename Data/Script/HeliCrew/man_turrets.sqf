//This function is a workaround for incorrect crew assignment for helicopter turrets
//very dirty but it works
//my time on this planet is worth more than clean ArmA programming
//if the devs couldn't be bothered, then so can't I
_heli = _this select 0;
OAF_fnc_ManTurrets = {
_relpos = _heli getRelPos [5, 90]; 
_pilot = assignedDriver _heli;
_gunner1 = _heli turretUnit [1];
_gunner2 = _heli turretUnit [2];
_heli deleteVehicleCrew _gunner1;
_heli deleteVehicleCrew _gunner2;
"OAF_Core_Helicopter_Crew" createUnit [_relpos, group _pilot, "myUnit = this"]; 
myUnit moveInGunner _heli;
myUnit moveInTurret [_heli, [1]];
"OAF_Core_Helicopter_Crew" createUnit [_relpos, group _pilot, "myUnit2 = this"]; 
myUnit2 moveInGunner _heli;
myUnit2 moveInTurret [_heli, [2]];
myUnit2 moveInTurret [_heli, [1]]; // this is compat for the V-97. Yeah. I know.
};
if (isServer) then call OAF_fnc_ManTurrets;