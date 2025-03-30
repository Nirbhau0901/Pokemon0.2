#include "../../../header/Pokemon/Pokemons/Squirtle.h"
#include "../../../header/Pokemon/PokemonType.h"
#include "../../../header/Utility/Utility.h"
#include <iostream>

using namespace std;
using namespace N_Utility;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Squirtle::Squirtle()
		{
			name = "Squirtle";
			type = PokemonType::WATER;
			health = 100;
			maxHealth = 100;
			attackPower = 35;
		}

		/*void Squirtle::waterSplash(Pokemon* wildPokemon)
		{
			cout << name << " Uses WATER SPLASH!!" << endl;
			Utility::waitForEnter();

			cout << "the intense splash can break rocks." << endl;
			Utility::waitForEnter();

			wildPokemon->TakeDamage(attackPower);

			if (wildPokemon->isFainted())
				cout << wildPokemon->getName() << " has fainted!" << endl;
			else
				cout << wildPokemon->getName() << " has " << wildPokemon->getHealth() << " HP left." << endl;
			Utility::waitForEnter();
		}*/

		void Squirtle::attack(Move selectedMove, Pokemon* targetPokemon)
		{
			selectAndUseMove(targetPokemon);
		}
	}
}