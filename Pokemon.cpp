//Pokemon.cpp

#include "Pokemon.h"
#include <iostream>
#include "PokemonType.h"

using namespace std;

int Pokemon::maxHealth = 100;

//default constructor
Pokemon::Pokemon() : name("Unknown"), type(PokemonType::NORMAL), health(50) {}

//parameterized constructor
Pokemon::Pokemon(std::string p_name,PokemonType p_type, int p_health) : name(p_name), type(p_type), health(p_health) {}

//copy constructor
Pokemon::Pokemon(const Pokemon&other) : name(other.name), type(other.type), health(other.health) {}

//destructor
Pokemon::~Pokemon() 
{
	cout << name << " has been released." << endl; //destructor logic goes here
}

void Pokemon::attack(Pokemon &WildPokemon)
{
	int damage = 10;
	cout << name << " attacks " << WildPokemon.name << " for " << damage << " damage " << endl;
	WildPokemon.TakeDamage(damage);
}

void Pokemon::TakeDamage(int damage)
{
	health = health - damage;

	if (health < 0)
	{
		health = 0;
	}
}

bool Pokemon::isFainted()const
{
	return health <= 0;
}