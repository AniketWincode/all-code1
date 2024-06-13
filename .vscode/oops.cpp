#include<iostream>
using namespace std;

class Gun {
    public:
    int ammo;
    int damage;
    int scope;
};
class Player {
    private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun; // nested class
    Helmet helmet;

    class Helmet {
        private:
        int hp
        int level;
        public:
        void setHp(int hp){
            this->hp = hp;
        }
        void setLevel(int level){
            this->level = level;
        }
        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }
    };

    public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int isAlive(){
        return alive;
    }

    Gun getGun(){
        return gun;
    }
    void setHealth(int health){
        this->health = health;
    }
    void setAge(int age){
        this->age = age;
    }
    void setScore(int score){
        this->score = score;
    }
    void setIsAlive(bool alive){
        this->alive = alive;
    }
    void setGun(Gun gun){
        this->gun = gun;
    }
    void setHelmet(int level){
        Helmet *helmet = new Helmet;
        helmet->setLevel(level);
        int health = 0;
        if(health == 1){
            health = 25;
        }
        else if(level == 2){
            health  50;
        }
        else if(level == 3){
            health = 100;
        }
        else{
            cout<<"error, invalid level!";
        }
        helmet->setHp(health);+
    }
};

int addScore(Player a, Player b){
    return a.getScore() + b.getScore();
}

// return a class
Player getMaxScorePlayer(Player a, Player b){
    if(a.getScore() > b.getScore()){
        return a;
    }
    else{
        return b;
    }
}

int main(){

    // only object
    // complie time, static allocation
    Player harsh; // object creation, statically means program start hone sai pahale hi crete hogaya hai tum usi delete nahi kar sakte
    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setIsAlive(true);
    harsh.setHealth(90);

    // only object
    // complie time, static allocation
    Player ani; 
    // rum time, dynamic allocation // when we need create it
    Player *urvi = new Player; // pointer to object
    // make only object
    Player urviObject = *urvi; // address kai undar ki value

    Gun akm;
    akm.ammo(100);
    akm.damage(90);
    akm.scope(2);

    ani.setAge(22);
    ani.setScore(90);
    ani.setIsAlive(true);
    ani.setHealth(99);
    harsh.setGun(gun);
    urviObject.setAge(40);
    urviObject.setScore(90);
    urviObject.setIsAlive(true);
    urviObject.setHealth(99); // (*urvi).function(); // urvi->function();
    cout<<urviObject.getScore()<<endl;
    cout<<addScore(harsh, ani)<<endl;
    Player x = getMaxScorePlayer(harsh, ani); // return a object
    cout<<x.getScore()<<endl;
    cout<<x.getHealth()<<" ";
    return 0;
}