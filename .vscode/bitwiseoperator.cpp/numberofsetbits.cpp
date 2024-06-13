#include<iostream>
using namespace std;
int countsetbits(int number){
    return __builtin_popcount(number);
}

// brain kernegle algorithm
// time complexity is O(number set bits)
int countsetbits2(int number){
    int count = 0;
    while(number>0){
        number = (number & (number-1));
        cout<<number<<" ";
        // cout<<"number"<<number<<" ";
        count++;
    }
    cout<<endl;
    return count;
}
int main(){
    
    cout<<countsetbits(98)<<endl;
    // countsetbits of every 2 power number is 1
    cout<<countsetbits2(98)<<endl;
    return 0;
}