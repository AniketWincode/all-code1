#include<iostream>
using namespace std;
void hanoi(int n, char a, char b, char c, int &i){
    if(n==0){
        return;
    }
    // i++;
    hanoi(n-1, a, c, b, i);
    cout<<a<<" -> "<<c<<endl;
    // i++;
    hanoi(n-1, b, a, c, i);
    // i++;
}
int main(){
    int n = 8;
    int i = 0;
    hanoi(n,'A','B','C', i);
    cout<<i<<endl;
    return 0;
}