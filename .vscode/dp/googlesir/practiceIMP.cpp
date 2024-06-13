#include<iostream>
#include<vector>
#include<climits>
#define ll long long int
using namespace std;
vector<vector<ll>> dp;
ll x(vector<ll> &wts, vector<ll> &val, ll i, ll W){
    if(i==val.size()){
        return 0;
    }
    if(dp[i][W]!=-1){
        return dp[i][W];
    }
    ll res = INT_MIN;
    res = max(res, x(wts, val, i+1, W)); // not pick
    if(W>=wts[i]){ // pick
        res = max(res, val[i]+x(wts, val, i+1, W-wts[i]));
    }
    return dp[i][W] = res;
}
int main(){
    int N;
    cin>>N;
    ll W;
    cin>>W;
    vector<ll> val;
    vector<ll> wts;
    dp.clear();
    dp.resize(105, vector<ll> (1000000005, -1));
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        int y;
        cin>>y;
        wts.push_back(x);
        val.push_back(y);
    }
    cout<<x(wts, val, 0, W)<<endl;
    return 0;
}