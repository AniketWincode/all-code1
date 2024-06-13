#include<iostream>
using namespace std;
class Pokemon{
    private: // access modifier
    int attack;
    public: // access modifier
    string type;
    void set(int val){ // setter
        attack = val;
    }
    int get(){ // getter
        return attack;
    }

};
int main(){
    Pokemon pikachu;
    pikachu.type = "Electric";
    cout<<pikachu.type<<endl;
    // pikachu.attack = 88;
    pikachu.set(88);
    // cout<<pikachu.attack<<endl;
    cout<<pikachu.get();
    return 0;
}