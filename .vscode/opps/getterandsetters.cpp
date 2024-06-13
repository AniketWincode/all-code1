// class is blueprint
#include<bits/stdc++.h>
using namespace std;
class Player { 
    private:
    int score; // data member
    int health; // data member
    // char[20] name; VIMP aap pahele sai value assign nahi kar sakte
    public:
    // setter -> this are the function
    void setScore(int s){
        cout<<"Score set kiys ja raha hai";
        score = s;
    }
    void getHealth(int h){
        cout<<"health change kiya ja raha hai";
        health = h;
    }
    //getter -> this are the function
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};
int main(){

    Player harsh;
    harsh.setScore(10);
    harsh.getHealth(50);
    cout<<harsh.getScore()<<endl;
    cout<<harsh.getHealth()<<endl;
    return 0;
}