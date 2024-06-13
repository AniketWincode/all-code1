#include<iostream>
using namespace std;

int dp[105][105][2];

int x(int n, int k, int last){
    if(n==0){ // VIMP 
        return 0;
    }
    if(n==1){
        if(k==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    if(dp[n][k][last] != -1){
        return dp[n][k][2];
    }

    if(last == 1){
        return dp[n][k][last] =  x(n, k, 0) + x(n, k-1, 1);
    }
    else if(last==0){
        return dp[n][k][last] = x(n, k, 0) + x(n, k, 1);
    }
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int num, n, k;
        cin>>nums>>n>>k;
        memset(dp, -1, sizeof dp);
        int ans = x(n, k, 0) + x(n, k, 1);
        cout<<num<<" "<<ans<<"\n";
    }
    return 0;
}