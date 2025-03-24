#include "../../../header/Pokemon/Pokemons/Bulbasaur.h"
#include "../../../header/Pokemon/PokemonType.h"
#include <iostream>

using namespace std;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Bulbasaur::Bulbasaur()
		{
			name = "Bulbasaur";
			type = PokemonType::GRASS;
			health = 100;
			maxHealth = 100;
			attackPower = 35;
		}

		void Bulbasaur::vineWhip(Pokemon* wildPokemon)
		{
			cout << name << " Uses Vine Whip on " << wildPokemon->getName() << endl;
			wildPokemon->TakeDamage(20);
		}

		void Bulbasaur::attack(Pokemon* wildPokemon) //overriding attack method 
		{
			vineWhip(wildPokemon);
		}
	}
}