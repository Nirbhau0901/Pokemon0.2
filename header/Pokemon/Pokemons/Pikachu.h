#pragma once
#include "../../../header/Pokemon/Pokemon.h"

using namespace std;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Pikachu :public Pokemon
		{
		public:
			Pikachu();

			void attack(Pokemon* wildPokemon);

		private:
			void thunderShock(Pokemon* wildPokemon);
		};
	}
}