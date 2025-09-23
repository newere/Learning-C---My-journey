#include <iostream>

using namespace std;

class Knight{
public:
    int health, stamina = 100;
    int weapon_dur = 110;

private:
    string weapon = "sword";

};

Knight obj;

template<typename T>
int weapon_dur_dmg(T &obj, int attacks){

    int attacks_total = 55;
    if(attacks < attacks_total){
        for(int i = 0 ; i < (attacks_total-attacks); i++){
            obj.weapon_dur =obj.weapon_dur - 2;
        }
    }
    else if(attacks == 0){
        cout <<"Your sword doesnot have any durability";
    }

    return obj.weapon_dur;
}



int main(){
    int attacks;
    cout << "How many attacks did you do? : ";
    cin >> attacks;

    cout << "Weapon durability: " << weapon_dur_dmg(obj, attacks) << endl;


}

