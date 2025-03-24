#include "../../../header/Pokemon/Pokemons/Zubat.h"
#include "../../../header/Pokemon/PokemonType.h"
#include <iostream>

using namespace std;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Zubat::Zubat()
		{
			name = "Zubat";
			type = PokemonType::POISION;
			health = 100;
			maxHealth = 100;
			attackPower = 20;
		}

		void Zubat::supersonic(Pokemon* targetPokemon)
		{
			cout << name << " Uses Supersonic on " << targetPokemon->getName() << endl;
			targetPokemon->TakeDamage(20);
		}

		void Zubat::attack(Pokemon* targetPokemon)
		{
			supersonic(targetPokemon);
		}
	}
}