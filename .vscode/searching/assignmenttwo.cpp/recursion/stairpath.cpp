#include<iostream>
using namespace std;
int stairpath(int n){
    if(n==0){
        return 0;
    }
    if(n==2){
        return 2;
    }
    if(n==1){
        return 1;
    }

    return stairpath(n-1) + stairpath(n-2);
}
int main(){
    
    cout<<stairpath(45);
    return 0;
}