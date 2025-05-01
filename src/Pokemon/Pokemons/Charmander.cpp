#include "../../../header/Pokemon/Pokemons/Charmander.h"
#include "../../../header/Pokemon/PokemonType.h"
#include <iostream>

using namespace std;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Charmander::Charmander()
		{
			name = "Charmander";
			type = PokemonType::FIRE;
			health = 100;
			maxHealth = 100;
			attackPower = 35;
		}

		void Charmander::flameBurst(Pokemon& targetPokemon)
		{
			cout << name << " Uses Flame Burst on " << targetPokemon.getName() << endl;
			targetPokemon.TakeDamage(35);
		}
	}
}