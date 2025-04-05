// Game.hpp
#include "../../header/Pokemon/grass.h"
#include "../../header/Character/Player/Player.h"

class Player;
using namespace N_Pokemon;
using namespace N_Player;


namespace N_Main
{

	class Game
	{

	private:

		Grass* forestGrass;
		Pokemon* wildPokemon;

	public:

		Game();
		~Game();
		void gameLoop(N_Player::Player* player);
		
	};
}