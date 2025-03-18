#include <iostream>
#include <string>
#include "../../header/Pokemon/Pokemon.h"
#include "../../header/Character/Player/Player.h"
#include "../../header/Battle/BattleManager.h"
#include "../../header/Utility/Utility.h"
using namespace std;

using namespace N_Utility;
using namespace N_Player;

void BattleManager::startBattle(Player& player, Pokemon& wildPokemon)
{
	battleState.playerPokemon = &player.chosenPokemon;
	battleState.wildPokemon = &wildPokemon;
	battleState.playerTurn = true; // player attacks first
	battleState.battleOngoing = true;

	cout << "A wild " << wildPokemon.name << " has appeared!" << endl; // wild pokemon appears
	battle(); // calling method for actual battle 
}

void BattleManager::battle()
{
	while (battleState.battleOngoing)
	{
		if (battleState.playerTurn)
		{
			battleState.playerPokemon->attack(*battleState.wildPokemon);
		}
		else
		{
			battleState.wildPokemon->attack(*battleState.playerPokemon);
		}

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
		cout << battleState.playerPokemon->name << " has fainted, You lost!" << endl;
	}
	else
	{
		cout << "You have defeated the wild " << battleState.wildPokemon->name << "!" << endl;
	}
}