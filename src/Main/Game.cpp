// Game.cpp
#include "../../header/Character/Player/Player.h"
#include "../../header/Main/Game.h"
#include "../../header/Utility/Utility.h"
#include "../../header/Pokemon/grass.h"
#include "../../header/Battle/WildEncounterManager.h"
#include "../../header/Battle/BattleManager.h"

#include <iostream>

using namespace std;

Game::Game()
{
    // sample grass environment with actual pokemon object
    forestGrass ={ "Forest", {{"Pidgey", PokemonType::NORMAL,40,10}, {"Caterpie", PokemonType::BUG,35,7},{"Zubat",PokemonType::POISION,30,5}}, 80 };
}

void Game::gameLoop(Player& player)
{
    BattleManager battleManager;
    int choice;
    bool keepPlaying = true;

    while (keepPlaying)
    {
        Utility::clearConsole(); // clear console before showing options

        // Display options to the player

        cout << "What would you like to do next, " << player.name << "?" << endl;
        cout << "1. Battle wild Pokemon." << endl;
        cout << "2. Visit PokeCenter." << endl;
        cout << "3. Challenge Gyms." << endl;
        cout << "4. Enter Pokemon League." << endl;
        cout << "5. Quit." << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;

        // clear the newline character left in the buffer after cin>>choice
        Utility::clearInputBuffer();

        //process the player's choice and display the corresponding message

        switch (choice)
        {
        case 1:
        { //created a scope within case 1
            WildEncounterManager encounterManager;
            Pokemon wildPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);

            battleManager.startBattle(player, wildPokemon);

            break;
        }

        case 2:
        {
            cout << "You head to the PokeCenter..." << endl;

            player.chosenPokemon.heal(); //method to heal the player's pokemon

            cout << player.chosenPokemon.name << "'s health has been fully restored." << endl;
            break;
        }

        case 3:
            cout << "You march upto the Gym, but its closed for renovations, Seems like even Gym Leaders need a break" << endl;
            break;

        case 4:
            cout << "You boldly step towards the Pokemon League... but the gatekeepr laughs and says, 'Maybe next time, champ!" << endl;
            break;

        case 5:
            cout << "Are you sure you want to quit?(y/n): ";

            char quitChoice;
            cin >> quitChoice;
            if (quitChoice == 'y' || quitChoice == 'Y')
            {
                keepPlaying = false;
            }
            break;

        default:
            cout << "That's not a valid choice. Try Again!" << endl;
            break;
        }

        // wait for entry key before the screen is cleared and the menu is shown
        // again

        Utility::waitForEnter();

        cout << "Goodbye " << player.name << "! Thanks for playing!" << endl;

        
    }
}