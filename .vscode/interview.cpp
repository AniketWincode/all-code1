#include<iostream>
using namespace std;
int f(int n){
    return (n<3) ? (n-1) : (f(n-1) + f(n-2));
}
int main(){
    cout<<f(5)<<"\n";
    return 0;
}
