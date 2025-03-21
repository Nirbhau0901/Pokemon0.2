#include "../../../header/Pokemon/Pokemons/Squirtle.h"
#include "../../../header/Pokemon/PokemonType.h"
#include <iostream>

using namespace std;

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

		void Squirtle::waterSplash(Pokemon& targetPokemon)
		{
			cout << name << " Uses Water Splash on " << targetPokemon.getName() << endl;
			targetPokemon.TakeDamage(20);
		}
	}
}