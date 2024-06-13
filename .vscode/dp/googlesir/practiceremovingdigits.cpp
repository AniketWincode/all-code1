#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> numbers(int n){
    vector<int> ans;
    while(n>0){
        int x = n%10;
        ans.push_back(x);
        n = n/10;
    }
    return ans;
}

vector<int> dp;

int x(int n){
    /*
    time complexity is O(n)
    space complexity is O(n)
    */
    if(n==0){
        return 0;
    }
    if(n>0 && n<10){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    vector<int> num = numbers(n);
    int mini = INT_MAX;
    for(int i=0;i<num.size();i++){
        if(num[i]==0){
            continue;
        }
        else{
            mini = min(mini, x(n-num[i]));         
        }
    }
    return dp[n] = 1 + mini;
}

int bottomup(int num){
    /*
    time complexity is O(n)
    space complexity is O(n)
    */
    dp[0] = 0;
    for(int i=1;i<=9;i++){
        dp[i] = 1;
    }
    for(int n=10;n<=num;n++){
        // i -> state
        // calculate dp[n]
        vector<int> nums = numbers(num);
        // dp[n] = INT_MAX;
        int result = INT_MAX;
        for(int i=0;i<nums.size();i++){
            // dp[n] = min(dp[n], dp[n-d[i]]);
            result = min(result, dp[n-dp[i]]);
        }
        // dp[n] =  1 + dp[n];
        dp[n] = 1 + result;
    }
    return dp[num];
}
int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1000005, -1);
    cout<<x(n);

    return 0;
}