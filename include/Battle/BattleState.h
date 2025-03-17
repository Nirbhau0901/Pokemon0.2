#pragma once
// battle state.hpp
#include "../../include/Pokemon/Pokemon.h"

struct BattleState
{
	Pokemon* playerPokemon; // pointer for player pokemon
	Pokemon* wildPokemon; // pointer for wild pokemon
	bool playerTurn; // true if it is the players turn or else false
	bool battleOngoing; // true is the battle is still ongoing 
};