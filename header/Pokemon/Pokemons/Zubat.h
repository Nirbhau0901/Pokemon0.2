#pragma once
#include "../../../header/Pokemon/Pokemon.h"

using namespace std;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Zubat : public Pokemon
		{
			Zubat();

			void supersonic(Pokemon& targetPokemon);
		};
	}
}