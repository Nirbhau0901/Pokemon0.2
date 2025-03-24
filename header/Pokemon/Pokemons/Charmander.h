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

			void attack(Pokemon* wildPokemon);

		private:
			void flameBurst(Pokemon* wildPokemon);  // changed from & to * as we are using pointers
		};
	}
}