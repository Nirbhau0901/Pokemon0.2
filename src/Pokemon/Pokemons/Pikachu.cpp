#include "../../../header/Pokemon/Pokemons/Pikachu.h"
#include "../../../header/Pokemon/PokemonType.h"
#include "../../../header/Utility/Utility.h"
#include "../../../header/Pokemon/Move.h"
#include "../../../header/Pokemon/StatusEffect/StatusEffectType.h"
#include <iostream>

using namespace std;
using namespace N_Utility;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Pikachu::Pikachu()
			:Pokemon("Pikachu", PokemonType::ELECTRIC, 110, {
			Move("THUNDER SHOCK",35),
			Move("QUICK ATTACK",10),
			Move("THUNDER BOLT",80)
				}) {}

		/*void Pikachu::thunderShock(Pokemon* targetPokemon)
		{
			cout << name << " Uses THUNDER SHOCK!!" << endl;
			Utility::waitForEnter();

			cout << "The Electricity shocks everything it touches." << endl;
			Utility::waitForEnter();

			targetPokemon->TakeDamage(attackPower);

			if (targetPokemon->isFainted())
				cout << targetPokemon->getName() << " has fainted!" << endl;
			else
				cout << targetPokemon->getName() << " has " << targetPokemon->getHealth() << " HP left." << endl;
			Utility::waitForEnter();
		}*/

		void Pikachu::attack(Move selectedMove, Pokemon* targetPokemon)
		{
			if (selectedMove.name == "THUNDER BOLT")
			{
				//80% chances of hitting the target
				if (rand() % 100 < 80)
				{
					Pokemon::attack(selectedMove, targetPokemon);
					cout << "... and hits the target!!" << endl;
				}
				else
					cout << "... but missed the target." << endl;
			}
			else
				Pokemon::attack(selectedMove, targetPokemon);

			if (selectedMove.name == "THUNDER SHOCK")
			{
				if (targetPokemon->canApplyEffect())
					targetPokemon->applyEffect(StatusEffectType::PARALYZED);
			}
		}
	}
}