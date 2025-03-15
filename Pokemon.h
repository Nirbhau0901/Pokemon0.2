#pragma once
#include "PokemonType.h"
#include <string>

using namespace std;



class Pokemon
{
public:
	string name;
	PokemonType type;
	int health; 
	static int maxHealth;

	//default constructor
	Pokemon();

	//Parameterized constructor
	Pokemon(string p_name, PokemonType p_type, int p_health);

	//Copy constructor
	Pokemon(const Pokemon& other);

	//Destructor
	~Pokemon();

	void attack(Pokemon &WildPokemon); //method for pokemon attack

	void TakeDamage(int damage); // method to recive damage and reduce pokemon health

	bool isFainted() const; // method to check if pokemon has fainted 
};
