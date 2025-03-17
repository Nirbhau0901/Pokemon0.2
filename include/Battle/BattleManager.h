#pragma once
// battlemanager.hpp
#include "../../include/Pokemon/Pokemon.h"
#include "../../Include/Character/Player/Player.h"
#include "../../include/Battle/BattleManager.h"

class BattleManager
{
public:
	void startBattle(Player&player, Pokemon&wildPokemon); // method to start the battle 

private:
	BattleState battleState;
	void battle(); // method of actual battle between pokemon
	void HandleBattleOutcome(); // method to decide the outcome of the battle
	void updateBattleState(); // method to update
};