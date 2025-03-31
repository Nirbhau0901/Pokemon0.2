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
			:Pokemon("Bulbasaur", PokemonType::GRASS, 110, {
			 Move ("VINE WHIP",25),
			 Move ("TACKLE",10)
				}){}

		/*void Bulbasaur::vineWhip(Pokemon* wildPokemon)
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
		}*/

		void Bulbasaur::attack(Move selectedMove, Pokemon* targetPokemon) //overriding attack method 
		{
			Pokemon::attack(selectedMove, targetPokemon) ;

			if (selectedMove.name == "VINE WHIP")
			{
				int secondHitChance = rand() % 2;

				if (secondHitChance == 1)
				{
					Pokemon::attack(selectedMove, targetPokemon);
					cout << name << " hits a second " << selectedMove.name << endl;
				}
				else
					cout << name << targetPokemon->getName() << " dodge's the second hit!" << endl;
				Utility::waitForEnter();
			}
		}
	}
}