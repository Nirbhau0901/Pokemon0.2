#pragma once
#include "PokemonType.h"
#include "../../header/Pokemon/StatusEffect/IStatusEffect.h"
#include "../../header/Pokemon/StatusEffect/StatusEffectType.h"
#include "Move.h"
#include <string>
#include <vector>

using namespace std;
using namespace N_Pokemon::N_StatusEffects;


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
		Pokemon(string p_name, PokemonType p_type, int p_health, vector<Move> p_moves);

		//Copy constructor
		Pokemon(const Pokemon& other);

		//Destructor
		~Pokemon();

		virtual void attack(Move selectedMove, Pokemon* targetPokemon) = 0; //Abstract method for pokemon attack

		void TakeDamage(int damage); // method to recive damage and reduce pokemon health

		bool isFainted() const; // method to check if pokemon has fainted 

		void heal(); // method to heal pokemon

		string getName(); // method to get pokemon name

		int getHealth(); // method to get pokemon health

		vector<Move>moves; // vetor storing the move list

		void showAvailableMoves(); // method to show available moves

		int selectMove(); // method to select move

		void useMove(Move selectedMove, Pokemon* targetPokemon); // method for using move

		void selectAndUseMove(Pokemon* targetPoekemon); //method for selecting and using a move

		int reduceAttackPower(int reduceDamage); // method for reducing damage

		IStatusEffect* appliedEffect; // pointer for applied status effect

		bool canAttack(); // method to check if pokemon can attack

		void applyEffect(StatusEffectType effectToApply); // method to apply status effect

		void clearEffect(); // method to clear status effect

		bool canApplyEffect(); // method to check if new status effect can be applied to the pokemon
	};
}