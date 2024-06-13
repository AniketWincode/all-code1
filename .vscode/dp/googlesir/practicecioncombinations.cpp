#include<iostream>
#include<vector>
#define mod 1000000007
#define ll long long int
using namespace std;
vector<ll> ans;
vector<ll> dp(1000006, -1);
ll x(int sum){
    if(sum==0){
        return 1;
    }
    if(dp[sum]!=-1){
        return dp[sum];
    }
    ll result = 0;
    for(int i=0;i<ans.size();i++){
        if(sum-ans[i]<0){
            continue;
        }
        result = (result % mod + x(sum-ans[i]) % mod) % mod;
    }
    return dp[sum] = result;
}
int main(){
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        ans.push_back(num);
    }
    cout<<x(sum)<<endl;
    return 0;
}