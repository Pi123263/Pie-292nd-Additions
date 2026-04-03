["acex_fortify_objectPlaced", {
    params ["_player", "_side", "_objectPlaced"];
    // Exit if not running on the builder's machine and the placed object wasn't an ammo box
    if !(local _player && typeOf _objectPlaced == "Land_Ammobox_rounds_F") exitWith {};
    
    private _itemHolder = createVehicle ["GroundWeaponHolder", [0, 0, 0], [], 0, "CAN_COLLIDE"];
    _itemHolder addMagazineCargoGlobal ["ace_csw_100Rnd_127x99_mag_green", 1];

    private _positionASL = getPosASL _objectPlaced;
	_positionASL set [2, (getPosASL _player) select 2];
    private _vectorDirAndUp = [vectorDir _objectPlaced, vectorUp _objectPlaced];
    deleteVehicle _objectPlaced;
    _itemHolder setPosASL _positionASL;
    _itemHolder setVectorDirAndUp _vectorDirAndUp;
    hint "Ammobox has been placed, it might be a few metres away."; // Probably redundant with the more accurate placement
}] call CBA_fnc_addEventHandler;