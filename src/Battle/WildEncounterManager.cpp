#include "../../header/Battle/WildEncounterManager.h"
#include <cstdlib>
#include <ctime>

using namespace N_Pokemon;

namespace N_Battle
{
	WildEncounterManager::WildEncounterManager()
	{
		srand(time(0));
	}

	Pokemon* WildEncounterManager::getRandomPokemonFromGrass(const Grass& grass)
	{
		int randomIndex = rand() % grass.wildPokemonList.size();

		return grass.wildPokemonList[randomIndex];
	}
}