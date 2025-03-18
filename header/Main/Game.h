// Game.hpp
#include "../../header/Pokemon/grass.h"

class Player;

class Game
{

private:

	Grass forestGrass;

public:

	Game();
	void gameLoop(Player& player);
};