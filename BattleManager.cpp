#include <iostream>
#include <string>
#include "Pokemon.h"
#include "Player.h"
#include "BattleManager.h"
#include "Utility.h"
using namespace std;

void BattleManager::startBattle(Player& player, Pokemon& wildPokemon)
{
	cout << "A wild " << wildPokemon.name << " has appeared!" << endl; // wild pokemon appears
	battle(player, wildPokemon); // calling method for actual battle 
}

void BattleManager::battle(Player& playerPokemon, Pokemon& WildPokemon)
{
	

	while (!playerPokemon.chosenPokemon.isFainted() && !WildPokemon.isFainted())
	{
		playerPokemon.chosenPokemon.attack(WildPokemon); // player attacking the wild poekmon

		if (!WildPokemon.isFainted()) // check if wild Pokemon has fainted
		{
			WildPokemon.attack(playerPokemon.chosenPokemon); // wild pokemon attacking player pokemon
		}
	}

	Utility::waitForEnter(); // pause to show result of each cycle/loop 

	HandleBattleOutcome(playerPokemon, playerPokemon.chosenPokemon.isFainted()); // calling method to handle the result of battle 
}

void BattleManager::HandleBattleOutcome(Player&player, bool playerWon)
{

	if (playerWon) // check if player pokemon has fainted
	{
		cout << player.chosenPokemon.name<<" has defeated the wild pokemon. Keep an eye on your Pokemon's health." << endl; // battle won statement
	}
	else
	{
		cout << player.chosenPokemon.name << " has fainted, You need to visit a PokeCenter ASAP!" << endl; // battle loose statement
		Utility::waitForEnter(); // wait for players input
		cout << "Game Over." << endl;
	}
}