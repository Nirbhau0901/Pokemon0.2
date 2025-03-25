#pragma once
#include <vector>
#include "../../header/Pokemon/grass.h"

using namespace N_Pokemon;

namespace N_Battle
{
	class WildEncounterManager
	{
	public:
		Pokemon* getRandomPokemonFromGrass(const Grass& grass);

		WildEncounterManager();
	};
}
