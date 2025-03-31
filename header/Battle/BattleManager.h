#pragma once
// battlemanager.hpp
#include "../../header/Pokemon/Pokemon.h"
#include "../../header/Character/Player/Player.h"
#include "../../header/Battle/BattleState.h"

//using namespace N_Player;

namespace N_Battle
{
	class BattleManager
	{
	public:
		void startBattle(N_Player::Player* player, N_Pokemon::Pokemon* wildPokemon); // method to start the battle 
		bool stopBattle();
	private:
		BattleState battleState;
		void battle(); // method of actual battle between pokemon
		void HandleBattleOutcome(); // method to decide the outcome of the battle
		void updateBattleState(); // method to update
	};
}