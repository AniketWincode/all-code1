#include<iostream>
using namespace std;
class Pokeman{
    public:
    string type;
    int attack;
    // Pokeman(string type, int attack){  // garbage value
    //     type = type;
    //     attack = attack;
    // }
        Pokeman(string type, int attack){
        // (*this).type = type;  // same
        // (*this).attack = attack; // same
        this->type = type;  // this wale type mai us type ko daldo
        this->attack = attack; // this wale attack mai us attack ko daldo
    }
};

void change(Pokeman *pikachu){  // pass by value
    // (*pikachu).type = "dragon";
    // (*pikachu).attack = 100;
    pikachu->type = "dragon";
    pikachu->attack = 100;
}
int main(){
    // Pokeman pikachu;
    // pikachu.type = "electric";
    // pikachu.attack = 80;

    // Pokeman charizard;
    // charizard.type = "fire";

    // Pokeman pikachu("electric", 70);
    // cout<<pikachu.type<<" "<<pikachu.attack<<endl;
    // // Pokeman charizard("fire", 120);
    // change(&pikachu); // address
    // cout<<pikachu.type<<" "<<pikachu.attack<<endl;
    // cout<<charizard.type<<" "<<charizard.attack<<endl;
    return 0;
}