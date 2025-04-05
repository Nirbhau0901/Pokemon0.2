//Player.h
#pragma once 
#include <string>
#include "../../../header/Pokemon/Pokemon.h"

using namespace std;

namespace N_Player
{
	class Player
	{
	public:
		string name;
		N_Pokemon::Pokemon* chosenPokemon; //using pointer

		Player(); // default constructor
		Player(string p_name); // parameterized constructor

		void choosePokemon(int choice); //method to choose Pokemon
	};
}