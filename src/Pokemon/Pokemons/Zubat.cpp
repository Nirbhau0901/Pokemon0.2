#include "../../../header/Pokemon/Pokemons/Zubat.h"
#include "../../../header/Pokemon/PokemonType.h"
#include "../../../header/Utility/Utility.h"
#include <iostream>

using namespace std;
using namespace N_Utility;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		Zubat::Zubat()
			:Pokemon("Zubat", PokemonType::POISION, 40, {
			Move("SUPERSONIC",15),
			Move("LEECH LIFE",10)
				}) {}

		void Zubat::attack(Move selectedMove, Pokemon* targetPokemon)
		{
			Pokemon::attack(selectedMove, targetPokemon);
			
			if (selectedMove.name == "LEECH LIFE")
			{
				//Restore 60% of health based on the damage dealt
				this->health += selectedMove.power * 0.6;

				//Ensure health does not increase maxhealth 
				if (this->health > this->maxHealth)
				{
					this->health = this->maxHealth;

					cout << "And regained health." << endl;
				}
			}
		}
	}
}