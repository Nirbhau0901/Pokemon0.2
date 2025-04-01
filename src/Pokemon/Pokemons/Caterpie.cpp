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
			:Pokemon("Caterpie", PokemonType::BUG, 50, {
			 Move("BUG BITE",15),
			 Move("STICKY WEB",10)
				}){}

		void Caterpie::attack(Move selectedMove, Pokemon* targetPokemon)
		{
			Pokemon::attack(selectedMove, targetPokemon);

			if (selectedMove.name == "STICKY WEB")
			{
				int reduceDamage = 5;
				targetPokemon->reduceAttackPower(reduceDamage);

				cout << targetPokemon->getName() << "Next attack will be reduced by " << reduceDamage << " points." << endl;
				Utility::waitForEnter();
			}
		}
	}
}