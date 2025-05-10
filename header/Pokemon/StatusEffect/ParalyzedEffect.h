#pragma once
#include "../../../header/Pokemon/StatusEffect/IStatusEffect.h"
#include "../../../header/Pokemon/Pokemon.h"
#include <iostream>

using namespace std;

namespace N_Pokemon
{
	namespace N_StatusEffects
	{
		class ParalyzedEffect : public IStatusEffect
		{
		private:
			 int turnsLeft; // variable to track remaining number of turns of the effect 

		public:
			void applyEffect(Pokemon* targetPokemon)override;
			string getEffectName()override;
			bool endTurnEffect(Pokemon* targetPokemon)override;
			void clearEffect(Pokemon* targetPokemon)override;
		};
	}
}