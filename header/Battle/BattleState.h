#pragma once
// battle state.hpp
#include "../../header/Pokemon/Pokemon.h"

//using namespace N_Pokemon;

namespace N_Battle
{
	struct BattleState
	{
		N_Pokemon::Pokemon* playerPokemon; // pointer for player pokemon
		N_Pokemon::Pokemon* wildPokemon; // pointer for wild pokemon
		bool playerTurn; // true if it is the players turn or else false
		bool battleOngoing; // true is the battle is still ongoing 
	};
}