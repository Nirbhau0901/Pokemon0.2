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

		void Charmander::flameBurst(Pokemon* wildPokemon) // chnaged from & to * as we are using pointers 
		{
			cout << name << " Uses Flame Burst on " << wildPokemon->getName() << endl;
			wildPokemon->TakeDamage(35);
		}

		void Charmander::attack(Pokemon* wildPokemon) // overriding attack function
		{
			flameBurst(wildPokemon);
		}
	}
}