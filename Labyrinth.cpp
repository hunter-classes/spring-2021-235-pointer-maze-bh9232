#include "Labyrinth.h"


void checkItem(MazeCell *start, bool &spellbook, bool &potion, bool &wand){

    if(start->whatsHere == Item::WAND){
        std::cout << "Wand Obtained\n";
        wand = true;
    }else if(start->whatsHere == Item::POTION){
        std::cout << "Potion Obtained\n";
        potion = true;
    }else if(start->whatsHere == Item::SPELLBOOK){
        std::cout << "Spellbook Obtained\n";
        spellbook = true;
    }else{
        return;
    }

}

bool isPathToFreedom(MazeCell* start, const std::string& moves) {

    bool spellbook = false;
    bool potion = false;
    bool wand = false;

    //checking start location
    checkItem(start, spellbook, potion, wand);

    for(int i = 0; i < moves.length(); i++){
        
        if(moves.at(i) == 'N' && start->north != nullptr){
            std::cout << "North Works\n";
            start = start->north;
            checkItem(start, spellbook, potion, wand);
        }else if(moves.at(i) == 'S' && start->south != nullptr){
            std::cout << "South Works\n";
            start = start->south;
            checkItem(start, spellbook, potion, wand);    
        }else if(moves.at(i) == 'E' && start->east != nullptr){
            std::cout << "East Works\n";
            start = start->east;
            checkItem(start, spellbook, potion, wand);   
        }else if(moves.at(i) == 'W' && start->west != nullptr){
            std::cout << "West Works\n";
            start = start->west;
            checkItem(start, spellbook, potion, wand);   
        }else{
            return false;
        }

    }

    //checking result
    return wand && potion && spellbook;

}