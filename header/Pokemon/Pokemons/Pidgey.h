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

		private:
			void wingAttack(Pokemon& target);
		};
	}
}
