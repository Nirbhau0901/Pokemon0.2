#include "../../../header/Pokemon/Pokemons/Pikachu.h"
#include "../../../header/Pokemon/PokemonType.h"
#include "../../../header/Utility/Utility.h"
#include <iostream>

using namespace std;
using namespace N_Utility;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Pikachu::Pikachu()
		{
			name = "Pikachu";
			type = PokemonType::ELECTRIC;
			health = 100;
			maxHealth = 100;
			attackPower = 35;
			/*Move("VINE WHIP", 25);
			Move("TACKLE", 10);*/
		}

		/*void Pikachu::thunderShock(Pokemon* targetPokemon)
		{
			cout << name << " Uses THUNDER SHOCK!!" << endl;
			Utility::waitForEnter();

			cout << "The Electricity shocks everything it touches." << endl;
			Utility::waitForEnter();

			targetPokemon->TakeDamage(attackPower);

			if (targetPokemon->isFainted())
				cout << targetPokemon->getName() << " has fainted!" << endl;
			else
				cout << targetPokemon->getName() << " has " << targetPokemon->getHealth() << " HP left." << endl;
			Utility::waitForEnter();
		}*/

		void Pikachu::attack(Move selectedMove, Pokemon* targetPokemon)
		{
			selectAndUseMove(targetPokemon);
		}
	}
}