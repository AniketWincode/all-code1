#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> ans;
vector<int> dp(1000006, -1);
int mincoins(int x){
    if(x==0){
        return 0;
    }
    if(dp[x]!=-1){
        return dp[x];
    }
    int result = INT_MAX;
    for(int i=0;i<ans.size();i++){
        if(x - ans[i] < 0){
            continue;
        }
       result = min(result, mincoins(x - ans[i]));
    }
    if(result == INT_MAX){
        return dp[x] = INT_MAX;
    }
    return dp[x] = 1 + result;
}
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        ans.push_back(num);
    }
    int ans1 = mincoins(x);
    if(ans1==INT_MAX){
        cout<<-1;
    }
    else{
        cout<<ans1<<"\n";
    }

}