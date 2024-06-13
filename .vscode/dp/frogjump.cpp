#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> dp(100005, -1);
vector<int> h; // heights
int k;
int fun(int i){
    if(i >= h.size()){
        return INT_MAX;
    }
    if(i==h.size() - 1){
        // last stonee
        return 0;
    }
    if(dp[i] != -1){
        dp[i];
    }
    int ans = INT_MAX;
    for(int j=1;j<=k;j++){
        if(i+j >= h.size()){
            break;
        }
        ans = min(ans, abs(h[i]-h[i+j]) + fun(i+j));
    }
    return dp[i] = ans;
}

// bottom up approach
/*
 * Time : O(n*k)
 * space : O(n) // dp array
*/

int fbu(){
    int n = h.size();
    // base case
    dp.resize(100005, INT_MAX);
    dp[n-1] = 0;
    for(int i=n-2;i>=0;i--){
        for(int j=1;j<=k;j++){
            if(i+j >= h.size()){
                break;
            }
            dp[i] = min(dp[i], abs(h[i] - h[i+j]) + dp[i+j]);
        }
    }
    return dp[0];
}

int main(){
    int n;
    cin>>n>>k;
    h.clear();
    h.resize(n);
    // dp.resize(n,-1); // dp[i] == -1 ith state not yet completed
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    // cout<<fun(0)<<"\n";
    cout<<fbu()<<"\n";
    return 0;
}