#include "../../../header/Pokemon/Pokemons/Pidgey.h"
#include "../../../header/Pokemon/PokemonType.h"
#include <iostream>

using namespace std;


namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Pidgey::Pidgey()
		{
			name = "Pidgey";
			type = PokemonType::NORMAL;
			health = 100;
			maxHealth = 100;
			attackPower = 35;
		}

		void Pidgey::wingAttack(Pokemon& targetPokemon)
		{
			cout << name << " Uses Wing Attack on" << targetPokemon.getName() << endl;
			targetPokemon.TakeDamage(35);
		}
	}
}