// Player.cpp

#include "../../../include/Character/Player/Player.h"
#include "../../../include/Pokemon/PokemonChoice.h"
#include "../../../include/Pokemon/Pokemon.h"
#include "../../../include/Utility/Utility.h"
#include <iostream>

using namespace std;

// class defination

//default constructor
Player::Player()
{
    name = "Trainer";
    chosenPokemon = Pokemon();
}

// parameterized constructor
Player::Player(std::string p_name, Pokemon p_chosenPokemon)
{
    name = p_name;
    chosenPokemon = p_chosenPokemon;
}

//method to choose the pokemon
void Player::choosePokemon(int choice)
{
    switch ((PokemonChoice)choice)
    {
    case PokemonChoice::CHARMANDER:
        chosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100, 15);
        break;

    case PokemonChoice::BULBASAUR:
        chosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100, 15);
        break;

    case PokemonChoice::SQUIRTLE:
        chosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100, 15);
        break;

    default:
        chosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100, 15);
        break;
    }

    cout << "Player " << name << " chose " << chosenPokemon.name << " !" << endl;
    Utility::waitForEnter(); // wait for user to press enter
}