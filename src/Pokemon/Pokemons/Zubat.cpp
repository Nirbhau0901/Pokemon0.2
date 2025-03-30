#include "../../../header/Pokemon/Pokemons/Zubat.h"
#include "../../../header/Pokemon/PokemonType.h"
#include "../../../header/Utility/Utility.h"
#include <iostream>

using namespace std;
using namespace N_Utility;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Zubat::Zubat()
		{
			name = "Zubat";
			type = PokemonType::POISION;
			health = 100;
			maxHealth = 100;
			attackPower = 20;
		}

		/*void Zubat::supersonic(Pokemon* targetPokemon)
		{
			cout << name << " Uses SUPERSONIC!!" << endl;
			Utility::waitForEnter();

			cout << "The Sonic waves makes the ears ring..." << endl;
			Utility::waitForEnter();

			targetPokemon->TakeDamage(attackPower);

			if (targetPokemon->isFainted())
				cout << targetPokemon->getName() << " has fainted!" << endl;
			else
				cout << targetPokemon->getName() << " has " << targetPokemon->getHealth() << " HP left." << endl;
			Utility::waitForEnter();
		}*/

		void Zubat::attack(Move selectedMove, Pokemon* targetPokemon)
		{
			selectAndUseMove(targetPokemon);
		}
	}
}