#pragma once
#include <vector>
#include "grass.h"

class WildEncounterManager
{
public:
	WildPokemon getRandomPokemonFromGrass(const Grass& grass);
};

