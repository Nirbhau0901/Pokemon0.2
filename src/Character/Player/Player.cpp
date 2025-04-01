// Player.cpp
#include "../../../header/Character/Player/Player.h"
#include "../../../header/Pokemon/PokemonChoice.h"
#include "../../../header/Pokemon/Pokemon.h"
#include "../../../header/Utility/Utility.h"
#include "../../../header/Pokemon/Pokemons/Charmander.h"
#include "../../../header/Pokemon/Pokemons/Bulbasaur.h"
#include "../../../header/Pokemon/Pokemons/Squirtle.h"
#include "../../../header/Pokemon/Pokemons/Pikachu.h"
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
    }

    // parameterized constructor
    Player::Player(std::string p_name)
    {
        name = p_name;
    }

    //method to choose the pokemon
    void Player::choosePokemon(int choice)
    {
        switch ((N_Pokemon::PokemonChoice)choice)
        {
        case N_Pokemon::PokemonChoice::CHARMANDER:
            chosenPokemon = new N_Pokemon::N_Pokemons::Charmander();
            break;

        case N_Pokemon::PokemonChoice::BULBASAUR:
            chosenPokemon = new N_Pokemon::N_Pokemons::Bulbasaur();
            break;

        case N_Pokemon::PokemonChoice::SQUIRTLE:
            chosenPokemon = new N_Pokemon::N_Pokemons::Squirtle();
            break;

        default:
            chosenPokemon = new N_Pokemon::N_Pokemons::Pikachu();
            break;
        }

        cout << "Player " << name << " chose " << chosenPokemon->getName() << " !" << endl;
        Utility::waitForEnter(); // wait for user to press enter
    }
}