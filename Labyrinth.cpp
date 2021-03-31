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

    bool completed = false;
    std::string itemTracker = "";

    if(start )

    for(int i = 0; i < moves.length(); i++){

        //check if North has items
        if(moves[i] == "N"){
            if(north->whatsHere == Item::SPELLBOOK){
                itemTracker += "S";
            }else if(north->whatsHere == Item::POTION){
                itemTracker += "P";
            }else if(north->whatsHere == Item::WAND){
                itemTracker += "W";
            }
        }

        //check if South has items
        if(moves[i] == "S"){
            if(south->whatsHere == Item::SPELLBOOK){
                itemTracker += "S";
            }else if(south->whatsHere == Item::POTION){
                itemTracker += "P";
            }else if(sotuh->whatsHere == Item::WAND){
                itemTracker += "W";
            }
        }

        //check if East has items
        if(moves[i] == "E"){
            if(east->whatsHere == Item::SPELLBOOK){
                itemTracker += "S";
            }else if(east->whatsHere == Item::POTION){
                itemTracker += "P";
            }else if(east->whatsHere == Item::WAND){
                itemTracker += "W";
            }
        }

        //check if West has items
        if(moves[i] == "W"){
            if(west->whatsHere == Item::SPELLBOOK){
                itemTracker += "S";
            }else if(west->whatsHere == Item::POTION){
                itemTracker += "P";
            }else if(west->whatsHere == Item::WAND){
                itemTracker += "W";
            }
        }

    }
}
