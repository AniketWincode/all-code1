#include<iostream>
using namespace std;

int max_power_of_twos(int n){
    // not efficient
    n = n | (n>>1);
    n = n | (n>>2);
    n = n | (n>>4);
    n = n | (n>>8);
    n = n | (n>>16);
    return (n+1)>>1; // (n+1)/2
}

int max_power_of_two(int n){

    int temp = 0;
    while(n>0){
        temp = n;
        n = n & (n-1);
    }
    return temp;
}
int main(){

    cout<<max_power_of_two(100)<<endl;
    cout<<max_power_of_twos(90)<<endl;
    return 0;
}