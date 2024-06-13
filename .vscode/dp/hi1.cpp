#include<iostream>
#include<vector>
#include<climits>
#define ll long long int
using namespace std;
vector<vector<ll>> dp(105, vector<ll> (100005, -1));
ll x(vector<ll> &wts, vector<ll> &val, int idx, int w){
    if(idx==wts.size()){
        return 0;
    }
    if(dp[idx][w]!=-1){
        return dp[idx][w];        
    }

    ll ans = INT_MIN;
    // not pick
    ans = max(ans, x(wts, val, idx+1, w));
    if(wts[idx]<=w){
        // pick
        ans = max(ans, val[idx]+x(wts, val, idx+1, w-wts[idx]));
    }
    return dp[idx][w] = ans;
}
int main(){
    int N;
    int W;
    cin>>N>>W;
    vector<ll> wts;
    vector<ll> val;
    for(int i=0;i<N;i++){
        int x = 0;
        int y = 0;
        cin>>x>>y;
        wts.push_back(x);
        val.push_back(y);
    }
    cout<<x(wts, val, 0, W)<<endl;
    return 0;
}