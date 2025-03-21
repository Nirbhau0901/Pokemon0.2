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

		private:
			void vineWhip(Pokemon& targetPokemon);
		};
	}
}