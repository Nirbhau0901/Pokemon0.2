#pragma once
#include "PokemonType.h"
#include <string>

using namespace std;


namespace N_Pokemon
{
	class Pokemon
	{

	protected:
		string name;
		PokemonType type;
		int health;
		static int maxHealth;
		int attackPower;

	public:
		

		//default constructor
		Pokemon();

		//Parameterized constructor
		Pokemon(string p_name, PokemonType p_type, int p_maxHealth, int p_attackPower);

		//Copy constructor
		Pokemon(const Pokemon& other);

		//Destructor
		~Pokemon();

		virtual void attack(Pokemon* WildPokemon) = 0; //Abstract method for pokemon attack

		void TakeDamage(int damage); // method to recive damage and reduce pokemon health

		bool isFainted() const; // method to check if pokemon has fainted 

		void heal(); // method to heal pokemon

		string getName();
	};
}