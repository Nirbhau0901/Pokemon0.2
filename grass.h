#pragma once
//grass.hpp
#include "Pokemon.h"
#include <string>
#include <vector>

using namespace std;

struct Grass
{
	string environmentType; //example forest, cave, riverbank
	vector <Pokemon> wildPokemonList; // List of wild pokemon in the grass patch
	int encounterRate; // likelihood of encountering a wild pokemon

};