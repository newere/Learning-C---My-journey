#include "InventorySys.h"
#include "playerclass.h"
#include <iostream>
#include<vector>
#include<string>

using namespace std;

int main(){

    vector <Items*> inv;
    inv.push_back(new Weapon("DemonSong", 1, 150));
    inv.push_back(new consumables("HP pot", 2,0));
    inv.push_back(new Armor("Chestplate", 1, 100));

    for(auto items : inv){
        items -> show();
    }

    for(auto items : inv){
        delete items;
    }

    string charname, whichfac;
    cout << " what is your name and Which faction do you belong to? : ";
    cin >> charname >> whichfac;

    cout <<"Your name is "<< charname <<" and you belong to "<< whichfac
         << " faction." << endl;
    player p1(charname, whichfac);

    return 0;
}
