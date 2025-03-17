//Player.h
#pragma once 

#include <string>
#include "../../include/Pokemon/Pokemon.h"

using namespace std;

class Pokemon;

class Player
{
public:
	string name;
	Pokemon chosenPokemon;

	Player(); // default constructor
	Player(string p_name, Pokemon p_chosenPokemon); // parameterized constructor

	void choosePokemon(int choice); //method to choose Pokemon
};