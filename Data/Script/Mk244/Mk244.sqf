_sentry = _this select 0;
_weapon = _sentry weaponsTurret [0];
_sentry removeWeaponTurret [_weapon select 0, [0]];
_sentry addWeaponTurret ["LMG_RCWS",[0]]; 
_sentry addMagazineTurret ["2000Rnd_65x39_Belt_Tracer_Red",[0]];