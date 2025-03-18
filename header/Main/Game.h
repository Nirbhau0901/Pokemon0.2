// Game.hpp
#include "../../header/Pokemon/grass.h"

class Player;

namespace N_Main
{

	class Game
	{

	private:

		Grass forestGrass;

	public:

		Game();
		void gameLoop(Player& player);
	};
}