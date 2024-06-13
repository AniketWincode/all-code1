#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

vector<int> get_digits(int n){
    vector<int> result;
    while(n > 0){
        if(n % 10 != 0){
            // n%10 is the last digits
            result.push_back(n%10);
        }
        n = n / 10;
    }
    return result;
}

vector<int> dp;

int x(int n){
    if(n == 0){
        return 0;
    }
    if(n<=9){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    
    int result = INT_MAX;
    vector<int> v = get_digits(n);
    for(int i=0; i < v.size(); i++){
        result = min(result, x(n - v[i]));
    }
    return dp[n] = 1 + result;
}

int bottomup(int num){
    // base case
    dp[0] = 0;
    for(int i = 1; i <= 9; i++){
        dp[i] = 1;
    }
    for(int n = 10; n <= num; n++){
        // n - state
        // calc dp[n]
        vector<int> v = get_digits(n);
        int result = INT_MAX;
        for(int i = 0; i < v.size(); i++){
            result = min(result, dp[n - v[i]]);
        }
        dp[n] = 1 + result;
    }
    return dp[num];
}
int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1000005, -1);
    cout<<x(n)<<"\n";
    cout<<bottomup(n)<<"\n";
    return 0;
}