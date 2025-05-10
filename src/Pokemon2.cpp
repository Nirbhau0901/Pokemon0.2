#include "../header/Main/Game.h"
#include "../header/Character/Player/Player.h"
#include "../header/Character/ProfessorOak.h"
#include "../header/Pokemon/Pokemon.h"
#include <iostream>
#include <limits> // include this header to use numeric limits
#include <string>

using namespace std;
using namespace N_Main;
using namespace N_Character;

int main()
{
    // initialize Professor Oak and player with default placeholder values

    ProfessorOak* professor = new ProfessorOak("Professor Oak");

    N_Player::Player* player = new N_Player::Player();

    // greeting the player and ofeering Pokemon choice
    professor->greetPlayer(*player);
    professor->offerPokemonChoices(*player);

    // explaining main quest
    professor->explainMainQuest(*player);

    Game* game = new Game;// creating game object 

    //start the main game loop
    game->gameLoop(player); // calling function from object 

    delete (professor);
    delete (player);
    delete (game);

    return 0;
}


