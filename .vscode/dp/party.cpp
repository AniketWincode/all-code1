#include<iostream>
using namespace std;
int party(int n){
    if(n==1 || n==2){
        return n;
    }
    return party(n-1) + (n-1)*party(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<party(n);
    return 0;
}