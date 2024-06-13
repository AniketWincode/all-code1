#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> dp(1000006, -1);
vector<int> y;
int x(int coins){
    if(coins==0){
        return 0;
    }
    if(dp[coins]!=-1){
        return dp[coins];
    }
    int result = INT_MAX;
    for(int i=0;i<y.size();i++){
        if(coins-y[i]<0){
            continue;
        }
        result = min(result, x(coins-y[i]));
    }
    if(result==INT_MAX){ // VIMP when no coins exist we didn't call the x function just continue
        return dp[coins] = INT_MAX;
    }
    return dp[coins] = 1+result;
}
int main(){
    int n;
    cin>>n;
    int coins;
    cin>>coins;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        y.push_back(num);
    }
    int ans = x(coins);
    if(ans==INT_MAX){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}