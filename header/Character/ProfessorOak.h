//Professor Oak.hpp
#include <iostream>
#include "../../header/Character/Player/Player.h"

using namespace std;
//using namespace N_Player;

class Player;

namespace N_Character
{
	class ProfessorOak
	{
	public:

		string name;

		ProfessorOak(string p_name);
		void greetPlayer(N_Player::Player& player);
		void offerPokemonChoices(N_Player::Player& player);
		void explainMainQuest(N_Player::Player& player);
	};
}