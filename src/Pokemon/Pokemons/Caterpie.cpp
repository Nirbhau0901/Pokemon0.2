#include "../../../header/Pokemon/Pokemons/Caterpie.h"
#include "../../../header/Pokemon/PokemonType.h"
#include <iostream>

using namespace std;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Caterpie::Caterpie()
		{
			name = "Caterpie";
			type = PokemonType::BUG;
			health = 100;
			maxHealth = 100;
			attackPower = 10;
		}

		void Caterpie::bugBite(Pokemon* targetPokemon)
		{
			cout << name << " Uses Bug Bite on " << targetPokemon->getName() << endl;
			targetPokemon->TakeDamage(10);
		}

		void Caterpie::attack(Pokemon* targetPokemon)
		{
			bugBite(targetPokemon);
		}
	}
}