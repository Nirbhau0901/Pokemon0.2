#pragma once
#include <vector>
#include "../../include/Pokemon/grass.h"

class WildEncounterManager
{
public:
	Pokemon getRandomPokemonFromGrass(const Grass& grass);

	WildEncounterManager();
};

