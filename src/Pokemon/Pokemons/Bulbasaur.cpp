#include "../../../header/Pokemon/Pokemons/Bulbasaur.h"
#include "../../../header/Pokemon/PokemonType.h"
#include "../../../header/Utility/Utility.h"
#include <iostream>

using namespace std;
using namespace N_Utility;

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
			cout << name << " Uses VINE WHIP!!" << endl;
			Utility::waitForEnter();

			cout << "The Vines strike the enemy." << endl;
			Utility::waitForEnter();

			wildPokemon->TakeDamage(attackPower);

			if (wildPokemon->isFainted())
				cout << wildPokemon->getName() << " has fainted!" << endl;
			else
				cout << wildPokemon->getName() << " has " << wildPokemon->getHealth() << " HP left." << endl;
			Utility::waitForEnter();
		}

		void Bulbasaur::attack(Pokemon* wildPokemon) //overriding attack method 
		{
			vineWhip(wildPokemon);
		}
	}
}