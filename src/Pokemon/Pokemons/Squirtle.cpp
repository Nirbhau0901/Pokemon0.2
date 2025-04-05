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
			:Pokemon("Squirtle", PokemonType::WATER, 110, {
			Move("WATER SPLASH",30),
			Move("RAPID SPIN",5)
				}) {}

		void Squirtle::attack(Move selectedMove, Pokemon* targetPokemon)
		{
			Pokemon::attack(selectedMove, targetPokemon);

			if (selectedMove.name == "RAPID SPIN")
			{
				//Random number of hits between 2-5
				int hits = (rand() % 4) + 2;

				//spliting damage across hits
				for (int i = 0; i < hits; ++i)
				{
					Pokemon::attack(selectedMove, targetPokemon);
				}

				cout << "And hits " << hits << " times!" << endl;
			}
		}
	}
}