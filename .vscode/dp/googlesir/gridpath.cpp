#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> dp(2000, vector<int> (2000, -1));
int x(int i, int j, int n, vector<vector<char>> &ans){
    if(i>=n || j>=n){
        return 0;
    } 
    if(ans[i][j]=='*'){
        return 0;
    }
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    return dp[i][j] = x(i+1, j, n, ans)%1000000007 + x(i, j+1, n, ans)%1000000007; // VIMP
}
int main(){
    int n;
    cin>>n;
    vector<vector<char>> ans(n, vector<char> (n, '.'));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char num;
            cin>>num;
            ans[i][j] = num;
        }
    }
    if(ans[n-1][n-1]=='*' || ans[0][0]=='*'){
        cout<<0;
    }
    else{
       cout<<x(0, 0, n, ans)%1000000007;  // VIMP
    }
    
    return 0;
}