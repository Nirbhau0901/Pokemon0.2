//Pokemon.cpp

#include "../../header/Pokemon/Pokemon.h"
#include <iostream>
#include "../../header/Pokemon/PokemonType.h"
#include "../../header/Utility/Utility.h"
#include "../../header/Pokemon/Move.h"

using namespace std;
using namespace N_Utility;

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
	Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health, vector<Move> p_moves)
	{
		name = p_name;
		type = p_type;
		health = p_health;
		maxHealth = p_health;
		moves = p_moves;
	}

	//copy constructor
	Pokemon::Pokemon(const Pokemon& other)
	{
		name = other.name;
		type = other.type;
		health = other.health;
		maxHealth = other.maxHealth;
		moves = other.moves;
	}

	//destructor
	Pokemon::~Pokemon()
	{
		//cout << name << " has been released." << endl; //destructor logic goes here
	}

	void Pokemon::attack(Move selectedMove, Pokemon* targetPokemon) // method for pokemon to attack 
	{
		targetPokemon->TakeDamage(selectedMove.power);
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

	string Pokemon::getName()
	{
		return name;
	}

	int Pokemon::getHealth()
	{
		return health;
	}

	void Pokemon::selectAndUseMove(Pokemon* targetPokemon)
	{
		//show available moves
		showAvailableMoves();

		//Player Input
		int choice = selectMove();
		Move selectedMove = moves[choice - 1];

		//execute the move
		useMove(selectedMove, targetPokemon);
	}

	void Pokemon::showAvailableMoves()
	{
		cout << name << "'s available moves:" << endl;
		//listing all the moves for the player to choose from

		for (size_t i = 0; i < moves.size(); ++i)
		{
			cout << i + 1 << ": " << moves[i].name << "Power: " << moves[i].power << endl;
		}
	}

	int Pokemon::selectMove()
	{
		//asking player to select a move
		int choice;
		cout << "Choose a move: ";
		cin >> choice;

		//validating the choice

		while (choice<1 || choice>static_cast<int>(moves.size()))
		{
			cout << "Invalid Choice. Try Again!!";
			cin >> choice;
		}

		return choice;
	}

	void Pokemon::useMove(Move selectedMove, Pokemon* targetPokemon)
	{
		cout << name << "Used " << selectedMove.name << "!" << endl;
		attack(selectedMove, targetPokemon);

		Utility::waitForEnter();

		cout << "..." << endl;
		Utility::waitForEnter();

		if (targetPokemon->isFainted())
			cout << targetPokemon->getName() << " Fainted!" << endl;
		else
			cout << targetPokemon->getName() << " has " << targetPokemon->getHealth() << " HP left." << endl;
	}

	int Pokemon::reduceAttackPower(int reduceDamage)
	{
		attackPower = attackPower - reduceDamage;

		return attackPower;
	}
}