#include "../../../header/Pokemon/StatusEffect/ParalyzedEffect.h"
#include "../../../header/Pokemon/Pokemon.h"
#include <iostream>

using namespace std;

namespace N_Pokemon
{
	namespace N_StatusEffects
	{
		void ParalyzedEffect::applyEffect(Pokemon* targetPokemon)
		{
			cout << targetPokemon->getName() << " is paralyzed and may not be able to move!" << endl;

			//effect lasts between 1-3 turns
			turnsLeft = rand() % 3 + 1;
		}

		string ParalyzedEffect::getEffectName()
		{
			return "Paralyzed";
		}

		bool ParalyzedEffect::endTurnEffect(Pokemon* targetPokemon)
		{
			if (turnsLeft <= 0)
			{
				clearEffect(targetPokemon);
				return true;
			}
			turnsLeft--;

			//Generating a random number between 0 & 3
			int paralysis_chance = rand() % 4;

			//25% chances of Pokemon not being able to move
			if (paralysis_chance == 0)
			{
				cout << targetPokemon->getName() << " is paralyzed! Can't move" << endl;
				return false; //Pokemon cannot act his turn
			}

			// otherwise, it can act normally
			cout << targetPokemon->getName() << " Shakes of paralysis temporarily and can move." << endl;
			return true; // Pokemon can act its turn
		}

		void ParalyzedEffect::clearEffect(Pokemon* targetPokemon)
		{
			cout << targetPokemon->getName() << " is no longer paralyzed." << endl;
			/*targetPokemon->clearEffect();*/
		}
	}
}