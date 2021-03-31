#include "Labyrinth.h"

bool checkResult(bool completed, std::string result){

    //requirements completed = true and count = 3 (Spellbook, Potion, Wand)
    int count = 0;

    for(int i = 0; i < result.length(); i++){
        if(result.find("S") != std::string::npos) count++;
        if(result.find("P") != std::string::npos) count++;
        if(result.find("W") != std::string::npos) count++;
    }

    if(count == 3){
        completed = true;
    }

    return completed;

}

bool isPathToFreedom(MazeCell* start, const std::string& moves) {

    while(completed == false){

        if(north != nullptr){

            if(north->whatsHere == Item::SPELLBOOK){
                itemTracker += "S";
            }else if(north->whatsHere == Item::POTION){
                itemTracker += "P";
            }else if(north->whatsHere == Item::WAND){
                itemTracker += "W";
            }
            start = start->north;

        }

        if(east != nullptr){

            if(east->whatsHere == Item::SPELLBOOK){
                itemTracker += "S";
            }else if(east->whatsHere == Item::POTION){
                itemTracker += "P";
            }else if(east->whatsHere == Item::WAND){
                itemTracker += "W";
            }
            start = start->east;

        }

        if(south != nullptr){

            if(south->whatsHere == Item::SPELLBOOK){
                itemTracker += "S";
            }else if(south->whatsHere == Item::POTION){
                itemTracker += "P";
            }else if(south->whatsHere == Item::WAND){
                itemTracker += "W";
            }
            start = start->south;

        }

        if(west != nullptr){

            if(west->whatsHere == Item::SPELLBOOK){
                itemTracker += "S";
            }else if(west->whatsHere == Item::POTION){
                itemTracker += "P";
            }else if(west->whatsHere == Item::WAND){
                itemTracker += "W";
            }
            start = start->west;

        }

    }

}
