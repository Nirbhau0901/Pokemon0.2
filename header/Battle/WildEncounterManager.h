#pragma once
#include <vector>
#include "../../header/Pokemon/grass.h"

class WildEncounterManager
{
public:
	Pokemon getRandomPokemonFromGrass(const Grass& grass);

	WildEncounterManager();
};

