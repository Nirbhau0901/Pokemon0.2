#include "../../../header/Pokemon/Pokemons/Pikachu.h"
#include"../../../header/Pokemon/PokemonType.h"
#include <iostream>

using namespace std;

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
			attackPower = 20;
		}

		void Pikachu::thunderShock(Pokemon* wildPokemon)
		{
			cout << name << " Uses Thundershock on " << wildPokemon->getName() << endl;
			wildPokemon->TakeDamage(20);
		}

		void Pikachu::attack(Pokemon* wildPokemon)
		{
			thunderShock(wildPokemon);
		}
	}
}