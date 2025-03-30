//Pokemon.cpp

#include "../../header/Pokemon/Pokemon.h"
#include <iostream>
#include "../../header/Pokemon/PokemonType.h"

using namespace std;

namespace N_Pokemon
{

	int Pokemon::maxHealth = 100;

	//default constructor
	Pokemon::Pokemon()
	{
		name = "Unknown";
		type = PokemonType::NORMAL;
		health = 50;
		maxHealth = 50;
		attackPower = 10;
	}

	//parameterized constructor
	Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health, int p_attackPower)
	{
		name = p_name;
		type = p_type;
		health = p_health;
		maxHealth = p_health;
		attackPower = p_attackPower;
	}

	//copy constructor
	Pokemon::Pokemon(const Pokemon& other)
	{
		name = other.name;
		type = other.type;
		health = other.health;
		maxHealth = other.maxHealth;
		attackPower = other.attackPower;
	}

	//destructor
	Pokemon::~Pokemon()
	{
		//cout << name << " has been released." << endl; //destructor logic goes here
	}

	//void Pokemon::attack(Pokemon& wildPokemon) // method for pokemon to attack 
	//{
	//	int damage = attackPower;
	//	cout << name << " attacks " << wildPokemon.name << " for " << damage << " damage " << endl;
	//	wildPokemon.TakeDamage(damage);
	//}

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

	string Pokemon::getName()
	{
		return name;
	}

	int Pokemon::getHealth()
	{
		return health;
	}
}