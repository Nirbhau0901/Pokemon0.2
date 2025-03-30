#include "../../../header/Pokemon/Pokemons/Charmander.h"
#include "../../../header/Pokemon/PokemonType.h"
#include "../../../header/Utility/Utility.h"
#include <iostream>

using namespace std;
using namespace N_Utility;

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
			cout << name << " Uses FLAME BURST!!" << endl;
			Utility::waitForEnter();

			cout << "The Burst of Fire covers the ground." << endl;
			Utility::waitForEnter();

			wildPokemon->TakeDamage(attackPower);

			if (wildPokemon->isFainted())
				cout << wildPokemon->getName() << " has fainted!" << endl;
			else
				cout << wildPokemon->getName() << " has " << wildPokemon->getHealth() << " HP left." << endl;
			Utility::waitForEnter();
		}

		void Charmander::attack(Pokemon* wildPokemon) // overriding attack function
		{
			flameBurst(wildPokemon);
		}
	}
}