#include "Labyrinth.h"


void checkItem(MazeCell *start, bool spellbook, bool potion, bool wand){

    if(start->whatsHere == Item::WAND){
        std::cout << "Wand Obtained\n";
        wand = true;
    }else if(start->whatsHere == Item::POTION){
        std::cout << "Potion Obtained\n";
        potion = true;
    }else if(start->whatsHere == Item::SPELLBOOK){
        std::cout << "Spellbook Obtained\n";
        spellbook = true;
    }

}

bool checkValid(MazeCell *start, std::string nextCell){

    if(nextCell == "N" && start->north != nullptr){
        std::cout << "North Works\n";
        start = start->north;
        return true;
    }else if(nextCell == "S" && start->south != nullptr){
        std::cout << "South Works\n";
        start = start->south;
        return true;
    }
    else if(nextCell == "E" && start->east != nullptr){
        std::cout << "East Works\n";
        start = start->east;
        return true;
    }else if(nextCell == "W" && start->west != nullptr){
        std::cout << "West Works\n";
        start = start->west;
        return true;
    }else{
        return false;
    }

}

bool isPathToFreedom(MazeCell* start, const std::string& moves) {

    bool spellbook = false;
    bool potion = false;
    bool wand = false;

    //checking start location
    checkItem(start, spellbook, potion, wand);

    for(int i = 0; i < moves.length(); i++){
        
        if(!checkValid(start, moves.substr(i, i+1))){
            return false;
        }
        checkItem(start, spellbook, potion, wand);

    }

    //checking result
    return (wand && potion && spellbook);

}