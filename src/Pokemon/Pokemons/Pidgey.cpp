#include "../../../header/Pokemon/Pokemons/Pidgey.h"
#include "../../../header/Pokemon/PokemonType.h"
#include "../../../header/Utility/Utility.h"
#include "../../../header/Battle/BattleManager.h"
#include <iostream>

using namespace std;
using namespace N_Utility;
using namespace N_Battle;


namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Pidgey::Pidgey()
			:Pokemon("Pidgey", PokemonType::NORMAL, 50, {
			Move("WING ATTACK",25),
			Move("GUST",20)
				}) {}

		/*void Pidgey::wingAttack(Pokemon* targetPokemon)
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
		}*/

		void Pidgey::attack(Move selectedMove, Pokemon* targetPokemon)
		{
			Pokemon::attack(selectedMove, targetPokemon);

			if (selectedMove.name == "GUST")
			{
				//20% chances of blowing away the enemy and ending the battle
				if (rand() % 100 < 20)
				{
					cout << "... and blew the opponent away!!" << endl;
					//BattleManager::stopBattle();
					Utility::waitForEnter();
				}
			}
		}
	}
}