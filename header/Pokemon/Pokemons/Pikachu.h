#pragma once
#include "../../../header/Pokemon/Pokemon.h"

using namespace std;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Pikachu :public Pokemon
		{
		public:
			Pikachu();

			void attack(Move slectedMove, Pokemon* wildPokemon);
		};
	}
}