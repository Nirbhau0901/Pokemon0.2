#pragma once
#include "../../../header/Pokemon/Pokemon.h"

using namespace std;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Squirtle : public Pokemon
		{
		public:
			Squirtle();

			void attack(Move selectedMove, Pokemon* wildPokemon);

		/*private:
			void waterSplash(Pokemon* wildPokemon);*/
		};
	}
}