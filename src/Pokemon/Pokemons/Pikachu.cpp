#include "../../../header/Pokemon/Pokemons/Pikachu.h"
#include "../../../header/Pokemon/PokemonType.h"
#include "../../../header/Utility/Utility.h"
#include <iostream>

using namespace std;
using namespace N_Utility;

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
			attackPower = 35;
		}

		void Pikachu::thunderShock(Pokemon* wildPokemon)
		{
			cout << name << " Uses THUNDER SHOCK!!" << endl;
			Utility::waitForEnter();

			cout << "The Electricity shocks everything it touches." << endl;
			Utility::waitForEnter();

			wildPokemon->TakeDamage(attackPower);

			if (wildPokemon->isFainted())
				cout << wildPokemon->getName() << " has fainted!" << endl;
			else
				cout << wildPokemon->getName() << " has " << wildPokemon->getHealth() << " HP left." << endl;
			Utility::waitForEnter();
		}

		void Pikachu::attack(Pokemon* wildPokemon)
		{
			thunderShock(wildPokemon);
		}
	}
}