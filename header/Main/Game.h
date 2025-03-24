// Game.hpp
#include "../../header/Pokemon/grass.h"
#include "../../header/Character/Player/Player.h"

class Player;

namespace N_Main
{

	class Game
	{

	private:

		N_Pokemon::Grass forestGrass;
		N_Pokemon::Pokemon* wildPokemon;

	public:

		Game();
		~Game();
		void gameLoop(N_Player::Player* player);
		/*void visitPokeCenter(N_Player::Player* player);*/
	};
}