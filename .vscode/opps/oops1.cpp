// class is blueprint
#include<bits/stdc++.h>
using namespace std;
class Player { 
    public:
    int score; // data member
    int health; // data member
    // char[20] name; VIMP aap pahele sai value assign nahi kar sakte
    // Player(int score, int health, char [20] name){
    //     this->health = health;
    // this.health = health;
    // this::health = health;
    //     this->score = score;
    // }

    void showHealth(){ // member function
        cout<<"Health is : "<<health<<endl;
    }
    void showScore(){
        cout<<"Score : "<<score;
    }
};

class Calculator {
    // public:
    private:
    int a;
    int b;
    public:
    void add(){
        cout<<a+b<<endl;
    }
    void subtract(){
        cout<<a-b<<endl;
    }
};
int main(){

    Player harsh; //object creation, statically means pahale hi ho gya program start hone sai pahale hi hogya
    // Player player[10] // array of ten player
    harsh.score = 90;
    harsh.health = 100;
    cout<<harsh.score<<" "<<harsh.health<<endl;
    harsh.showHealth();
    harsh.showScore();
    return 0;
}