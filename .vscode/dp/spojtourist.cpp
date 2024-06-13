#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<vector>
#include<climits>
using namespace std;
// don't consider two path in this coding problem
ll n, m; // dimensions of the input matrix
char mat[105][105]; // input matrix
ll dp[105][105][105];

ll z(ll i, ll j, ll x, ll y){
    if(i>n or j>m or x>n or y>m or mat[i][j] == '#' or mat[x][y] == '#'){
        return 0;
    }
    if(i == n and j == m){ // is the tourist 1 already at n, m // tourist 2 exist the grid
        return mat[i][j] == '*';
    }
    if(dp[i][j][x]!=-1){
        return dp[i][j][x];
    }
    ll result = INT_MIN;

    result = max(result, z(i+1, j, x+1, y));
    result = max(result, z(i+1, j, x, y+1));
    result = max(result, z(i, j+1, x+1, y));
    result = max(result, z(i, j+1, x, y+1));

    result += (mat[i][j] == '*'); // tourist 1 interesting location
    result += (mat[x][y] == '*'); // tourits 2 intresting location

    // remove repetation
    if(i==x and j==y and mat[i][j] == '*'){
        result--;
    }
    return dp[i][j][x] = result;
}
int main(){

    int t;
    cin>>t;
    while(t--){
        cin>>m>>n;
        memset(dp, -1, sizeof dp);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>mat[i][j];
            }
        }
        cout<<z(1, 1, 1, 1)<<endl;
    }

    return 0;
}