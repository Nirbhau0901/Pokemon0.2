#pragma once
#include "../../header/Pokemon/Pokemon.h"
#include <string>

using namespace std;
using namespace N_Pokemon;

class IStatusEffect
{
public:
	// method to apply effect
	virtual void applyEffect(Pokemon* target) = 0;

	// method to get effect name
	virtual string getEffectName() = 0;

	// method to apply changes due to effect after each turn
	// return true if pokemon caan cast move, else false
	virtual bool endTurnEffect(Pokemon* target) = 0;

	// method to clear the effect after wearing out
	virtual void clearEffect(Pokemon* target) = 0;

	virtual ~IStatusEffect() = default;


};