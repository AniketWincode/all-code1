/*#include<iostream>
using namespace std;
int main(){
    int n = 2;
    bool flag = false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"not prime numbers"<<endl;
            flag = true;
            break;
        }
    }
    if(flag==false){
        cout<<"isPrime number"<<endl;
    }
    return 0;
}*/

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
void printfactors(int n){
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            // if(i!=sqrt(n)){ // for square number
            //     cout<<n/i<<" ";
            // }
        }
    }
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0 && i!=sqrt(n)){
            cout<<n/i<<" ";
        }
    }
}
int main(){
    printfactors(49);
    return 0;
}