#pragma once
// battlemanager.hpp
#include "Pokemon.h"
#include "Player.h"
#include "BattleState.h"

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