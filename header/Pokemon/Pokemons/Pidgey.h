#pragma once
#include "../../../header/Pokemon/Pokemon.h"

using namespace std;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Pidgey : public Pokemon
		{
		public:
			Pidgey();

			void attack(Move selectedMove, Pokemon* targetPokemon);
		/*private:
			void wingAttack(Pokemon* targetPokemon);*/
		};
	}
}
