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

		private:
			void waterSplash(Pokemon& targetPokemon);
		};
	}
}