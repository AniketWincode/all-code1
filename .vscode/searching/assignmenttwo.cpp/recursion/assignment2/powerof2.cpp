#include<iostream>
using namespace std;

bool powerof2(int i, int number){
    
    if(number == i){
        return true;
    }

    if(i>number){
        return false;
    }

    return powerof2(i*2, number);
}
int main(){
    int number;
    cin>>number;

    cout<<powerof2(1, number);
    return 0;
}