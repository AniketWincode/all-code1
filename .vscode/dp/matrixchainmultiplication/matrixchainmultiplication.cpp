4#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<vector<int>> dp;
int helper(int i, int j, vector<int> &arr){
    if(i==j or i+1==j){ // single matrix
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int ans = INT_MAX;
    for(int k=i+1;k<j;k++){
        ans = min(ans, helper(i, k, arr) + helper(k, j, arr) + arr[i]*arr[j]*arr[k]);
    }
    return dp[i][j] = ans;
}
int main(){

    int n;
    cin>>n;
    vector<int> arr(n);
    dp.clear();
    // dp.resize(1005, vector<int> (1000, -1)); 
    dp.resize(1005, vector<int> (1000, 0));
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int len = 3; len<=n;len++){ // minimum length 
        for(int i=0;i+len-1<n;i++){
            int j = i + len - 1;
            dp[i][j] = INT_MAX;
            for(int k=i+1;k<j;k++){
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j] + arr[i]*arr[j]*arr[k]);
            }   
        }
    }
    // cout<<helper(0, n-1, arr)<<"\n";
    return 0;
}