#pragma once
#include "../../../header/Pokemon/Pokemon.h"

using namespace std;

namespace N_Pokemon
{
	namespace N_Pokemons
	{
		class Pidgey : public Pokemon
		{
			Pidgey();

			void wingAttack(Pokemon& target);
		};
	}
}
