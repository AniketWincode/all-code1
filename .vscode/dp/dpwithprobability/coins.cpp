// spoj
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<iomanip> // setprecision
using namespace std;

double dp[3005][3005];

double x(vector<double> &p, int i, int y){
    if(y == 0){
        return 1;
    }
    if(i == -1){
        return 0;
    }
    if(dp[i][y] > -0.9){ // VIMP
        return dp[i][y];
    }
    return dp[i][y] = x(p, i-1, y-1)*p[i] + x(p, i-1, y)*(1-p[i]);
}
int main(){
    int n;
    cin>>n;
    vector<double> p(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    memset(dp, -1, sizeof dp); // VIMP any number of initialization in this coding question
    cout<<fixed<<setprecision(9)<<x(p, n-1, (n+1)/2); // VIMP
    return 0;
}