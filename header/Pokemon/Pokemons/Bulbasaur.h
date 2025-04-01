#pragma once
#include "../../../header/Pokemon/Pokemon.h"

using namespace std;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Bulbasaur : public Pokemon
		{
		public:
			Bulbasaur();

			void attack(Move selectedMove, Pokemon* targetPokemon);

		/*private:
			void vineWhip(Pokemon* targetPokemon);*/
		};
	}
}