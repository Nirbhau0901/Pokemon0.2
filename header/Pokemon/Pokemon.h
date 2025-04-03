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

		string getName();

		int getHealth();

		vector<Move>moves;

		void showAvailableMoves();

		int selectMove();

		void useMove(Move selectedMove, Pokemon* target);

		void selectAndUseMove(Pokemon* targetPoekemon); //method for selecting and using a move

		int reduceAttackPower(int reduceDamage);

		IStatusEffect* appliedEffect;

		bool canAttack();

		void applyEffect(StatusEffectType effectToApply);

		void clearEffect();

		bool canApplyEffect();
	};
}