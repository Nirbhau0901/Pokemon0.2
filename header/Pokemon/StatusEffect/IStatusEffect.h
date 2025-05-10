#pragma once
#include <string>

using namespace std;



namespace N_Pokemon
{
	class Pokemon;

	namespace N_StatusEffects
	{
		class IStatusEffect
		{
		public:
			// method to apply effect
			virtual void applyEffect(Pokemon* targetPokemon) = 0;

			// method to get effect name
			virtual string getEffectName() = 0;

			// method to apply changes due to effect after each turn
			// return true if pokemon caan cast move, else false
			virtual bool endTurnEffect(Pokemon* targetPokemon) = 0;

			// method to clear the effect after wearing out
			virtual void clearEffect(Pokemon* targetPokemon) = 0;

			virtual ~IStatusEffect() = default;
		};
	}
}