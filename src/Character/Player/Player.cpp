// Player.cpp

#include "../../../header/Character/Player/Player.h"
#include "../../../header/Pokemon/PokemonChoice.h"
#include "../../../header/Pokemon/Pokemon.h"
#include "../../../header/Utility/Utility.h"
#include <iostream>

using namespace std;
using namespace N_Utility;
// class defination

namespace N_Player
{
    //default constructor
    Player::Player()
    {
        name = "Trainer";
        chosenPokemon = N_Pokemon::Pokemon();
    }

    // parameterized constructor
    Player::Player(std::string p_name, N_Pokemon::Pokemon p_chosenPokemon)
    {
        name = p_name;
        chosenPokemon = p_chosenPokemon;
    }

    //method to choose the pokemon
    void Player::choosePokemon(int choice)
    {
        switch ((N_Pokemon::PokemonChoice)choice)
        {
        case N_Pokemon::PokemonChoice::CHARMANDER:
            chosenPokemon = N_Pokemon::Pokemon("Charmander", N_Pokemon::PokemonType::FIRE, 100, 15);
            break;

        case N_Pokemon::PokemonChoice::BULBASAUR:
            chosenPokemon = N_Pokemon::Pokemon("Bulbasaur", N_Pokemon::PokemonType::GRASS, 100, 15);
            break;

        case N_Pokemon::PokemonChoice::SQUIRTLE:
            chosenPokemon = N_Pokemon::Pokemon("Squirtle", N_Pokemon::PokemonType::WATER, 100, 15);
            break;

        default:
            chosenPokemon = N_Pokemon::Pokemon("Pikachu", N_Pokemon::PokemonType::ELECTRIC, 100, 15);
            break;
        }

        cout << "Player " << name << " chose " << chosenPokemon.name << " !" << endl;
        Utility::waitForEnter(); // wait for user to press enter
    }
}