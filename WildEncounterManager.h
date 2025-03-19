#pragma once
#include <vector>
#include "grass.h"

class WildEncounterManager
{
public:
	Pokemon getRandomPokemonFromGrass(const Grass& grass);

  WildEncounterManager(); // constructor will be same name as the class with no return type 
};
