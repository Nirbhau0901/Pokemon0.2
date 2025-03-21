#pragma once
#include "../../../header/Pokemon/Pokemon.h"

using namespace std;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Caterpie : public Pokemon
		{
		public:
			Caterpie();

		private:
			void bugBite(Pokemon& targetPokemon);
		};
	}
}
