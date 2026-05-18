["acex_fortify_objectPlaced", {
    params ["_player", "_side", "_objectPlaced"];
    // if !(typeOf _objectPlaced == "Pie292ndAdds_Fortfy_MineBox") exitWith {};
    //credit to Dart and Turpin on ace discord for helping
    [_objectPlaced, 0, ["ACE_MainActions","ace_fortify_removeObject"]] call ace_interact_menu_fnc_removeActionFromObject;

}] call CBA_fnc_addEventHandler;