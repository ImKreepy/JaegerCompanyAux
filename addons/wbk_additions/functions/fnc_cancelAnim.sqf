#include "../script_component.hpp"
/*
 * Function to cancel the current animation of a player
 *
 * Arguments:
 * 0: Player object (Object)
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call jc_fnc_cancelAnim;
 *
 * Public: No
 */

params ["_player"];

private _state = animationState _player;
if (_state == 'WBK_DiverSaluteAnim_In') then {
    // If the player is in the Diver Salute Loop, we need to stop it properly
    [_player, 'WBK_DiverSaluteAnim_Out'] remoteExec ['switchMove'];
} else {
    // For all other animations, we just need to stop the current animation
    [_player, ''] remoteExec ['switchMove'];
};
