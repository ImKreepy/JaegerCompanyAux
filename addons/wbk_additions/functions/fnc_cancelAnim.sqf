#include "../script_component.hpp"

hint "Cancelling current animation...";
params ["_player"];
/*private _state = animationState ace_player;
if (_state isEqualTo 'WBK_DiverSaluteAnim_Loop') then {
    // If the player is in the Diver Salute Loop, we need to stop it properly
    [ace_player, 'WBK_DiverSaluteAnim_Out'] remoteExec ['switchMove', 0];
    hint "Diver Salute animation cancelled.";
} else {
    // For all other animations, we just need to stop the current animation
    [ace_player, ''] remoteExec ['switchMove', 0];
    hint "Current animation cancelled.";
};*/
[_player,''] remoteExec ['switchMove'];
