#include<iostream>
#include<vector>
#include<climits>
#define ll long long int
using namespace std;
vector<vector<ll>> dp;

ll g(vector<int> &color, int i, int j){
    ll result = 0;
    for(int m = i; m <= j; m++){
        result = (result % 100 + color[m] % 100);
    }
    return result;
}


ll f(vector<int> &colors, int i, int j){
    if(i == j){ // single mixtures no smoke
        return dp[i][j] = 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    ll result = INT_MAX;
    for(int k = i; k < j; k++){
        result = min(result, f(colors, i, k) + f(colors, k+1, j) + g(colors, i, k)*g(colors, k+1, j));
    }
    return dp[i][j] = result;
}

ll fbu(vector<int> &colors){
    dp.resize(105, vector<ll> (105, 0));
    int n = colors.size();
    for(int len = 2; len <= n; len++){
        for(int i = 0; i <= n-len; i++){
            int j = i + len - 1;
            ll result = INT_MAX;
        for(int k = i; k < j; k++){
            result = min(result, dp[i][k] + dp[k+1][j] + g(colors, i, k)*g(colors, k+1, j));
        }
        dp[i][j] = result;
        }
    }
    return dp[0][n-1];
}
int main(){
    // dp.clear();
    // dp.resize(105, vector<ll> (105, -1));
    int n;
    while(cin>>n){
        vector<int> colors;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            colors.push_back(x);
        }

        // cout<<f(colors, 0, colors.size()-1)<<"\n";
        cout<<fbu(colors)<<endl;
        colors.clear();
    }
    return 0;
}