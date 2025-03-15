#pragma once
#include <vector>
#include "grass.h"

class WildEncounterManager
{
public:
	Pokemon getRandomPokemonFromGrass(const Grass& grass);

	WildEncounterManager();
};

