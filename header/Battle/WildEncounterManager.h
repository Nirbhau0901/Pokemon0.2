#pragma once
#include <vector>
#include "../../header/Pokemon/grass.h"


namespace N_Battle
{
	class WildEncounterManager
	{
	public:
		N_Pokemon::Pokemon getRandomPokemonFromGrass(const N_Pokemon::Grass& grass);

		WildEncounterManager();
	};
}
