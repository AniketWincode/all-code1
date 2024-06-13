#include<iostream>
#include<vector>
#include<climits>
#define mod 1000000007
using namespace std;
vector<long long int> dp(1000005, -1);
long long int x(int sum){
    if(sum==0){
        return 1;
    }
    if(dp[sum]!=-1){
        return dp[sum];
    }
    long long int result = 0;
    for(int i=1;i<=6;i++){
        if(sum-i<0){
            break;
        }
        result = (result % mod + x(sum-i) % mod) % mod;
    }
    return dp[sum] = result % mod;
}
int main(){
    int n;
    cin>>n;
    cout<<x(n)<<endl;
    return 0;
}