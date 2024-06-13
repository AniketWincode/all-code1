#include<iostream>
using namespace std;

// Brian Kernighan's Algorithm
int count_sets_bits(int n){

    int count = 0;
    while(n>0){
        n = (n & (n-1));
        count++;
    }
    return count;
}
int count_set_bits(int n){
    return __builtin_popcount(n);
}

int main(){

    cout<<count_set_bits(169)<<endl;
    cout<<count_sets_bits(169)<<endl;
    return 0;
}