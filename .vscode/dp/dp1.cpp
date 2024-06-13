#include<iostream>
#include<vector>
using namespace std;

vector<int> dp;
// optimizing brute force
// and in greedy local optimization
int fibo(int n){
    int x = 0;
    int y = 1;
    if(n==0 && n==1){
        return n;
    }
    int z;
    int i = 2;
    while(i<=n){
        z = x + y;
        x = y;
        y = z;
        i++;
    }
    return z;
}

int main(){
    int n;
    cin>>n;
    cout<<fibo(n)<<"\n";
    return 0;
}