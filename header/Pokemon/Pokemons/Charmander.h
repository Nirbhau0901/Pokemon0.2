#pragma once
#include "../../../header/Pokemon/Pokemon.h"

using namespace std;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Charmander : public Pokemon
		{
		public:
			Charmander();

		private:
			void flameBurst(Pokemon& targetPokemon);
		};
	}
}