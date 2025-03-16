#pragma once
// battlemanager.hpp
#include "Pokemon.h"
#include "Player.h"

class BattleManager
{
public:
	void startBattle(Player&player, Pokemon&wildPokemon); // method to start the battle 

private:
	void battle(Player& playerPokemon, Pokemon& wildPokemon); // method of actual battle between pokemon
	void HandleBattleOutcome(Player&player, bool playerWon); // method to decide the outcome of the battle
};