//Pokemon.cpp

#include "Pokemon.h"
#include <iostream>
#include "PokemonType.h"

using namespace std;

int Pokemon::maxHealth = 50;

//default constructor
Pokemon::Pokemon() : name("Unknown"), type(PokemonType::NORMAL), health(50), attackPower(15) {}

//parameterized constructor
Pokemon::Pokemon(std::string p_name,PokemonType p_type, int p_maxHealth, int p_attackPower) : name(p_name), type(p_type), health(p_maxHealth), attackPower(p_attackPower) {}

//copy constructor
Pokemon::Pokemon(const Pokemon&other) : name(other.name), type(other.type), health(other.health), attackPower(other.attackPower) {}

//destructor
Pokemon::~Pokemon() 
{
	cout << name << " has been released." << endl; //destructor logic goes here
}

void Pokemon::attack(Pokemon &WildPokemon) // method for pokemon to attack 
{
	int damage = attackPower;
	cout << name << " attacks " << WildPokemon.name << " for " << damage << " damage " << endl;
	WildPokemon.TakeDamage(damage);
}

void Pokemon::TakeDamage(int damage) // method for poekmon taking damage 
{
	health = health - damage;

	if (health < 0)
	{
		health = 0;
	}
}

bool Pokemon::isFainted()const // method to check is pokemon has fainted
{
	return health <= 0;
}

void Pokemon::heal() // method to heal pokemon
{
	health = maxHealth; // set health to max health 
}