#include "../header/Main/Game.h"
#include "../header/Character/Player/Player.h"
#include "../header/Character/ProfessorOak.h"
#include "../header/Pokemon/Pokemon.h"
#include <iostream>
#include <limits> // include this header to use numeric limits
#include <string>

using namespace std;
using namespace N_Main;
//using namespace N_Player;
using namespace N_Character;
//using namespace N_Pokemon;

int main()
{
    // create Pokemon and player for the game
    N_Pokemon::Pokemon charmander("Charmander", N_Pokemon::PokemonType::FIRE, 100, 15); //using parameterized consructor 


    // initialize Professor Oak and player with default placeholder values

    ProfessorOak professor("Professor Oak");

    N_Player::Player player("Ash", charmander);

    // greeting the player and ofeering Pokemon choice
    professor.greetPlayer(player);
    professor.offerPokemonChoices(player);

    // explaining main quest
    professor.explainMainQuest(player);

    Game game;// creating game object 

    //start the main game loop
    game.gameLoop(player); // calling function from object 

    return 0;
}


