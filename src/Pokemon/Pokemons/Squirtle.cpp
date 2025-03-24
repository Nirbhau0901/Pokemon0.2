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

		void Squirtle::waterSplash(Pokemon* wildPokemon)
		{
			cout << name << " Uses Water Splash on " << wildPokemon->getName() << endl;
			wildPokemon->TakeDamage(20);
		}

		void Squirtle::attack(Pokemon* wildPokemon)
		{
			waterSplash(wildPokemon);
		}
	}
}