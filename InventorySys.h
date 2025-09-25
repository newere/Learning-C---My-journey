#pragma once
#include <iostream>
#include <vector>

using namespace std;

//**************************PARENT CLASS****************************
class Items{

public:
    string name;
    int quantity, durability;

    void show() {
        cout << name << " x" << quantity << endl;
    }

};
//******************************************************************

//***********************CHILD CLASSES*******************************
class Weapon: public Items{
public:
    Weapon(string name, int quantity, int durability){
        this -> name = name;
        this -> quantity = quantity;
        this -> durability = durability;
    }
};

class Accessories : public Items{
public:
    Accessories(string name, int quantity, int durability){
        this -> name = name;
        this -> quantity = quantity;
        this -> durability = durability;
    }
};

class consumables : public Items{
public:
    consumables(string name, int quantity, int durability){
        this -> name = name;
        this -> quantity = quantity;
        this -> durability = durability;
    }
};

class Armor : public Items{
public:
    Armor(string name, int quantity, int durability){
        this -> name = name;
        this -> quantity = quantity;
        this -> durability = durability;
    }
};
//******************************************************************

