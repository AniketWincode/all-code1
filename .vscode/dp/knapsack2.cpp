#include<iostream>
#include<vector>
#include<climits>
#define ll long long int
using namespace std;

vector<vector<ll>> dp(105, vector<ll> (100005, -1));

ll x(vector<ll> &wts, vector<ll> &val, int idx, ll tv){ /// target value
    if(tv==0){
        return 0;
    }
    if(idx==wts.size()){
        return INT_MAX;
    }
    if(dp[idx][tv]!=-1){
        return dp[idx][tv];
    }
    ll ans = INT_MAX;
    // not pick
    ans = min(ans, x(wts, val, idx+1, tv));
    if(val[idx]<=tv){
        ans = min(ans, wts[idx]+x(wts, val, idx+1, tv-val[idx]));
    }
    return dp[idx][tv] = ans;
}
int main(){
    int n;
    cin>>n;
    ll W;
    cin>>W;
    vector<ll> wts;
    vector<ll> val;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        wts.push_back(x);
        ll y;
        cin>>y;
        val.push_back(y);
    }
    int result = -1;
    for(int i=0;i<n*1000;i++){
        if(x(wts, val, 0, i)<=W){
            result = i;
        }
    }
    cout<<result<<endl;
    return 0;
}