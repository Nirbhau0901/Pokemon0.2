#include "../../../header/Pokemon/Pokemons/Pidgey.h"
#include "../../../header/Pokemon/PokemonType.h"
#include "../../../header/Utility/Utility.h"
#include <iostream>

using namespace std;
using namespace N_Utility;


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
			attackPower = 30;
		}

		void Pidgey::wingAttack(Pokemon* targetPokemon)
		{
			cout << name << " Uses WING ATTACK!!" << endl;
			Utility::waitForEnter();

			cout << "The Strong wings deliver a solid strike." << endl;
			Utility::waitForEnter();

			targetPokemon->TakeDamage(attackPower);

			if (targetPokemon->isFainted())
				cout << targetPokemon->getName() << " has fainted!" << endl;
			else
				cout << targetPokemon->getName() << " has " << targetPokemon->getHealth() << " HP left." << endl;
			Utility::waitForEnter();
		}

		void Pidgey::attack(Pokemon* targetPokemon)
		{
			wingAttack(targetPokemon);
		}
	}
}