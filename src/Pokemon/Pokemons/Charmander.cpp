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
			:Pokemon("Charmander", PokemonType::FIRE, 110, {
			Move("FLAME BURST",30),
			Move("BLAZING CHARGE",80)
				}) {}

		void Charmander::attack(Move selectedMove, Pokemon* targetPokemon) // overriding attack function
		{
			Pokemon::attack(selectedMove, targetPokemon);

			if (selectedMove.name == "BLAZING CHARGE")
			{
				this->TakeDamage(10); // using this keyword to specify the take damage on charmander subclass as the take damage function is already being called in the attack function
				cout << name << " takes a recoil damage of 10 points from using BLAZING CHARGE." << endl;
				Utility::waitForEnter();
			}
		}
	}
}