#include <iostream>
#include <string>
#include "Pokemon.h"
#include "Player.h"
using namespace std;

void battle(Pokemon& playerPokemon, Pokemon& WildPokemon)
{
	cout << "A wild " << WildPokemon.name << " has appeared!" << endl; // wild pokemon appears

	while (!playerPokemon.isFainted() && !WildPokemon.isFainted())
	{
		playerPokemon.attack(WildPokemon); // player attacking the wild poekmon

		if (!WildPokemon.isFainted())
		{
			WildPokemon.attack(playerPokemon); // wild pokemon attacking player pokemon
		}
	}

	if (!playerPokemon.isFainted())
	{
		cout << playerPokemon.name << " has fainted, You have lost!" << endl;
	}
	else
	{
		cout << "You have deafeated a wild " << WildPokemon.name << "!" << endl;
	}
}