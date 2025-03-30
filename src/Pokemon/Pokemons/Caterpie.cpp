#include "../../../header/Pokemon/Pokemons/Caterpie.h"
#include "../../../header/Pokemon/PokemonType.h"
#include "../../../header/Utility/Utility.h"
#include <iostream>

using namespace std;
using namespace N_Utility;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Caterpie::Caterpie()
		{
			name = "Caterpie";
			type = PokemonType::BUG;
			health = 100;
			maxHealth = 100;
			attackPower = 10;
		}

		void Caterpie::bugBite(Pokemon* targetPokemon)
		{
			cout << name << " Uses BUG BITE!!" << endl;
			Utility::waitForEnter();

			cout << "The Bite hurts a lot." << endl;
			Utility::waitForEnter();

			targetPokemon->TakeDamage(attackPower);

			if (targetPokemon->isFainted())
				cout << targetPokemon->getName() << " has fainted!" << endl;
			else
				cout << targetPokemon->getName() << " has " << targetPokemon->getHealth() << " HP left." << endl;
			Utility::waitForEnter();
		}

		void Caterpie::attack(Pokemon* targetPokemon)
		{
			bugBite(targetPokemon);
		}
	}
}