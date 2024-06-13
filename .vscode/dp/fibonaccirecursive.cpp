#include<iostream>
#include<vector>
using namespace std;

vector<int> dp;

int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    // dp check, to indentify if problem was already solved  earlier 
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n] = fibo(n-1) + fibo(n-2); // string ans
}
int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(n+1, -1); // dp[i] == -1 that ith subproblem is not yet compted
    cout<<fibo(n);
    return 0;
}






