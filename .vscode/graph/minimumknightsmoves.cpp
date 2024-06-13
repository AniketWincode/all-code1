#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<climits>
#define ll long long int
using namespace std;
vector<vector<int>> dp(300, vector<int> (300, -1));
ll moves(int i, int j, int x, int y){
    if(i<0 || i>=300 || j<0 || j>=300){
        return 0;
    }
    if(i==x and j==y){
        return 1;
    }
    cout<<i<<" "<<j<<endl;
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    return dp[i][j] = 1+min({moves(i-1, j-2, x, y), moves(i-2, j-1, x, y), moves(i-2, j+1, x, y), moves(i-1, j+2, x, y), moves(i+1, j+2, x, y), moves(i+1, j+1, x, y), moves(i+1, j-1, x, y), moves(i+2, j-2, x, y)});
}
int main(){
    int x;
    int y;
    cin>>x;
    cin>>y;
    cout<<moves(0, 0, x, y)<<endl;
    return 0;
}