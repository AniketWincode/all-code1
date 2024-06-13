#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> dp(1005, -1);
int x(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int x1 = INT_MAX;
    int y1 = INT_MAX;
    int z1 = INT_MAX;
    if(dp[n]!=-1){
        return dp[n];
    }
    if(n%2==0){
        x1 = 1 + x(n/2);
    }
    if(n%3==0){
        y1 = 1 + x(n/3);
    }
    z1 = 1+x(n-1);
    return dp[n] = min(x1, min(y1, z1));
}
int main(){
    int n;
    cin>>n;
    cout<<x(n);
    return 0;
}