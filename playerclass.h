#pragma once

#include<iostream>
using namespace std;

//------------------------------------------------------------------------
//player class
class player{

public:
    string name, faction;

    player(string name, string faction){
        this ->name = name;
        this ->faction = faction;
    }

};
//------------------------------------------------------------------------

//------------------------------------------------------------------------
//knight
class Knight{
public:
    int health, stamina, mana = 120;
    int weapon_dur = 110;
    string weapon = "sword";

};
//------------------------------------------------------------------------

//------------------------------------------------------------------------
//Archer
class Archer{
public:
    int health = 90, weapon_dur = 110;
    int stamina = 120;
    string weapon = "Bow";
};
//------------------------------------------------------------------------

//------------------------------------------------------------------------
//Mage
class Mage{

public:
    int health = 90, weapon_dur = 110;
    int stamina = 90;
    string weapon = " Magic Staff";
};
//-----------------------------------------------------------------------

//template<typename T>
//int weapon_dur_dmg(T &obj, int attacks){
//
//    int attacks_total = 55;
//    if(attacks < attacks_total){
//        for(int i = 0 ; i < (attacks_total-attacks); i++){
//            obj.weapon_dur =obj.weapon_dur - 2;
//        }
//    }
//    else if(attacks == 0){
//        cout <<"Your sword doesnot have any durability";
//    }
//
//    return obj.weapon_dur;
//}



