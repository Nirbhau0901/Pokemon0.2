#include <iostream>
#include <string>
#include <cstdlib>
#include "../../header/Pokemon/Pokemon.h"
#include "../../header/Character/Player/Player.h"
#include "../../header/Battle/BattleManager.h"
#include "../../header/Utility/Utility.h"
using namespace std;

using namespace N_Utility;
using namespace N_Player;
using namespace N_Pokemon;

namespace N_Battle
{

	void BattleManager::startBattle(Player* player, N_Pokemon::Pokemon* wildPokemon)
	{
		battleState.playerPokemon = player->chosenPokemon;
		battleState.wildPokemon = wildPokemon;
		battleState.playerTurn = true; // player attacks first
		battleState.battleOngoing = true;

		cout << "A wild " << wildPokemon->getName() << " has appeared!" << endl; // wild pokemon appears
		battle(); // calling method for actual battle 
	}

	bool BattleManager::stopBattle()
	{
		battleState.battleOngoing = false;

		return battleState.battleOngoing;
	}

	void BattleManager::battle()
	{
		while (battleState.battleOngoing)
		{
			if (battleState.playerTurn)
				battleState.playerPokemon->selectAndUseMove(battleState.wildPokemon);
			else
				battleState.wildPokemon->selectAndUseMove(battleState.playerPokemon);


			//if (battleState.playerTurn)
			//{
			//	battleState.playerPokemon->selectAndUseMove(battleState.wildPokemon);
			//}
			//else
			//{
			//	if (battleState.wildPokemon->moves.empty())
			//	{
			//		cout << "Error: Wild pokemon has no moves." << endl;
			//		
			//		return;
			//	}
			//	
			//	//randomly selecting one of the pokemon's move
			//	int moveIndex = rand() % battleState.wildPokemon->moves.size();
			//	Move selectedMove = battleState.wildPokemon->moves[moveIndex];

			//	//wild Pokemon attacks using the selected move
			//	cout << "Wild " << battleState.wildPokemon->getName() << " used " << selectedMove.name << "!" << endl;
			//	battleState.wildPokemon->attack(selectedMove, battleState.playerPokemon);
			//}

			// updating battle state after the turn
			updateBattleState();

			// switching turns
			battleState.playerTurn = !battleState.playerTurn;

			Utility::waitForEnter(); // pause to show result of each cycle/loop 
		}

		HandleBattleOutcome(); // calling method to handle the result of battle 
	}

	void BattleManager::updateBattleState()
	{
		if (battleState.playerPokemon->isFainted())
		{
			battleState.battleOngoing = false;
		}
		else if (battleState.wildPokemon->isFainted())
		{
			battleState.battleOngoing = false;
		}
	}

	void BattleManager::HandleBattleOutcome()
	{
		if (battleState.playerPokemon->isFainted())
		{
			cout << battleState.playerPokemon->getName() << " has fainted, You lost!" << endl;
		}
		else
		{
			cout << "You have defeated the wild " << battleState.wildPokemon->getName() << "!" << endl;
		}
	}
}