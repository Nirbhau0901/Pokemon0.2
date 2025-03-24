#pragma once
#include "../../../header/Pokemon/Pokemon.h"

using namespace std;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Zubat : public Pokemon
		{
		public:
			Zubat();

			void attack(Pokemon* targetPokemon);

		private:
			void supersonic(Pokemon* targetPokemon);
		};
	}
}