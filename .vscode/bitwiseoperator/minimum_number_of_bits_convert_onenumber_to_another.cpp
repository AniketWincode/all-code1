#include<iostream>
using namespace std;
int main(){

    int x = 99;
    int y = 100;
    cout<<__builtin_popcount(x^y)<<endl;
    return 0;
}