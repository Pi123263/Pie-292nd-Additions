//start script (spawn?)
//check if helo is landed and stationary
//if yes -> spawn rrr code
systemChat "Helo RRR Script Started";
systemChat format ["ThisList: %1", thisList];
{
    _helo = _x;
    _pilot = driver _helo;
    _PieHeloRRR = [_helo, _pilot, thisTrigger] spawn {
        params["_helo", "_pilot", "_thisTrigger"];
        systemchat format ["pilot: %1, vehicle: %2", _pilot, _helo];
        if (_helo isKindOf "CAManBase") then {_helo = vehicle _helo;};
        systemChat "started rrr repair loop";
        systemChat format ["Checking %1, speed: %2, alt: %3", _helo, speed _helo, getposATL _helo select 2];
        waitUntil {(floor speed _helo) < 0.01 && (getposATL _helo select 2) < 0.1};
        systemChat format ["%1 is landed and stationary, starting RRR", _helo];
        if (isEngineOn _helo) then {systemchat "Turn off the engine to RRR!"; waitUntil{ !(isEngineOn _helo)}; }
        if(_helo distance _thisTrigger > 10) exitWith {systemChat "Helo is not in RRR list anymore";};
        
        private _whileIndex = 0.1;
        while {damage _helo < 1 or fuel _helo < 1} do { 
            comment "TODO: find way to check ammo, currently doesnt check as theres no simple function for it, maybe check if ammo is below 50% or something || or vehicleAmmo _helo < 1";
            _helo vehicleChat "Repairing";
            _helo setDamage ((damage _helo)-0.05); comment "TODO Add clipping to max 1";
            sleep 2;
            _helo vehicleChat "Refueling";
            _helo setFuel ((fuel _helo)+0.05); comment "TODO Add clipping to max 1";
            sleep 2;
            _helo vehicleChat "Rearming";
            _helo setVehicleAmmo (_whileIndex); comment "TODO Add clipping to max 1";
            sleep 6;
            _whileIndex = _whileIndex + 0.1;
        };
    _helo vehicleChat "Helo is ready to go!";
    };
} forEach (thislist select {(_x isKindOf "Air") && {alive _x}});











private _PieTriggerAircraft;
{
    if(_x isKindOf "Air") then {
        _PieTriggerAircraft pushBackUnique (vehicle _x);
        systemChat format ["Added %1 to RRR list", _x];
    };
} forEach thisList;

comment "} forEach (_PieTriggerAircraft);";
while {true} do {
    systemChat format ["Checking %1, speed: %2, alt: %3", testhelo, speed testhelo, getposATL testhelo select 2];
}
